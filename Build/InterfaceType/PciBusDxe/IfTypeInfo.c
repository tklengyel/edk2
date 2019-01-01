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


typedef struct _TYPE__gEfiPciHotPlugRequestProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciHotPlugRequestProtocolGuid;

TYPE__gEfiPciHotPlugRequestProtocolGuid TypeInfo__gEfiPciHotPlugRequestProtocolGuid = {
  .TypeName = "gEfiPciHotPlugRequestProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciHotPlugRequestProtocolGuid,
  .InterfaceStructName = "EFI_PCI_HOTPLUG_REQUEST_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL;

TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL TypeInfo__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL = {
  .TypeName = "EFI_PCI_HOTPLUG_REQUEST_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_HOTPLUG_REQUEST_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "Notify",
  .StructFieldTypeName_1 = "EFI_PCI_HOTPLUG_REQUEST_NOTIFY"
};


typedef struct _TYPE__EFI_PCI_HOTPLUG_REQUEST_NOTIFY{
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
} TYPE__EFI_PCI_HOTPLUG_REQUEST_NOTIFY;

TYPE__EFI_PCI_HOTPLUG_REQUEST_NOTIFY TypeInfo__EFI_PCI_HOTPLUG_REQUEST_NOTIFY = {
  .TypeName = "EFI_PCI_HOTPLUG_REQUEST_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOTPLUG_REQUEST_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOTPLUG_REQUEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_HOTPLUG_OPERATION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT8*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_STAR;

TYPE__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_STAR TypeInfo__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_STAR = {
  .TypeName = "EFI_PCI_HOTPLUG_REQUEST_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PCI_HOTPLUG_REQUEST_PROTOCOL*),
  .PointedType = "EFI_PCI_HOTPLUG_REQUEST_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_HOTPLUG_OPERATION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
} TYPE__EFI_PCI_HOTPLUG_OPERATION;

TYPE__EFI_PCI_HOTPLUG_OPERATION TypeInfo__EFI_PCI_HOTPLUG_OPERATION = {
  .TypeName = "EFI_PCI_HOTPLUG_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_HOTPLUG_OPERATION),
  .EnumValueNum = 2,
  .EnumValueName_1 = "EfiPciHotPlugRequestAdd",
  .EnumValue_1 = EfiPciHotPlugRequestAdd,
  .EnumValueName_2 = "EfiPciHotplugRequestRemove",
  .EnumValue_2 = EfiPciHotplugRequestRemove
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


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL{
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
  const CHAR8* StructFieldName_13;
  const CHAR8* StructFieldTypeName_13;
  const CHAR8* StructFieldName_14;
  const CHAR8* StructFieldTypeName_14;
  const CHAR8* StructFieldName_15;
  const CHAR8* StructFieldTypeName_15;
  const CHAR8* StructFieldName_16;
  const CHAR8* StructFieldTypeName_16;
  const CHAR8* StructFieldName_17;
  const CHAR8* StructFieldTypeName_17;
} TYPE__EFI_PCI_IO_PROTOCOL;

TYPE__EFI_PCI_IO_PROTOCOL TypeInfo__EFI_PCI_IO_PROTOCOL = {
  .TypeName = "EFI_PCI_IO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL),
  .StructFieldNum = 17,
  .StructFieldName_1 = "PollMem",
  .StructFieldTypeName_1 = "EFI_PCI_IO_PROTOCOL_POLL_IO_MEM",
  .StructFieldName_2 = "PollIo",
  .StructFieldTypeName_2 = "EFI_PCI_IO_PROTOCOL_POLL_IO_MEM",
  .StructFieldName_3 = "Mem",
  .StructFieldTypeName_3 = "EFI_PCI_IO_PROTOCOL_ACCESS",
  .StructFieldName_4 = "Io",
  .StructFieldTypeName_4 = "EFI_PCI_IO_PROTOCOL_ACCESS",
  .StructFieldName_5 = "Pci",
  .StructFieldTypeName_5 = "EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS",
  .StructFieldName_6 = "CopyMem",
  .StructFieldTypeName_6 = "EFI_PCI_IO_PROTOCOL_COPY_MEM",
  .StructFieldName_7 = "Map",
  .StructFieldTypeName_7 = "EFI_PCI_IO_PROTOCOL_MAP",
  .StructFieldName_8 = "Unmap",
  .StructFieldTypeName_8 = "EFI_PCI_IO_PROTOCOL_UNMAP",
  .StructFieldName_9 = "AllocateBuffer",
  .StructFieldTypeName_9 = "EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER",
  .StructFieldName_10 = "FreeBuffer",
  .StructFieldTypeName_10 = "EFI_PCI_IO_PROTOCOL_FREE_BUFFER",
  .StructFieldName_11 = "Flush",
  .StructFieldTypeName_11 = "EFI_PCI_IO_PROTOCOL_FLUSH",
  .StructFieldName_12 = "GetLocation",
  .StructFieldTypeName_12 = "EFI_PCI_IO_PROTOCOL_GET_LOCATION",
  .StructFieldName_13 = "Attributes",
  .StructFieldTypeName_13 = "EFI_PCI_IO_PROTOCOL_ATTRIBUTES",
  .StructFieldName_14 = "GetBarAttributes",
  .StructFieldTypeName_14 = "EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES",
  .StructFieldName_15 = "SetBarAttributes",
  .StructFieldTypeName_15 = "EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES",
  .StructFieldName_16 = "RomSize",
  .StructFieldTypeName_16 = "UINT64",
  .StructFieldName_17 = "RomImage",
  .StructFieldTypeName_17 = "void*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_POLL_IO_MEM{
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
} TYPE__EFI_PCI_IO_PROTOCOL_POLL_IO_MEM;

TYPE__EFI_PCI_IO_PROTOCOL_POLL_IO_MEM TypeInfo__EFI_PCI_IO_PROTOCOL_POLL_IO_MEM = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_POLL_IO_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_POLL_IO_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 8,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT64",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT64",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINT64",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "UINT64*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PCI_IO_PROTOCOL_STAR;

TYPE__EFI_PCI_IO_PROTOCOL_STAR TypeInfo__EFI_PCI_IO_PROTOCOL_STAR = {
  .TypeName = "EFI_PCI_IO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL*),
  .PointedType = "EFI_PCI_IO_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_WIDTH{
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
  const CHAR8* EnumValueName_12;
  const UINTN EnumValue_12;
  const CHAR8* EnumValueName_13;
  const UINTN EnumValue_13;
} TYPE__EFI_PCI_IO_PROTOCOL_WIDTH;

TYPE__EFI_PCI_IO_PROTOCOL_WIDTH TypeInfo__EFI_PCI_IO_PROTOCOL_WIDTH = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_WIDTH",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_WIDTH),
  .EnumValueNum = 13,
  .EnumValueName_1 = "EfiPciIoWidthUint8",
  .EnumValue_1 = EfiPciIoWidthUint8,
  .EnumValueName_2 = "EfiPciIoWidthUint16",
  .EnumValue_2 = EfiPciIoWidthUint16,
  .EnumValueName_3 = "EfiPciIoWidthUint32",
  .EnumValue_3 = EfiPciIoWidthUint32,
  .EnumValueName_4 = "EfiPciIoWidthUint64",
  .EnumValue_4 = EfiPciIoWidthUint64,
  .EnumValueName_5 = "EfiPciIoWidthFifoUint8",
  .EnumValue_5 = EfiPciIoWidthFifoUint8,
  .EnumValueName_6 = "EfiPciIoWidthFifoUint16",
  .EnumValue_6 = EfiPciIoWidthFifoUint16,
  .EnumValueName_7 = "EfiPciIoWidthFifoUint32",
  .EnumValue_7 = EfiPciIoWidthFifoUint32,
  .EnumValueName_8 = "EfiPciIoWidthFifoUint64",
  .EnumValue_8 = EfiPciIoWidthFifoUint64,
  .EnumValueName_9 = "EfiPciIoWidthFillUint8",
  .EnumValue_9 = EfiPciIoWidthFillUint8,
  .EnumValueName_10 = "EfiPciIoWidthFillUint16",
  .EnumValue_10 = EfiPciIoWidthFillUint16,
  .EnumValueName_11 = "EfiPciIoWidthFillUint32",
  .EnumValue_11 = EfiPciIoWidthFillUint32,
  .EnumValueName_12 = "EfiPciIoWidthFillUint64",
  .EnumValue_12 = EfiPciIoWidthFillUint64,
  .EnumValueName_13 = "EfiPciIoWidthMaximum",
  .EnumValue_13 = EfiPciIoWidthMaximum
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


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_ACCESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PCI_IO_PROTOCOL_ACCESS;

TYPE__EFI_PCI_IO_PROTOCOL_ACCESS TypeInfo__EFI_PCI_IO_PROTOCOL_ACCESS = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_ACCESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_ACCESS),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Read",
  .StructFieldTypeName_1 = "EFI_PCI_IO_PROTOCOL_IO_MEM",
  .StructFieldName_2 = "Write",
  .StructFieldTypeName_2 = "EFI_PCI_IO_PROTOCOL_IO_MEM"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_IO_MEM{
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
} TYPE__EFI_PCI_IO_PROTOCOL_IO_MEM;

TYPE__EFI_PCI_IO_PROTOCOL_IO_MEM TypeInfo__EFI_PCI_IO_PROTOCOL_IO_MEM = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_IO_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_IO_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "void*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS;

TYPE__EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS TypeInfo__EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Read",
  .StructFieldTypeName_1 = "EFI_PCI_IO_PROTOCOL_CONFIG",
  .StructFieldName_2 = "Write",
  .StructFieldTypeName_2 = "EFI_PCI_IO_PROTOCOL_CONFIG"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_CONFIG{
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
} TYPE__EFI_PCI_IO_PROTOCOL_CONFIG;

TYPE__EFI_PCI_IO_PROTOCOL_CONFIG TypeInfo__EFI_PCI_IO_PROTOCOL_CONFIG = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_COPY_MEM{
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
} TYPE__EFI_PCI_IO_PROTOCOL_COPY_MEM;

TYPE__EFI_PCI_IO_PROTOCOL_COPY_MEM TypeInfo__EFI_PCI_IO_PROTOCOL_COPY_MEM = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_COPY_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_COPY_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT8",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT64",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_MAP{
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
} TYPE__EFI_PCI_IO_PROTOCOL_MAP;

TYPE__EFI_PCI_IO_PROTOCOL_MAP TypeInfo__EFI_PCI_IO_PROTOCOL_MAP = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_OPERATION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_PHYSICAL_ADDRESS*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "void**"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_OPERATION{
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
} TYPE__EFI_PCI_IO_PROTOCOL_OPERATION;

TYPE__EFI_PCI_IO_PROTOCOL_OPERATION TypeInfo__EFI_PCI_IO_PROTOCOL_OPERATION = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_OPERATION),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiPciIoOperationBusMasterRead",
  .EnumValue_1 = EfiPciIoOperationBusMasterRead,
  .EnumValueName_2 = "EfiPciIoOperationBusMasterWrite",
  .EnumValue_2 = EfiPciIoOperationBusMasterWrite,
  .EnumValueName_3 = "EfiPciIoOperationBusMasterCommonBuffer",
  .EnumValue_3 = EfiPciIoOperationBusMasterCommonBuffer,
  .EnumValueName_4 = "EfiPciIoOperationMaximum",
  .EnumValue_4 = EfiPciIoOperationMaximum
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


typedef struct _TYPE__EFI_PHYSICAL_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PHYSICAL_ADDRESS_STAR;

TYPE__EFI_PHYSICAL_ADDRESS_STAR TypeInfo__EFI_PHYSICAL_ADDRESS_STAR = {
  .TypeName = "EFI_PHYSICAL_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PHYSICAL_ADDRESS*),
  .PointedType = "EFI_PHYSICAL_ADDRESS"
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


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_UNMAP{
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
} TYPE__EFI_PCI_IO_PROTOCOL_UNMAP;

TYPE__EFI_PCI_IO_PROTOCOL_UNMAP TypeInfo__EFI_PCI_IO_PROTOCOL_UNMAP = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_UNMAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_UNMAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER{
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
} TYPE__EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER;

TYPE__EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER TypeInfo__EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ALLOCATE_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_MEMORY_TYPE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "void**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT64"
};


typedef struct _TYPE__EFI_ALLOCATE_TYPE{
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
} TYPE__EFI_ALLOCATE_TYPE;

TYPE__EFI_ALLOCATE_TYPE TypeInfo__EFI_ALLOCATE_TYPE = {
  .TypeName = "EFI_ALLOCATE_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_ALLOCATE_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "AllocateAnyPages",
  .EnumValue_1 = AllocateAnyPages,
  .EnumValueName_2 = "AllocateMaxAddress",
  .EnumValue_2 = AllocateMaxAddress,
  .EnumValueName_3 = "AllocateAddress",
  .EnumValue_3 = AllocateAddress,
  .EnumValueName_4 = "MaxAllocateType",
  .EnumValue_4 = MaxAllocateType
};


typedef struct _TYPE__EFI_MEMORY_TYPE{
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
  const CHAR8* EnumValueName_12;
  const UINTN EnumValue_12;
  const CHAR8* EnumValueName_13;
  const UINTN EnumValue_13;
  const CHAR8* EnumValueName_14;
  const UINTN EnumValue_14;
  const CHAR8* EnumValueName_15;
  const UINTN EnumValue_15;
  const CHAR8* EnumValueName_16;
  const UINTN EnumValue_16;
} TYPE__EFI_MEMORY_TYPE;

TYPE__EFI_MEMORY_TYPE TypeInfo__EFI_MEMORY_TYPE = {
  .TypeName = "EFI_MEMORY_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_MEMORY_TYPE),
  .EnumValueNum = 16,
  .EnumValueName_1 = "EfiReservedMemoryType",
  .EnumValue_1 = EfiReservedMemoryType,
  .EnumValueName_2 = "EfiLoaderCode",
  .EnumValue_2 = EfiLoaderCode,
  .EnumValueName_3 = "EfiLoaderData",
  .EnumValue_3 = EfiLoaderData,
  .EnumValueName_4 = "EfiBootServicesCode",
  .EnumValue_4 = EfiBootServicesCode,
  .EnumValueName_5 = "EfiBootServicesData",
  .EnumValue_5 = EfiBootServicesData,
  .EnumValueName_6 = "EfiRuntimeServicesCode",
  .EnumValue_6 = EfiRuntimeServicesCode,
  .EnumValueName_7 = "EfiRuntimeServicesData",
  .EnumValue_7 = EfiRuntimeServicesData,
  .EnumValueName_8 = "EfiConventionalMemory",
  .EnumValue_8 = EfiConventionalMemory,
  .EnumValueName_9 = "EfiUnusableMemory",
  .EnumValue_9 = EfiUnusableMemory,
  .EnumValueName_10 = "EfiACPIReclaimMemory",
  .EnumValue_10 = EfiACPIReclaimMemory,
  .EnumValueName_11 = "EfiACPIMemoryNVS",
  .EnumValue_11 = EfiACPIMemoryNVS,
  .EnumValueName_12 = "EfiMemoryMappedIO",
  .EnumValue_12 = EfiMemoryMappedIO,
  .EnumValueName_13 = "EfiMemoryMappedIOPortSpace",
  .EnumValue_13 = EfiMemoryMappedIOPortSpace,
  .EnumValueName_14 = "EfiPalCode",
  .EnumValue_14 = EfiPalCode,
  .EnumValueName_15 = "EfiPersistentMemory",
  .EnumValue_15 = EfiPersistentMemory,
  .EnumValueName_16 = "EfiMaxMemoryType",
  .EnumValue_16 = EfiMaxMemoryType
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_FREE_BUFFER{
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
} TYPE__EFI_PCI_IO_PROTOCOL_FREE_BUFFER;

TYPE__EFI_PCI_IO_PROTOCOL_FREE_BUFFER TypeInfo__EFI_PCI_IO_PROTOCOL_FREE_BUFFER = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_FREE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_FREE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_FLUSH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PCI_IO_PROTOCOL_FLUSH;

TYPE__EFI_PCI_IO_PROTOCOL_FLUSH TypeInfo__EFI_PCI_IO_PROTOCOL_FLUSH = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_GET_LOCATION{
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
} TYPE__EFI_PCI_IO_PROTOCOL_GET_LOCATION;

TYPE__EFI_PCI_IO_PROTOCOL_GET_LOCATION TypeInfo__EFI_PCI_IO_PROTOCOL_GET_LOCATION = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_GET_LOCATION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_GET_LOCATION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINTN*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTES{
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
} TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTES;

TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTES TypeInfo__EFI_PCI_IO_PROTOCOL_ATTRIBUTES = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT64*"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION{
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
} TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION;

TYPE__EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION TypeInfo__EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION),
  .EnumValueNum = 6,
  .EnumValueName_1 = "EfiPciIoAttributeOperationGet",
  .EnumValue_1 = EfiPciIoAttributeOperationGet,
  .EnumValueName_2 = "EfiPciIoAttributeOperationSet",
  .EnumValue_2 = EfiPciIoAttributeOperationSet,
  .EnumValueName_3 = "EfiPciIoAttributeOperationEnable",
  .EnumValue_3 = EfiPciIoAttributeOperationEnable,
  .EnumValueName_4 = "EfiPciIoAttributeOperationDisable",
  .EnumValue_4 = EfiPciIoAttributeOperationDisable,
  .EnumValueName_5 = "EfiPciIoAttributeOperationSupported",
  .EnumValue_5 = EfiPciIoAttributeOperationSupported,
  .EnumValueName_6 = "EfiPciIoAttributeOperationMaximum",
  .EnumValue_6 = EfiPciIoAttributeOperationMaximum
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES{
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
} TYPE__EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES;

