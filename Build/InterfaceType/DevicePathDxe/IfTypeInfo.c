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

typedef struct _TYPE__gEfiDevicePathUtilitiesProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDevicePathUtilitiesProtocolGuid;

TYPE__gEfiDevicePathUtilitiesProtocolGuid TypeInfo__gEfiDevicePathUtilitiesProtocolGuid = {
  .TypeName = "gEfiDevicePathUtilitiesProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDevicePathUtilitiesProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_UTILITIES_PROTOCOL"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILITIES_PROTOCOL{
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
} TYPE__EFI_DEVICE_PATH_UTILITIES_PROTOCOL;

TYPE__EFI_DEVICE_PATH_UTILITIES_PROTOCOL TypeInfo__EFI_DEVICE_PATH_UTILITIES_PROTOCOL = {
  .TypeName = "EFI_DEVICE_PATH_UTILITIES_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILITIES_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetDevicePathSize",
  .StructFieldTypeName_1 = "EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE",
  .StructFieldName_2 = "DuplicateDevicePath",
  .StructFieldTypeName_2 = "EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH",
  .StructFieldName_3 = "AppendDevicePath",
  .StructFieldTypeName_3 = "EFI_DEVICE_PATH_UTILS_APPEND_PATH",
  .StructFieldName_4 = "AppendDeviceNode",
  .StructFieldTypeName_4 = "EFI_DEVICE_PATH_UTILS_APPEND_NODE",
  .StructFieldName_5 = "AppendDevicePathInstance",
  .StructFieldTypeName_5 = "EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE",
  .StructFieldName_6 = "GetNextDevicePathInstance",
  .StructFieldTypeName_6 = "EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE",
  .StructFieldName_7 = "IsDevicePathMultiInstance",
  .StructFieldTypeName_7 = "EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE",
  .StructFieldName_8 = "CreateDeviceNode",
  .StructFieldTypeName_8 = "EFI_DEVICE_PATH_UTILS_CREATE_NODE"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE;

TYPE__EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE TypeInfo__EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*"
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


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH;

TYPE__EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH TypeInfo__EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_APPEND_PATH{
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
} TYPE__EFI_DEVICE_PATH_UTILS_APPEND_PATH;

TYPE__EFI_DEVICE_PATH_UTILS_APPEND_PATH TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_PATH = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_APPEND_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_APPEND_PATH),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_APPEND_NODE{
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
} TYPE__EFI_DEVICE_PATH_UTILS_APPEND_NODE;

TYPE__EFI_DEVICE_PATH_UTILS_APPEND_NODE TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_NODE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_APPEND_NODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_APPEND_NODE),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE{
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
} TYPE__EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE;

TYPE__EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE{
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
} TYPE__EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE;

TYPE__EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE TypeInfo__EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL**",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*"
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


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE;

TYPE__EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE TypeInfo__EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*"
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


typedef struct _TYPE__EFI_DEVICE_PATH_UTILS_CREATE_NODE{
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
} TYPE__EFI_DEVICE_PATH_UTILS_CREATE_NODE;

