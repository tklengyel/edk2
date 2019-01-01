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

typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL;

TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL TypeInfo__EFI_EXT_SCSI_PASS_THRU_PROTOCOL = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "Mode",
  .StructFieldTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_MODE*",
  .StructFieldName_2 = "PassThru",
  .StructFieldTypeName_2 = "EFI_EXT_SCSI_PASS_THRU_PASSTHRU",
  .StructFieldName_3 = "GetNextTargetLun",
  .StructFieldTypeName_3 = "EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN",
  .StructFieldName_4 = "BuildDevicePath",
  .StructFieldTypeName_4 = "EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH",
  .StructFieldName_5 = "GetTargetLun",
  .StructFieldTypeName_5 = "EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN",
  .StructFieldName_6 = "ResetChannel",
  .StructFieldTypeName_6 = "EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL",
  .StructFieldName_7 = "ResetTargetLun",
  .StructFieldTypeName_7 = "EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN",
  .StructFieldName_8 = "GetNextTarget",
  .StructFieldTypeName_8 = "EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EXT_SCSI_PASS_THRU_MODE_STAR;

TYPE__EFI_EXT_SCSI_PASS_THRU_MODE_STAR TypeInfo__EFI_EXT_SCSI_PASS_THRU_MODE_STAR = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_MODE*),
  .PointedType = "EFI_EXT_SCSI_PASS_THRU_MODE"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_MODE{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_MODE;

TYPE__EFI_EXT_SCSI_PASS_THRU_MODE TypeInfo__EFI_EXT_SCSI_PASS_THRU_MODE = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_MODE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "AdapterId",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Attributes",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "IoAlign",
  .StructFieldTypeName_3 = "UINT32"
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


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_PASSTHRU{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_PASSTHRU;

TYPE__EFI_EXT_SCSI_PASS_THRU_PASSTHRU TypeInfo__EFI_EXT_SCSI_PASS_THRU_PASSTHRU = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_PASSTHRU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_PASSTHRU),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_EVENT"
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


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL_STAR;

TYPE__EFI_EXT_SCSI_PASS_THRU_PROTOCOL_STAR TypeInfo__EFI_EXT_SCSI_PASS_THRU_PROTOCOL_STAR = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_PROTOCOL*),
  .PointedType = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL"
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


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET_STAR;

TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET_STAR TypeInfo__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET_STAR = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET*),
  .PointedType = "EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET;

TYPE__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET TypeInfo__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET),
  .StructFieldNum = 12,
  .StructFieldName_1 = "Timeout",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "InDataBuffer",
  .StructFieldTypeName_2 = "void*",
  .StructFieldName_3 = "OutDataBuffer",
  .StructFieldTypeName_3 = "void*",
  .StructFieldName_4 = "SenseData",
  .StructFieldTypeName_4 = "void*",
  .StructFieldName_5 = "Cdb",
  .StructFieldTypeName_5 = "void*",
  .StructFieldName_6 = "InTransferLength",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "OutTransferLength",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "CdbLength",
  .StructFieldTypeName_8 = "UINT8",
  .StructFieldName_9 = "DataDirection",
  .StructFieldTypeName_9 = "UINT8",
  .StructFieldName_10 = "HostAdapterStatus",
  .StructFieldTypeName_10 = "UINT8",
  .StructFieldName_11 = "TargetStatus",
  .StructFieldTypeName_11 = "UINT8",
  .StructFieldName_12 = "SenseDataLength",
  .StructFieldTypeName_12 = "UINT8"
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


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN;

TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8**",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64*"
};


typedef struct _TYPE__UINT8_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT8_STAR_STAR;

TYPE__UINT8_STAR_STAR TypeInfo__UINT8_STAR_STAR = {
  .TypeName = "UINT8**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT8**),
  .PointedType = "UINT8*"
};


typedef struct _TYPE__UINT64_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT64_STAR;

