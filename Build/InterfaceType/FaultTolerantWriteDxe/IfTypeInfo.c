#include "IfTypeInfo.h"
typedef enum {
  TYPE_CLASS_BASIC,
  TYPE_CLASS_STRUCTURE,
  TYPE_CLASS_FUNCTION,
  TYPE_CLASS_VAR_PARAMLIST,
  TYPE_CLASS_POINTER,
  TYPE_CLASS_PROTOCOL,
  TYPE_CLASS_TYPEDEF,
  TYPE_CLASS_ARRAY,
  TYPE_CLASS_ENUM
} TYPE_CLASS;
typedef enum {
  IO_IN,
  IO_OUT,
  IO_IN_OUT,
  IO_NULL,
} IO_CLASS;

typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
  const CHAR8* StructFieldName_3;
  const CHAR8* StructFieldTypeName_3;
  const CHAR8* StructFieldName_4;
  const CHAR8* StructFieldTypeName_4;
  const CHAR8* StructFieldName_5;
  const CHAR8* StructFieldTypeName_5;
  const CHAR8* StructFieldName_6;
  const CHAR8* StructFieldTypeName_6;
} TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL;

TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL TypeInfo__EFI_FAULT_TOLERANT_WRITE_PROTOCOL = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "GetMaxBlockSize",
  .StructFieldTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE",
  .StructFieldName_2 = "Allocate",
  .StructFieldTypeName_2 = "EFI_FAULT_TOLERANT_WRITE_ALLOCATE",
  .StructFieldName_3 = "Write",
  .StructFieldTypeName_3 = "EFI_FAULT_TOLERANT_WRITE_WRITE",
  .StructFieldName_4 = "Restart",
  .StructFieldTypeName_4 = "EFI_FAULT_TOLERANT_WRITE_RESTART",
  .StructFieldName_5 = "Abort",
  .StructFieldTypeName_5 = "EFI_FAULT_TOLERANT_WRITE_ABORT",
  .StructFieldName_6 = "GetLastWrite",
  .StructFieldTypeName_6 = "EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
  const UINTN ParameterInOut_2;
  const CHAR8* ParameterTypeName_2;
} TYPE__EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE;

TYPE__EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE TypeInfo__EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*"
};


typedef struct _TYPE__EFI_STATUS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_STATUS;

TYPE__EFI_STATUS TypeInfo__EFI_STATUS = {
  .TypeName = "EFI_STATUS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_STATUS),
  .BasicTypeName = "RETURN_STATUS"
};


typedef struct _TYPE__RETURN_STATUS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__RETURN_STATUS;

TYPE__RETURN_STATUS TypeInfo__RETURN_STATUS = {
  .TypeName = "RETURN_STATUS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(RETURN_STATUS),
  .BasicTypeName = "UINTN"
};


typedef struct _TYPE__UINTN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__UINTN;

TYPE__UINTN TypeInfo__UINTN = {
  .TypeName = "UINTN",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(UINTN),
  .BasicTypeName = "UINT64"
};


typedef struct _TYPE__UINT64{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__UINT64;

TYPE__UINT64 TypeInfo__UINT64 = {
  .TypeName = "UINT64",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(UINT64),
  .BasicTypeName = "unsignedlonglong"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL_STAR;

TYPE__EFI_FAULT_TOLERANT_WRITE_PROTOCOL_STAR TypeInfo__EFI_FAULT_TOLERANT_WRITE_PROTOCOL_STAR = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_PROTOCOL*),
  .PointedType = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL"
};


typedef struct _TYPE__UINTN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINTN_STAR;

TYPE__UINTN_STAR TypeInfo__UINTN_STAR = {
  .TypeName = "UINTN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINTN*),
  .PointedType = "UINTN"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_ALLOCATE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
  const UINTN ParameterInOut_2;
  const CHAR8* ParameterTypeName_2;
  const UINTN ParameterInOut_3;
  const CHAR8* ParameterTypeName_3;
  const UINTN ParameterInOut_4;
  const CHAR8* ParameterTypeName_4;
} TYPE__EFI_FAULT_TOLERANT_WRITE_ALLOCATE;