TYPE__EFI_DEVICE_PATH_UTILS_CREATE_NODE TypeInfo__EFI_DEVICE_PATH_UTILS_CREATE_NODE = {
  .TypeName = "EFI_DEVICE_PATH_UTILS_CREATE_NODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_UTILS_CREATE_NODE),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT8",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16"
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


typedef struct _TYPE__gEfiDevicePathToTextProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDevicePathToTextProtocolGuid;

TYPE__gEfiDevicePathToTextProtocolGuid TypeInfo__gEfiDevicePathToTextProtocolGuid = {
  .TypeName = "gEfiDevicePathToTextProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDevicePathToTextProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_TO_TEXT_PROTOCOL"
};


typedef struct _TYPE__EFI_DEVICE_PATH_TO_TEXT_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DEVICE_PATH_TO_TEXT_PROTOCOL;

TYPE__EFI_DEVICE_PATH_TO_TEXT_PROTOCOL TypeInfo__EFI_DEVICE_PATH_TO_TEXT_PROTOCOL = {
  .TypeName = "EFI_DEVICE_PATH_TO_TEXT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DEVICE_PATH_TO_TEXT_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ConvertDeviceNodeToText",
  .StructFieldTypeName_1 = "EFI_DEVICE_PATH_TO_TEXT_NODE",
  .StructFieldName_2 = "ConvertDevicePathToText",
  .StructFieldTypeName_2 = "EFI_DEVICE_PATH_TO_TEXT_PATH"
};


typedef struct _TYPE__EFI_DEVICE_PATH_TO_TEXT_NODE{
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
} TYPE__EFI_DEVICE_PATH_TO_TEXT_NODE;

TYPE__EFI_DEVICE_PATH_TO_TEXT_NODE TypeInfo__EFI_DEVICE_PATH_TO_TEXT_NODE = {
  .TypeName = "EFI_DEVICE_PATH_TO_TEXT_NODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_TO_TEXT_NODE),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
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


typedef struct _TYPE__EFI_DEVICE_PATH_TO_TEXT_PATH{
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
} TYPE__EFI_DEVICE_PATH_TO_TEXT_PATH;

TYPE__EFI_DEVICE_PATH_TO_TEXT_PATH TypeInfo__EFI_DEVICE_PATH_TO_TEXT_PATH = {
  .TypeName = "EFI_DEVICE_PATH_TO_TEXT_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_TO_TEXT_PATH),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__gEfiDevicePathFromTextProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDevicePathFromTextProtocolGuid;

TYPE__gEfiDevicePathFromTextProtocolGuid TypeInfo__gEfiDevicePathFromTextProtocolGuid = {
  .TypeName = "gEfiDevicePathFromTextProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDevicePathFromTextProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL"
};


typedef struct _TYPE__EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL;

TYPE__EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL = {
  .TypeName = "EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ConvertTextToDeviceNode",
  .StructFieldTypeName_1 = "EFI_DEVICE_PATH_FROM_TEXT_NODE",
  .StructFieldName_2 = "ConvertTextToDevicePath",
  .StructFieldTypeName_2 = "EFI_DEVICE_PATH_FROM_TEXT_PATH"
};


typedef struct _TYPE__EFI_DEVICE_PATH_FROM_TEXT_NODE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DEVICE_PATH_FROM_TEXT_NODE;

TYPE__EFI_DEVICE_PATH_FROM_TEXT_NODE TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_NODE = {
  .TypeName = "EFI_DEVICE_PATH_FROM_TEXT_NODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_FROM_TEXT_NODE),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_FROM_TEXT_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DEVICE_PATH_FROM_TEXT_PATH;

TYPE__EFI_DEVICE_PATH_FROM_TEXT_PATH TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_PATH = {
  .TypeName = "EFI_DEVICE_PATH_FROM_TEXT_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DEVICE_PATH_FROM_TEXT_PATH),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
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

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathFromTextProtocolGuid,
  &TypeInfo__gEfiDevicePathToTextProtocolGuid,
  &TypeInfo__gEfiDevicePathUtilitiesProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiDevicePathUtilitiesProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_UTILITIES_PROTOCOL,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_GET_DEVICE_PATH_SIZE,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_DUP_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_PATH,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_NODE,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_APPEND_INSTANCE,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_GET_NEXT_INSTANCE,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_IS_MULTI_INSTANCE,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_DEVICE_PATH_UTILS_CREATE_NODE,
  &TypeInfo__UINT16,
  &TypeInfo__gEfiDevicePathToTextProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_TO_TEXT_PROTOCOL,
  &TypeInfo__EFI_DEVICE_PATH_TO_TEXT_NODE,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_DEVICE_PATH_TO_TEXT_PATH,
  &TypeInfo__gEfiDevicePathFromTextProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL,
  &TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_NODE,
  &TypeInfo__EFI_DEVICE_PATH_FROM_TEXT_PATH,
  NULL
};