TYPE__EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES TypeInfo__EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void**"
};


typedef struct _TYPE__EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES{
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
} TYPE__EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES;

TYPE__EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES TypeInfo__EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES = {
  .TypeName = "EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT64*"
};


typedef struct _TYPE__gEfiLoadFile2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadFile2ProtocolGuid;

TYPE__gEfiLoadFile2ProtocolGuid TypeInfo__gEfiLoadFile2ProtocolGuid = {
  .TypeName = "gEfiLoadFile2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadFile2ProtocolGuid,
  .InterfaceStructName = "EFI_LOAD_FILE2_PROTOCOL"
};


typedef struct _TYPE__EFI_LOAD_FILE2_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_LOAD_FILE2_PROTOCOL;

TYPE__EFI_LOAD_FILE2_PROTOCOL TypeInfo__EFI_LOAD_FILE2_PROTOCOL = {
  .TypeName = "EFI_LOAD_FILE2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_LOAD_FILE2_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "LoadFile",
  .StructFieldTypeName_1 = "EFI_LOAD_FILE2"
};


typedef struct _TYPE__EFI_LOAD_FILE2{
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
} TYPE__EFI_LOAD_FILE2;

TYPE__EFI_LOAD_FILE2 TypeInfo__EFI_LOAD_FILE2 = {
  .TypeName = "EFI_LOAD_FILE2",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOAD_FILE2),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOAD_FILE2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_LOAD_FILE2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_LOAD_FILE2_PROTOCOL_STAR;