TYPE__EFI_FAULT_TOLERANT_WRITE_ALLOCATE TypeInfo__EFI_FAULT_TOLERANT_WRITE_ALLOCATE = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_ALLOCATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_ALLOCATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__EFI_GUID_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR;

TYPE__EFI_GUID_STAR TypeInfo__EFI_GUID_STAR = {
  .TypeName = "EFI_GUID*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID*),
  .PointedType = "EFI_GUID"
};


typedef struct _TYPE__EFI_GUID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
  const CHAR8* StructFieldName_3;
  const CHAR8* StructFieldTypeName_3;
  const CHAR8* StructFieldName_4;
  const CHAR8* StructFieldTypeName_4;
} TYPE__EFI_GUID;

TYPE__EFI_GUID TypeInfo__EFI_GUID = {
  .TypeName = "EFI_GUID",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GUID),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Data1",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Data2",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Data3",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Data4",
  .StructFieldTypeName_4 = "UINT8[8]"
};


typedef struct _TYPE__UINT32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__UINT32;

TYPE__UINT32 TypeInfo__UINT32 = {
  .TypeName = "UINT32",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(UINT32),
  .BasicTypeName = "unsignedint"
};


typedef struct _TYPE__UINT16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__UINT16;

TYPE__UINT16 TypeInfo__UINT16 = {
  .TypeName = "UINT16",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(UINT16),
  .BasicTypeName = "unsignedshort"
};


typedef struct _TYPE__UINT8_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_8;

TYPE__UINT8_ARRAY_8 TypeInfo__UINT8_ARRAY_8 = {
  .TypeName = "UINT8[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[8]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__UINT8;

TYPE__UINT8 TypeInfo__UINT8 = {
  .TypeName = "UINT8",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(UINT8),
  .BasicTypeName = "unsignedchar"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_WRITE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
  const UINTN ParameterInOut_2;
  const CHAR8* ParameterTypeName_2;
  const UINTN ParameterInOut_3;
  const CHAR8* ParameterTypeName_3;
  const UINTN ParameterInOut_4;
  const CHAR8* ParameterTypeName_4;
  const UINTN ParameterInOut_5;
  const CHAR8* ParameterTypeName_5;
  const UINTN ParameterInOut_6;
  const CHAR8* ParameterTypeName_6;
  const UINTN ParameterInOut_7;
  const CHAR8* ParameterTypeName_7;
} TYPE__EFI_FAULT_TOLERANT_WRITE_WRITE;

TYPE__EFI_FAULT_TOLERANT_WRITE_WRITE TypeInfo__EFI_FAULT_TOLERANT_WRITE_WRITE = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_WRITE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_WRITE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_LBA",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_HANDLE",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void*"
};


typedef struct _TYPE__EFI_LBA{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_LBA;

TYPE__EFI_LBA TypeInfo__EFI_LBA = {
  .TypeName = "EFI_LBA",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_LBA),
  .BasicTypeName = "UINT64"
};


typedef struct _TYPE__void_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__void_STAR;

TYPE__void_STAR TypeInfo__void_STAR = {
  .TypeName = "void*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(void*),
  .PointedType = "void"
};


typedef struct _TYPE__EFI_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_HANDLE;

TYPE__EFI_HANDLE TypeInfo__EFI_HANDLE = {
  .TypeName = "EFI_HANDLE",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_HANDLE),
  .TypedefName = "void*"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_RESTART{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
  const UINTN ParameterInOut_2;
  const CHAR8* ParameterTypeName_2;
} TYPE__EFI_FAULT_TOLERANT_WRITE_RESTART;

TYPE__EFI_FAULT_TOLERANT_WRITE_RESTART TypeInfo__EFI_FAULT_TOLERANT_WRITE_RESTART = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_RESTART",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_RESTART),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_ABORT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_FAULT_TOLERANT_WRITE_ABORT;

TYPE__EFI_FAULT_TOLERANT_WRITE_ABORT TypeInfo__EFI_FAULT_TOLERANT_WRITE_ABORT = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_ABORT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_ABORT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*"
};


