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


typedef struct _TYPE__gEfiSimpleTextInProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextInProtocolGuid;

TYPE__gEfiSimpleTextInProtocolGuid TypeInfo__gEfiSimpleTextInProtocolGuid = {
  .TypeName = "gEfiSimpleTextInProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextInProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_INPUT_RESET",
  .StructFieldName_2 = "ReadKeyStroke",
  .StructFieldTypeName_2 = "EFI_INPUT_READ_KEY",
  .StructFieldName_3 = "WaitForKey",
  .StructFieldTypeName_3 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_INPUT_RESET{
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
} TYPE__EFI_INPUT_RESET;

TYPE__EFI_INPUT_RESET TypeInfo__EFI_INPUT_RESET = {
  .TypeName = "EFI_INPUT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"
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


typedef struct _TYPE__EFI_INPUT_READ_KEY{
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
} TYPE__EFI_INPUT_READ_KEY;

TYPE__EFI_INPUT_READ_KEY TypeInfo__EFI_INPUT_READ_KEY = {
  .TypeName = "EFI_INPUT_READ_KEY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_READ_KEY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_INPUT_KEY*"
};


typedef struct _TYPE__EFI_INPUT_KEY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_INPUT_KEY_STAR;

TYPE__EFI_INPUT_KEY_STAR TypeInfo__EFI_INPUT_KEY_STAR = {
  .TypeName = "EFI_INPUT_KEY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_INPUT_KEY*),
  .PointedType = "EFI_INPUT_KEY"
};


typedef struct _TYPE__EFI_INPUT_KEY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_INPUT_KEY;

TYPE__EFI_INPUT_KEY TypeInfo__EFI_INPUT_KEY = {
  .TypeName = "EFI_INPUT_KEY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_INPUT_KEY),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ScanCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "UnicodeChar",
  .StructFieldTypeName_2 = "CHAR16"
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


typedef struct _TYPE__gEfiSimpleTextInputExProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextInputExProtocolGuid;

TYPE__gEfiSimpleTextInputExProtocolGuid TypeInfo__gEfiSimpleTextInputExProtocolGuid = {
  .TypeName = "gEfiSimpleTextInputExProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextInputExProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_INPUT_RESET_EX",
  .StructFieldName_2 = "ReadKeyStrokeEx",
  .StructFieldTypeName_2 = "EFI_INPUT_READ_KEY_EX",
  .StructFieldName_3 = "WaitForKeyEx",
  .StructFieldTypeName_3 = "EFI_EVENT",
  .StructFieldName_4 = "SetState",
  .StructFieldTypeName_4 = "EFI_SET_STATE",
  .StructFieldName_5 = "RegisterKeyNotify",
  .StructFieldTypeName_5 = "EFI_REGISTER_KEYSTROKE_NOTIFY",
  .StructFieldName_6 = "UnregisterKeyNotify",
  .StructFieldTypeName_6 = "EFI_UNREGISTER_KEYSTROKE_NOTIFY"
};


typedef struct _TYPE__EFI_INPUT_RESET_EX{
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
} TYPE__EFI_INPUT_RESET_EX;

TYPE__EFI_INPUT_RESET_EX TypeInfo__EFI_INPUT_RESET_EX = {
  .TypeName = "EFI_INPUT_RESET_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_RESET_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL"
};


typedef struct _TYPE__EFI_INPUT_READ_KEY_EX{
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
} TYPE__EFI_INPUT_READ_KEY_EX;

TYPE__EFI_INPUT_READ_KEY_EX TypeInfo__EFI_INPUT_READ_KEY_EX = {
  .TypeName = "EFI_INPUT_READ_KEY_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_READ_KEY_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_KEY_DATA*"
};


typedef struct _TYPE__EFI_KEY_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_KEY_DATA_STAR;

TYPE__EFI_KEY_DATA_STAR TypeInfo__EFI_KEY_DATA_STAR = {
  .TypeName = "EFI_KEY_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_KEY_DATA*),
  .PointedType = "EFI_KEY_DATA"
};


typedef struct _TYPE__EFI_KEY_DATA{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_KEY_DATA;

TYPE__EFI_KEY_DATA TypeInfo__EFI_KEY_DATA = {
  .TypeName = "EFI_KEY_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_KEY_DATA),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Key",
  .StructFieldTypeName_1 = "EFI_INPUT_KEY",
  .StructFieldName_2 = "KeyState",
  .StructFieldTypeName_2 = "EFI_KEY_STATE"
};


typedef struct _TYPE__EFI_KEY_STATE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_KEY_STATE;

TYPE__EFI_KEY_STATE TypeInfo__EFI_KEY_STATE = {
  .TypeName = "EFI_KEY_STATE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_KEY_STATE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "KeyShiftState",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "KeyToggleState",
  .StructFieldTypeName_2 = "EFI_KEY_TOGGLE_STATE"
};


typedef struct _TYPE__EFI_KEY_TOGGLE_STATE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_KEY_TOGGLE_STATE;

TYPE__EFI_KEY_TOGGLE_STATE TypeInfo__EFI_KEY_TOGGLE_STATE = {
  .TypeName = "EFI_KEY_TOGGLE_STATE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_KEY_TOGGLE_STATE),
  .BasicTypeName = "UINT8"
};


typedef struct _TYPE__EFI_SET_STATE{
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
} TYPE__EFI_SET_STATE;

TYPE__EFI_SET_STATE TypeInfo__EFI_SET_STATE = {
  .TypeName = "EFI_SET_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_KEY_TOGGLE_STATE*"
};


typedef struct _TYPE__EFI_KEY_TOGGLE_STATE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_KEY_TOGGLE_STATE_STAR;

TYPE__EFI_KEY_TOGGLE_STATE_STAR TypeInfo__EFI_KEY_TOGGLE_STATE_STAR = {
  .TypeName = "EFI_KEY_TOGGLE_STATE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_KEY_TOGGLE_STATE*),
  .PointedType = "EFI_KEY_TOGGLE_STATE"
};


typedef struct _TYPE__EFI_REGISTER_KEYSTROKE_NOTIFY{
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
} TYPE__EFI_REGISTER_KEYSTROKE_NOTIFY;

TYPE__EFI_REGISTER_KEYSTROKE_NOTIFY TypeInfo__EFI_REGISTER_KEYSTROKE_NOTIFY = {
  .TypeName = "EFI_REGISTER_KEYSTROKE_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_KEYSTROKE_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_KEY_DATA*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_KEY_NOTIFY_FUNCTION",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void**"
};


typedef struct _TYPE__EFI_KEY_NOTIFY_FUNCTION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_KEY_NOTIFY_FUNCTION;

TYPE__EFI_KEY_NOTIFY_FUNCTION TypeInfo__EFI_KEY_NOTIFY_FUNCTION = {
  .TypeName = "EFI_KEY_NOTIFY_FUNCTION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_KEY_NOTIFY_FUNCTION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_KEY_DATA*"
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


typedef struct _TYPE__EFI_UNREGISTER_KEYSTROKE_NOTIFY{
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
} TYPE__EFI_UNREGISTER_KEYSTROKE_NOTIFY;

TYPE__EFI_UNREGISTER_KEYSTROKE_NOTIFY TypeInfo__EFI_UNREGISTER_KEYSTROKE_NOTIFY = {
  .TypeName = "EFI_UNREGISTER_KEYSTROKE_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNREGISTER_KEYSTROKE_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__gEfiSimplePointerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimplePointerProtocolGuid;

TYPE__gEfiSimplePointerProtocolGuid TypeInfo__gEfiSimplePointerProtocolGuid = {
  .TypeName = "gEfiSimplePointerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimplePointerProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_POINTER_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_PROTOCOL{
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
} TYPE__EFI_SIMPLE_POINTER_PROTOCOL;

TYPE__EFI_SIMPLE_POINTER_PROTOCOL TypeInfo__EFI_SIMPLE_POINTER_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_POINTER_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_SIMPLE_POINTER_RESET",
  .StructFieldName_2 = "GetState",
  .StructFieldTypeName_2 = "EFI_SIMPLE_POINTER_GET_STATE",
  .StructFieldName_3 = "WaitForInput",
  .StructFieldTypeName_3 = "EFI_EVENT",
  .StructFieldName_4 = "Mode",
  .StructFieldTypeName_4 = "EFI_SIMPLE_POINTER_MODE*"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_RESET{
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
} TYPE__EFI_SIMPLE_POINTER_RESET;

TYPE__EFI_SIMPLE_POINTER_RESET TypeInfo__EFI_SIMPLE_POINTER_RESET = {
  .TypeName = "EFI_SIMPLE_POINTER_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_POINTER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_POINTER_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_POINTER_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_POINTER_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_POINTER_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_POINTER_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_GET_STATE{
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
} TYPE__EFI_SIMPLE_POINTER_GET_STATE;

TYPE__EFI_SIMPLE_POINTER_GET_STATE TypeInfo__EFI_SIMPLE_POINTER_GET_STATE = {
  .TypeName = "EFI_SIMPLE_POINTER_GET_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_GET_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_POINTER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SIMPLE_POINTER_STATE*"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_STATE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_POINTER_STATE_STAR;

TYPE__EFI_SIMPLE_POINTER_STATE_STAR TypeInfo__EFI_SIMPLE_POINTER_STATE_STAR = {
  .TypeName = "EFI_SIMPLE_POINTER_STATE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_STATE*),
  .PointedType = "EFI_SIMPLE_POINTER_STATE"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_STATE{
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
} TYPE__EFI_SIMPLE_POINTER_STATE;

TYPE__EFI_SIMPLE_POINTER_STATE TypeInfo__EFI_SIMPLE_POINTER_STATE = {
  .TypeName = "EFI_SIMPLE_POINTER_STATE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_STATE),
  .StructFieldNum = 5,
  .StructFieldName_1 = "RelativeMovementX",
  .StructFieldTypeName_1 = "INT32",
  .StructFieldName_2 = "RelativeMovementY",
  .StructFieldTypeName_2 = "INT32",
  .StructFieldName_3 = "RelativeMovementZ",
  .StructFieldTypeName_3 = "INT32",
  .StructFieldName_4 = "LeftButton",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "RightButton",
  .StructFieldTypeName_5 = "BOOLEAN"
};


typedef struct _TYPE__INT32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT32;

TYPE__INT32 TypeInfo__INT32 = {
  .TypeName = "INT32",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT32),
  .BasicTypeName = "int"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_POINTER_MODE_STAR;

TYPE__EFI_SIMPLE_POINTER_MODE_STAR TypeInfo__EFI_SIMPLE_POINTER_MODE_STAR = {
  .TypeName = "EFI_SIMPLE_POINTER_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_MODE*),
  .PointedType = "EFI_SIMPLE_POINTER_MODE"
};


typedef struct _TYPE__EFI_SIMPLE_POINTER_MODE{
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
} TYPE__EFI_SIMPLE_POINTER_MODE;

TYPE__EFI_SIMPLE_POINTER_MODE TypeInfo__EFI_SIMPLE_POINTER_MODE = {
  .TypeName = "EFI_SIMPLE_POINTER_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_POINTER_MODE),
  .StructFieldNum = 5,
  .StructFieldName_1 = "ResolutionX",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "ResolutionY",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "ResolutionZ",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "LeftButton",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "RightButton",
  .StructFieldTypeName_5 = "BOOLEAN"
};


typedef struct _TYPE__gEfiAbsolutePointerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAbsolutePointerProtocolGuid;

TYPE__gEfiAbsolutePointerProtocolGuid TypeInfo__gEfiAbsolutePointerProtocolGuid = {
  .TypeName = "gEfiAbsolutePointerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAbsolutePointerProtocolGuid,
  .InterfaceStructName = "EFI_ABSOLUTE_POINTER_PROTOCOL"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL{
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
} TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL;

TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL TypeInfo__EFI_ABSOLUTE_POINTER_PROTOCOL = {
  .TypeName = "EFI_ABSOLUTE_POINTER_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_ABSOLUTE_POINTER_RESET",
  .StructFieldName_2 = "GetState",
  .StructFieldTypeName_2 = "EFI_ABSOLUTE_POINTER_GET_STATE",
  .StructFieldName_3 = "WaitForInput",
  .StructFieldTypeName_3 = "EFI_EVENT",
  .StructFieldName_4 = "Mode",
  .StructFieldTypeName_4 = "EFI_ABSOLUTE_POINTER_MODE*"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_RESET{
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
} TYPE__EFI_ABSOLUTE_POINTER_RESET;

TYPE__EFI_ABSOLUTE_POINTER_RESET TypeInfo__EFI_ABSOLUTE_POINTER_RESET = {
  .TypeName = "EFI_ABSOLUTE_POINTER_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ABSOLUTE_POINTER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL_STAR;

TYPE__EFI_ABSOLUTE_POINTER_PROTOCOL_STAR TypeInfo__EFI_ABSOLUTE_POINTER_PROTOCOL_STAR = {
  .TypeName = "EFI_ABSOLUTE_POINTER_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_PROTOCOL*),
  .PointedType = "EFI_ABSOLUTE_POINTER_PROTOCOL"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_GET_STATE{
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
} TYPE__EFI_ABSOLUTE_POINTER_GET_STATE;

TYPE__EFI_ABSOLUTE_POINTER_GET_STATE TypeInfo__EFI_ABSOLUTE_POINTER_GET_STATE = {
  .TypeName = "EFI_ABSOLUTE_POINTER_GET_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_GET_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ABSOLUTE_POINTER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ABSOLUTE_POINTER_STATE*"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_STATE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ABSOLUTE_POINTER_STATE_STAR;

TYPE__EFI_ABSOLUTE_POINTER_STATE_STAR TypeInfo__EFI_ABSOLUTE_POINTER_STATE_STAR = {
  .TypeName = "EFI_ABSOLUTE_POINTER_STATE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_STATE*),
  .PointedType = "EFI_ABSOLUTE_POINTER_STATE"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_STATE{
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
} TYPE__EFI_ABSOLUTE_POINTER_STATE;

TYPE__EFI_ABSOLUTE_POINTER_STATE TypeInfo__EFI_ABSOLUTE_POINTER_STATE = {
  .TypeName = "EFI_ABSOLUTE_POINTER_STATE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_STATE),
  .StructFieldNum = 4,
  .StructFieldName_1 = "CurrentX",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "CurrentY",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "CurrentZ",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "ActiveButtons",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ABSOLUTE_POINTER_MODE_STAR;

TYPE__EFI_ABSOLUTE_POINTER_MODE_STAR TypeInfo__EFI_ABSOLUTE_POINTER_MODE_STAR = {
  .TypeName = "EFI_ABSOLUTE_POINTER_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_MODE*),
  .PointedType = "EFI_ABSOLUTE_POINTER_MODE"
};


typedef struct _TYPE__EFI_ABSOLUTE_POINTER_MODE{
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
} TYPE__EFI_ABSOLUTE_POINTER_MODE;

TYPE__EFI_ABSOLUTE_POINTER_MODE TypeInfo__EFI_ABSOLUTE_POINTER_MODE = {
  .TypeName = "EFI_ABSOLUTE_POINTER_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ABSOLUTE_POINTER_MODE),
  .StructFieldNum = 7,
  .StructFieldName_1 = "AbsoluteMinX",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "AbsoluteMinY",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "AbsoluteMinZ",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "AbsoluteMaxX",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "AbsoluteMaxY",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "AbsoluteMaxZ",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "Attributes",
  .StructFieldTypeName_7 = "UINT32"
};


typedef struct _TYPE__gEfiSimpleTextOutProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextOutProtocolGuid;

TYPE__gEfiSimpleTextOutProtocolGuid TypeInfo__gEfiSimpleTextOutProtocolGuid = {
  .TypeName = "gEfiSimpleTextOutProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextOutProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_TEXT_RESET",
  .StructFieldName_2 = "OutputString",
  .StructFieldTypeName_2 = "EFI_TEXT_STRING",
  .StructFieldName_3 = "TestString",
  .StructFieldTypeName_3 = "EFI_TEXT_TEST_STRING",
  .StructFieldName_4 = "QueryMode",
  .StructFieldTypeName_4 = "EFI_TEXT_QUERY_MODE",
  .StructFieldName_5 = "SetMode",
  .StructFieldTypeName_5 = "EFI_TEXT_SET_MODE",
  .StructFieldName_6 = "SetAttribute",
  .StructFieldTypeName_6 = "EFI_TEXT_SET_ATTRIBUTE",
  .StructFieldName_7 = "ClearScreen",
  .StructFieldTypeName_7 = "EFI_TEXT_CLEAR_SCREEN",
  .StructFieldName_8 = "SetCursorPosition",
  .StructFieldTypeName_8 = "EFI_TEXT_SET_CURSOR_POSITION",
  .StructFieldName_9 = "EnableCursor",
  .StructFieldTypeName_9 = "EFI_TEXT_ENABLE_CURSOR",
  .StructFieldName_10 = "Mode",
  .StructFieldTypeName_10 = "EFI_SIMPLE_TEXT_OUTPUT_MODE*"
};


typedef struct _TYPE__EFI_TEXT_RESET{
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
} TYPE__EFI_TEXT_RESET;

TYPE__EFI_TEXT_RESET TypeInfo__EFI_TEXT_RESET = {
  .TypeName = "EFI_TEXT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_TEXT_STRING{
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
} TYPE__EFI_TEXT_STRING;

TYPE__EFI_TEXT_STRING TypeInfo__EFI_TEXT_STRING = {
  .TypeName = "EFI_TEXT_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_TEXT_TEST_STRING{
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
} TYPE__EFI_TEXT_TEST_STRING;

TYPE__EFI_TEXT_TEST_STRING TypeInfo__EFI_TEXT_TEST_STRING = {
  .TypeName = "EFI_TEXT_TEST_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_TEST_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_TEXT_QUERY_MODE{
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
} TYPE__EFI_TEXT_QUERY_MODE;

TYPE__EFI_TEXT_QUERY_MODE TypeInfo__EFI_TEXT_QUERY_MODE = {
  .TypeName = "EFI_TEXT_QUERY_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_QUERY_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
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


typedef struct _TYPE__EFI_TEXT_SET_MODE{
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
} TYPE__EFI_TEXT_SET_MODE;

TYPE__EFI_TEXT_SET_MODE TypeInfo__EFI_TEXT_SET_MODE = {
  .TypeName = "EFI_TEXT_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_SET_ATTRIBUTE{
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
} TYPE__EFI_TEXT_SET_ATTRIBUTE;

TYPE__EFI_TEXT_SET_ATTRIBUTE TypeInfo__EFI_TEXT_SET_ATTRIBUTE = {
  .TypeName = "EFI_TEXT_SET_ATTRIBUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_ATTRIBUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_CLEAR_SCREEN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_TEXT_CLEAR_SCREEN;

TYPE__EFI_TEXT_CLEAR_SCREEN TypeInfo__EFI_TEXT_CLEAR_SCREEN = {
  .TypeName = "EFI_TEXT_CLEAR_SCREEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_CLEAR_SCREEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*"
};


typedef struct _TYPE__EFI_TEXT_SET_CURSOR_POSITION{
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
} TYPE__EFI_TEXT_SET_CURSOR_POSITION;

TYPE__EFI_TEXT_SET_CURSOR_POSITION TypeInfo__EFI_TEXT_SET_CURSOR_POSITION = {
  .TypeName = "EFI_TEXT_SET_CURSOR_POSITION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_CURSOR_POSITION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_ENABLE_CURSOR{
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
} TYPE__EFI_TEXT_ENABLE_CURSOR;

TYPE__EFI_TEXT_ENABLE_CURSOR TypeInfo__EFI_TEXT_ENABLE_CURSOR = {
  .TypeName = "EFI_TEXT_ENABLE_CURSOR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_ENABLE_CURSOR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_MODE"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE),
  .StructFieldNum = 6,
  .StructFieldName_1 = "MaxMode",
  .StructFieldTypeName_1 = "INT32",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "INT32",
  .StructFieldName_3 = "Attribute",
  .StructFieldTypeName_3 = "INT32",
  .StructFieldName_4 = "CursorColumn",
  .StructFieldTypeName_4 = "INT32",
  .StructFieldName_5 = "CursorRow",
  .StructFieldTypeName_5 = "INT32",
  .StructFieldName_6 = "CursorVisible",
  .StructFieldTypeName_6 = "BOOLEAN"
};


typedef struct _TYPE__EFI_UGA_DRAW_PROTOCOL{
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
} TYPE__EFI_UGA_DRAW_PROTOCOL;

TYPE__EFI_UGA_DRAW_PROTOCOL TypeInfo__EFI_UGA_DRAW_PROTOCOL = {
  .TypeName = "EFI_UGA_DRAW_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UGA_DRAW_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetMode",
  .StructFieldTypeName_1 = "EFI_UGA_DRAW_PROTOCOL_GET_MODE",
  .StructFieldName_2 = "SetMode",
  .StructFieldTypeName_2 = "EFI_UGA_DRAW_PROTOCOL_SET_MODE",
  .StructFieldName_3 = "Blt",
  .StructFieldTypeName_3 = "EFI_UGA_DRAW_PROTOCOL_BLT"
};


typedef struct _TYPE__EFI_UGA_DRAW_PROTOCOL_GET_MODE{
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
} TYPE__EFI_UGA_DRAW_PROTOCOL_GET_MODE;

TYPE__EFI_UGA_DRAW_PROTOCOL_GET_MODE TypeInfo__EFI_UGA_DRAW_PROTOCOL_GET_MODE = {
  .TypeName = "EFI_UGA_DRAW_PROTOCOL_GET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UGA_DRAW_PROTOCOL_GET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UGA_DRAW_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT32*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT32*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT32*"
};


typedef struct _TYPE__EFI_UGA_DRAW_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UGA_DRAW_PROTOCOL_STAR;

TYPE__EFI_UGA_DRAW_PROTOCOL_STAR TypeInfo__EFI_UGA_DRAW_PROTOCOL_STAR = {
  .TypeName = "EFI_UGA_DRAW_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UGA_DRAW_PROTOCOL*),
  .PointedType = "EFI_UGA_DRAW_PROTOCOL"
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


typedef struct _TYPE__EFI_UGA_DRAW_PROTOCOL_SET_MODE{
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
} TYPE__EFI_UGA_DRAW_PROTOCOL_SET_MODE;

TYPE__EFI_UGA_DRAW_PROTOCOL_SET_MODE TypeInfo__EFI_UGA_DRAW_PROTOCOL_SET_MODE = {
  .TypeName = "EFI_UGA_DRAW_PROTOCOL_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UGA_DRAW_PROTOCOL_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UGA_DRAW_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT32",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT32"
};


typedef struct _TYPE__EFI_UGA_DRAW_PROTOCOL_BLT{
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
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
} TYPE__EFI_UGA_DRAW_PROTOCOL_BLT;

TYPE__EFI_UGA_DRAW_PROTOCOL_BLT TypeInfo__EFI_UGA_DRAW_PROTOCOL_BLT = {
  .TypeName = "EFI_UGA_DRAW_PROTOCOL_BLT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UGA_DRAW_PROTOCOL_BLT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UGA_DRAW_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_UGA_PIXEL*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_UGA_BLT_OPERATION",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "UINTN"
};


typedef struct _TYPE__EFI_UGA_PIXEL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UGA_PIXEL_STAR;

TYPE__EFI_UGA_PIXEL_STAR TypeInfo__EFI_UGA_PIXEL_STAR = {
  .TypeName = "EFI_UGA_PIXEL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UGA_PIXEL*),
  .PointedType = "EFI_UGA_PIXEL"
};


typedef struct _TYPE__EFI_UGA_PIXEL{
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
} TYPE__EFI_UGA_PIXEL;

TYPE__EFI_UGA_PIXEL TypeInfo__EFI_UGA_PIXEL = {
  .TypeName = "EFI_UGA_PIXEL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UGA_PIXEL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Blue",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Green",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Red",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Reserved",
  .StructFieldTypeName_4 = "UINT8"
};


typedef struct _TYPE__EFI_UGA_BLT_OPERATION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
  const CHAR8* EnumValueName_3;
  const UINTN EnumValue_3;
  const CHAR8* EnumValueName_4;
  const UINTN EnumValue_4;
  const CHAR8* EnumValueName_5;
  const UINTN EnumValue_5;
} TYPE__EFI_UGA_BLT_OPERATION;

TYPE__EFI_UGA_BLT_OPERATION TypeInfo__EFI_UGA_BLT_OPERATION = {
  .TypeName = "EFI_UGA_BLT_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_UGA_BLT_OPERATION),
  .EnumValueNum = 5,
  .EnumValueName_1 = "EfiUgaVideoFill",
  .EnumValue_1 = EfiUgaVideoFill,
  .EnumValueName_2 = "EfiUgaVideoToBltBuffer",
  .EnumValue_2 = EfiUgaVideoToBltBuffer,
  .EnumValueName_3 = "EfiUgaBltBufferToVideo",
  .EnumValue_3 = EfiUgaBltBufferToVideo,
  .EnumValueName_4 = "EfiUgaVideoToVideo",
  .EnumValue_4 = EfiUgaVideoToVideo,
  .EnumValueName_5 = "EfiUgaBltMax",
  .EnumValue_5 = EfiUgaBltMax
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL{
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
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "QueryMode",
  .StructFieldTypeName_1 = "EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE",
  .StructFieldName_2 = "SetMode",
  .StructFieldTypeName_2 = "EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE",
  .StructFieldName_3 = "Blt",
  .StructFieldTypeName_3 = "EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT",
  .StructFieldName_4 = "Mode",
  .StructFieldTypeName_4 = "EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE*"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE{
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
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GRAPHICS_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION**"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL*),
  .PointedType = "EFI_GRAPHICS_OUTPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_MODE_INFORMATION**),
  .PointedType = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION*"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_MODE_INFORMATION*),
  .PointedType = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION{
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
} TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION;

TYPE__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_MODE_INFORMATION),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Version",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "HorizontalResolution",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "VerticalResolution",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "PixelFormat",
  .StructFieldTypeName_4 = "EFI_GRAPHICS_PIXEL_FORMAT",
  .StructFieldName_5 = "PixelInformation",
  .StructFieldTypeName_5 = "EFI_PIXEL_BITMASK",
  .StructFieldName_6 = "PixelsPerScanLine",
  .StructFieldTypeName_6 = "UINT32"
};


typedef struct _TYPE__EFI_GRAPHICS_PIXEL_FORMAT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
  const CHAR8* EnumValueName_3;
  const UINTN EnumValue_3;
  const CHAR8* EnumValueName_4;
  const UINTN EnumValue_4;
  const CHAR8* EnumValueName_5;
  const UINTN EnumValue_5;
} TYPE__EFI_GRAPHICS_PIXEL_FORMAT;

TYPE__EFI_GRAPHICS_PIXEL_FORMAT TypeInfo__EFI_GRAPHICS_PIXEL_FORMAT = {
  .TypeName = "EFI_GRAPHICS_PIXEL_FORMAT",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_GRAPHICS_PIXEL_FORMAT),
  .EnumValueNum = 5,
  .EnumValueName_1 = "PixelRedGreenBlueReserved8BitPerColor",
  .EnumValue_1 = PixelRedGreenBlueReserved8BitPerColor,
  .EnumValueName_2 = "PixelBlueGreenRedReserved8BitPerColor",
  .EnumValue_2 = PixelBlueGreenRedReserved8BitPerColor,
  .EnumValueName_3 = "PixelBitMask",
  .EnumValue_3 = PixelBitMask,
  .EnumValueName_4 = "PixelBltOnly",
  .EnumValue_4 = PixelBltOnly,
  .EnumValueName_5 = "PixelFormatMax",
  .EnumValue_5 = PixelFormatMax
};


typedef struct _TYPE__EFI_PIXEL_BITMASK{
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
} TYPE__EFI_PIXEL_BITMASK;

TYPE__EFI_PIXEL_BITMASK TypeInfo__EFI_PIXEL_BITMASK = {
  .TypeName = "EFI_PIXEL_BITMASK",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PIXEL_BITMASK),
  .StructFieldNum = 4,
  .StructFieldName_1 = "RedMask",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "GreenMask",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "BlueMask",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "ReservedMask",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE{
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
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GRAPHICS_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT{
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
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GRAPHICS_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GRAPHICS_OUTPUT_BLT_OPERATION",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "UINTN"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL*),
  .PointedType = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL{
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
} TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL;

TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Blue",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Green",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Red",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Reserved",
  .StructFieldTypeName_4 = "UINT8"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_BLT_OPERATION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
  const CHAR8* EnumValueName_3;
  const UINTN EnumValue_3;
  const CHAR8* EnumValueName_4;
  const UINTN EnumValue_4;
  const CHAR8* EnumValueName_5;
  const UINTN EnumValue_5;
} TYPE__EFI_GRAPHICS_OUTPUT_BLT_OPERATION;

TYPE__EFI_GRAPHICS_OUTPUT_BLT_OPERATION TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_OPERATION = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_BLT_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_BLT_OPERATION),
  .EnumValueNum = 5,
  .EnumValueName_1 = "EfiBltVideoFill",
  .EnumValue_1 = EfiBltVideoFill,
  .EnumValueName_2 = "EfiBltVideoToBltBuffer",
  .EnumValue_2 = EfiBltVideoToBltBuffer,
  .EnumValueName_3 = "EfiBltBufferToVideo",
  .EnumValue_3 = EfiBltBufferToVideo,
  .EnumValueName_4 = "EfiBltVideoToVideo",
  .EnumValue_4 = EfiBltVideoToVideo,
  .EnumValueName_5 = "EfiGraphicsOutputBltOperationMax",
  .EnumValue_5 = EfiGraphicsOutputBltOperationMax
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE*),
  .PointedType = "EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE{
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
} TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE;

TYPE__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE),
  .StructFieldNum = 6,
  .StructFieldName_1 = "MaxMode",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Info",
  .StructFieldTypeName_3 = "EFI_GRAPHICS_OUTPUT_MODE_INFORMATION*",
  .StructFieldName_4 = "SizeOfInfo",
  .StructFieldTypeName_4 = "UINTN",
  .StructFieldName_5 = "FrameBufferBase",
  .StructFieldTypeName_5 = "EFI_PHYSICAL_ADDRESS",
  .StructFieldName_6 = "FrameBufferSize",
  .StructFieldTypeName_6 = "UINTN"
};


typedef struct _TYPE__EFI_PHYSICAL_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_PHYSICAL_ADDRESS;

TYPE__EFI_PHYSICAL_ADDRESS TypeInfo__EFI_PHYSICAL_ADDRESS = {
  .TypeName = "EFI_PHYSICAL_ADDRESS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_PHYSICAL_ADDRESS),
  .BasicTypeName = "UINT64"
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


typedef struct _TYPE__gEfiUgaDrawProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUgaDrawProtocolGuid;

TYPE__gEfiUgaDrawProtocolGuid TypeInfo__gEfiUgaDrawProtocolGuid = {
  .TypeName = "gEfiUgaDrawProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUgaDrawProtocolGuid,
  .InterfaceStructName = "EFI_UGA_DRAW_PROTOCOL"
};


typedef struct _TYPE__gEfiGraphicsOutputProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiGraphicsOutputProtocolGuid;

TYPE__gEfiGraphicsOutputProtocolGuid TypeInfo__gEfiGraphicsOutputProtocolGuid = {
  .TypeName = "gEfiGraphicsOutputProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiGraphicsOutputProtocolGuid,
  .InterfaceStructName = "EFI_GRAPHICS_OUTPUT_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiUgaDrawProtocolGuid,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__gEfiGraphicsOutputProtocolGuid,
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
  &TypeInfo__gEfiSimpleTextInProtocolGuid,
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  &TypeInfo__gEfiSimplePointerProtocolGuid,
  &TypeInfo__gEfiAbsolutePointerProtocolGuid,
  &TypeInfo__gEfiUgaDrawProtocolGuid,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiGraphicsOutputProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_DRIVER_BINDING_START,
  &TypeInfo__EFI_DRIVER_BINDING_STOP,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__UINT32,
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
  &TypeInfo__gEfiSimpleTextInProtocolGuid,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL,
  &TypeInfo__EFI_INPUT_RESET,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_INPUT_READ_KEY,
  &TypeInfo__EFI_INPUT_KEY_STAR,
  &TypeInfo__EFI_INPUT_KEY,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL,
  &TypeInfo__EFI_INPUT_RESET_EX,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL_STAR,
  &TypeInfo__EFI_INPUT_READ_KEY_EX,
  &TypeInfo__EFI_KEY_DATA_STAR,
  &TypeInfo__EFI_KEY_DATA,
  &TypeInfo__EFI_KEY_STATE,
  &TypeInfo__EFI_KEY_TOGGLE_STATE,
  &TypeInfo__EFI_SET_STATE,
  &TypeInfo__EFI_KEY_TOGGLE_STATE_STAR,
  &TypeInfo__EFI_REGISTER_KEYSTROKE_NOTIFY,
  &TypeInfo__EFI_KEY_NOTIFY_FUNCTION,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_UNREGISTER_KEYSTROKE_NOTIFY,
  &TypeInfo__gEfiSimplePointerProtocolGuid,
  &TypeInfo__EFI_SIMPLE_POINTER_PROTOCOL,
  &TypeInfo__EFI_SIMPLE_POINTER_RESET,
  &TypeInfo__EFI_SIMPLE_POINTER_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_POINTER_GET_STATE,
  &TypeInfo__EFI_SIMPLE_POINTER_STATE_STAR,
  &TypeInfo__EFI_SIMPLE_POINTER_STATE,
  &TypeInfo__INT32,
  &TypeInfo__EFI_SIMPLE_POINTER_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_POINTER_MODE,
  &TypeInfo__gEfiAbsolutePointerProtocolGuid,
  &TypeInfo__EFI_ABSOLUTE_POINTER_PROTOCOL,
  &TypeInfo__EFI_ABSOLUTE_POINTER_RESET,
  &TypeInfo__EFI_ABSOLUTE_POINTER_PROTOCOL_STAR,
  &TypeInfo__EFI_ABSOLUTE_POINTER_GET_STATE,
  &TypeInfo__EFI_ABSOLUTE_POINTER_STATE_STAR,
  &TypeInfo__EFI_ABSOLUTE_POINTER_STATE,
  &TypeInfo__EFI_ABSOLUTE_POINTER_MODE_STAR,
  &TypeInfo__EFI_ABSOLUTE_POINTER_MODE,
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL,
  &TypeInfo__EFI_TEXT_RESET,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_TEXT_STRING,
  &TypeInfo__EFI_TEXT_TEST_STRING,
  &TypeInfo__EFI_TEXT_QUERY_MODE,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_TEXT_SET_MODE,
  &TypeInfo__EFI_TEXT_SET_ATTRIBUTE,
  &TypeInfo__EFI_TEXT_CLEAR_SCREEN,
  &TypeInfo__EFI_TEXT_SET_CURSOR_POSITION,
  &TypeInfo__EFI_TEXT_ENABLE_CURSOR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE,
  &TypeInfo__EFI_UGA_DRAW_PROTOCOL,
  &TypeInfo__EFI_UGA_DRAW_PROTOCOL_GET_MODE,
  &TypeInfo__EFI_UGA_DRAW_PROTOCOL_STAR,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_UGA_DRAW_PROTOCOL_SET_MODE,
  &TypeInfo__EFI_UGA_DRAW_PROTOCOL_BLT,
  &TypeInfo__EFI_UGA_PIXEL_STAR,
  &TypeInfo__EFI_UGA_PIXEL,
  &TypeInfo__EFI_UGA_BLT_OPERATION,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_QUERY_MODE,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_MODE_INFORMATION,
  &TypeInfo__EFI_GRAPHICS_PIXEL_FORMAT,
  &TypeInfo__EFI_PIXEL_BITMASK,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_SET_MODE,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_BLT,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_OPERATION,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  NULL
};