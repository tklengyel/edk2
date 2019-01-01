/** @file
    A module fuzz testing executor which invoke the module interfaces according
    to the interfaces type info published by the Interface TypeInfo Protocol.

    Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
    This program and the accompanying materials
    are licensed and made available under the terms and conditions of the BSD License
    which accompanies this distribution. The full text of the license may be found at
    http://opensource.org/licenses/bsd-license.

    THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
    WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/
#include "UMfuzzer.h"

LIST_ENTRY  MergedTypeInfoList;
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
  Print (L"Hello World\n");
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
GetStructFieldTypeInfo (
  IN  LIST_ENTRY          *TypeInfoList,
  IN  TYPE__EFI_PROTOCOL_INTERFACE_STRUCT_HEADER *StructTypeHeader,
  IN  UINTN               FieldIndex
  )
{
  CHAR8                     *TypeInfoName;
  CHAR8                     **AddressPtr;
  //
  // FieldIndex start with 0
  //
  if (FieldIndex >= StructTypeHeader->StructFieldNum){
    return NULL;
  }
  AddressPtr = (CHAR8 **)((UINTN)&StructTypeHeader->StructFieldTypeName_1 + FieldIndex*2*sizeof (CHAR8*));
  TypeInfoName = *AddressPtr;
  Print (L"GetStructFieldTypeInfo FieldIndex is %d TypeInfoName is %a\n", FieldIndex, TypeInfoName);
  return GetTypeInfo(TypeInfoList, TypeInfoName);
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
  Print (L"GetFunArgTypeInfo ArgIndex is %d, TypeInfoName is %a\n", ArgIndex, TypeInfoName);
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
  Print (L"AddBufferList BufferAddress=0x%x\n", BufferAddress);
  Print (L"AddBufferList NodePtr=0x%x\n", NodePtr);
  NodePtr->Signature = ALLOCATED_BUFFER_NODE_SIGNATURE;
  NodePtr->BufferAddress = BufferAddress;
  InsertTailList (BufferList, &NodePtr->Link);

  return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
InstantiateFunArg (
  IN  LIST_ENTRY         *TypeInfoList,
  IN  TYPE__EFI_PROTOCOL *ProtocolTypePtr,
  IN  TYPE_INFO_HEADER   *ArgTypeHeader,
  IN  EFI_HANDLE         InterfaceHandle,
  IN  VOID               *Interface,
  OUT UINTN              *ArgBuffer
  )
{
  EFI_STATUS                Status;
  CHAR8                     *PointedTypeInfoName;
  TYPE_INFO_HEADER          *PointedTypeInfo;
  UINTN                     *Buffer;
  EFI_DEVICE_PATH_PROTOCOL  *DevicePathPtr;

  switch (ArgTypeHeader->TypeClass){
    case TYPE_CLASS_POINTER:
      PointedTypeInfoName = (CHAR8 *)((TYPE__POINTER *)ArgTypeHeader)->PointedType;
      Print (L"The Pointer's PointedType= %a\n", PointedTypeInfoName);
      //
      // Check whether it is the protocol's "This" pointer
      //
      PointedTypeInfo = GetTypeInfo(TypeInfoList, PointedTypeInfoName);
      if ( AsciiStrCmp(ProtocolTypePtr->InterfaceStructName,
           PointedTypeInfoName) == 0){
        Print (L"The pointer is the This of %a protocol\n", PointedTypeInfoName);
        *ArgBuffer = (UINTN)Interface;
        return RETURN_SUCCESS;
      }
      //
      // Check whether it is a pointer of pointer
      //
      Status = RETURN_SUCCESS;
      Buffer = AllocateZeroPool(PointedTypeInfo->TypeSize);
      ASSERT (Buffer != NULL);
      AddBufferList(&AllocatedBufferList, Buffer);
      *ArgBuffer = (UINTN)Buffer;
      //if (PointedTypeInfo->TypeClass == TYPE_CLASS_POINTER){
        Status = InstantiateFunArg(
                    TypeInfoList,
                    ProtocolTypePtr,
                    PointedTypeInfo,
                    InterfaceHandle,
                    Interface,
                    Buffer
                    );
      // }  else {
        // Status = InstantiateFunArg(
                    // TypeInfoList,
                    // ProtocolTypePtr,
                    // PointedTypeInfo,
                    // InterfaceHandle,
                    // Interface,
                    // ArgBuffer
                    // );
      // }

      return Status;

    case TYPE_CLASS_FUNCTION:
      *ArgBuffer = (UINTN)HelloWorld;
      return RETURN_SUCCESS;

    default:
      //
      // Check whether it is the EFI_HANDLE
      //
      if ((ArgTypeHeader->TypeName != NULL) &&
          (AsciiStrCmp(ArgTypeHeader->TypeName, "EFI_HANDLE") == 0)){
        *ArgBuffer = (UINTN)InterfaceHandle;
        return RETURN_SUCCESS;
      }
      //
      // Check whether it is the EFI_DEVICE_PATH_PROTOCOL
      //
      if ((ArgTypeHeader->TypeName != NULL) &&
          (AsciiStrCmp(ArgTypeHeader->TypeName, "EFI_DEVICE_PATH_PROTOCOL") == 0)){
        DevicePathPtr = (EFI_DEVICE_PATH_PROTOCOL *)ArgBuffer;
        SetDevicePathEndNode(DevicePathPtr);
        if (IsDevicePathEnd (DevicePathPtr)){
          Print (L"DevicePathPtr point to a DevicePathEnd node now\n");
        } else {
          Print (L"fail to create DevicePathEnd\n");
        }
        return RETURN_SUCCESS;
      }

      ZeroMem(ArgBuffer, ArgTypeHeader->TypeSize);
      // if (ArgTypeHeader->TypeSize > sizeof(UINTN)){ //?
        // Buffer = AllocateZeroPool(ArgTypeHeader->TypeSize);
        // AddBufferList(&AllocatedBufferList, Buffer);
        // *ArgBuffer = (UINTN)Buffer;
      // } else {
        // *ArgBuffer = 0;
      // }

      return RETURN_SUCCESS;
  }
}

VOID
DpGetNameFromHandle (
  IN EFI_HANDLE   Handle
  );
extern CHAR16            mGaugeString[];

BOOLEAN
EFIAPI
IsRelative (
  IN  EFI_HANDLE            ProtocolHandle,
  IN  EFI_HANDLE            ImageHandle
  )
{

  if (ProtocolHandle == NULL || ImageHandle == NULL){
    return FALSE;
  }

  if (ProtocolHandle == ImageHandle) {
    return TRUE;
  }

  return TRUE;
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
    Print (L"FreePool NodePtr->BufferAddress=0x%x\n", NodePtr->BufferAddress);
    FreePool(NodePtr->BufferAddress);
    Print (L"FreePool NodePtr=0x%x\n", NodePtr);
    FreePool(NodePtr);
  }

  Print (L"FreeBufferList done\n");
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
  IN  TYPE__EFI_PROTOCOL        *ProtocolType,
  IN  TYPE__EFI_FUNCTION_HEADER *FunctionTypeHeader
  )
{
  EFI_STATUS                  Status;
  LOG__EFI_PROTOCOL_FUNCTION  FunctionLog;
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
    if(AsciiStrCmp(FunctionLog.ProtocolName, ProtocolType->TypeName) == 0){
      if (AsciiStrCmp(FunctionLog.StatusStr, STATUS_ALL_FUNCTION) == 0){
        return TRUE;
      }else if(AsciiStrCmp(FunctionLog.FunctionName, FunctionTypeHeader->TypeName) == 0){
        return TRUE;
      }
    }

    BufferSize = sizeof(FunctionLog);
    Status = ShellReadFile(BlackListFileHandle, &BufferSize, &FunctionLog);
  }

  return FALSE;
}

EFI_STATUS
EFIAPI
FuzzingProtocol (
  IN  EFI_HANDLE                Handle,
  IN  TYPE__EFI_PROTOCOL        *ProtocolType
  )
{
  EFI_STATUS                Status;
  UINTN                     FieldIndex;
  TYPE_INFO_HEADER          *ProtocolTypeHeader;
  TYPE_INFO_HEADER          *StructFieldTypeHeader;
  TYPE_INFO_HEADER          *NextStructFieldTypeHeader;
  TYPE__EFI_PROTOCOL_INTERFACE_STRUCT_HEADER *StructTypeHeader;
  TYPE__EFI_FUNCTION_HEADER *FunctionTypeHeader;
  UEFI_CALL                 UefiCall;
  UINTN                     Arg[MAX_ARG_NUM];
  TYPE_INFO_HEADER          *ArgTypeHeader;
  VOID                      *Interface;
  UINTN                     FieldOffset;
  UINTN                     Alignment;
  UINTN                     AlignmentOffset;
  UINTN                     ArgIndex;
  SHELL_FILE_HANDLE         LogFileHandle;
  SHELL_FILE_HANDLE         BlackListFileHandle;
  LOG__EFI_PROTOCOL_FUNCTION  FunctionLog;
  UINTN                     BufferSize;
  UINT64                    Position;

  Print (L"FuzzingProtocol begin\n");
  InitializeListHead (&AllocatedBufferList);
  //
  // Check the Protocol on the target handle
  //
  Interface = NULL;
  Status = gBS->HandleProtocol(
                  Handle,
                  (GUID *)ProtocolType->ProtocolGuid,
                  &Interface
                  );

  if (EFI_ERROR (Status)) {
    return EFI_PROTOCOL_ERROR;
  }

  //
  // Save the protocol interface log
  //
  Status = ShellOpenFileByName(L"FuzzLog.txt", &LogFileHandle, EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
  if (EFI_ERROR(Status)) {
    Print (L"fail to open the log file, create a new one\n");
    Status = ShellOpenFileByName(L"FuzzLog.txt", &LogFileHandle, EFI_FILE_MODE_CREATE|EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
    if (EFI_ERROR(Status)) {
      Print (L"fail to create the log file!\n");
      return Status;
    }
  }

  Status = ShellSetFilePosition(LogFileHandle, 0xFFFFFFFFFFFFFFFF);
  if (EFI_ERROR(Status)) {
    Print (L"Set the Position to end of the file fail!\n");
    return Status;
  }

  Status = ShellOpenFileByName(L"BlackList.txt", &BlackListFileHandle, EFI_FILE_MODE_READ, 0);
  if (EFI_ERROR(Status)) {
    BlackListFileHandle = NULL;
  }

  //
  // Check the Protocol type info
  //
  ProtocolTypeHeader = GetTypeInfo(&MergedTypeInfoList, ProtocolType->InterfaceStructName);
  if (ProtocolTypeHeader == NULL){
    Print (L"Cannot find the structure type info of protocol %a\n", ProtocolType->InterfaceStructName);
    return EFI_NOT_FOUND;
  }
  Print (L"ProtocolType->InterfaceStructName: %a\n", ProtocolType->InterfaceStructName);
  Print (L"ProtocolTypeHeader->TypeName: %a\n", ProtocolTypeHeader->TypeName);

  mGaugeString[0] = 0;
  DpGetNameFromHandle(Handle);
  //
  // Skip the SimpleTxt IN and OUT protocols to save the I/O normally
  //
  if ((AsciiStrCmp(ProtocolType->TypeName, "gEfiSimpleTextOutProtocolGuid") == 0)) {
    return EFI_SUCCESS;
  }
  // Bugbug: keyboard still not work after some fuzzing test
  if ((AsciiStrCmp(ProtocolType->TypeName, "gEfiSimpleTextInProtocolGuid") == 0)) {
    return EFI_SUCCESS;
  }

  Print (L"Going to fuzz the handle: %s with info of protocol: %a\n", mGaugeString, ProtocolType->TypeName);
  Print (L"InterfaceStructName: %a\n", ProtocolType->InterfaceStructName);

  FieldOffset = 0;
  StructTypeHeader = (TYPE__EFI_PROTOCOL_INTERFACE_STRUCT_HEADER *)ProtocolTypeHeader;

  Print (L"StructTypeHeader->TypeName: %a\n", StructTypeHeader->TypeName);
  Print (L"StructTypeHeader->StructFieldNum: %d\n", StructTypeHeader->StructFieldNum);
  Print (L"StructTypeHeader->StructFieldName_1: %a\n", StructTypeHeader->StructFieldName_1);
  Print (L"StructTypeHeader->StructFieldTypeName_1: %a\n", StructTypeHeader->StructFieldTypeName_1);

  for (FieldIndex = 0; FieldIndex < StructTypeHeader->StructFieldNum; FieldIndex++) {
    StructFieldTypeHeader = GetStructFieldTypeInfo(&MergedTypeInfoList, StructTypeHeader, FieldIndex);
    if (StructFieldTypeHeader == NULL){
      Print (L"Error! StructFieldTypeHeader is NULL\n");
      continue;
    }
    switch (StructFieldTypeHeader->TypeClass){
      case TYPE_CLASS_FUNCTION:
        // create the function input parameters according to type info
        // and invoke this function
        FunctionTypeHeader = (TYPE__EFI_FUNCTION_HEADER *)StructFieldTypeHeader;
        if (FunctionTypeHeader->ParameterNum > MAX_ARG_NUM){
          Print (L"Function %a has too many parameters, please change the UEFI_CALL definition\n", FunctionTypeHeader->TypeName);
          ASSERT(0);
        }
        //
        // Check whether this function is done in before execution,
        // We might recovery from a crash, and don't need run before tests again
        //
        if(CheckFunctionDoneFromLog(LogFileHandle, ProtocolType, FunctionTypeHeader)){
          Print (L"Skip function %a, which was done in before\n", FunctionTypeHeader->TypeName);
          break;
        }

        //
        // Skip if this function is in black list file
        //
        if(CheckFunctionFromBlackList(BlackListFileHandle, ProtocolType, FunctionTypeHeader)){
          Print (L"Skip function %a, which is in BlackList\n", FunctionTypeHeader->TypeName);
          break;
        }

        Print (L"going to fuzz function: %a\n", FunctionTypeHeader->TypeName);
        //
        // Log the protocol function
        //
        ZeroMem(&FunctionLog, sizeof(FunctionLog));
        FunctionLog.Signature = LOG_FUNCTION_SIGNATURE;
        AsciiStrnCpyS(
          FunctionLog.ProtocolName,
          sizeof(FunctionLog.ProtocolName),
          ProtocolType->TypeName,
          AsciiStrLen (ProtocolType->TypeName)
          );
        AsciiSPrint (
          FunctionLog.ProtocolGuidStr,
          sizeof(FunctionLog.ProtocolGuidStr),
          "%g",
          ProtocolType->ProtocolGuid
          );
        AsciiStrnCpyS(
          FunctionLog.FunctionName,
          sizeof(FunctionLog.FunctionName),
          FunctionTypeHeader->TypeName,
          AsciiStrLen (FunctionTypeHeader->TypeName)
          );
        AsciiStrnCpyS(
          FunctionLog.StatusStr,
          sizeof(FunctionLog.StatusStr),
          STATUS_FAIL,
          sizeof(STATUS_FAIL)
          );
        BufferSize = sizeof(FunctionLog);
        Status = ShellSetFilePosition(LogFileHandle, 0xFFFFFFFFFFFFFFFF);
        Status = ShellGetFilePosition(LogFileHandle, &Position);
        Status = ShellWriteFile (LogFileHandle, &BufferSize, &FunctionLog);
        Status = ShellFlushFile (LogFileHandle);

        //
        // Generate call arguments firstly
        //
        ZeroMem(Arg, sizeof(Arg));
        for (ArgIndex = 0; ArgIndex < FunctionTypeHeader->ParameterNum; ArgIndex++){
          ArgTypeHeader = GetFunArgTypeInfo(&MergedTypeInfoList, FunctionTypeHeader, ArgIndex);
          if (ArgTypeHeader == NULL){
            Print (L"Error! ArgTypeHeader is NULL\n");
            continue;
          }
          Status = InstantiateFunArg(
                      &MergedTypeInfoList,
                      ProtocolType,
                      ArgTypeHeader,
                      Handle,
                      Interface,
                      &Arg[ArgIndex]
                      );
          if (EFI_ERROR (Status)){
            Print (L"Fun Arg type %a fails to instantiate\n\n", ArgTypeHeader->TypeName);
          }
        }
        //
        // Invoke the call with above generated arguments
        //
        UefiCall = (UEFI_CALL) *(void **)((void *)Interface + FieldOffset);
        Print (L"STRUCTURE_DEFAULT_ALIGNMENT = 0x%x\n", STRUCTURE_DEFAULT_ALIGNMENT);
        Print (L"FieldOffset = 0x%x\n", (UINTN)FieldOffset);
        Print (L"Interface address = 0x%x\n", (UINTN)Interface);
        Print (L"UefiCall address = 0x%x\n", (UINTN)UefiCall);
        for (ArgIndex = 0; ArgIndex < MAX_ARG_NUM; ArgIndex++){
          Print (L"Arg[%d]= 0x%x\n", ArgIndex, Arg[ArgIndex]);
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

        Print (L"UefiCall is done\n");
        AsciiStrnCpyS(
          FunctionLog.StatusStr,
          sizeof(FunctionLog.StatusStr),
          STATUS_DONE,
          sizeof(STATUS_DONE)
          );
        Status = ShellSetFilePosition(LogFileHandle, Position);
        Status = ShellWriteFile (LogFileHandle, &BufferSize, &FunctionLog);
        Status = ShellFlushFile (LogFileHandle);
        //
        // Cannot simply free the input Arg buffer because some protocol
        // functions might continue to use the buffer after the call,
        // e.g. if the call is to register a callback buffer for a event, etc.
        //
        //FreeBufferList(&AllocatedBufferList);

      case TYPE_CLASS_STRUCTURE:
        //recursive process here

      default:
        ;
    }
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
    FieldOffset += StructFieldTypeHeader->TypeSize;
    //
    // Use the Next field type size to decide the current field alignment
    //
    if ((FieldIndex+1) < StructTypeHeader->StructFieldNum){
      NextStructFieldTypeHeader = GetStructFieldTypeInfo(&MergedTypeInfoList, StructTypeHeader, FieldIndex+1);
      if (NextStructFieldTypeHeader == NULL){
        Print (L"Error! NextStructFieldTypeHeader is NULL\n");
        continue;
      }
      if (NextStructFieldTypeHeader->TypeSize >= STRUCTURE_DEFAULT_ALIGNMENT){
        Alignment = STRUCTURE_DEFAULT_ALIGNMENT;
      } else {
        Alignment = 4;
      }

      if (FieldOffset % Alignment != 0){
        AlignmentOffset = Alignment - (FieldOffset % Alignment);
      }else{
        AlignmentOffset = 0;
      }
      Print (L"AlignmentOffset = 0x%x\n", AlignmentOffset);
      FieldOffset += AlignmentOffset;
    }
  }

  //
  // Cannot simply free the input Arg buffer because some protocol
  // functions might continue to use the buffer after the call,
  // e.g. if the call is to register a callback buffer for a event, etc.
  //
  //FreeBufferList(&AllocatedBufferList);
  ShellCloseFile(&LogFileHandle);
  Print (L"FuzzingProtocol done\n");
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
    Print (L"Error! Add NULL TypeName.\n");
    return EFI_INVALID_PARAMETER;
  }

  if (CheckTypeInfoExist(TypeInfoList, TypeInfoHdr)) {
    return EFI_SUCCESS;
  }

  NodePtr = AllocateZeroPool (sizeof (TYPE_INFO_NODE));
  if (NodePtr == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  // Print (L"TypeClass= 0x%x\n", TypeInfoHdr->TypeClass);
  // Print (L"TypeSize= 0x%x\n", TypeInfoHdr->TypeSize);
  Print (L"TypeName= %a\n", TypeInfoHdr->TypeName);

  NodePtr->Signature = TYPE_INFO_NODE_SIGNATURE;
  NodePtr->TypeInfoHdr = TypeInfoHdr;
  InsertTailList (TypeInfoList, &NodePtr->Link);

  return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
LocateMergeTypeInfo (
  OUT  LIST_ENTRY     *TypeInfoList
  )
{
  EFI_STATUS                Status;
  UINTN                     Index;
  UINTN                     TypeInfoIndex;
  UINTN                     TypeInfoHandleCount;
  EFI_HANDLE                *TypeInfoHandleBuffer;
  VOID                      **TypeInfoListPtr;
  TYPE_INFO_HEADER          *TypeInfoPtr;
  EFI_LOADED_IMAGE_PROTOCOL *LoadedImage;

  if (TypeInfoList == NULL){
    return EFI_INVALID_PARAMETER;
  }
  //
  // 
  //
  TypeInfoHandleCount  = 0;
  TypeInfoHandleBuffer = NULL;
  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gInterfaceTypeInfoProtocolGuid,
                  NULL,
                  &TypeInfoHandleCount,
                  &TypeInfoHandleBuffer
                  );

  if (EFI_ERROR (Status) || (TypeInfoHandleCount == 0) || (TypeInfoHandleBuffer == NULL)) {
    return EFI_NOT_FOUND;
  }

  for (TypeInfoIndex = 0; TypeInfoIndex < TypeInfoHandleCount; TypeInfoIndex++) {
    //
    // Get the Interface TypeInfo protocol.
    //
    Status = gBS->HandleProtocol(
                    TypeInfoHandleBuffer[TypeInfoIndex],
                    &gInterfaceTypeInfoProtocolGuid,
                    (VOID **) &TypeInfoListPtr
                    );

    if (EFI_ERROR (Status)) {
      continue;
    }
    //
    // There should be a EfiLoadedImage protocol on the same image handle.
    //
    Status = gBS->HandleProtocol(
                    TypeInfoHandleBuffer[TypeInfoIndex],
                    &gEfiLoadedImageProtocolGuid,
                    (VOID **) &LoadedImage
                    );

    if (EFI_ERROR (Status)) {
      continue;
    }
    //Print(L"Get a valid interface type info protocol!\n");

    // mGaugeString[0] = 0;
    // DpGetNameFromHandle(TypeInfoHandleBuffer[TypeInfoIndex]);
    // Print (L"Load the typeinfo protocol from image handle: %s\n", mGaugeString);
    // Print(L"TypeInfoListPtr=0x%x\n", TypeInfoListPtr);
    Index = 0;
    while (TypeInfoListPtr[Index] != NULL ){
      //Print(L"TypeInfoListPtr[%d]=0x%x\n", Index, TypeInfoListPtr[Index]);
      TypeInfoPtr = (TYPE_INFO_HEADER *)TypeInfoListPtr[Index];
      AddTypeInfo(TypeInfoList, TypeInfoPtr);
      Index++;
    }
  }

  FreePool (TypeInfoHandleBuffer);

  return EFI_SUCCESS;
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
  EFI_STATUS                Status;
  UINTN                     HandleCount;
  UINTN                     HandleIndex;
  LIST_ENTRY                *Link;
  TYPE_INFO_NODE            *NodePtr;
  EFI_HANDLE                *HandleBuffer;
  TYPE_INFO_HEADER          *TypeInfoPtr;
  VOID                      *Interface;
  TYPE__EFI_PROTOCOL        *TypeProtocolPtr;

  Print(L"\nHello Uefi Module Fuzzer!\n");
  //
  // 1. Locate and merge all Interface type info protocols in current system.
  //
  InitializeListHead (&MergedTypeInfoList);
  LocateMergeTypeInfo(&MergedTypeInfoList);
  if (IsListEmpty (&MergedTypeInfoList)) {
    Print(L"There is no interface type info available!\n");
    return(0);
  }
/*   // debug the NULL TypeName
  for(Link = GetFirstNode (&MergedTypeInfoList);
      !IsNull (&MergedTypeInfoList, Link);
      Link = GetNextNode (&MergedTypeInfoList, Link)){
    NodePtr = TYPE_INFO_NODE_FROM_LINK (Link);
    TypeInfoPtr = NodePtr->TypeInfoHdr;
    Print(L"TypeInfoPtr->TypeName=%a\n", TypeInfoPtr->TypeName);
    if (TypeInfoPtr->TypeName == NULL){
      Print(L"TypeInfoPtr->TypeName is NULL!\n");
      return 0;
    }
  } */
  //
  // 2. Locate all handles in the system, or your interested handle sets
  // BugBug: Should locate handles according to user's Arg input
  //
  HandleCount  = 0;
  HandleBuffer = NULL;
  Status = gBS->LocateHandleBuffer (
                  AllHandles,
                  NULL,
                  NULL,
                  &HandleCount,
                  &HandleBuffer
                  );
  if (EFI_ERROR (Status) || (HandleCount == 0) || (HandleBuffer == NULL)) {
    Print(L"There is no handle available!!\n");
    return(0);
  }
  //
  // 3. For every handle, check whether there is a known type protocol installed on it
  //
  for (HandleIndex = 0; HandleIndex < HandleCount; HandleIndex++) {
    for(Link = GetFirstNode (&MergedTypeInfoList);
        !IsNull (&MergedTypeInfoList, Link);
        Link = GetNextNode (&MergedTypeInfoList, Link)){
      NodePtr = TYPE_INFO_NODE_FROM_LINK (Link);
      TypeInfoPtr = NodePtr->TypeInfoHdr;
      switch (TypeInfoPtr->TypeClass){
        case TYPE_CLASS_PROTOCOL:
          TypeProtocolPtr = (TYPE__EFI_PROTOCOL *)TypeInfoPtr;
          Status = gBS->HandleProtocol(
                          HandleBuffer[HandleIndex],
                          (EFI_GUID *)TypeProtocolPtr->ProtocolGuid,
                          (VOID **) &Interface
                          );

          if (EFI_ERROR (Status)) {
            continue;
          }
          //
          // 4. If yes, then fuzz test this handle's protocol with its type info
          //
          FuzzingProtocol(HandleBuffer[HandleIndex], TypeProtocolPtr);
        default:
          ;
      }
    }
  }

  FreePool (HandleBuffer);
  FreeTypeInfoList(&MergedTypeInfoList);

  return(0);
}