typedef struct _TYPE__EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
  const UINTN ParameterInOut_2;
  const CHAR8* ParameterTypeName_2;
  const UINTN ParameterInOut_3;
  const CHAR8* ParameterTypeName_3;
  const UINTN ParameterInOut_4;
  const CHAR8* ParameterTypeName_4;
  const UINTN ParameterInOut_5;
  const CHAR8* ParameterTypeName_5;
  const UINTN ParameterInOut_6;
  const CHAR8* ParameterTypeName_6;
  const UINTN ParameterInOut_7;
  const CHAR8* ParameterTypeName_7;
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
} TYPE__EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE;

TYPE__EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE TypeInfo__EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE = {
  .TypeName = "EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 8,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_LBA*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINTN*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "void*",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "BOOLEAN*"
};


typedef struct _TYPE__EFI_LBA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_LBA_STAR;

TYPE__EFI_LBA_STAR TypeInfo__EFI_LBA_STAR = {
  .TypeName = "EFI_LBA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_LBA*),
  .PointedType = "EFI_LBA"
};


typedef struct _TYPE__BOOLEAN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__BOOLEAN_STAR;

TYPE__BOOLEAN_STAR TypeInfo__BOOLEAN_STAR = {
  .TypeName = "BOOLEAN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(BOOLEAN*),
  .PointedType = "BOOLEAN"
};


typedef struct _TYPE__BOOLEAN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__BOOLEAN;

TYPE__BOOLEAN TypeInfo__BOOLEAN = {
  .TypeName = "BOOLEAN",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(BOOLEAN),
  .BasicTypeName = "unsignedchar"
};


typedef struct _TYPE__gEfiStatusCodeRuntimeProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiStatusCodeRuntimeProtocolGuid;

TYPE__gEfiStatusCodeRuntimeProtocolGuid TypeInfo__gEfiStatusCodeRuntimeProtocolGuid = {
  .TypeName = "gEfiStatusCodeRuntimeProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiStatusCodeRuntimeProtocolGuid,
  .InterfaceStructName = "EFI_STATUS_CODE_PROTOCOL"
};


typedef struct _TYPE__gEfiFirmwareVolumeBlockProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFirmwareVolumeBlockProtocolGuid;

TYPE__gEfiFirmwareVolumeBlockProtocolGuid TypeInfo__gEfiFirmwareVolumeBlockProtocolGuid = {
  .TypeName = "gEfiFirmwareVolumeBlockProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFirmwareVolumeBlockProtocolGuid,
  .InterfaceStructName = "EFI_FIRMWARE_VOLUME_BLOCK_PROTOCOL"
};


typedef struct _TYPE__gEfiLoadedImageProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadedImageProtocolGuid;

TYPE__gEfiLoadedImageProtocolGuid TypeInfo__gEfiLoadedImageProtocolGuid = {
  .TypeName = "gEfiLoadedImageProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadedImageProtocolGuid,
  .InterfaceStructName = "EFI_LOADED_IMAGE_PROTOCOL"
};


typedef struct _TYPE__gPcdProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gPcdProtocolGuid;

TYPE__gPcdProtocolGuid TypeInfo__gPcdProtocolGuid = {
  .TypeName = "gPcdProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gPcdProtocolGuid,
  .InterfaceStructName = "PCD_PROTOCOL"
};


typedef struct _TYPE__gEfiFaultTolerantWriteProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFaultTolerantWriteProtocolGuid;

TYPE__gEfiFaultTolerantWriteProtocolGuid TypeInfo__gEfiFaultTolerantWriteProtocolGuid = {
  .TypeName = "gEfiFaultTolerantWriteProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFaultTolerantWriteProtocolGuid,
  .InterfaceStructName = "EFI_FAULT_TOLERANT_WRITE_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiFaultTolerantWriteProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__gEfiFaultTolerantWriteProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiFirmwareVolumeBlockProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_PROTOCOL,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_GET_MAX_BLOCK_SIZE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_PROTOCOL_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_ALLOCATE,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT32,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_WRITE,
  &TypeInfo__EFI_LBA,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_RESTART,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_ABORT,
  &TypeInfo__EFI_FAULT_TOLERANT_WRITE_GET_LAST_WRITE,
  &TypeInfo__EFI_LBA_STAR,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__BOOLEAN,
  NULL
};