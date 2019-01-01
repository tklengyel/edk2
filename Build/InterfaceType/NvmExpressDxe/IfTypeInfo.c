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

typedef struct _TYPE__gEfiDevicePathProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDevicePathProtocolGuid;

TYPE__gEfiDevicePathProtocolGuid TypeInfo__gEfiDevicePathProtocolGuid = {
  .TypeName = "gEfiDevicePathProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDevicePathProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_PROTOCOL"
};


typedef struct _TYPE__EFI_DEVICE_PATH_PROTOCOL{
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
} TYPE__EFI_DEVICE_PATH_PROTOCOL;

TYPE__EFI_DEVICE_PATH_PROTOCOL TypeInfo__EFI_DEVICE_PATH_PROTOCOL = {
  .TypeName = "EFI_DEVICE_PATH_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DEVICE_PATH_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "SubType",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Length",
  .StructFieldTypeName_3 = "UINT8[2]"
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


typedef struct _TYPE__UINT8_ARRAY_2{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_2;

TYPE__UINT8_ARRAY_2 TypeInfo__UINT8_ARRAY_2 = {
  .TypeName = "UINT8[2]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[2]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_BLOCK_IO_PROTOCOL{
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
} TYPE__EFI_BLOCK_IO_PROTOCOL;

TYPE__EFI_BLOCK_IO_PROTOCOL TypeInfo__EFI_BLOCK_IO_PROTOCOL = {
  .TypeName = "EFI_BLOCK_IO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BLOCK_IO_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Media",
  .StructFieldTypeName_2 = "EFI_BLOCK_IO_MEDIA*",
  .StructFieldName_3 = "Reset",
  .StructFieldTypeName_3 = "EFI_BLOCK_RESET",
  .StructFieldName_4 = "ReadBlocks",
  .StructFieldTypeName_4 = "EFI_BLOCK_READ",
  .StructFieldName_5 = "WriteBlocks",
  .StructFieldTypeName_5 = "EFI_BLOCK_WRITE",
  .StructFieldName_6 = "FlushBlocks",
  .StructFieldTypeName_6 = "EFI_BLOCK_FLUSH"
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


typedef struct _TYPE__EFI_BLOCK_IO_MEDIA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BLOCK_IO_MEDIA_STAR;

TYPE__EFI_BLOCK_IO_MEDIA_STAR TypeInfo__EFI_BLOCK_IO_MEDIA_STAR = {
  .TypeName = "EFI_BLOCK_IO_MEDIA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BLOCK_IO_MEDIA*),
  .PointedType = "EFI_BLOCK_IO_MEDIA"
};


typedef struct _TYPE__EFI_BLOCK_IO_MEDIA{
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
  const CHAR8* StructFieldName_7;
  const CHAR8* StructFieldTypeName_7;
  const CHAR8* StructFieldName_8;
  const CHAR8* StructFieldTypeName_8;
  const CHAR8* StructFieldName_9;
  const CHAR8* StructFieldTypeName_9;
  const CHAR8* StructFieldName_10;
  const CHAR8* StructFieldTypeName_10;
  const CHAR8* StructFieldName_11;
  const CHAR8* StructFieldTypeName_11;
  const CHAR8* StructFieldName_12;
  const CHAR8* StructFieldTypeName_12;
} TYPE__EFI_BLOCK_IO_MEDIA;

TYPE__EFI_BLOCK_IO_MEDIA TypeInfo__EFI_BLOCK_IO_MEDIA = {
  .TypeName = "EFI_BLOCK_IO_MEDIA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BLOCK_IO_MEDIA),
  .StructFieldNum = 12,
  .StructFieldName_1 = "MediaId",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "RemovableMedia",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "MediaPresent",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "LogicalPartition",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "ReadOnly",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "WriteCaching",
  .StructFieldTypeName_6 = "BOOLEAN",
  .StructFieldName_7 = "BlockSize",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "IoAlign",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "LastBlock",
  .StructFieldTypeName_9 = "EFI_LBA",
  .StructFieldName_10 = "LowestAlignedLba",
  .StructFieldTypeName_10 = "EFI_LBA",
  .StructFieldName_11 = "LogicalBlocksPerPhysicalBlock",
  .StructFieldTypeName_11 = "UINT32",
  .StructFieldName_12 = "OptimalTransferLengthGranularity",
  .StructFieldTypeName_12 = "UINT32"
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


typedef struct _TYPE__EFI_BLOCK_RESET{
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
} TYPE__EFI_BLOCK_RESET;

TYPE__EFI_BLOCK_RESET TypeInfo__EFI_BLOCK_RESET = {
  .TypeName = "EFI_BLOCK_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
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


typedef struct _TYPE__EFI_BLOCK_IO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BLOCK_IO_PROTOCOL_STAR;

TYPE__EFI_BLOCK_IO_PROTOCOL_STAR TypeInfo__EFI_BLOCK_IO_PROTOCOL_STAR = {
  .TypeName = "EFI_BLOCK_IO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BLOCK_IO_PROTOCOL*),
  .PointedType = "EFI_BLOCK_IO_PROTOCOL"
};


typedef struct _TYPE__EFI_BLOCK_READ{
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
} TYPE__EFI_BLOCK_READ;

TYPE__EFI_BLOCK_READ TypeInfo__EFI_BLOCK_READ = {
  .TypeName = "EFI_BLOCK_READ",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_READ),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_LBA",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "void*"
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


typedef struct _TYPE__EFI_BLOCK_WRITE{
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
} TYPE__EFI_BLOCK_WRITE;

TYPE__EFI_BLOCK_WRITE TypeInfo__EFI_BLOCK_WRITE = {
  .TypeName = "EFI_BLOCK_WRITE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_WRITE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_LBA",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_BLOCK_FLUSH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_BLOCK_FLUSH;

TYPE__EFI_BLOCK_FLUSH TypeInfo__EFI_BLOCK_FLUSH = {
  .TypeName = "EFI_BLOCK_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO_PROTOCOL*"
};


typedef struct _TYPE__gEfiBlockIo2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBlockIo2ProtocolGuid;

TYPE__gEfiBlockIo2ProtocolGuid TypeInfo__gEfiBlockIo2ProtocolGuid = {
  .TypeName = "gEfiBlockIo2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBlockIo2ProtocolGuid,
  .InterfaceStructName = "EFI_BLOCK_IO2_PROTOCOL"
};


typedef struct _TYPE__EFI_BLOCK_IO2_PROTOCOL{
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
} TYPE__EFI_BLOCK_IO2_PROTOCOL;

TYPE__EFI_BLOCK_IO2_PROTOCOL TypeInfo__EFI_BLOCK_IO2_PROTOCOL = {
  .TypeName = "EFI_BLOCK_IO2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BLOCK_IO2_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Media",
  .StructFieldTypeName_1 = "EFI_BLOCK_IO_MEDIA*",
  .StructFieldName_2 = "Reset",
  .StructFieldTypeName_2 = "EFI_BLOCK_RESET_EX",
  .StructFieldName_3 = "ReadBlocksEx",
  .StructFieldTypeName_3 = "EFI_BLOCK_READ_EX",
  .StructFieldName_4 = "WriteBlocksEx",
  .StructFieldTypeName_4 = "EFI_BLOCK_WRITE_EX",
  .StructFieldName_5 = "FlushBlocksEx",
  .StructFieldTypeName_5 = "EFI_BLOCK_FLUSH_EX"
};


typedef struct _TYPE__EFI_BLOCK_RESET_EX{
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
} TYPE__EFI_BLOCK_RESET_EX;

TYPE__EFI_BLOCK_RESET_EX TypeInfo__EFI_BLOCK_RESET_EX = {
  .TypeName = "EFI_BLOCK_RESET_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_RESET_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_BLOCK_IO2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BLOCK_IO2_PROTOCOL_STAR;

TYPE__EFI_BLOCK_IO2_PROTOCOL_STAR TypeInfo__EFI_BLOCK_IO2_PROTOCOL_STAR = {
  .TypeName = "EFI_BLOCK_IO2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BLOCK_IO2_PROTOCOL*),
  .PointedType = "EFI_BLOCK_IO2_PROTOCOL"
};


typedef struct _TYPE__EFI_BLOCK_READ_EX{
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
} TYPE__EFI_BLOCK_READ_EX;

TYPE__EFI_BLOCK_READ_EX TypeInfo__EFI_BLOCK_READ_EX = {
  .TypeName = "EFI_BLOCK_READ_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_READ_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_LBA",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_BLOCK_IO2_TOKEN*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "void*"
};


typedef struct _TYPE__EFI_BLOCK_IO2_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BLOCK_IO2_TOKEN_STAR;

TYPE__EFI_BLOCK_IO2_TOKEN_STAR TypeInfo__EFI_BLOCK_IO2_TOKEN_STAR = {
  .TypeName = "EFI_BLOCK_IO2_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BLOCK_IO2_TOKEN*),
  .PointedType = "EFI_BLOCK_IO2_TOKEN"
};


typedef struct _TYPE__EFI_BLOCK_IO2_TOKEN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_BLOCK_IO2_TOKEN;

TYPE__EFI_BLOCK_IO2_TOKEN TypeInfo__EFI_BLOCK_IO2_TOKEN = {
  .TypeName = "EFI_BLOCK_IO2_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BLOCK_IO2_TOKEN),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Event",
  .StructFieldTypeName_1 = "EFI_EVENT",
  .StructFieldName_2 = "TransactionStatus",
  .StructFieldTypeName_2 = "EFI_STATUS"
};


typedef struct _TYPE__EFI_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_EVENT;

TYPE__EFI_EVENT TypeInfo__EFI_EVENT = {
  .TypeName = "EFI_EVENT",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_EVENT),
  .TypedefName = "void*"
};


typedef struct _TYPE__EFI_BLOCK_WRITE_EX{
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
} TYPE__EFI_BLOCK_WRITE_EX;

TYPE__EFI_BLOCK_WRITE_EX TypeInfo__EFI_BLOCK_WRITE_EX = {
  .TypeName = "EFI_BLOCK_WRITE_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_WRITE_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_LBA",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_BLOCK_IO2_TOKEN*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "void*"
};


typedef struct _TYPE__EFI_BLOCK_FLUSH_EX{
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
} TYPE__EFI_BLOCK_FLUSH_EX;

TYPE__EFI_BLOCK_FLUSH_EX TypeInfo__EFI_BLOCK_FLUSH_EX = {
  .TypeName = "EFI_BLOCK_FLUSH_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BLOCK_FLUSH_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BLOCK_IO2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_BLOCK_IO2_TOKEN*"
};


typedef struct _TYPE__gEfiDiskInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDiskInfoProtocolGuid;

TYPE__gEfiDiskInfoProtocolGuid TypeInfo__gEfiDiskInfoProtocolGuid = {
  .TypeName = "gEfiDiskInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDiskInfoProtocolGuid,
  .InterfaceStructName = "EFI_DISK_INFO_PROTOCOL"
};


typedef struct _TYPE__EFI_DISK_INFO_PROTOCOL{
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
} TYPE__EFI_DISK_INFO_PROTOCOL;

TYPE__EFI_DISK_INFO_PROTOCOL TypeInfo__EFI_DISK_INFO_PROTOCOL = {
  .TypeName = "EFI_DISK_INFO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DISK_INFO_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Interface",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "Inquiry",
  .StructFieldTypeName_2 = "EFI_DISK_INFO_INQUIRY",
  .StructFieldName_3 = "Identify",
  .StructFieldTypeName_3 = "EFI_DISK_INFO_IDENTIFY",
  .StructFieldName_4 = "SenseData",
  .StructFieldTypeName_4 = "EFI_DISK_INFO_SENSE_DATA",
  .StructFieldName_5 = "WhichIde",
  .StructFieldTypeName_5 = "EFI_DISK_INFO_WHICH_IDE"
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


typedef struct _TYPE__EFI_DISK_INFO_INQUIRY{
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
} TYPE__EFI_DISK_INFO_INQUIRY;

TYPE__EFI_DISK_INFO_INQUIRY TypeInfo__EFI_DISK_INFO_INQUIRY = {
  .TypeName = "EFI_DISK_INFO_INQUIRY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISK_INFO_INQUIRY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DISK_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__EFI_DISK_INFO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DISK_INFO_PROTOCOL_STAR;

TYPE__EFI_DISK_INFO_PROTOCOL_STAR TypeInfo__EFI_DISK_INFO_PROTOCOL_STAR = {
  .TypeName = "EFI_DISK_INFO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DISK_INFO_PROTOCOL*),
  .PointedType = "EFI_DISK_INFO_PROTOCOL"
};


typedef struct _TYPE__UINT32_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT32_STAR;

TYPE__UINT32_STAR TypeInfo__UINT32_STAR = {
  .TypeName = "UINT32*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT32*),
  .PointedType = "UINT32"
};


typedef struct _TYPE__EFI_DISK_INFO_IDENTIFY{
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
} TYPE__EFI_DISK_INFO_IDENTIFY;

TYPE__EFI_DISK_INFO_IDENTIFY TypeInfo__EFI_DISK_INFO_IDENTIFY = {
  .TypeName = "EFI_DISK_INFO_IDENTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISK_INFO_IDENTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DISK_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__EFI_DISK_INFO_SENSE_DATA{
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
} TYPE__EFI_DISK_INFO_SENSE_DATA;

TYPE__EFI_DISK_INFO_SENSE_DATA TypeInfo__EFI_DISK_INFO_SENSE_DATA = {
  .TypeName = "EFI_DISK_INFO_SENSE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISK_INFO_SENSE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DISK_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT8*"
};


typedef struct _TYPE__UINT8_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT8_STAR;

TYPE__UINT8_STAR TypeInfo__UINT8_STAR = {
  .TypeName = "UINT8*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT8*),
  .PointedType = "UINT8"
};


typedef struct _TYPE__EFI_DISK_INFO_WHICH_IDE{
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
} TYPE__EFI_DISK_INFO_WHICH_IDE;

TYPE__EFI_DISK_INFO_WHICH_IDE TypeInfo__EFI_DISK_INFO_WHICH_IDE = {
  .TypeName = "EFI_DISK_INFO_WHICH_IDE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISK_INFO_WHICH_IDE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DISK_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT32*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__gEfiStorageSecurityCommandProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiStorageSecurityCommandProtocolGuid;

TYPE__gEfiStorageSecurityCommandProtocolGuid TypeInfo__gEfiStorageSecurityCommandProtocolGuid = {
  .TypeName = "gEfiStorageSecurityCommandProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiStorageSecurityCommandProtocolGuid,
  .InterfaceStructName = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL"
};


typedef struct _TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL;

TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL TypeInfo__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL = {
  .TypeName = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_STORAGE_SECURITY_COMMAND_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ReceiveData",
  .StructFieldTypeName_1 = "EFI_STORAGE_SECURITY_RECEIVE_DATA",
  .StructFieldName_2 = "SendData",
  .StructFieldTypeName_2 = "EFI_STORAGE_SECURITY_SEND_DATA"
};


typedef struct _TYPE__EFI_STORAGE_SECURITY_RECEIVE_DATA{
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
} TYPE__EFI_STORAGE_SECURITY_RECEIVE_DATA;

TYPE__EFI_STORAGE_SECURITY_RECEIVE_DATA TypeInfo__EFI_STORAGE_SECURITY_RECEIVE_DATA = {
  .TypeName = "EFI_STORAGE_SECURITY_RECEIVE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_STORAGE_SECURITY_RECEIVE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 8,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT16",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "void*",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "UINTN*"
};


typedef struct _TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL_STAR;

TYPE__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL_STAR TypeInfo__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL_STAR = {
  .TypeName = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STORAGE_SECURITY_COMMAND_PROTOCOL*),
  .PointedType = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL"
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


typedef struct _TYPE__EFI_STORAGE_SECURITY_SEND_DATA{
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
} TYPE__EFI_STORAGE_SECURITY_SEND_DATA;

TYPE__EFI_STORAGE_SECURITY_SEND_DATA TypeInfo__EFI_STORAGE_SECURITY_SEND_DATA = {
  .TypeName = "EFI_STORAGE_SECURITY_SEND_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_STORAGE_SECURITY_SEND_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT16",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void*"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Mode",
  .StructFieldTypeName_1 = "EFI_NVM_EXPRESS_PASS_THRU_MODE*",
  .StructFieldName_2 = "PassThru",
  .StructFieldTypeName_2 = "EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU",
  .StructFieldName_3 = "GetNextNamespace",
  .StructFieldTypeName_3 = "EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE",
  .StructFieldName_4 = "BuildDevicePath",
  .StructFieldTypeName_4 = "EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH",
  .StructFieldName_5 = "GetNamespace",
  .StructFieldTypeName_5 = "EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE_STAR;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE_STAR TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_MODE_STAR = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_MODE*),
  .PointedType = "EFI_NVM_EXPRESS_PASS_THRU_MODE"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_MODE TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_MODE = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_MODE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Attributes",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "IoAlign",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "NvmeVersion",
  .StructFieldTypeName_3 = "UINT32"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL_STAR;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL_STAR TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL_STAR = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*),
  .PointedType = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET_STAR;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET_STAR TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET_STAR = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET*),
  .PointedType = "EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET{
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
  const CHAR8* StructFieldName_7;
  const CHAR8* StructFieldTypeName_7;
  const CHAR8* StructFieldName_8;
  const CHAR8* StructFieldTypeName_8;
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET),
  .StructFieldNum = 8,
  .StructFieldName_1 = "CommandTimeout",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "TransferBuffer",
  .StructFieldTypeName_2 = "void*",
  .StructFieldName_3 = "TransferLength",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "MetadataBuffer",
  .StructFieldTypeName_4 = "void*",
  .StructFieldName_5 = "MetadataLength",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "QueueType",
  .StructFieldTypeName_6 = "UINT8",
  .StructFieldName_7 = "NvmeCmd",
  .StructFieldTypeName_7 = "EFI_NVM_EXPRESS_COMMAND*",
  .StructFieldName_8 = "NvmeCompletion",
  .StructFieldTypeName_8 = "EFI_NVM_EXPRESS_COMPLETION*"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_COMMAND_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NVM_EXPRESS_COMMAND_STAR;

TYPE__EFI_NVM_EXPRESS_COMMAND_STAR TypeInfo__EFI_NVM_EXPRESS_COMMAND_STAR = {
  .TypeName = "EFI_NVM_EXPRESS_COMMAND*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_COMMAND*),
  .PointedType = "EFI_NVM_EXPRESS_COMMAND"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_COMMAND{
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
  const CHAR8* StructFieldName_7;
  const CHAR8* StructFieldTypeName_7;
  const CHAR8* StructFieldName_8;
  const CHAR8* StructFieldTypeName_8;
  const CHAR8* StructFieldName_9;
  const CHAR8* StructFieldTypeName_9;
  const CHAR8* StructFieldName_10;
  const CHAR8* StructFieldTypeName_10;
  const CHAR8* StructFieldName_11;
  const CHAR8* StructFieldTypeName_11;
} TYPE__EFI_NVM_EXPRESS_COMMAND;

TYPE__EFI_NVM_EXPRESS_COMMAND TypeInfo__EFI_NVM_EXPRESS_COMMAND = {
  .TypeName = "EFI_NVM_EXPRESS_COMMAND",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_COMMAND),
  .StructFieldNum = 11,
  .StructFieldName_1 = "Cdw0",
  .StructFieldTypeName_1 = "NVME_CDW0",
  .StructFieldName_2 = "Flags",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Nsid",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "Cdw2",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "Cdw3",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "Cdw10",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "Cdw11",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "Cdw12",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "Cdw13",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "Cdw14",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "Cdw15",
  .StructFieldTypeName_11 = "UINT32"
};


typedef struct _TYPE__NVME_CDW0{
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
} TYPE__NVME_CDW0;

TYPE__NVME_CDW0 TypeInfo__NVME_CDW0 = {
  .TypeName = "NVME_CDW0",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(NVME_CDW0),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Opcode",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "FusedOperation",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Reserved",
  .StructFieldTypeName_3 = "UINT32"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_COMPLETION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NVM_EXPRESS_COMPLETION_STAR;

TYPE__EFI_NVM_EXPRESS_COMPLETION_STAR TypeInfo__EFI_NVM_EXPRESS_COMPLETION_STAR = {
  .TypeName = "EFI_NVM_EXPRESS_COMPLETION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_COMPLETION*),
  .PointedType = "EFI_NVM_EXPRESS_COMPLETION"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_COMPLETION{
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
} TYPE__EFI_NVM_EXPRESS_COMPLETION;

TYPE__EFI_NVM_EXPRESS_COMPLETION TypeInfo__EFI_NVM_EXPRESS_COMPLETION = {
  .TypeName = "EFI_NVM_EXPRESS_COMPLETION",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_COMPLETION),
  .StructFieldNum = 4,
  .StructFieldName_1 = "DW0",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "DW1",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "DW2",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "DW3",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32*"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL**"
};


typedef struct _TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR;

TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR = {
  .TypeName = "EFI_DEVICE_PATH_PROTOCOL**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DEVICE_PATH_PROTOCOL**),
  .PointedType = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR;

TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR = {
  .TypeName = "EFI_DEVICE_PATH_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DEVICE_PATH_PROTOCOL*),
  .PointedType = "EFI_DEVICE_PATH_PROTOCOL"
};


typedef struct _TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE{
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
} TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE;

TYPE__EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE = {
  .TypeName = "EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__gEfiDriverSupportedEfiVersionProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverSupportedEfiVersionProtocolGuid;

TYPE__gEfiDriverSupportedEfiVersionProtocolGuid TypeInfo__gEfiDriverSupportedEfiVersionProtocolGuid = {
  .TypeName = "gEfiDriverSupportedEfiVersionProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverSupportedEfiVersionProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL"
};


typedef struct _TYPE__EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL;

TYPE__EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL TypeInfo__EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL = {
  .TypeName = "EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Length",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "FirmwareVersion",
  .StructFieldTypeName_2 = "UINT32"
};


typedef struct _TYPE__gEfiDriverBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverBindingProtocolGuid;

TYPE__gEfiDriverBindingProtocolGuid TypeInfo__gEfiDriverBindingProtocolGuid = {
  .TypeName = "gEfiDriverBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverBindingProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_BINDING_PROTOCOL"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_PROTOCOL{
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
} TYPE__EFI_DRIVER_BINDING_PROTOCOL;

TYPE__EFI_DRIVER_BINDING_PROTOCOL TypeInfo__EFI_DRIVER_BINDING_PROTOCOL = {
  .TypeName = "EFI_DRIVER_BINDING_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Supported",
  .StructFieldTypeName_1 = "EFI_DRIVER_BINDING_SUPPORTED",
  .StructFieldName_2 = "Start",
  .StructFieldTypeName_2 = "EFI_DRIVER_BINDING_START",
  .StructFieldName_3 = "Stop",
  .StructFieldTypeName_3 = "EFI_DRIVER_BINDING_STOP",
  .StructFieldName_4 = "Version",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "ImageHandle",
  .StructFieldTypeName_5 = "EFI_HANDLE",
  .StructFieldName_6 = "DriverBindingHandle",
  .StructFieldTypeName_6 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_SUPPORTED{
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
} TYPE__EFI_DRIVER_BINDING_SUPPORTED;

TYPE__EFI_DRIVER_BINDING_SUPPORTED TypeInfo__EFI_DRIVER_BINDING_SUPPORTED = {
  .TypeName = "EFI_DRIVER_BINDING_SUPPORTED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_SUPPORTED),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR;

TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR = {
  .TypeName = "EFI_DRIVER_BINDING_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_PROTOCOL*),
  .PointedType = "EFI_DRIVER_BINDING_PROTOCOL"
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


typedef struct _TYPE__EFI_DRIVER_BINDING_START{
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
} TYPE__EFI_DRIVER_BINDING_START;

TYPE__EFI_DRIVER_BINDING_START TypeInfo__EFI_DRIVER_BINDING_START = {
  .TypeName = "EFI_DRIVER_BINDING_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_STOP{
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
} TYPE__EFI_DRIVER_BINDING_STOP;

TYPE__EFI_DRIVER_BINDING_STOP TypeInfo__EFI_DRIVER_BINDING_STOP = {
  .TypeName = "EFI_DRIVER_BINDING_STOP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_STOP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HANDLE_STAR;

TYPE__EFI_HANDLE_STAR TypeInfo__EFI_HANDLE_STAR = {
  .TypeName = "EFI_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HANDLE*),
  .PointedType = "EFI_HANDLE"
};


typedef struct _TYPE__gEfiComponentName2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiComponentName2ProtocolGuid;

TYPE__gEfiComponentName2ProtocolGuid TypeInfo__gEfiComponentName2ProtocolGuid = {
  .TypeName = "gEfiComponentName2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiComponentName2ProtocolGuid,
  .InterfaceStructName = "EFI_COMPONENT_NAME2_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_PROTOCOL{
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
} TYPE__EFI_COMPONENT_NAME2_PROTOCOL;

TYPE__EFI_COMPONENT_NAME2_PROTOCOL TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL = {
  .TypeName = "EFI_COMPONENT_NAME2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetDriverName",
  .StructFieldTypeName_1 = "EFI_COMPONENT_NAME2_GET_DRIVER_NAME",
  .StructFieldName_2 = "GetControllerName",
  .StructFieldTypeName_2 = "EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME",
  .StructFieldName_3 = "SupportedLanguages",
  .StructFieldTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME{
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
} TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME;

TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME TypeInfo__EFI_COMPONENT_NAME2_GET_DRIVER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME2_GET_DRIVER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_GET_DRIVER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR;

TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL_STAR = {
  .TypeName = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_PROTOCOL*),
  .PointedType = "EFI_COMPONENT_NAME2_PROTOCOL"
};


typedef struct _TYPE__CHAR8_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR8_STAR;

TYPE__CHAR8_STAR TypeInfo__CHAR8_STAR = {
  .TypeName = "CHAR8*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR8*),
  .PointedType = "CHAR8"
};


typedef struct _TYPE__CHAR8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__CHAR8;

TYPE__CHAR8 TypeInfo__CHAR8 = {
  .TypeName = "CHAR8",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(CHAR8),
  .BasicTypeName = "char"
};


typedef struct _TYPE__CHAR16_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR16_STAR_STAR;

TYPE__CHAR16_STAR_STAR TypeInfo__CHAR16_STAR_STAR = {
  .TypeName = "CHAR16**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR16**),
  .PointedType = "CHAR16*"
};


typedef struct _TYPE__CHAR16_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR16_STAR;

TYPE__CHAR16_STAR TypeInfo__CHAR16_STAR = {
  .TypeName = "CHAR16*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR16*),
  .PointedType = "CHAR16"
};


typedef struct _TYPE__CHAR16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__CHAR16;

TYPE__CHAR16 TypeInfo__CHAR16 = {
  .TypeName = "CHAR16",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(CHAR16),
  .BasicTypeName = "unsignedshort"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME{
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
} TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME;

TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "CHAR16**"
};


typedef struct _TYPE__gEfiComponentNameProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiComponentNameProtocolGuid;

TYPE__gEfiComponentNameProtocolGuid TypeInfo__gEfiComponentNameProtocolGuid = {
  .TypeName = "gEfiComponentNameProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiComponentNameProtocolGuid,
  .InterfaceStructName = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_PROTOCOL{
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
} TYPE__EFI_COMPONENT_NAME_PROTOCOL;

TYPE__EFI_COMPONENT_NAME_PROTOCOL TypeInfo__EFI_COMPONENT_NAME_PROTOCOL = {
  .TypeName = "EFI_COMPONENT_NAME_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetDriverName",
  .StructFieldTypeName_1 = "EFI_COMPONENT_NAME_GET_DRIVER_NAME",
  .StructFieldName_2 = "GetControllerName",
  .StructFieldTypeName_2 = "EFI_COMPONENT_NAME_GET_CONTROLLER_NAME",
  .StructFieldName_3 = "SupportedLanguages",
  .StructFieldTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME{
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
} TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME;

TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME_GET_DRIVER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_GET_DRIVER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR;

TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR = {
  .TypeName = "EFI_COMPONENT_NAME_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_PROTOCOL*),
  .PointedType = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME{
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
} TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME;

TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME_GET_CONTROLLER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_GET_CONTROLLER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "CHAR16**"
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


typedef struct _TYPE__gEfiResetNotificationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiResetNotificationProtocolGuid;

TYPE__gEfiResetNotificationProtocolGuid TypeInfo__gEfiResetNotificationProtocolGuid = {
  .TypeName = "gEfiResetNotificationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiResetNotificationProtocolGuid,
  .InterfaceStructName = "EFI_RESET_NOTIFICATION_PROTOCOL"
};


typedef struct _TYPE__gEfiNvmExpressPassThruProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiNvmExpressPassThruProtocolGuid;

TYPE__gEfiNvmExpressPassThruProtocolGuid TypeInfo__gEfiNvmExpressPassThruProtocolGuid = {
  .TypeName = "gEfiNvmExpressPassThruProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiNvmExpressPassThruProtocolGuid,
  .InterfaceStructName = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL"
};


typedef struct _TYPE__gEfiBlockIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBlockIoProtocolGuid;

TYPE__gEfiBlockIoProtocolGuid TypeInfo__gEfiBlockIoProtocolGuid = {
  .TypeName = "gEfiBlockIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBlockIoProtocolGuid,
  .InterfaceStructName = "EFI_BLOCK_IO_PROTOCOL"
};


typedef struct _TYPE__gEfiPciIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciIoProtocolGuid;

TYPE__gEfiPciIoProtocolGuid TypeInfo__gEfiPciIoProtocolGuid = {
  .TypeName = "gEfiPciIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciIoProtocolGuid,
  .InterfaceStructName = "EFI_PCI_IO_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiBlockIoProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiStorageSecurityCommandProtocolGuid,
  &TypeInfo__gEfiNvmExpressPassThruProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiStorageSecurityCommandProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiResetNotificationProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiDriverSupportedEfiVersionProtocolGuid,
  &TypeInfo__gEfiBlockIo2ProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDiskInfoProtocolGuid,
  &TypeInfo__gEfiNvmExpressPassThruProtocolGuid,
  &TypeInfo__gEfiBlockIoProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_BLOCK_IO_PROTOCOL,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_BLOCK_IO_MEDIA_STAR,
  &TypeInfo__EFI_BLOCK_IO_MEDIA,
  &TypeInfo__UINT32,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_LBA,
  &TypeInfo__EFI_BLOCK_RESET,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__EFI_BLOCK_IO_PROTOCOL_STAR,
  &TypeInfo__EFI_BLOCK_READ,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_BLOCK_WRITE,
  &TypeInfo__EFI_BLOCK_FLUSH,
  &TypeInfo__gEfiBlockIo2ProtocolGuid,
  &TypeInfo__EFI_BLOCK_IO2_PROTOCOL,
  &TypeInfo__EFI_BLOCK_RESET_EX,
  &TypeInfo__EFI_BLOCK_IO2_PROTOCOL_STAR,
  &TypeInfo__EFI_BLOCK_READ_EX,
  &TypeInfo__EFI_BLOCK_IO2_TOKEN_STAR,
  &TypeInfo__EFI_BLOCK_IO2_TOKEN,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_BLOCK_WRITE_EX,
  &TypeInfo__EFI_BLOCK_FLUSH_EX,
  &TypeInfo__gEfiDiskInfoProtocolGuid,
  &TypeInfo__EFI_DISK_INFO_PROTOCOL,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__EFI_DISK_INFO_INQUIRY,
  &TypeInfo__EFI_DISK_INFO_PROTOCOL_STAR,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_DISK_INFO_IDENTIFY,
  &TypeInfo__EFI_DISK_INFO_SENSE_DATA,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_DISK_INFO_WHICH_IDE,
  &TypeInfo__gEfiStorageSecurityCommandProtocolGuid,
  &TypeInfo__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL,
  &TypeInfo__EFI_STORAGE_SECURITY_RECEIVE_DATA,
  &TypeInfo__EFI_STORAGE_SECURITY_COMMAND_PROTOCOL_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_STORAGE_SECURITY_SEND_DATA,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_MODE_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_MODE,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PASSTHRU,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET,
  &TypeInfo__EFI_NVM_EXPRESS_COMMAND_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_COMMAND,
  &TypeInfo__NVME_CDW0,
  &TypeInfo__EFI_NVM_EXPRESS_COMPLETION_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_COMPLETION,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_GET_NEXT_NAMESPACE,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_BUILD_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_NVM_EXPRESS_PASS_THRU_GET_NAMESPACE,
  &TypeInfo__gEfiDriverSupportedEfiVersionProtocolGuid,
  &TypeInfo__EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__EFI_DRIVER_BINDING_START,
  &TypeInfo__EFI_DRIVER_BINDING_STOP,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME2_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL_STAR,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR,
  &TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME,
  NULL
};