TYPE__EFI_LOAD_FILE2_PROTOCOL_STAR TypeInfo__EFI_LOAD_FILE2_PROTOCOL_STAR = {
  .TypeName = "EFI_LOAD_FILE2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_LOAD_FILE2_PROTOCOL*),
  .PointedType = "EFI_LOAD_FILE2_PROTOCOL"
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


typedef struct _TYPE__gEfiBusSpecificDriverOverrideProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBusSpecificDriverOverrideProtocolGuid;

TYPE__gEfiBusSpecificDriverOverrideProtocolGuid TypeInfo__gEfiBusSpecificDriverOverrideProtocolGuid = {
  .TypeName = "gEfiBusSpecificDriverOverrideProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBusSpecificDriverOverrideProtocolGuid,
  .InterfaceStructName = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL"
};


typedef struct _TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL;

TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL = {
  .TypeName = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "GetDriver",
  .StructFieldTypeName_1 = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER"
};


typedef struct _TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER{
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
} TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER;

TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER = {
  .TypeName = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_STAR;

TYPE__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_STAR TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_STAR = {
  .TypeName = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL*),
  .PointedType = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL"
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


typedef struct _TYPE__gEfiDecompressProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDecompressProtocolGuid;

TYPE__gEfiDecompressProtocolGuid TypeInfo__gEfiDecompressProtocolGuid = {
  .TypeName = "gEfiDecompressProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDecompressProtocolGuid,
  .InterfaceStructName = "EFI_DECOMPRESS_PROTOCOL"
};


typedef struct _TYPE__gEfiIncompatiblePciDeviceSupportProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIncompatiblePciDeviceSupportProtocolGuid;

TYPE__gEfiIncompatiblePciDeviceSupportProtocolGuid TypeInfo__gEfiIncompatiblePciDeviceSupportProtocolGuid = {
  .TypeName = "gEfiIncompatiblePciDeviceSupportProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIncompatiblePciDeviceSupportProtocolGuid,
  .InterfaceStructName = "EFI_INCOMPATIBLE_PCI_DEVICE_SUPPORT_PROTOCOL"
};


typedef struct _TYPE__gEfiLoadedImageDevicePathProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadedImageDevicePathProtocolGuid;

TYPE__gEfiLoadedImageDevicePathProtocolGuid TypeInfo__gEfiLoadedImageDevicePathProtocolGuid = {
  .TypeName = "gEfiLoadedImageDevicePathProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadedImageDevicePathProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_PROTOCOL"
};


typedef struct _TYPE__gEfiPciRootBridgeIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciRootBridgeIoProtocolGuid;

TYPE__gEfiPciRootBridgeIoProtocolGuid TypeInfo__gEfiPciRootBridgeIoProtocolGuid = {
  .TypeName = "gEfiPciRootBridgeIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciRootBridgeIoProtocolGuid,
  .InterfaceStructName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL"
};


typedef struct _TYPE__gEfiPciPlatformProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciPlatformProtocolGuid;

TYPE__gEfiPciPlatformProtocolGuid TypeInfo__gEfiPciPlatformProtocolGuid = {
  .TypeName = "gEfiPciPlatformProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciPlatformProtocolGuid,
  .InterfaceStructName = "EFI_PCI_PLATFORM_PROTOCOL"
};


typedef struct _TYPE__gEfiPciHotPlugInitProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciHotPlugInitProtocolGuid;

TYPE__gEfiPciHotPlugInitProtocolGuid TypeInfo__gEfiPciHotPlugInitProtocolGuid = {
  .TypeName = "gEfiPciHotPlugInitProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciHotPlugInitProtocolGuid,
  .InterfaceStructName = "EFI_PCI_HOT_PLUG_INIT_PROTOCOL"
};


typedef struct _TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid;

TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid TypeInfo__gEfiPciHostBridgeResourceAllocationProtocolGuid = {
  .TypeName = "gEfiPciHostBridgeResourceAllocationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciHostBridgeResourceAllocationProtocolGuid,
  .InterfaceStructName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL"
};


typedef struct _TYPE__gEdkiiIoMmuProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiIoMmuProtocolGuid;

TYPE__gEdkiiIoMmuProtocolGuid TypeInfo__gEdkiiIoMmuProtocolGuid = {
  .TypeName = "gEdkiiIoMmuProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiIoMmuProtocolGuid,
  .InterfaceStructName = "EDKII_IOMMU_PROTOCOL"
};


typedef struct _TYPE__gEfiPciOverrideProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciOverrideProtocolGuid;

TYPE__gEfiPciOverrideProtocolGuid TypeInfo__gEfiPciOverrideProtocolGuid = {
  .TypeName = "gEfiPciOverrideProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciOverrideProtocolGuid,
  .InterfaceStructName = "EFI_PCI_OVERRIDE_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiPciHostBridgeResourceAllocationProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiPciHotPlugRequestProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  &TypeInfo__gEdkiiIoMmuProtocolGuid,
  &TypeInfo__gEfiDecompressProtocolGuid,
  &TypeInfo__gEfiIncompatiblePciDeviceSupportProtocolGuid,
  &TypeInfo__gEfiPciPlatformProtocolGuid,
  &TypeInfo__gEfiPciHotPlugInitProtocolGuid,
  &TypeInfo__gEfiPciOverrideProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiLoadedImageDevicePathProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiLoadFile2ProtocolGuid,
  &TypeInfo__gEfiBusSpecificDriverOverrideProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
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
  &TypeInfo__gEfiPciHotPlugRequestProtocolGuid,
  &TypeInfo__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL,
  &TypeInfo__EFI_PCI_HOTPLUG_REQUEST_NOTIFY,
  &TypeInfo__EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_STAR,
  &TypeInfo__EFI_PCI_HOTPLUG_OPERATION,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__EFI_PCI_IO_PROTOCOL,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_POLL_IO_MEM,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_STAR,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_WIDTH,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_ACCESS,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_IO_MEM,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_CONFIG,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_COPY_MEM,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_MAP,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_OPERATION,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_UNMAP,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_ALLOCATE_BUFFER,
  &TypeInfo__EFI_ALLOCATE_TYPE,
  &TypeInfo__EFI_MEMORY_TYPE,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_FREE_BUFFER,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_FLUSH,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_GET_LOCATION,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_ATTRIBUTES,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_GET_BAR_ATTRIBUTES,
  &TypeInfo__EFI_PCI_IO_PROTOCOL_SET_BAR_ATTRIBUTES,
  &TypeInfo__gEfiLoadFile2ProtocolGuid,
  &TypeInfo__EFI_LOAD_FILE2_PROTOCOL,
  &TypeInfo__EFI_LOAD_FILE2,
  &TypeInfo__EFI_LOAD_FILE2_PROTOCOL_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__gEfiBusSpecificDriverOverrideProtocolGuid,
  &TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL,
  &TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_GET_DRIVER,
  &TypeInfo__EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_STAR,
  NULL
};