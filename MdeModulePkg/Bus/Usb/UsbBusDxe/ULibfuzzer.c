/** @file
    A uefi lib fuzzer (ULibfuzzer) executor which do the fuzz testing against
    all functions in a Uefi library according to functions' type info.

    Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
    This program and the accompanying materials
    are licensed and made available under the terms and conditions of the BSD License
    which accompanies this distribution. The full text of the license may be found at
    http://opensource.org/licenses/bsd-license.

    THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
    WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/
#include "TypeInfo.h"
#include "ULibfuzzer.h"
//
// Configures:
//
// TRUE = not save "FuzzLog.txt"
// FASLSE = save "FuzzLog.txt"
static BOOLEAN NotSaveFuzzLogFile = TRUE;
// 0 = enable log output
// 1 = disable log output
#define DISABLE_LOG 0


#define _PRINT_LOG(...)    \
    Print (L##__VA_ARGS__);

#define _DEBUG_LOG(...)    \
    _DEBUG_PRINT (EFI_D_ERROR, ##__VA_ARGS__);

#if DISABLE_LOG == 0
  #define OUTPUT_LOG(Expression) \
    _PRINT_LOG Expression; \
//    _DEBUG_LOG Expression
#else
  #define OUTPUT_LOG(Expression)
#endif


//
// Add the function type map list in below ToMergeTypeInfoList[]
//
extern void *EFI_UsbBusDxe_TypeInfoList[];
void **ToMergeTypeInfoList[] = {
  EFI_UsbBusDxe_TypeInfoList,
  NULL
};

extern FUNCTION_TYPE_MAP EFI_UsbBusDxe_FunctionTypeMapList[];
FUNCTION_TYPE_MAP *ToMergeFunctionTypeMapList[] = {
  EFI_UsbBusDxe_FunctionTypeMapList,
  NULL
};

LIST_ENTRY  MergedTypeInfoList;
LIST_ENTRY  MergedFunctionTypeMapList;
LIST_ENTRY  AllocatedBufferList;

UINTN
EFIAPI
HelloWorld(
  IN  UINTN   Arg0,
  IN  UINTN   Arg1,
  IN  UINTN   Arg2,
  IN  UINTN   Arg3,
  IN  UINTN   Arg4,
  IN  UINTN   Arg5,
  IN  UINTN   Arg6,
  IN  UINTN   Arg7,
  IN  UINTN   Arg8,
  IN  UINTN   Arg9,
  IN  UINTN   Arg10,
  IN  UINTN   Arg11
  )
{
  OUTPUT_LOG (("Hello World\n"));
  return 0;
}

TYPE_INFO_HEADER*
EFIAPI
GetTypeInfo (
  IN  LIST_ENTRY          *TypeInfoList,
  IN  const CHAR8         *TypeInfoName
  )
{
  LIST_ENTRY                *Link;
  TYPE_INFO_NODE            *NodePtr;
  TYPE_INFO_HEADER          *TypeInfoPtr;

  if (TypeInfoList == NULL || TypeInfoName == NULL){
    return NULL;
  }

  for(Link = GetFirstNode (TypeInfoList);
      !IsNull (TypeInfoList, Link);
      Link = GetNextNode (TypeInfoList, Link)){
    NodePtr = TYPE_INFO_NODE_FROM_LINK (Link);
    TypeInfoPtr = NodePtr->TypeInfoHdr;
    if (AsciiStrCmp(TypeInfoPtr->TypeName, TypeInfoName) == 0){
      return TypeInfoPtr;
    }
  }

  return NULL;
}

TYPE_INFO_HEADER*
EFIAPI
GetFunArgTypeInfo (
  IN  LIST_ENTRY                *TypeInfoList,
  IN  TYPE__EFI_FUNCTION_HEADER *FunctionTypeHeader,
  IN  UINTN                     ArgIndex
  )
{
  CHAR8                     *TypeInfoName;
  CHAR8                     **AddressPtr;
  //
  // ArgIndex start with 0
  //
  if (ArgIndex >= FunctionTypeHeader->ParameterNum){
    return NULL;
  }
  AddressPtr = (CHAR8**)((UINTN)&FunctionTypeHeader->ParameterTypeName_1 +
                          ArgIndex*(sizeof (UINTN)+sizeof(CHAR8*)));
  TypeInfoName = *AddressPtr;
  OUTPUT_LOG (("GetFunArgTypeInfo ArgIndex is %d, TypeInfoName is %a\n", ArgIndex, TypeInfoName));
  return GetTypeInfo(TypeInfoList, TypeInfoName);
}

EFI_STATUS
EFIAPI
AddBufferList(
  IN  LIST_ENTRY        *BufferList,
  IN  VOID              *BufferAddress
  )
{
  ALLOCATED_BUFFER_NODE            *NodePtr;

  if (BufferList == NULL || BufferAddress == NULL){
    return EFI_INVALID_PARAMETER;
  }

  NodePtr = AllocateZeroPool (sizeof (ALLOCATED_BUFFER_NODE));
  if (NodePtr == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  //OUTPUT_LOG (("AddBufferList BufferAddress=0x%x\n", BufferAddress));
  //OUTPUT_LOG (("AddBufferList NodePtr=0x%x\n", NodePtr));
  NodePtr->Signature = ALLOCATED_BUFFER_NODE_SIGNATURE;
  NodePtr->BufferAddress = BufferAddress;
  InsertTailList (BufferList, &NodePtr->Link);

  return EFI_SUCCESS;
}

BOOLEAN
EFIAPI
RandomBuffer(
  OUT     VOID       *Rand,
  IN      UINTN      ByteSize
  )
{
  BOOLEAN   Status;
  UINT16    Value16;
  ASSERT (Rand != NULL);

  OUTPUT_LOG (("RandomBuffer ByteSize=%d\n", ByteSize));
  Status = FALSE;
  switch (ByteSize){
    case sizeof(UINT8):
      Status = GetRandomNumber16(&Value16);
      *(unsigned char *)Rand = Value16 >> 8;
      OUTPUT_LOG (("GetRandomNumber8= 0x%2x\n", *(unsigned char *)Rand));
      break;
    case sizeof(UINT16):
      Status = GetRandomNumber16(Rand);
      OUTPUT_LOG (("GetRandomNumber16= 0x%4x\n", *(unsigned short *)Rand));
      break;
    case sizeof(UINT32):
      Status = GetRandomNumber32(Rand);
      OUTPUT_LOG (("GetRandomNumber32= 0x%8x\n", *(unsigned int *)Rand));
      break;
    case sizeof(UINT64):
      Status = GetRandomNumber64(Rand);
      OUTPUT_LOG (("GetRandomNumber64= 0x%16lx\n", *(unsigned long long *)Rand));
      break;
    case sizeof(UINT64)*2:
      Status = GetRandomNumber128(Rand);
      OUTPUT_LOG (("GetRandomNumber128= 0x%32lx\n", *(UINTN *)Rand));
      break;
    default:
      // Bugbug, should add support for buffer bytesize > 16
      return FALSE;
  }
  
  return Status;
}


TYPE_INFO_HEADER*
EFIAPI
GetStructFieldTypeInfo (
  IN  LIST_ENTRY              *TypeInfoList,
  IN  TYPE__STRUCTURE_HEADER  *StructTypeHeader,
  IN  UINTN                   FieldIndex
  )
{
  CHAR8                     *TypeInfoName;
  CHAR8                     **AddressPtr;
  //
  // FieldIndex start with 1
  //
  if (FieldIndex < 1){
    OUTPUT_LOG (("Error! GetStructFieldTypeInfo FieldIndex should start with 1\n"));
  }

  if (FieldIndex > StructTypeHeader->StructFieldNum){
    return NULL;
  }

  AddressPtr = (CHAR8 **)((UINTN)&StructTypeHeader->StructFieldTypeName_1 + (FieldIndex-1)*(2*sizeof(const CHAR8*)+sizeof(const UINTN)));
  TypeInfoName = *AddressPtr;
  OUTPUT_LOG (("GetStructFieldTypeInfo FieldIndex is %d TypeInfoName is %a\n", FieldIndex, TypeInfoName));
  return GetTypeInfo(TypeInfoList, TypeInfoName);
}


EFI_STATUS
EFIAPI
MutateFunArg(
  IN  LIST_ENTRY         *TypeInfoList,
  IN  TYPE_INFO_HEADER   *ArgTypeHeader,
  OUT UINTN              *ArgBuffer
  )
{
  EFI_STATUS                Status;
  CHAR8                     *PointedTypeInfoName;
  TYPE_INFO_HEADER          *PointedTypeInfo;
  UINTN                     *Buffer;
  TYPE__STRUCTURE_HEADER    *TypeStructureHeader;
  UINTN                     FieldIndex;
  TYPE_INFO_HEADER          *FieldTypeHeader;
  //TYPE_INFO_HEADER          *NextStructFieldTypeHeader;
  CHAR8*                    BufferPtr;
  //UINTN                     Alignment;
  //UINTN                     AlignmentOffset;
  UINTN                     NextTypeStructFieldOffset;
  UINTN                     StructFieldOffset;

  switch (ArgTypeHeader->TypeClass){
    case TYPE_CLASS_POINTER:
      PointedTypeInfoName = (CHAR8 *)((TYPE__POINTER *)ArgTypeHeader)->PointedType;
      OUTPUT_LOG (("The Pointer's PointedType= %a\n", PointedTypeInfoName));
      PointedTypeInfo = GetTypeInfo(TypeInfoList, PointedTypeInfoName);
      if (PointedTypeInfo == NULL){
        OUTPUT_LOG (("Fail to get PointedType %a TypeInfo!\n", PointedTypeInfoName));
        return EFI_NOT_FOUND;
      }
      OUTPUT_LOG (("Get the PointedType=%a, PointedType size=%d\n", PointedTypeInfo->TypeName, PointedTypeInfo->TypeSize));
      //
      // Check whether it is a pointer of pointer
      //
      Status = RETURN_SUCCESS;
      Buffer = AllocateZeroPool(PointedTypeInfo->TypeSize);
      ASSERT (Buffer != NULL);
      OUTPUT_LOG (("PointedType buffer address=0x%x\n", Buffer));
      //
      // Bugbug: should skip OUT and only random IN type argument
      //
      //RandomBuffer(Buffer, PointedTypeInfo->TypeSize);
      AddBufferList(&AllocatedBufferList, Buffer);
      *ArgBuffer = (UINTN)Buffer;
      Status = MutateFunArg(
                  TypeInfoList,
                  PointedTypeInfo,
                  Buffer
                  );

      return Status;

    case TYPE_CLASS_FUNCTION:
      *ArgBuffer = (UINTN)HelloWorld;
      OUTPUT_LOG (("Type %a is a function, and set as HelloWorld\n", ArgTypeHeader->TypeName));
      OUTPUT_LOG (("HelloWorld address=0x%x\n", (UINTN)HelloWorld));
      return RETURN_SUCCESS;

    case TYPE_CLASS_STRUCTURE:
      //ZeroMem(ArgBuffer, ArgTypeHeader->TypeSize);
      //RandomBuffer(ArgBuffer, ArgTypeHeader->TypeSize);

      //
      // Mutate the fields again to recursively fill the function and pointer buffer
      //
      BufferPtr = (CHAR8*) ArgBuffer;
      TypeStructureHeader = (TYPE__STRUCTURE_HEADER *)ArgTypeHeader;
      for(FieldIndex = 1; FieldIndex <= TypeStructureHeader->StructFieldNum; FieldIndex++){
        FieldTypeHeader = GetStructFieldTypeInfo(TypeInfoList, TypeStructureHeader, FieldIndex);
        if (FieldTypeHeader == NULL){
          OUTPUT_LOG (("Error! Cannot get the type %a for structure %a field %d \n",
                        FieldTypeHeader->TypeName,
                        TypeStructureHeader->TypeName,
                        FieldIndex
                      ));
          return EFI_NOT_FOUND;
        } 
        OUTPUT_LOG (("Structure FieldIndex %d address=0x%x\n", FieldIndex, (UINTN)BufferPtr));
        Status = MutateFunArg(
                    TypeInfoList,
                    FieldTypeHeader,
                    (UINTN *)BufferPtr 
                    );
        if (EFI_ERROR (Status)){
          OUTPUT_LOG (("Strcuture field type %a fails to instantiate\n\n", FieldTypeHeader->TypeName));
        }
        //
        // Directly use the field offset info in TYPE STRUCTURE created by Uefi-aware compiler
        //
        NextTypeStructFieldOffset = FieldIndex*(2*sizeof(const CHAR8*)+sizeof(const UINTN));
        OUTPUT_LOG (("FieldIndex 0x%x NextTypeStructFieldOffset=0x%x\n", FieldIndex, NextTypeStructFieldOffset));
        StructFieldOffset = *(UINTN*)((CHAR8*)&TypeStructureHeader->StructFieldOffset_1 + NextTypeStructFieldOffset);
        OUTPUT_LOG (("FieldIndex 0x%x StructFieldOffset=0x%x\n", FieldIndex, StructFieldOffset));
        BufferPtr = (CHAR8*)ArgBuffer + StructFieldOffset;
        OUTPUT_LOG (("BufferPtr= 0x%x\n", (UINTN)BufferPtr));
#if 0
        BufferPtr += FieldTypeHeader->TypeSize;
        //
        // Uefi spec 2.3.1 Data Types
        // Protocol structure are aligned on boundaries equal to the largest 
        // internal datum of the structure and internal data are implicitly
        // padded to achieve natural alignment.
        // https://bugzilla.tianocore.org/show_bug.cgi?id=930
        //
        // Bugbug, need to caculate every Strucut internal default alignment,
        // hardcode is not correct
        // It's better directly auto-generated the offset in IfTypeInfo.c
        //
        // &AcpiTableInstance->AcpiSdtProtocol.AcpiVersion= 0x7E16E1B0
        // &AcpiTableInstance->AcpiSdtProtocol.GetAcpiTable= 0x7E16E1B8
        // &AcpiTableInstance->AcpiSdtProtocol.RegisterNotify= 0x7E16E1C0
        // &AcpiTableInstance->AcpiSdtProtocol.Open= 0x7E16E1C8
        //
        // &VirtioDeviceProtocol.Revision= 0x7E017BA0
        // &VirtioDeviceProtocol.SubSystemDeviceId= 0x7E017BA4
        // &VirtioDeviceProtocol.GetDeviceFeatures= 0x7E017BA8
        // &VirtioDeviceProtocol.SetGuestFeatures= 0x7E017BB0
        // &VirtioDeviceProtocol.SetQueueAddress= 0x7E017BB8
        //

        //
        // Use the Next field type size to decide the current field alignment
        //
        if ((FieldIndex+1) < TypeStructureHeader->StructFieldNum){
          NextStructFieldTypeHeader = GetStructFieldTypeInfo(&MergedTypeInfoList, TypeStructureHeader, FieldIndex+1);
          if (NextStructFieldTypeHeader == NULL){
            OUTPUT_LOG (("Error! NextStructFieldTypeHeader is NULL\n"));
            continue;
          }
          if (NextStructFieldTypeHeader->TypeSize >= STRUCTURE_DEFAULT_ALIGNMENT){
            Alignment = STRUCTURE_DEFAULT_ALIGNMENT;
          } else {
            Alignment = 4;
          }

          if ((UINTN)BufferPtr % Alignment != 0){
            AlignmentOffset = Alignment - ((UINTN)BufferPtr % Alignment);
          }else{
            AlignmentOffset = 0;
          }
          OUTPUT_LOG (("AlignmentOffset = 0x%x\n", AlignmentOffset));
          BufferPtr += AlignmentOffset;
        }
#endif
      }
      return RETURN_SUCCESS;

    default:
      //ASSERT (ArgTypeHeader->TypeSize <= sizeof(*ArgBuffer)); //?
      ZeroMem(ArgBuffer, ArgTypeHeader->TypeSize);
      OUTPUT_LOG (("ZeroMem %a\n", ArgTypeHeader->TypeName));
      //RandomBuffer(ArgBuffer, ArgTypeHeader->TypeSize);
      return RETURN_SUCCESS;
  }
}


EFI_STATUS
EFIAPI
FreeBufferList(
  IN  LIST_ENTRY        *BufferList
  )
{
  ALLOCATED_BUFFER_NODE     *NodePtr;
  LIST_ENTRY                *Link;

  if (BufferList == NULL){
    return EFI_INVALID_PARAMETER;
  }

  Link = GetFirstNode (BufferList);
  while (!IsNull (BufferList, Link)){
    NodePtr = ALLOCATED_BUFFER_NODE_FROM_LINK (Link);
    RemoveEntryList(Link);
    Link = GetNextNode (BufferList, Link);
    OUTPUT_LOG (("FreePool NodePtr->BufferAddress=0x%x\n", NodePtr->BufferAddress));
    FreePool(NodePtr->BufferAddress);
    OUTPUT_LOG (("FreePool NodePtr=0x%x\n", NodePtr));
    FreePool(NodePtr);
  }

  return EFI_SUCCESS;
}

BOOLEAN
EFIAPI
CheckFunctionDoneFromLog (
  IN  SHELL_FILE_HANDLE         LogFileHandle,
  IN  TYPE__EFI_PROTOCOL        *ProtocolType,
  IN  TYPE__EFI_FUNCTION_HEADER *FunctionTypeHeader
  )
{
  EFI_STATUS                  Status;
  LOG__EFI_PROTOCOL_FUNCTION  FunctionLog;
  UINTN                       BufferSize;

  if (LogFileHandle == NULL){
    return FALSE;
  }

  Status = ShellSetFilePosition(LogFileHandle, 0);
  if(EFI_ERROR(Status)){
    return FALSE;
  }

  BufferSize = sizeof(FunctionLog);
  Status = ShellReadFile(LogFileHandle, &BufferSize, &FunctionLog);
  while (!EFI_ERROR(Status) && (BufferSize == sizeof(FunctionLog))){
    if((AsciiStrCmp(FunctionLog.ProtocolName, ProtocolType->TypeName) == 0) &&
       (AsciiStrCmp(FunctionLog.FunctionName, FunctionTypeHeader->TypeName) == 0)
      ){
      if(AsciiStrCmp(FunctionLog.StatusStr, STATUS_DONE) == 0){
        return TRUE;
      }
    }
    BufferSize = sizeof(FunctionLog);
    Status = ShellReadFile(LogFileHandle, &BufferSize, &FunctionLog);
  }

  return FALSE;
}

BOOLEAN
EFIAPI
CheckFunctionFromBlackList (
  IN  SHELL_FILE_HANDLE         BlackListFileHandle,
  IN  TYPE__EFI_FUNCTION_HEADER *FunctionTypeHeader
  )
{
  EFI_STATUS                  Status;
  LOG__FUNCTION               FunctionLog;
  UINTN                       BufferSize;

  if (BlackListFileHandle == NULL){
    return FALSE;
  }

  Status = ShellSetFilePosition(BlackListFileHandle, 0);
  if(EFI_ERROR(Status)){
    return FALSE;
  }

  BufferSize = sizeof(FunctionLog);
  Status = ShellReadFile(BlackListFileHandle, &BufferSize, &FunctionLog);
  while (!EFI_ERROR(Status) && (BufferSize == sizeof(FunctionLog))){
    if(AsciiStrCmp(FunctionLog.FunctionName, FunctionTypeHeader->TypeName) == 0){
      return TRUE;
    }
    BufferSize = sizeof(FunctionLog);
    Status = ShellReadFile(BlackListFileHandle, &BufferSize, &FunctionLog);
  }

  return FALSE;
}
  
EFI_STATUS
EFIAPI
FuzzingFunction (
  IN  void                       *FunctionAddress,
  IN  TYPE__EFI_FUNCTION_HEADER  *FunctionTypeInfo
  )
{
  EFI_STATUS                Status;
  UEFI_CALL                 UefiCall;
  UINTN                     Arg[MAX_ARG_NUM];
  TYPE_INFO_HEADER          *ArgTypeHeader;
  UINTN                     ArgIndex;
  SHELL_FILE_HANDLE         LogFileHandle;
  SHELL_FILE_HANDLE         BlackListFileHandle;
  LOG__FUNCTION             FunctionLog;
  UINTN                     BufferSize;
  UINT64                    Position;

  OUTPUT_LOG (("FuzzingFunction begin\n"));
  //
  // Check inputs sanity
  //
  if (FunctionAddress == NULL){
    OUTPUT_LOG (("Error! Target fuzzing FunctionAddress is NULL\n"));
    return EFI_INVALID_PARAMETER;
  }

  if (FunctionTypeInfo == NULL){
    OUTPUT_LOG (("Error! Target fuzzing TypeInfo is NULL\n"));
    return EFI_INVALID_PARAMETER;
  }

  if (FunctionTypeInfo->TypeName == NULL){
    OUTPUT_LOG (("Error! Target fuzzing TypeInfo's TypeName is NULL\n"));
    return EFI_INVALID_PARAMETER;
  }

  if (FunctionTypeInfo->TypeClass != TYPE_CLASS_FUNCTION){
    OUTPUT_LOG (("Error! %a's FunctionTypeInfo is not TYPE_CLASS_FUNCTION\n", FunctionTypeInfo->TypeName));
    return EFI_INVALID_PARAMETER;
  }

  if (FunctionTypeInfo->ParameterNum > MAX_ARG_NUM){
    OUTPUT_LOG (("Function %a has too many parameters, please change the UEFI_CALL definition\n", FunctionTypeInfo->TypeName));
    ASSERT(0);
  }


  //
  // Save the function log
  //
  if (NotSaveFuzzLogFile){
    OUTPUT_LOG (("Skip save Fuzzlog.txt file\n"));
    LogFileHandle = NULL;
    goto FuzzFunction;
  }

  Status = ShellOpenFileByName(L"FuzzLog.txt", &LogFileHandle, EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
  if (EFI_ERROR(Status)) {
    OUTPUT_LOG (("fail to open the log file, create a new one\n"));
    Status = ShellOpenFileByName(L"FuzzLog.txt", &LogFileHandle, EFI_FILE_MODE_CREATE|EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
    if (EFI_ERROR(Status)) {
      OUTPUT_LOG (("fail to create the log file!\n"));
      LogFileHandle = NULL;
      goto FuzzFunction;
    }
  }

  Status = ShellSetFilePosition(LogFileHandle, 0xFFFFFFFFFFFFFFFF);
  if (EFI_ERROR(Status)) {
    OUTPUT_LOG (("Set the Position to end of the file fail!\n"));
    return Status;
  }

  Status = ShellOpenFileByName(L"BlackList.txt", &BlackListFileHandle, EFI_FILE_MODE_READ, 0);
  if (EFI_ERROR(Status)) {
    BlackListFileHandle = NULL;
  } else {
    //
    // Skip if this function is in black list file
    //
    if(CheckFunctionFromBlackList(BlackListFileHandle, FunctionTypeInfo)){
      OUTPUT_LOG (("Skip function %a, which is in BlackList\n", FunctionTypeInfo->TypeName));
      return EFI_UNSUPPORTED;
    }
  }

FuzzFunction:
  OUTPUT_LOG (("going to fuzz function: %a\n", FunctionTypeInfo->TypeName));
  //
  // Log the protocol function
  //
  ZeroMem(&FunctionLog, sizeof(FunctionLog));
  FunctionLog.Signature = LOG_FUNCTION_SIGNATURE;
  AsciiStrnCpyS(
    FunctionLog.FunctionName,
    sizeof(FunctionLog.FunctionName),
    FunctionTypeInfo->TypeName,
    AsciiStrLen (FunctionTypeInfo->TypeName)
    );
  AsciiStrnCpyS(
    FunctionLog.StatusStr,
    sizeof(FunctionLog.StatusStr),
    STATUS_FAIL,
    sizeof(STATUS_FAIL)
    );
  if (LogFileHandle != NULL){
    BufferSize = sizeof(FunctionLog);
    Status = ShellSetFilePosition(LogFileHandle, 0xFFFFFFFFFFFFFFFF);
    Status = ShellGetFilePosition(LogFileHandle, &Position);
    Status = ShellWriteFile (LogFileHandle, &BufferSize, &FunctionLog);
    Status = ShellFlushFile (LogFileHandle);
  }

  //
  // Generate call arguments firstly
  //
  ZeroMem(Arg, sizeof(Arg));
  for (ArgIndex = 0; ArgIndex < FunctionTypeInfo->ParameterNum; ArgIndex++){
    ArgTypeHeader = GetFunArgTypeInfo(&MergedTypeInfoList, FunctionTypeInfo, ArgIndex);
    if (ArgTypeHeader == NULL){
      OUTPUT_LOG (("Error! Cannot get the function %a NO. %d argument type\n", FunctionTypeInfo->TypeName, ArgIndex));
      goto ErrorExit;
    }
    Status = MutateFunArg(
                &MergedTypeInfoList,
                ArgTypeHeader,
                &Arg[ArgIndex]
                );
    if (EFI_ERROR (Status)){
      OUTPUT_LOG (("Fun Arg type %a fails to instantiate\n\n", ArgTypeHeader->TypeName));
    }
    FunctionLog.Arg[ArgIndex] = Arg[ArgIndex];
  }
  //
  // Invoke the call with above generated arguments
  //
  UefiCall = (UEFI_CALL)(UINTN)FunctionAddress;
  FunctionLog.FunctionPointer = FunctionAddress;
  OUTPUT_LOG (("UefiCall address = 0x%x\n", (UINTN)UefiCall));
  //DEBUG ((EFI_D_ERROR, "UefiCall address = 0x%x\n", (UINTN)UefiCall));
  for (ArgIndex = 0; ArgIndex < MAX_ARG_NUM; ArgIndex++){
    if (sizeof(UINTN) == 8){ // %lx cannot use for UINTN in 32bit platform
      OUTPUT_LOG (("Arg[%d]= 0x%lx\n", ArgIndex, Arg[ArgIndex])); 
    }else{
      OUTPUT_LOG (("Arg[%d]= 0x%x\n", ArgIndex, Arg[ArgIndex]));  
    }
  }

  UefiCall(
    Arg[0],
    Arg[1],
    Arg[2],
    Arg[3],
    Arg[4],
    Arg[5],
    Arg[6],
    Arg[7],
    Arg[8],
    Arg[9],
    Arg[10],
    Arg[11]
    );

  OUTPUT_LOG (("UefiCall is done\n"));
  AsciiStrnCpyS(
    FunctionLog.StatusStr,
    sizeof(FunctionLog.StatusStr),
    STATUS_DONE,
    sizeof(STATUS_DONE)
    );
  if(LogFileHandle != NULL){
    Status = ShellSetFilePosition(LogFileHandle, Position);
    Status = ShellWriteFile (LogFileHandle, &BufferSize, &FunctionLog);
    Status = ShellFlushFile (LogFileHandle);
  }

ErrorExit:
  if(LogFileHandle != NULL){
    ShellCloseFile(&LogFileHandle);
  }
  OUTPUT_LOG (("FuzzingFunction done\n"));
  return Status;
}

EFI_STATUS
EFIAPI
FreeTypeInfoList(
  IN  LIST_ENTRY        *TypeInfoList
  )
{
  TYPE_INFO_NODE            *NodePtr;
  LIST_ENTRY                *Link;

  if (TypeInfoList == NULL){
    return EFI_INVALID_PARAMETER;
  }

  Link = GetFirstNode (TypeInfoList);
  while (!IsNull (TypeInfoList, Link)){
    NodePtr = TYPE_INFO_NODE_FROM_LINK (Link);
    RemoveEntryList(Link);
    Link = GetNextNode (TypeInfoList, Link);
    FreePool(NodePtr);
  }

  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
FreeFunctionTypeMapList(
  IN  LIST_ENTRY        *TypeInfoList
  )
{
  FUNCTION_TYPE_MAP_NODE        *NodePtr;
  LIST_ENTRY                    *Link;

  if (TypeInfoList == NULL){
    return EFI_INVALID_PARAMETER;
  }

  Link = GetFirstNode (TypeInfoList);
  while (!IsNull (TypeInfoList, Link)){
    NodePtr = FUNCTION_TYPE_MAP_NODE_FROM_LINK (Link);
    RemoveEntryList(Link);
    Link = GetNextNode (TypeInfoList, Link);
    FreePool(NodePtr);
  }

  return EFI_SUCCESS;
}


BOOLEAN
EFIAPI
CheckFunctionTypeMapExist(
  IN  LIST_ENTRY         *TypeMapList,
  IN  FUNCTION_TYPE_MAP  *FunctionTypeMapPtr
  )
{
  LIST_ENTRY                 *Link;
  FUNCTION_TYPE_MAP_NODE     *NodePtr;
  const CHAR8* TypeName;
  const void*  FunctionAddress;

  if (TypeMapList == NULL || FunctionTypeMapPtr == NULL){
    return FALSE;
  }

  TypeName = FunctionTypeMapPtr->FunctionTypeInfo->TypeName;
  FunctionAddress = FunctionTypeMapPtr->FunctionAddress;
  //
  // Search the same FunctionAddress and TypeName in TypeMapList
  //
  for(Link = GetFirstNode (TypeMapList);
      !IsNull (TypeMapList, Link);
      Link = GetNextNode (TypeMapList, Link)){
    NodePtr = FUNCTION_TYPE_MAP_NODE_FROM_LINK (Link);
    if (NodePtr->FunctionAddress == FunctionAddress){
      if (AsciiStrCmp(NodePtr->FunctionTypeInfoHdr->TypeName, TypeName) == 0){
        return TRUE;
      }
    }
  }

  return FALSE;
}


EFI_STATUS
EFIAPI
AddFunctionTypeMap(
  IN  LIST_ENTRY          *TypeMapList,
  IN  FUNCTION_TYPE_MAP   *FunctionTypeMapPtr
  )
{
  FUNCTION_TYPE_MAP_NODE            *NodePtr;

  if (TypeMapList == NULL || FunctionTypeMapPtr == NULL){
    return EFI_INVALID_PARAMETER;
  }

  if (CheckFunctionTypeMapExist(TypeMapList, FunctionTypeMapPtr)) {
    return EFI_SUCCESS;
  }

  NodePtr = AllocateZeroPool (sizeof (FUNCTION_TYPE_MAP_NODE));
  if (NodePtr == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  OUTPUT_LOG (("Function TypeName= %a\n", FunctionTypeMapPtr->FunctionTypeInfo->TypeName));

  NodePtr->Signature = FUNCTION_TYPE_MAP_NODE_SIGNATURE;
  NodePtr->FunctionAddress = FunctionTypeMapPtr->FunctionAddress;
  NodePtr->FunctionTypeInfoHdr = FunctionTypeMapPtr->FunctionTypeInfo;
  NodePtr->InvokeWrapper = FunctionTypeMapPtr->InvokeWrapper;
  InsertTailList (TypeMapList, &NodePtr->Link);

  return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
MergeFunctionTypeMap (
  IN   FUNCTION_TYPE_MAP **ToMergeMapList,
  OUT  LIST_ENTRY         *TypeMapList
  )
{
  UINTN                     Index;
  UINTN                     MapListIndex;
  FUNCTION_TYPE_MAP        *FunctionTypeMapList;
  FUNCTION_TYPE_MAP        *FunctionTypeMapPtr;

  if (TypeMapList == NULL || ToMergeMapList == NULL){
    return EFI_INVALID_PARAMETER;
  }

  MapListIndex = 0;
  while (ToMergeMapList[MapListIndex] != NULL) {
    FunctionTypeMapList = ToMergeMapList[MapListIndex];
    Index = 0;
    while (FunctionTypeMapList[Index].FunctionAddress != NULL &&
           FunctionTypeMapList[Index].FunctionTypeInfo != NULL){
      FunctionTypeMapPtr = &FunctionTypeMapList[Index];
      AddFunctionTypeMap(TypeMapList, FunctionTypeMapPtr);
      Index++;
    }
    MapListIndex++;
  }

  return EFI_SUCCESS;
}

BOOLEAN
EFIAPI
CheckTypeInfoExist(
  IN  LIST_ENTRY        *TypeInfoList,
  IN  TYPE_INFO_HEADER  *TypeInfoHdr
  )
{
  LIST_ENTRY                *Link;
  TYPE_INFO_NODE            *NodePtr;
  TYPE_INFO_HEADER          *TypeInfoPtr;

  if (TypeInfoList == NULL || TypeInfoHdr == NULL){
    return FALSE;
  }

  for(Link = GetFirstNode (TypeInfoList);
      !IsNull (TypeInfoList, Link);
      Link = GetNextNode (TypeInfoList, Link)){
    NodePtr = TYPE_INFO_NODE_FROM_LINK (Link);
    TypeInfoPtr = NodePtr->TypeInfoHdr;
    if (AsciiStrCmp(TypeInfoPtr->TypeName, TypeInfoHdr->TypeName) == 0){
      return TRUE;
    }
  }

  return FALSE;
}

EFI_STATUS
EFIAPI
AddTypeInfo(
  IN  LIST_ENTRY        *TypeInfoList,
  IN  TYPE_INFO_HEADER  *TypeInfoHdr
  )
{
  TYPE_INFO_NODE            *NodePtr;

  if (TypeInfoList == NULL || TypeInfoHdr == NULL){
    return EFI_INVALID_PARAMETER;
  }

  if (TypeInfoHdr->TypeName == NULL){
    OUTPUT_LOG (("Error! Add NULL TypeName.\n"));
    return EFI_INVALID_PARAMETER;
  }

  if (CheckTypeInfoExist(TypeInfoList, TypeInfoHdr)) {
    return EFI_SUCCESS;
  }

  NodePtr = AllocateZeroPool (sizeof (TYPE_INFO_NODE));
  if (NodePtr == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  OUTPUT_LOG (("TypeName= %a\n", TypeInfoHdr->TypeName));

  NodePtr->Signature = TYPE_INFO_NODE_SIGNATURE;
  NodePtr->TypeInfoHdr = TypeInfoHdr;
  InsertTailList (TypeInfoList, &NodePtr->Link);

  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
MergeTypeInfo(
  IN   VOID           ***ToMergeList,
  OUT  LIST_ENTRY     *MergedList
  )
{
  UINTN                     ListIndex;
  UINTN                     Index;
  VOID                      **TypeInfoArray;
  TYPE_INFO_HEADER          *TypeInfoPtr;

  if (MergedList == NULL || ToMergeList == NULL){
    return EFI_INVALID_PARAMETER;
  }

  ListIndex = 0;
  while (ToMergeList[ListIndex] != NULL ){
    TypeInfoArray = ToMergeList[ListIndex];
    Index = 0;
    while (TypeInfoArray[Index] != NULL){
      TypeInfoPtr = (TYPE_INFO_HEADER *)TypeInfoArray[Index];
      AddTypeInfo(MergedList, TypeInfoPtr);
      Index++;
    }

    ListIndex++;
  }

  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
GenParameter(
  IN  VOID*            TypeInfo,
  IN  UINTN            ArgIndex,
  OUT VOID*            ParameterAddress
)
{
  TYPE__EFI_FUNCTION_HEADER   *FunctionTypeInfo;
  TYPE_INFO_HEADER            *ArgTypeHeader;
  EFI_STATUS                  Status;

  if (TypeInfo == NULL || ParameterAddress == NULL){
    return EFI_INVALID_PARAMETER;
  }

  FunctionTypeInfo = (TYPE__EFI_FUNCTION_HEADER *)TypeInfo;
  ArgTypeHeader = GetFunArgTypeInfo(&MergedTypeInfoList, FunctionTypeInfo, (ArgIndex - 1)); //ArgIndex begin with 1
  if (ArgTypeHeader == NULL){
    OUTPUT_LOG (("GenParameter Error! Cannot get the function %a NO. %d argument type\n", FunctionTypeInfo->TypeName, ArgIndex));
    return RETURN_NOT_FOUND;
  }

  Status = MutateFunArg(
              &MergedTypeInfoList,
              ArgTypeHeader,
              ParameterAddress
              );
  if (EFI_ERROR (Status)){
    OUTPUT_LOG (("Fun Arg type %a fails to instantiate\n\n", ArgTypeHeader->TypeName));
    return RETURN_UNSUPPORTED;
  }

  return RETURN_SUCCESS;
}

/***
  //
  // 1. Locate and merge all Interface type info protocols in current system
  // 2. Locate all handles in the system, or your interested module's handles
  // 3. For every handle, check whether there is a known type protocol installed on it
  // 4. If yes, then fuzz test this handle's protocol with its type info
  //

  @retval  0         The application exited normally.
  @retval  Other     An error occurred.
***/
INTN
EFIAPI
ShellAppMain (
  IN UINTN Argc,
  IN CHAR16 **Argv
  )
{
  EFI_STATUS                  Status;
  FUNCTION_TYPE_MAP_NODE      *MapNodePtr;
  LIST_ENTRY                  *Link;
  UEFI_INVOKE_WRAPPER         UefiInvokeWrapper;

  OUTPUT_LOG(("\nHello uefi lib fuzzer!\n"));
  //
  // 1.Merge all type info and function map lists
  //
  OUTPUT_LOG(("Merging all type info\n"));
  InitializeListHead (&MergedTypeInfoList);
  MergeTypeInfo(ToMergeTypeInfoList, &MergedTypeInfoList);
  if (IsListEmpty (&MergedTypeInfoList)) {
    OUTPUT_LOG(("There is no type info available!\n"));
    return(0);
  }
  OUTPUT_LOG(("Merging all function map lists\n"));
  InitializeListHead (&MergedFunctionTypeMapList);
  MergeFunctionTypeMap(ToMergeFunctionTypeMapList, &MergedFunctionTypeMapList);
  if (IsListEmpty (&MergedFunctionTypeMapList)) {
    OUTPUT_LOG(("There is no function type map available!\n"));
    return(0);
  }

  //
  //
  //
  InitializeListHead (&AllocatedBufferList);
  //
  // 2.Fuzz test all functions with their type info one by one
  // 
  // Please use the method 1 only in 64bits. The method 2 can
  // be used in both 64bits and 32bits. 
  // To use method 2, pls just comment method 1 code and uncomment method 2 code in below
  //
  for(Link = GetFirstNode (&MergedFunctionTypeMapList);
      !IsNull (&MergedFunctionTypeMapList, Link);
      Link = GetNextNode (&MergedFunctionTypeMapList, Link)){
    MapNodePtr = FUNCTION_TYPE_MAP_NODE_FROM_LINK (Link);
    //
    // method 1: function pointer force cast call
    // FuzzingFunction depend on the fixed UefiCall() template, whose all input
    // argetmnets type are UNITN, and the "UefiCall = (UEFI_CALL)(UINTN)FunctionAddress;"
    // convert can only *safely* work in 64bits.
    // Because in 32bits, the UINTN is 4 bytes, and cannot contain the UINT64 type
    // input argument. But the UINT64 argument are used in several Uefi APIs,
    // e.g. SafeInt64ToUint64(). So force convert the UINT64 argument to
    // 4 bytes Arg[] in UefiCall() can cause error.
    // The UefiCall() template has another critical limitation that it has fixed
    // EFIAPI ABI attribute which implicty required all the tested function also
    // have same EFIAPI ABI attribute. But this assumption is not true for all
    // Uefi functions.
    //
    // Status = FuzzingFunction(MapNodePtr->FunctionAddress, MapNodePtr->FunctionTypeInfoHdr);

    // method 2: native function call
    // Use the API invoke wrapper, which is generated by uefi-aware compiler, to call the API natively.
    // The invoke wrapper can work in both 32bits and 64bits
    //
    // Print(L"Going to call function: %a\n", MapNodePtr->FunctionTypeInfoHdr->TypeName);
    DEBUG ((EFI_D_ERROR, "Going to call function: %a\n", MapNodePtr->FunctionTypeInfoHdr->TypeName));
    UefiInvokeWrapper = (UEFI_INVOKE_WRAPPER)(UINTN)MapNodePtr->InvokeWrapper;
    Status = UefiInvokeWrapper();

    if (EFI_ERROR (Status)){
      // Add error handling code here
    }
  }

  //
  //
  //
  FreeTypeInfoList(&MergedTypeInfoList);
  FreeFunctionTypeMapList(&MergedFunctionTypeMapList);
  //
  // Cannot simply free the input Arg buffer because some protocol
  // functions might continue to use the buffer after the call,
  // e.g. if the call is to register a callback buffer for a event, etc.
  // Ingore the memory leak in the fuzzing test here.
  //
  //FreeBufferList(&AllocatedBufferList);
  return(0);
}
