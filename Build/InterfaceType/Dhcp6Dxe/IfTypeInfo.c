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


typedef struct _TYPE__gEfiDhcp6ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDhcp6ServiceBindingProtocolGuid;

TYPE__gEfiDhcp6ServiceBindingProtocolGuid TypeInfo__gEfiDhcp6ServiceBindingProtocolGuid = {
  .TypeName = "gEfiDhcp6ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDhcp6ServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__EFI_SERVICE_BINDING_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_SERVICE_BINDING_PROTOCOL;

TYPE__EFI_SERVICE_BINDING_PROTOCOL TypeInfo__EFI_SERVICE_BINDING_PROTOCOL = {
  .TypeName = "EFI_SERVICE_BINDING_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SERVICE_BINDING_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "CreateChild",
  .StructFieldTypeName_1 = "EFI_SERVICE_BINDING_CREATE_CHILD",
  .StructFieldName_2 = "DestroyChild",
  .StructFieldTypeName_2 = "EFI_SERVICE_BINDING_DESTROY_CHILD"
};


typedef struct _TYPE__EFI_SERVICE_BINDING_CREATE_CHILD{
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
} TYPE__EFI_SERVICE_BINDING_CREATE_CHILD;

TYPE__EFI_SERVICE_BINDING_CREATE_CHILD TypeInfo__EFI_SERVICE_BINDING_CREATE_CHILD = {
  .TypeName = "EFI_SERVICE_BINDING_CREATE_CHILD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SERVICE_BINDING_CREATE_CHILD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SERVICE_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_SERVICE_BINDING_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SERVICE_BINDING_PROTOCOL_STAR;

TYPE__EFI_SERVICE_BINDING_PROTOCOL_STAR TypeInfo__EFI_SERVICE_BINDING_PROTOCOL_STAR = {
  .TypeName = "EFI_SERVICE_BINDING_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SERVICE_BINDING_PROTOCOL*),
  .PointedType = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__EFI_SERVICE_BINDING_DESTROY_CHILD{
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
} TYPE__EFI_SERVICE_BINDING_DESTROY_CHILD;

TYPE__EFI_SERVICE_BINDING_DESTROY_CHILD TypeInfo__EFI_SERVICE_BINDING_DESTROY_CHILD = {
  .TypeName = "EFI_SERVICE_BINDING_DESTROY_CHILD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SERVICE_BINDING_DESTROY_CHILD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SERVICE_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_DHCP6_PROTOCOL{
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
} TYPE__EFI_DHCP6_PROTOCOL;

TYPE__EFI_DHCP6_PROTOCOL TypeInfo__EFI_DHCP6_PROTOCOL = {
  .TypeName = "EFI_DHCP6_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_PROTOCOL),
  .StructFieldNum = 9,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_DHCP6_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_DHCP6_CONFIGURE",
  .StructFieldName_3 = "Start",
  .StructFieldTypeName_3 = "EFI_DHCP6_START",
  .StructFieldName_4 = "InfoRequest",
  .StructFieldTypeName_4 = "EFI_DHCP6_INFO_REQUEST",
  .StructFieldName_5 = "RenewRebind",
  .StructFieldTypeName_5 = "EFI_DHCP6_RENEW_REBIND",
  .StructFieldName_6 = "Decline",
  .StructFieldTypeName_6 = "EFI_DHCP6_DECLINE",
  .StructFieldName_7 = "Release",
  .StructFieldTypeName_7 = "EFI_DHCP6_RELEASE",
  .StructFieldName_8 = "Stop",
  .StructFieldTypeName_8 = "EFI_DHCP6_STOP",
  .StructFieldName_9 = "Parse",
  .StructFieldTypeName_9 = "EFI_DHCP6_PARSE"
};


typedef struct _TYPE__EFI_DHCP6_GET_MODE_DATA{
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
} TYPE__EFI_DHCP6_GET_MODE_DATA;

TYPE__EFI_DHCP6_GET_MODE_DATA TypeInfo__EFI_DHCP6_GET_MODE_DATA = {
  .TypeName = "EFI_DHCP6_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_DHCP6_MODE_DATA*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_DHCP6_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_DHCP6_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_PROTOCOL_STAR;

TYPE__EFI_DHCP6_PROTOCOL_STAR TypeInfo__EFI_DHCP6_PROTOCOL_STAR = {
  .TypeName = "EFI_DHCP6_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_PROTOCOL*),
  .PointedType = "EFI_DHCP6_PROTOCOL"
};


typedef struct _TYPE__EFI_DHCP6_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_MODE_DATA_STAR;

TYPE__EFI_DHCP6_MODE_DATA_STAR TypeInfo__EFI_DHCP6_MODE_DATA_STAR = {
  .TypeName = "EFI_DHCP6_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_MODE_DATA*),
  .PointedType = "EFI_DHCP6_MODE_DATA"
};


typedef struct _TYPE__EFI_DHCP6_MODE_DATA{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DHCP6_MODE_DATA;

TYPE__EFI_DHCP6_MODE_DATA TypeInfo__EFI_DHCP6_MODE_DATA = {
  .TypeName = "EFI_DHCP6_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_MODE_DATA),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ClientId",
  .StructFieldTypeName_1 = "EFI_DHCP6_DUID*",
  .StructFieldName_2 = "Ia",
  .StructFieldTypeName_2 = "EFI_DHCP6_IA*"
};


typedef struct _TYPE__EFI_DHCP6_DUID_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_DUID_STAR;

TYPE__EFI_DHCP6_DUID_STAR TypeInfo__EFI_DHCP6_DUID_STAR = {
  .TypeName = "EFI_DHCP6_DUID*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_DUID*),
  .PointedType = "EFI_DHCP6_DUID"
};


typedef struct _TYPE__EFI_DHCP6_DUID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DHCP6_DUID;

TYPE__EFI_DHCP6_DUID TypeInfo__EFI_DHCP6_DUID = {
  .TypeName = "EFI_DHCP6_DUID",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_DUID),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Length",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Duid",
  .StructFieldTypeName_2 = "UINT8[1]"
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


typedef struct _TYPE__UINT8_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_1;

TYPE__UINT8_ARRAY_1 TypeInfo__UINT8_ARRAY_1 = {
  .TypeName = "UINT8[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[1]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_DHCP6_IA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_IA_STAR;

TYPE__EFI_DHCP6_IA_STAR TypeInfo__EFI_DHCP6_IA_STAR = {
  .TypeName = "EFI_DHCP6_IA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_IA*),
  .PointedType = "EFI_DHCP6_IA"
};


typedef struct _TYPE__EFI_DHCP6_IA{
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
} TYPE__EFI_DHCP6_IA;

TYPE__EFI_DHCP6_IA TypeInfo__EFI_DHCP6_IA = {
  .TypeName = "EFI_DHCP6_IA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_IA),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Descriptor",
  .StructFieldTypeName_1 = "EFI_DHCP6_IA_DESCRIPTOR",
  .StructFieldName_2 = "State",
  .StructFieldTypeName_2 = "EFI_DHCP6_STATE",
  .StructFieldName_3 = "ReplyPacket",
  .StructFieldTypeName_3 = "EFI_DHCP6_PACKET*",
  .StructFieldName_4 = "IaAddressCount",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "IaAddress",
  .StructFieldTypeName_5 = "EFI_DHCP6_IA_ADDRESS[1]"
};


typedef struct _TYPE__EFI_DHCP6_IA_DESCRIPTOR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_DHCP6_IA_DESCRIPTOR;

TYPE__EFI_DHCP6_IA_DESCRIPTOR TypeInfo__EFI_DHCP6_IA_DESCRIPTOR = {
  .TypeName = "EFI_DHCP6_IA_DESCRIPTOR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_IA_DESCRIPTOR),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "IaId",
  .StructFieldTypeName_2 = "UINT32"
};


typedef struct _TYPE__EFI_DHCP6_STATE{
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
  const CHAR8* EnumValueName_6;
  const UINTN EnumValue_6;
  const CHAR8* EnumValueName_7;
  const UINTN EnumValue_7;
  const CHAR8* EnumValueName_8;
  const UINTN EnumValue_8;
  const CHAR8* EnumValueName_9;
  const UINTN EnumValue_9;
} TYPE__EFI_DHCP6_STATE;

TYPE__EFI_DHCP6_STATE TypeInfo__EFI_DHCP6_STATE = {
  .TypeName = "EFI_DHCP6_STATE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_DHCP6_STATE),
  .EnumValueNum = 9,
  .EnumValueName_1 = "Dhcp6Init",
  .EnumValue_1 = Dhcp6Init,
  .EnumValueName_2 = "Dhcp6Selecting",
  .EnumValue_2 = Dhcp6Selecting,
  .EnumValueName_3 = "Dhcp6Requesting",
  .EnumValue_3 = Dhcp6Requesting,
  .EnumValueName_4 = "Dhcp6Declining",
  .EnumValue_4 = Dhcp6Declining,
  .EnumValueName_5 = "Dhcp6Confirming",
  .EnumValue_5 = Dhcp6Confirming,
  .EnumValueName_6 = "Dhcp6Releasing",
  .EnumValue_6 = Dhcp6Releasing,
  .EnumValueName_7 = "Dhcp6Bound",
  .EnumValue_7 = Dhcp6Bound,
  .EnumValueName_8 = "Dhcp6Renewing",
  .EnumValue_8 = Dhcp6Renewing,
  .EnumValueName_9 = "Dhcp6Rebinding",
  .EnumValue_9 = Dhcp6Rebinding
};


typedef struct _TYPE__EFI_DHCP6_PACKET_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_PACKET_STAR;

TYPE__EFI_DHCP6_PACKET_STAR TypeInfo__EFI_DHCP6_PACKET_STAR = {
  .TypeName = "EFI_DHCP6_PACKET*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_PACKET*),
  .PointedType = "EFI_DHCP6_PACKET"
};


typedef struct _TYPE__EFI_DHCP6_PACKET{
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
} TYPE__EFI_DHCP6_PACKET;

TYPE__EFI_DHCP6_PACKET TypeInfo__EFI_DHCP6_PACKET = {
  .TypeName = "EFI_DHCP6_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_PACKET),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Size",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Length",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Dhcp6",
  .StructFieldTypeName_3 = "struct(anonymousstructat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/Dhcp6.h:197:3)"
};


typedef struct _TYPE__EFI_DHCP6_IA_ADDRESS_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_DHCP6_IA_ADDRESS_ARRAY_1;

TYPE__EFI_DHCP6_IA_ADDRESS_ARRAY_1 TypeInfo__EFI_DHCP6_IA_ADDRESS_ARRAY_1 = {
  .TypeName = "EFI_DHCP6_IA_ADDRESS[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_DHCP6_IA_ADDRESS[1]),
  .ElementTypeName = "EFI_DHCP6_IA_ADDRESS"
};


typedef struct _TYPE__EFI_DHCP6_IA_ADDRESS{
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
} TYPE__EFI_DHCP6_IA_ADDRESS;

TYPE__EFI_DHCP6_IA_ADDRESS TypeInfo__EFI_DHCP6_IA_ADDRESS = {
  .TypeName = "EFI_DHCP6_IA_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_IA_ADDRESS),
  .StructFieldNum = 3,
  .StructFieldName_1 = "IpAddress",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "PreferredLifetime",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "ValidLifetime",
  .StructFieldTypeName_3 = "UINT32"
};


typedef struct _TYPE__EFI_IPv6_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_IPv6_ADDRESS;

TYPE__EFI_IPv6_ADDRESS TypeInfo__EFI_IPv6_ADDRESS = {
  .TypeName = "EFI_IPv6_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IPv6_ADDRESS),
  .StructFieldNum = 1,
  .StructFieldName_1 = "Addr",
  .StructFieldTypeName_1 = "UINT8[16]"
};


typedef struct _TYPE__UINT8_ARRAY_16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_16;

TYPE__UINT8_ARRAY_16 TypeInfo__UINT8_ARRAY_16 = {
  .TypeName = "UINT8[16]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[16]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_DHCP6_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_CONFIG_DATA_STAR;

TYPE__EFI_DHCP6_CONFIG_DATA_STAR TypeInfo__EFI_DHCP6_CONFIG_DATA_STAR = {
  .TypeName = "EFI_DHCP6_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_CONFIG_DATA*),
  .PointedType = "EFI_DHCP6_CONFIG_DATA"
};


typedef struct _TYPE__EFI_DHCP6_CONFIG_DATA{
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
} TYPE__EFI_DHCP6_CONFIG_DATA;

TYPE__EFI_DHCP6_CONFIG_DATA TypeInfo__EFI_DHCP6_CONFIG_DATA = {
  .TypeName = "EFI_DHCP6_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_CONFIG_DATA),
  .StructFieldNum = 9,
  .StructFieldName_1 = "Dhcp6Callback",
  .StructFieldTypeName_1 = "EFI_DHCP6_CALLBACK",
  .StructFieldName_2 = "CallbackContext",
  .StructFieldTypeName_2 = "void*",
  .StructFieldName_3 = "OptionCount",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "OptionList",
  .StructFieldTypeName_4 = "EFI_DHCP6_PACKET_OPTION**",
  .StructFieldName_5 = "IaDescriptor",
  .StructFieldTypeName_5 = "EFI_DHCP6_IA_DESCRIPTOR",
  .StructFieldName_6 = "IaInfoEvent",
  .StructFieldTypeName_6 = "EFI_EVENT",
  .StructFieldName_7 = "ReconfigureAccept",
  .StructFieldTypeName_7 = "BOOLEAN",
  .StructFieldName_8 = "RapidCommit",
  .StructFieldTypeName_8 = "BOOLEAN",
  .StructFieldName_9 = "SolicitRetransmission",
  .StructFieldTypeName_9 = "EFI_DHCP6_RETRANSMISSION*"
};


typedef struct _TYPE__EFI_DHCP6_CALLBACK{
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
} TYPE__EFI_DHCP6_CALLBACK;

TYPE__EFI_DHCP6_CALLBACK TypeInfo__EFI_DHCP6_CALLBACK = {
  .TypeName = "EFI_DHCP6_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DHCP6_STATE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_DHCP6_EVENT",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_DHCP6_PACKET*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_DHCP6_PACKET**"
};


typedef struct _TYPE__EFI_DHCP6_EVENT{
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
  const CHAR8* EnumValueName_6;
  const UINTN EnumValue_6;
  const CHAR8* EnumValueName_7;
  const UINTN EnumValue_7;
  const CHAR8* EnumValueName_8;
  const UINTN EnumValue_8;
  const CHAR8* EnumValueName_9;
  const UINTN EnumValue_9;
  const CHAR8* EnumValueName_10;
  const UINTN EnumValue_10;
  const CHAR8* EnumValueName_11;
  const UINTN EnumValue_11;
} TYPE__EFI_DHCP6_EVENT;

TYPE__EFI_DHCP6_EVENT TypeInfo__EFI_DHCP6_EVENT = {
  .TypeName = "EFI_DHCP6_EVENT",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_DHCP6_EVENT),
  .EnumValueNum = 11,
  .EnumValueName_1 = "Dhcp6SendSolicit",
  .EnumValue_1 = Dhcp6SendSolicit,
  .EnumValueName_2 = "Dhcp6RcvdAdvertise",
  .EnumValue_2 = Dhcp6RcvdAdvertise,
  .EnumValueName_3 = "Dhcp6SelectAdvertise",
  .EnumValue_3 = Dhcp6SelectAdvertise,
  .EnumValueName_4 = "Dhcp6SendRequest",
  .EnumValue_4 = Dhcp6SendRequest,
  .EnumValueName_5 = "Dhcp6RcvdReply",
  .EnumValue_5 = Dhcp6RcvdReply,
  .EnumValueName_6 = "Dhcp6RcvdReconfigure",
  .EnumValue_6 = Dhcp6RcvdReconfigure,
  .EnumValueName_7 = "Dhcp6SendDecline",
  .EnumValue_7 = Dhcp6SendDecline,
  .EnumValueName_8 = "Dhcp6SendConfirm",
  .EnumValue_8 = Dhcp6SendConfirm,
  .EnumValueName_9 = "Dhcp6SendRelease",
  .EnumValue_9 = Dhcp6SendRelease,
  .EnumValueName_10 = "Dhcp6EnterRenewing",
  .EnumValue_10 = Dhcp6EnterRenewing,
  .EnumValueName_11 = "Dhcp6EnterRebinding",
  .EnumValue_11 = Dhcp6EnterRebinding
};


typedef struct _TYPE__EFI_DHCP6_PACKET_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_PACKET_STAR_STAR;

TYPE__EFI_DHCP6_PACKET_STAR_STAR TypeInfo__EFI_DHCP6_PACKET_STAR_STAR = {
  .TypeName = "EFI_DHCP6_PACKET**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_PACKET**),
  .PointedType = "EFI_DHCP6_PACKET*"
};


typedef struct _TYPE__EFI_DHCP6_PACKET_OPTION_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_PACKET_OPTION_STAR_STAR;

TYPE__EFI_DHCP6_PACKET_OPTION_STAR_STAR TypeInfo__EFI_DHCP6_PACKET_OPTION_STAR_STAR = {
  .TypeName = "EFI_DHCP6_PACKET_OPTION**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_PACKET_OPTION**),
  .PointedType = "EFI_DHCP6_PACKET_OPTION*"
};


typedef struct _TYPE__EFI_DHCP6_PACKET_OPTION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_PACKET_OPTION_STAR;

TYPE__EFI_DHCP6_PACKET_OPTION_STAR TypeInfo__EFI_DHCP6_PACKET_OPTION_STAR = {
  .TypeName = "EFI_DHCP6_PACKET_OPTION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_PACKET_OPTION*),
  .PointedType = "EFI_DHCP6_PACKET_OPTION"
};


typedef struct _TYPE__EFI_DHCP6_PACKET_OPTION{
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
} TYPE__EFI_DHCP6_PACKET_OPTION;

TYPE__EFI_DHCP6_PACKET_OPTION TypeInfo__EFI_DHCP6_PACKET_OPTION = {
  .TypeName = "EFI_DHCP6_PACKET_OPTION",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_PACKET_OPTION),
  .StructFieldNum = 3,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "OpLen",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Data",
  .StructFieldTypeName_3 = "UINT8[1]"
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


typedef struct _TYPE__EFI_DHCP6_RETRANSMISSION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DHCP6_RETRANSMISSION_STAR;

TYPE__EFI_DHCP6_RETRANSMISSION_STAR TypeInfo__EFI_DHCP6_RETRANSMISSION_STAR = {
  .TypeName = "EFI_DHCP6_RETRANSMISSION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DHCP6_RETRANSMISSION*),
  .PointedType = "EFI_DHCP6_RETRANSMISSION"
};


typedef struct _TYPE__EFI_DHCP6_RETRANSMISSION{
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
} TYPE__EFI_DHCP6_RETRANSMISSION;

TYPE__EFI_DHCP6_RETRANSMISSION TypeInfo__EFI_DHCP6_RETRANSMISSION = {
  .TypeName = "EFI_DHCP6_RETRANSMISSION",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DHCP6_RETRANSMISSION),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Irt",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Mrc",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Mrt",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "Mrd",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_DHCP6_CONFIGURE{
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
} TYPE__EFI_DHCP6_CONFIGURE;

TYPE__EFI_DHCP6_CONFIGURE TypeInfo__EFI_DHCP6_CONFIGURE = {
  .TypeName = "EFI_DHCP6_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DHCP6_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_DHCP6_START{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DHCP6_START;

TYPE__EFI_DHCP6_START TypeInfo__EFI_DHCP6_START = {
  .TypeName = "EFI_DHCP6_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*"
};


typedef struct _TYPE__EFI_DHCP6_INFO_REQUEST{
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
} TYPE__EFI_DHCP6_INFO_REQUEST;

TYPE__EFI_DHCP6_INFO_REQUEST TypeInfo__EFI_DHCP6_INFO_REQUEST = {
  .TypeName = "EFI_DHCP6_INFO_REQUEST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_INFO_REQUEST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 9,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DHCP6_PACKET_OPTION*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT32",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_DHCP6_PACKET_OPTION**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_DHCP6_RETRANSMISSION*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_EVENT",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "EFI_DHCP6_INFO_CALLBACK",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "void*"
};


typedef struct _TYPE__EFI_DHCP6_INFO_CALLBACK{
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
} TYPE__EFI_DHCP6_INFO_CALLBACK;

TYPE__EFI_DHCP6_INFO_CALLBACK TypeInfo__EFI_DHCP6_INFO_CALLBACK = {
  .TypeName = "EFI_DHCP6_INFO_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_INFO_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DHCP6_PACKET*"
};


typedef struct _TYPE__EFI_DHCP6_RENEW_REBIND{
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
} TYPE__EFI_DHCP6_RENEW_REBIND;

TYPE__EFI_DHCP6_RENEW_REBIND TypeInfo__EFI_DHCP6_RENEW_REBIND = {
  .TypeName = "EFI_DHCP6_RENEW_REBIND",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_RENEW_REBIND),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_DHCP6_DECLINE{
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
} TYPE__EFI_DHCP6_DECLINE;

TYPE__EFI_DHCP6_DECLINE TypeInfo__EFI_DHCP6_DECLINE = {
  .TypeName = "EFI_DHCP6_DECLINE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_DECLINE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv6_ADDRESS*"
};


typedef struct _TYPE__EFI_IPv6_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IPv6_ADDRESS_STAR;

TYPE__EFI_IPv6_ADDRESS_STAR TypeInfo__EFI_IPv6_ADDRESS_STAR = {
  .TypeName = "EFI_IPv6_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IPv6_ADDRESS*),
  .PointedType = "EFI_IPv6_ADDRESS"
};


typedef struct _TYPE__EFI_DHCP6_RELEASE{
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
} TYPE__EFI_DHCP6_RELEASE;

TYPE__EFI_DHCP6_RELEASE TypeInfo__EFI_DHCP6_RELEASE = {
  .TypeName = "EFI_DHCP6_RELEASE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_RELEASE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv6_ADDRESS*"
};


typedef struct _TYPE__EFI_DHCP6_STOP{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DHCP6_STOP;

TYPE__EFI_DHCP6_STOP TypeInfo__EFI_DHCP6_STOP = {
  .TypeName = "EFI_DHCP6_STOP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_STOP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*"
};


typedef struct _TYPE__EFI_DHCP6_PARSE{
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
} TYPE__EFI_DHCP6_PARSE;

TYPE__EFI_DHCP6_PARSE TypeInfo__EFI_DHCP6_PARSE = {
  .TypeName = "EFI_DHCP6_PARSE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DHCP6_PARSE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DHCP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DHCP6_PACKET*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_DHCP6_PACKET_OPTION**"
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


typedef struct _TYPE__gEfiDpcProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDpcProtocolGuid;

TYPE__gEfiDpcProtocolGuid TypeInfo__gEfiDpcProtocolGuid = {
  .TypeName = "gEfiDpcProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDpcProtocolGuid,
  .InterfaceStructName = "EFI_DPC_PROTOCOL"
};


typedef struct _TYPE__gEfiUdp6ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUdp6ProtocolGuid;

TYPE__gEfiUdp6ProtocolGuid TypeInfo__gEfiUdp6ProtocolGuid = {
  .TypeName = "gEfiUdp6ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUdp6ProtocolGuid,
  .InterfaceStructName = "EFI_UDP6_PROTOCOL"
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


typedef struct _TYPE__gEfiUdp4ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUdp4ProtocolGuid;

TYPE__gEfiUdp4ProtocolGuid TypeInfo__gEfiUdp4ProtocolGuid = {
  .TypeName = "gEfiUdp4ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUdp4ProtocolGuid,
  .InterfaceStructName = "EFI_UDP4_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiUdp4ProtocolGuid,
  &TypeInfo__gEfiDhcp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiUdp6ProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiDpcProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiIp6ConfigProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDhcp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
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
  &TypeInfo__gEfiDhcp6ServiceBindingProtocolGuid,
  &TypeInfo__EFI_SERVICE_BINDING_PROTOCOL,
  &TypeInfo__EFI_SERVICE_BINDING_CREATE_CHILD,
  &TypeInfo__EFI_SERVICE_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_SERVICE_BINDING_DESTROY_CHILD,
  &TypeInfo__EFI_DHCP6_PROTOCOL,
  &TypeInfo__EFI_DHCP6_GET_MODE_DATA,
  &TypeInfo__EFI_DHCP6_PROTOCOL_STAR,
  &TypeInfo__EFI_DHCP6_MODE_DATA_STAR,
  &TypeInfo__EFI_DHCP6_MODE_DATA,
  &TypeInfo__EFI_DHCP6_DUID_STAR,
  &TypeInfo__EFI_DHCP6_DUID,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_1,
  &TypeInfo__EFI_DHCP6_IA_STAR,
  &TypeInfo__EFI_DHCP6_IA,
  &TypeInfo__EFI_DHCP6_IA_DESCRIPTOR,
  &TypeInfo__EFI_DHCP6_STATE,
  &TypeInfo__EFI_DHCP6_PACKET_STAR,
  &TypeInfo__EFI_DHCP6_PACKET,
  &TypeInfo__EFI_DHCP6_IA_ADDRESS_ARRAY_1,
  &TypeInfo__EFI_DHCP6_IA_ADDRESS,
  &TypeInfo__EFI_IPv6_ADDRESS,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__EFI_DHCP6_CONFIG_DATA_STAR,
  &TypeInfo__EFI_DHCP6_CONFIG_DATA,
  &TypeInfo__EFI_DHCP6_CALLBACK,
  &TypeInfo__EFI_DHCP6_EVENT,
  &TypeInfo__EFI_DHCP6_PACKET_STAR_STAR,
  &TypeInfo__EFI_DHCP6_PACKET_OPTION_STAR_STAR,
  &TypeInfo__EFI_DHCP6_PACKET_OPTION_STAR,
  &TypeInfo__EFI_DHCP6_PACKET_OPTION,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_DHCP6_RETRANSMISSION_STAR,
  &TypeInfo__EFI_DHCP6_RETRANSMISSION,
  &TypeInfo__EFI_DHCP6_CONFIGURE,
  &TypeInfo__EFI_DHCP6_START,
  &TypeInfo__EFI_DHCP6_INFO_REQUEST,
  &TypeInfo__EFI_DHCP6_INFO_CALLBACK,
  &TypeInfo__EFI_DHCP6_RENEW_REBIND,
  &TypeInfo__EFI_DHCP6_DECLINE,
  &TypeInfo__EFI_IPv6_ADDRESS_STAR,
  &TypeInfo__EFI_DHCP6_RELEASE,
  &TypeInfo__EFI_DHCP6_STOP,
  &TypeInfo__EFI_DHCP6_PARSE,
  &TypeInfo__UINT32_STAR,
  NULL
};