TYPE__UINT64_STAR TypeInfo__UINT64_STAR = {
  .TypeName = "UINT64*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT64*),
  .PointedType = "UINT64"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH;

TYPE__EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH TypeInfo__EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_DEVICE_PATH_PROTOCOL**"
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


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN;

TYPE__EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT8**",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT64*"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL;

TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL TypeInfo__EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN;

TYPE__EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN TypeInfo__EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET{
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
} TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET;

TYPE__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET = {
  .TypeName = "EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8**"
};


typedef struct _TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL;

TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL TypeInfo__EFI_ISCSI_INITIATOR_NAME_PROTOCOL = {
  .TypeName = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ISCSI_INITIATOR_NAME_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Get",
  .StructFieldTypeName_1 = "EFI_ISCSI_INITIATOR_NAME_GET",
  .StructFieldName_2 = "Set",
  .StructFieldTypeName_2 = "EFI_ISCSI_INITIATOR_NAME_SET"
};


typedef struct _TYPE__EFI_ISCSI_INITIATOR_NAME_GET{
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
} TYPE__EFI_ISCSI_INITIATOR_NAME_GET;

TYPE__EFI_ISCSI_INITIATOR_NAME_GET TypeInfo__EFI_ISCSI_INITIATOR_NAME_GET = {
  .TypeName = "EFI_ISCSI_INITIATOR_NAME_GET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ISCSI_INITIATOR_NAME_GET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL_STAR;

TYPE__EFI_ISCSI_INITIATOR_NAME_PROTOCOL_STAR TypeInfo__EFI_ISCSI_INITIATOR_NAME_PROTOCOL_STAR = {
  .TypeName = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ISCSI_INITIATOR_NAME_PROTOCOL*),
  .PointedType = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL"
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


typedef struct _TYPE__EFI_ISCSI_INITIATOR_NAME_SET{
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
} TYPE__EFI_ISCSI_INITIATOR_NAME_SET;

TYPE__EFI_ISCSI_INITIATOR_NAME_SET TypeInfo__EFI_ISCSI_INITIATOR_NAME_SET = {
  .TypeName = "EFI_ISCSI_INITIATOR_NAME_SET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ISCSI_INITIATOR_NAME_SET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL;

TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL = {
  .TypeName = "EFI_AUTHENTICATION_INFO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_AUTHENTICATION_INFO_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Get",
  .StructFieldTypeName_1 = "EFI_AUTHENTICATION_INFO_PROTOCOL_GET",
  .StructFieldName_2 = "Set",
  .StructFieldTypeName_2 = "EFI_AUTHENTICATION_INFO_PROTOCOL_SET"
};


typedef struct _TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_GET{
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
} TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_GET;

TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_GET TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_GET = {
  .TypeName = "EFI_AUTHENTICATION_INFO_PROTOCOL_GET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_AUTHENTICATION_INFO_PROTOCOL_GET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_AUTHENTICATION_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_STAR;

TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_STAR TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_STAR = {
  .TypeName = "EFI_AUTHENTICATION_INFO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_AUTHENTICATION_INFO_PROTOCOL*),
  .PointedType = "EFI_AUTHENTICATION_INFO_PROTOCOL"
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


typedef struct _TYPE__void_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__void_STAR_STAR;

TYPE__void_STAR_STAR TypeInfo__void_STAR_STAR = {
  .TypeName = "void**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(void**),
  .PointedType = "void*"
};


typedef struct _TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_SET{
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
} TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_SET;

TYPE__EFI_AUTHENTICATION_INFO_PROTOCOL_SET TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_SET = {
  .TypeName = "EFI_AUTHENTICATION_INFO_PROTOCOL_SET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_AUTHENTICATION_INFO_PROTOCOL_SET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_AUTHENTICATION_INFO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__HII_VENDOR_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__HII_VENDOR_DEVICE_PATH;

TYPE__HII_VENDOR_DEVICE_PATH TypeInfo__HII_VENDOR_DEVICE_PATH = {
  .TypeName = "HII_VENDOR_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(HII_VENDOR_DEVICE_PATH),
  .StructFieldNum = 2,
  .StructFieldName_1 = "VendorDevicePath",
  .StructFieldTypeName_1 = "VENDOR_DEVICE_PATH",
  .StructFieldName_2 = "End",
  .StructFieldTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL"
};


typedef struct _TYPE__VENDOR_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__VENDOR_DEVICE_PATH;

TYPE__VENDOR_DEVICE_PATH TypeInfo__VENDOR_DEVICE_PATH = {
  .TypeName = "VENDOR_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(VENDOR_DEVICE_PATH),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Header",
  .StructFieldTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL",
  .StructFieldName_2 = "Guid",
  .StructFieldTypeName_2 = "EFI_GUID"
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


typedef struct _TYPE__gEfiHiiConfigAccessProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiConfigAccessProtocolGuid;

TYPE__gEfiHiiConfigAccessProtocolGuid TypeInfo__gEfiHiiConfigAccessProtocolGuid = {
  .TypeName = "gEfiHiiConfigAccessProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiConfigAccessProtocolGuid,
  .InterfaceStructName = "EFI_HII_CONFIG_ACCESS_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL{
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
} TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL;

TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL TypeInfo__EFI_HII_CONFIG_ACCESS_PROTOCOL = {
  .TypeName = "EFI_HII_CONFIG_ACCESS_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_CONFIG_ACCESS_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "ExtractConfig",
  .StructFieldTypeName_1 = "EFI_HII_ACCESS_EXTRACT_CONFIG",
  .StructFieldName_2 = "RouteConfig",
  .StructFieldTypeName_2 = "EFI_HII_ACCESS_ROUTE_CONFIG",
  .StructFieldName_3 = "Callback",
  .StructFieldTypeName_3 = "EFI_HII_ACCESS_FORM_CALLBACK"
};


typedef struct _TYPE__EFI_HII_ACCESS_EXTRACT_CONFIG{
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
} TYPE__EFI_HII_ACCESS_EXTRACT_CONFIG;

TYPE__EFI_HII_ACCESS_EXTRACT_CONFIG TypeInfo__EFI_HII_ACCESS_EXTRACT_CONFIG = {
  .TypeName = "EFI_HII_ACCESS_EXTRACT_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_ACCESS_EXTRACT_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ACCESS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL_STAR;

TYPE__EFI_HII_CONFIG_ACCESS_PROTOCOL_STAR TypeInfo__EFI_HII_CONFIG_ACCESS_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_CONFIG_ACCESS_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_CONFIG_ACCESS_PROTOCOL*),
  .PointedType = "EFI_HII_CONFIG_ACCESS_PROTOCOL"
};


typedef struct _TYPE__EFI_STRING{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_STRING;

TYPE__EFI_STRING TypeInfo__EFI_STRING = {
  .TypeName = "EFI_STRING",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_STRING),
  .TypedefName = "CHAR16*"
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


typedef struct _TYPE__EFI_STRING_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STRING_STAR;

TYPE__EFI_STRING_STAR TypeInfo__EFI_STRING_STAR = {
  .TypeName = "EFI_STRING*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STRING*),
  .PointedType = "EFI_STRING"
};


typedef struct _TYPE__EFI_HII_ACCESS_ROUTE_CONFIG{
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
} TYPE__EFI_HII_ACCESS_ROUTE_CONFIG;

TYPE__EFI_HII_ACCESS_ROUTE_CONFIG TypeInfo__EFI_HII_ACCESS_ROUTE_CONFIG = {
  .TypeName = "EFI_HII_ACCESS_ROUTE_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_ACCESS_ROUTE_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ACCESS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_ACCESS_FORM_CALLBACK{
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
} TYPE__EFI_HII_ACCESS_FORM_CALLBACK;

TYPE__EFI_HII_ACCESS_FORM_CALLBACK TypeInfo__EFI_HII_ACCESS_FORM_CALLBACK = {
  .TypeName = "EFI_HII_ACCESS_FORM_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_ACCESS_FORM_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ACCESS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_BROWSER_ACTION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_QUESTION_ID",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IFR_TYPE_VALUE*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_BROWSER_ACTION_REQUEST*"
};


typedef struct _TYPE__EFI_BROWSER_ACTION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_BROWSER_ACTION;

TYPE__EFI_BROWSER_ACTION TypeInfo__EFI_BROWSER_ACTION = {
  .TypeName = "EFI_BROWSER_ACTION",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_BROWSER_ACTION),
  .BasicTypeName = "UINTN"
};


typedef struct _TYPE__EFI_QUESTION_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_QUESTION_ID;

TYPE__EFI_QUESTION_ID TypeInfo__EFI_QUESTION_ID = {
  .TypeName = "EFI_QUESTION_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_QUESTION_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_IFR_TYPE_VALUE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IFR_TYPE_VALUE_STAR;

TYPE__EFI_IFR_TYPE_VALUE_STAR TypeInfo__EFI_IFR_TYPE_VALUE_STAR = {
  .TypeName = "EFI_IFR_TYPE_VALUE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IFR_TYPE_VALUE*),
  .PointedType = "EFI_IFR_TYPE_VALUE"
};


typedef struct _TYPE__EFI_IFR_TYPE_VALUE{
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
} TYPE__EFI_IFR_TYPE_VALUE;

TYPE__EFI_IFR_TYPE_VALUE TypeInfo__EFI_IFR_TYPE_VALUE = {
  .TypeName = "EFI_IFR_TYPE_VALUE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IFR_TYPE_VALUE),
  .StructFieldNum = 9,
  .StructFieldName_1 = "u8",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "u16",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "u32",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "u64",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "b",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "time",
  .StructFieldTypeName_6 = "EFI_HII_TIME",
  .StructFieldName_7 = "date",
  .StructFieldTypeName_7 = "EFI_HII_DATE",
  .StructFieldName_8 = "string",
  .StructFieldTypeName_8 = "EFI_STRING_ID",
  .StructFieldName_9 = "ref",
  .StructFieldTypeName_9 = "EFI_HII_REF"
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


typedef struct _TYPE__EFI_HII_TIME{
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
} TYPE__EFI_HII_TIME;

TYPE__EFI_HII_TIME TypeInfo__EFI_HII_TIME = {
  .TypeName = "EFI_HII_TIME",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_TIME),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Hour",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Minute",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Second",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_HII_DATE{
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
} TYPE__EFI_HII_DATE;

TYPE__EFI_HII_DATE TypeInfo__EFI_HII_DATE = {
  .TypeName = "EFI_HII_DATE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_DATE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Year",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Month",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Day",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_STRING_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_STRING_ID;

TYPE__EFI_STRING_ID TypeInfo__EFI_STRING_ID = {
  .TypeName = "EFI_STRING_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_STRING_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_HII_REF{
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
} TYPE__EFI_HII_REF;

TYPE__EFI_HII_REF TypeInfo__EFI_HII_REF = {
  .TypeName = "EFI_HII_REF",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_REF),
  .StructFieldNum = 4,
  .StructFieldName_1 = "QuestionId",
  .StructFieldTypeName_1 = "EFI_QUESTION_ID",
  .StructFieldName_2 = "FormId",
  .StructFieldTypeName_2 = "EFI_FORM_ID",
  .StructFieldName_3 = "FormSetGuid",
  .StructFieldTypeName_3 = "EFI_GUID",
  .StructFieldName_4 = "DevicePath",
  .StructFieldTypeName_4 = "EFI_STRING_ID"
};


typedef struct _TYPE__EFI_FORM_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_FORM_ID;

TYPE__EFI_FORM_ID TypeInfo__EFI_FORM_ID = {
  .TypeName = "EFI_FORM_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_FORM_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_BROWSER_ACTION_REQUEST_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BROWSER_ACTION_REQUEST_STAR;

TYPE__EFI_BROWSER_ACTION_REQUEST_STAR TypeInfo__EFI_BROWSER_ACTION_REQUEST_STAR = {
  .TypeName = "EFI_BROWSER_ACTION_REQUEST*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BROWSER_ACTION_REQUEST*),
  .PointedType = "EFI_BROWSER_ACTION_REQUEST"
};


typedef struct _TYPE__EFI_BROWSER_ACTION_REQUEST{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_BROWSER_ACTION_REQUEST;

TYPE__EFI_BROWSER_ACTION_REQUEST TypeInfo__EFI_BROWSER_ACTION_REQUEST = {
  .TypeName = "EFI_BROWSER_ACTION_REQUEST",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_BROWSER_ACTION_REQUEST),
  .BasicTypeName = "UINTN"
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


typedef struct _TYPE__gEfiIScsiInitiatorNameProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIScsiInitiatorNameProtocolGuid;

TYPE__gEfiIScsiInitiatorNameProtocolGuid TypeInfo__gEfiIScsiInitiatorNameProtocolGuid = {
  .TypeName = "gEfiIScsiInitiatorNameProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIScsiInitiatorNameProtocolGuid,
  .InterfaceStructName = "EFI_ISCSI_INITIATOR_NAME_PROTOCOL"
};


typedef struct _TYPE__gEfiDns6ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDns6ProtocolGuid;

TYPE__gEfiDns6ProtocolGuid TypeInfo__gEfiDns6ProtocolGuid = {
  .TypeName = "gEfiDns6ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDns6ProtocolGuid,
  .InterfaceStructName = "EFI_DNS6_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiConfigRoutingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiConfigRoutingProtocolGuid;

TYPE__gEfiHiiConfigRoutingProtocolGuid TypeInfo__gEfiHiiConfigRoutingProtocolGuid = {
  .TypeName = "gEfiHiiConfigRoutingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiConfigRoutingProtocolGuid,
  .InterfaceStructName = "EFI_HII_CONFIG_ROUTING_PROTOCOL"
};


typedef struct _TYPE__gEfiDhcp4ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDhcp4ProtocolGuid;

TYPE__gEfiDhcp4ProtocolGuid TypeInfo__gEfiDhcp4ProtocolGuid = {
  .TypeName = "gEfiDhcp4ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDhcp4ProtocolGuid,
  .InterfaceStructName = "EFI_DHCP4_PROTOCOL"
};


typedef struct _TYPE__gEfiIp4Config2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp4Config2ProtocolGuid;

TYPE__gEfiIp4Config2ProtocolGuid TypeInfo__gEfiIp4Config2ProtocolGuid = {
  .TypeName = "gEfiIp4Config2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp4Config2ProtocolGuid,
  .InterfaceStructName = "EFI_IP4_CONFIG2_PROTOCOL"
};


typedef struct _TYPE__gEfiNetworkInterfaceIdentifierProtocolGuid_31{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiNetworkInterfaceIdentifierProtocolGuid_31;

TYPE__gEfiNetworkInterfaceIdentifierProtocolGuid_31 TypeInfo__gEfiNetworkInterfaceIdentifierProtocolGuid_31 = {
  .TypeName = "gEfiNetworkInterfaceIdentifierProtocolGuid_31",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiNetworkInterfaceIdentifierProtocolGuid_31,
  .InterfaceStructName = "EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL"
};


typedef struct _TYPE__gEfiDhcp6ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDhcp6ProtocolGuid;

TYPE__gEfiDhcp6ProtocolGuid TypeInfo__gEfiDhcp6ProtocolGuid = {
  .TypeName = "gEfiDhcp6ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDhcp6ProtocolGuid,
  .InterfaceStructName = "EFI_DHCP6_PROTOCOL"
};


typedef struct _TYPE__gEfiAcpiTableProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAcpiTableProtocolGuid;

TYPE__gEfiAcpiTableProtocolGuid TypeInfo__gEfiAcpiTableProtocolGuid = {
  .TypeName = "gEfiAcpiTableProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAcpiTableProtocolGuid,
  .InterfaceStructName = "EFI_ACPI_TABLE_PROTOCOL"
};


typedef struct _TYPE__gEfiSimpleNetworkProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleNetworkProtocolGuid;

TYPE__gEfiSimpleNetworkProtocolGuid TypeInfo__gEfiSimpleNetworkProtocolGuid = {
  .TypeName = "gEfiSimpleNetworkProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleNetworkProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_NETWORK_PROTOCOL"
};


typedef struct _TYPE__gEfiManagedNetworkServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiManagedNetworkServiceBindingProtocolGuid;

TYPE__gEfiManagedNetworkServiceBindingProtocolGuid TypeInfo__gEfiManagedNetworkServiceBindingProtocolGuid = {
  .TypeName = "gEfiManagedNetworkServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiManagedNetworkServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__gEfiFormBrowser2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFormBrowser2ProtocolGuid;

TYPE__gEfiFormBrowser2ProtocolGuid TypeInfo__gEfiFormBrowser2ProtocolGuid = {
  .TypeName = "gEfiFormBrowser2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFormBrowser2ProtocolGuid,
  .InterfaceStructName = "EFI_FORM_BROWSER2_PROTOCOL"
};


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


typedef struct _TYPE__gEfiExtScsiPassThruProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiExtScsiPassThruProtocolGuid;

TYPE__gEfiExtScsiPassThruProtocolGuid TypeInfo__gEfiExtScsiPassThruProtocolGuid = {
  .TypeName = "gEfiExtScsiPassThruProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiExtScsiPassThruProtocolGuid,
  .InterfaceStructName = "EFI_EXT_SCSI_PASS_THRU_PROTOCOL"
};


typedef struct _TYPE__gEfiAdapterInformationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAdapterInformationProtocolGuid;

TYPE__gEfiAdapterInformationProtocolGuid TypeInfo__gEfiAdapterInformationProtocolGuid = {
  .TypeName = "gEfiAdapterInformationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAdapterInformationProtocolGuid,
  .InterfaceStructName = "EFI_ADAPTER_INFORMATION_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiImageProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiImageProtocolGuid;

TYPE__gEfiHiiImageProtocolGuid TypeInfo__gEfiHiiImageProtocolGuid = {
  .TypeName = "gEfiHiiImageProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiImageProtocolGuid,
  .InterfaceStructName = "EFI_HII_IMAGE_PROTOCOL"
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


typedef struct _TYPE__gEfiIp6ConfigProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp6ConfigProtocolGuid;

TYPE__gEfiIp6ConfigProtocolGuid TypeInfo__gEfiIp6ConfigProtocolGuid = {
  .TypeName = "gEfiIp6ConfigProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp6ConfigProtocolGuid,
  .InterfaceStructName = "EFI_IP6_CONFIG_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiFontProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiFontProtocolGuid;

TYPE__gEfiHiiFontProtocolGuid TypeInfo__gEfiHiiFontProtocolGuid = {
  .TypeName = "gEfiHiiFontProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiFontProtocolGuid,
  .InterfaceStructName = "EFI_HII_FONT_PROTOCOL"
};


typedef struct _TYPE__gEfiManagedNetworkProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiManagedNetworkProtocolGuid;

TYPE__gEfiManagedNetworkProtocolGuid TypeInfo__gEfiManagedNetworkProtocolGuid = {
  .TypeName = "gEfiManagedNetworkProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiManagedNetworkProtocolGuid,
  .InterfaceStructName = "EFI_MANAGED_NETWORK_PROTOCOL"
};


typedef struct _TYPE__gEfiAuthenticationInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAuthenticationInfoProtocolGuid;

TYPE__gEfiAuthenticationInfoProtocolGuid TypeInfo__gEfiAuthenticationInfoProtocolGuid = {
  .TypeName = "gEfiAuthenticationInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAuthenticationInfoProtocolGuid,
  .InterfaceStructName = "EFI_AUTHENTICATION_INFO_PROTOCOL"
};


typedef struct _TYPE__gEfiDns4ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDns4ProtocolGuid;

TYPE__gEfiDns4ProtocolGuid TypeInfo__gEfiDns4ProtocolGuid = {
  .TypeName = "gEfiDns4ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDns4ProtocolGuid,
  .InterfaceStructName = "EFI_DNS4_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiDatabaseProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiDatabaseProtocolGuid;

TYPE__gEfiHiiDatabaseProtocolGuid TypeInfo__gEfiHiiDatabaseProtocolGuid = {
  .TypeName = "gEfiHiiDatabaseProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiDatabaseProtocolGuid,
  .InterfaceStructName = "EFI_HII_DATABASE_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiStringProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiStringProtocolGuid;

TYPE__gEfiHiiStringProtocolGuid TypeInfo__gEfiHiiStringProtocolGuid = {
  .TypeName = "gEfiHiiStringProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiStringProtocolGuid,
  .InterfaceStructName = "EFI_HII_STRING_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDns6ProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  &TypeInfo__gEfiExtScsiPassThruProtocolGuid,
  &TypeInfo__gEfiDns4ProtocolGuid,
  &TypeInfo__gEfiDhcp4ProtocolGuid,
  &TypeInfo__gEfiNetworkInterfaceIdentifierProtocolGuid_31,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiExtScsiPassThruProtocolGuid,
  &TypeInfo__gEfiAuthenticationInfoProtocolGuid,
  &TypeInfo__gEfiIScsiInitiatorNameProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiIScsiInitiatorNameProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  &TypeInfo__gEfiAuthenticationInfoProtocolGuid,
  &TypeInfo__gEfiAcpiTableProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiFormBrowser2ProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiIp6ConfigProtocolGuid,
  &TypeInfo__gEfiExtScsiPassThruProtocolGuid,
  &TypeInfo__gEfiManagedNetworkProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiManagedNetworkServiceBindingProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiIp4Config2ProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiHiiConfigAccessProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_PROTOCOL,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_MODE_STAR,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_MODE,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_PASSTHRU,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_PROTOCOL_STAR,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET_STAR,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET_LUN,
  &TypeInfo__UINT8_STAR_STAR,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_BUILD_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_TARGET_LUN,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_RESET_CHANNEL,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_RESET_TARGET_LUN,
  &TypeInfo__EFI_EXT_SCSI_PASS_THRU_GET_NEXT_TARGET,
  &TypeInfo__EFI_ISCSI_INITIATOR_NAME_PROTOCOL,
  &TypeInfo__EFI_ISCSI_INITIATOR_NAME_GET,
  &TypeInfo__EFI_ISCSI_INITIATOR_NAME_PROTOCOL_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_ISCSI_INITIATOR_NAME_SET,
  &TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL,
  &TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_GET,
  &TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_AUTHENTICATION_INFO_PROTOCOL_SET,
  &TypeInfo__HII_VENDOR_DEVICE_PATH,
  &TypeInfo__VENDOR_DEVICE_PATH,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__gEfiHiiConfigAccessProtocolGuid,
  &TypeInfo__EFI_HII_CONFIG_ACCESS_PROTOCOL,
  &TypeInfo__EFI_HII_ACCESS_EXTRACT_CONFIG,
  &TypeInfo__EFI_HII_CONFIG_ACCESS_PROTOCOL_STAR,
  &TypeInfo__EFI_STRING,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_STRING_STAR,
  &TypeInfo__EFI_HII_ACCESS_ROUTE_CONFIG,
  &TypeInfo__EFI_HII_ACCESS_FORM_CALLBACK,
  &TypeInfo__EFI_BROWSER_ACTION,
  &TypeInfo__EFI_QUESTION_ID,
  &TypeInfo__EFI_IFR_TYPE_VALUE_STAR,
  &TypeInfo__EFI_IFR_TYPE_VALUE,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_HII_TIME,
  &TypeInfo__EFI_HII_DATE,
  &TypeInfo__EFI_STRING_ID,
  &TypeInfo__EFI_HII_REF,
  &TypeInfo__EFI_FORM_ID,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST_STAR,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
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
  &TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR,
  &TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME,
  NULL
};