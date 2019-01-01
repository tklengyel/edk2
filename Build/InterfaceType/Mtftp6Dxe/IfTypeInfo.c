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

typedef struct _TYPE__gEfiMtftp6ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiMtftp6ServiceBindingProtocolGuid;

TYPE__gEfiMtftp6ServiceBindingProtocolGuid TypeInfo__gEfiMtftp6ServiceBindingProtocolGuid = {
  .TypeName = "gEfiMtftp6ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiMtftp6ServiceBindingProtocolGuid,
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


typedef struct _TYPE__EFI_MTFTP6_PROTOCOL{
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
} TYPE__EFI_MTFTP6_PROTOCOL;

TYPE__EFI_MTFTP6_PROTOCOL TypeInfo__EFI_MTFTP6_PROTOCOL = {
  .TypeName = "EFI_MTFTP6_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_MTFTP6_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_MTFTP6_CONFIGURE",
  .StructFieldName_3 = "GetInfo",
  .StructFieldTypeName_3 = "EFI_MTFTP6_GET_INFO",
  .StructFieldName_4 = "ParseOptions",
  .StructFieldTypeName_4 = "EFI_MTFTP6_PARSE_OPTIONS",
  .StructFieldName_5 = "ReadFile",
  .StructFieldTypeName_5 = "EFI_MTFTP6_READ_FILE",
  .StructFieldName_6 = "WriteFile",
  .StructFieldTypeName_6 = "EFI_MTFTP6_WRITE_FILE",
  .StructFieldName_7 = "ReadDirectory",
  .StructFieldTypeName_7 = "EFI_MTFTP6_READ_DIRECTORY",
  .StructFieldName_8 = "Poll",
  .StructFieldTypeName_8 = "EFI_MTFTP6_POLL"
};


typedef struct _TYPE__EFI_MTFTP6_GET_MODE_DATA{
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
} TYPE__EFI_MTFTP6_GET_MODE_DATA;

TYPE__EFI_MTFTP6_GET_MODE_DATA TypeInfo__EFI_MTFTP6_GET_MODE_DATA = {
  .TypeName = "EFI_MTFTP6_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_MTFTP6_MODE_DATA*"
};


typedef struct _TYPE__EFI_MTFTP6_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_PROTOCOL_STAR;

TYPE__EFI_MTFTP6_PROTOCOL_STAR TypeInfo__EFI_MTFTP6_PROTOCOL_STAR = {
  .TypeName = "EFI_MTFTP6_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_PROTOCOL*),
  .PointedType = "EFI_MTFTP6_PROTOCOL"
};


typedef struct _TYPE__EFI_MTFTP6_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_MODE_DATA_STAR;

TYPE__EFI_MTFTP6_MODE_DATA_STAR TypeInfo__EFI_MTFTP6_MODE_DATA_STAR = {
  .TypeName = "EFI_MTFTP6_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_MODE_DATA*),
  .PointedType = "EFI_MTFTP6_MODE_DATA"
};


typedef struct _TYPE__EFI_MTFTP6_MODE_DATA{
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
} TYPE__EFI_MTFTP6_MODE_DATA;

TYPE__EFI_MTFTP6_MODE_DATA TypeInfo__EFI_MTFTP6_MODE_DATA = {
  .TypeName = "EFI_MTFTP6_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_MODE_DATA),
  .StructFieldNum = 3,
  .StructFieldName_1 = "ConfigData",
  .StructFieldTypeName_1 = "EFI_MTFTP6_CONFIG_DATA",
  .StructFieldName_2 = "SupportedOptionCount",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "SupportedOptions",
  .StructFieldTypeName_3 = "UINT8**"
};


typedef struct _TYPE__EFI_MTFTP6_CONFIG_DATA{
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
} TYPE__EFI_MTFTP6_CONFIG_DATA;

TYPE__EFI_MTFTP6_CONFIG_DATA TypeInfo__EFI_MTFTP6_CONFIG_DATA = {
  .TypeName = "EFI_MTFTP6_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_CONFIG_DATA),
  .StructFieldNum = 6,
  .StructFieldName_1 = "StationIp",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "LocalPort",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "ServerIp",
  .StructFieldTypeName_3 = "EFI_IPv6_ADDRESS",
  .StructFieldName_4 = "InitialServerPort",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "TryCount",
  .StructFieldTypeName_5 = "UINT16",
  .StructFieldName_6 = "TimeoutValue",
  .StructFieldTypeName_6 = "UINT16"
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


typedef struct _TYPE__EFI_MTFTP6_CONFIGURE{
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
} TYPE__EFI_MTFTP6_CONFIGURE;

TYPE__EFI_MTFTP6_CONFIGURE TypeInfo__EFI_MTFTP6_CONFIGURE = {
  .TypeName = "EFI_MTFTP6_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_MTFTP6_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_CONFIG_DATA_STAR;

TYPE__EFI_MTFTP6_CONFIG_DATA_STAR TypeInfo__EFI_MTFTP6_CONFIG_DATA_STAR = {
  .TypeName = "EFI_MTFTP6_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_CONFIG_DATA*),
  .PointedType = "EFI_MTFTP6_CONFIG_DATA"
};


typedef struct _TYPE__EFI_MTFTP6_GET_INFO{
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
} TYPE__EFI_MTFTP6_GET_INFO;

TYPE__EFI_MTFTP6_GET_INFO TypeInfo__EFI_MTFTP6_GET_INFO = {
  .TypeName = "EFI_MTFTP6_GET_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_GET_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 8,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_OVERRIDE_DATA*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT8",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_MTFTP6_OPTION*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "UINT32*",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "EFI_MTFTP6_PACKET**"
};


typedef struct _TYPE__EFI_MTFTP6_OVERRIDE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_OVERRIDE_DATA_STAR;

TYPE__EFI_MTFTP6_OVERRIDE_DATA_STAR TypeInfo__EFI_MTFTP6_OVERRIDE_DATA_STAR = {
  .TypeName = "EFI_MTFTP6_OVERRIDE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_OVERRIDE_DATA*),
  .PointedType = "EFI_MTFTP6_OVERRIDE_DATA"
};


typedef struct _TYPE__EFI_MTFTP6_OVERRIDE_DATA{
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
} TYPE__EFI_MTFTP6_OVERRIDE_DATA;

TYPE__EFI_MTFTP6_OVERRIDE_DATA TypeInfo__EFI_MTFTP6_OVERRIDE_DATA = {
  .TypeName = "EFI_MTFTP6_OVERRIDE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_OVERRIDE_DATA),
  .StructFieldNum = 4,
  .StructFieldName_1 = "ServerIp",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "ServerPort",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "TryCount",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "TimeoutValue",
  .StructFieldTypeName_4 = "UINT16"
};


typedef struct _TYPE__EFI_MTFTP6_OPTION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_OPTION_STAR;

TYPE__EFI_MTFTP6_OPTION_STAR TypeInfo__EFI_MTFTP6_OPTION_STAR = {
  .TypeName = "EFI_MTFTP6_OPTION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_OPTION*),
  .PointedType = "EFI_MTFTP6_OPTION"
};


typedef struct _TYPE__EFI_MTFTP6_OPTION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_MTFTP6_OPTION;

TYPE__EFI_MTFTP6_OPTION TypeInfo__EFI_MTFTP6_OPTION = {
  .TypeName = "EFI_MTFTP6_OPTION",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_OPTION),
  .StructFieldNum = 2,
  .StructFieldName_1 = "OptionStr",
  .StructFieldTypeName_1 = "UINT8*",
  .StructFieldName_2 = "ValueStr",
  .StructFieldTypeName_2 = "UINT8*"
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


typedef struct _TYPE__EFI_MTFTP6_PACKET_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_PACKET_STAR_STAR;

TYPE__EFI_MTFTP6_PACKET_STAR_STAR TypeInfo__EFI_MTFTP6_PACKET_STAR_STAR = {
  .TypeName = "EFI_MTFTP6_PACKET**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_PACKET**),
  .PointedType = "EFI_MTFTP6_PACKET*"
};


typedef struct _TYPE__EFI_MTFTP6_PACKET_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_PACKET_STAR;

TYPE__EFI_MTFTP6_PACKET_STAR TypeInfo__EFI_MTFTP6_PACKET_STAR = {
  .TypeName = "EFI_MTFTP6_PACKET*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_PACKET*),
  .PointedType = "EFI_MTFTP6_PACKET"
};


typedef struct _TYPE__EFI_MTFTP6_PACKET{
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
} TYPE__EFI_MTFTP6_PACKET;

TYPE__EFI_MTFTP6_PACKET TypeInfo__EFI_MTFTP6_PACKET = {
  .TypeName = "EFI_MTFTP6_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_PACKET),
  .StructFieldNum = 9,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Rrq",
  .StructFieldTypeName_2 = "EFI_MTFTP6_REQ_HEADER",
  .StructFieldName_3 = "Wrq",
  .StructFieldTypeName_3 = "EFI_MTFTP6_REQ_HEADER",
  .StructFieldName_4 = "Oack",
  .StructFieldTypeName_4 = "EFI_MTFTP6_OACK_HEADER",
  .StructFieldName_5 = "Data",
  .StructFieldTypeName_5 = "EFI_MTFTP6_DATA_HEADER",
  .StructFieldName_6 = "Ack",
  .StructFieldTypeName_6 = "EFI_MTFTP6_ACK_HEADER",
  .StructFieldName_7 = "Data8",
  .StructFieldTypeName_7 = "EFI_MTFTP6_DATA8_HEADER",
  .StructFieldName_8 = "Ack8",
  .StructFieldTypeName_8 = "EFI_MTFTP6_ACK8_HEADER",
  .StructFieldName_9 = "Error",
  .StructFieldTypeName_9 = "EFI_MTFTP6_ERROR_HEADER"
};


typedef struct _TYPE__EFI_MTFTP6_REQ_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_MTFTP6_REQ_HEADER;

TYPE__EFI_MTFTP6_REQ_HEADER TypeInfo__EFI_MTFTP6_REQ_HEADER = {
  .TypeName = "EFI_MTFTP6_REQ_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_REQ_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Filename",
  .StructFieldTypeName_2 = "UINT8[1]"
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


typedef struct _TYPE__EFI_MTFTP6_OACK_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_MTFTP6_OACK_HEADER;

TYPE__EFI_MTFTP6_OACK_HEADER TypeInfo__EFI_MTFTP6_OACK_HEADER = {
  .TypeName = "EFI_MTFTP6_OACK_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_OACK_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Data",
  .StructFieldTypeName_2 = "UINT8[1]"
};


typedef struct _TYPE__EFI_MTFTP6_DATA_HEADER{
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
} TYPE__EFI_MTFTP6_DATA_HEADER;

TYPE__EFI_MTFTP6_DATA_HEADER TypeInfo__EFI_MTFTP6_DATA_HEADER = {
  .TypeName = "EFI_MTFTP6_DATA_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_DATA_HEADER),
  .StructFieldNum = 3,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Block",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Data",
  .StructFieldTypeName_3 = "UINT8[1]"
};


typedef struct _TYPE__EFI_MTFTP6_ACK_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_MTFTP6_ACK_HEADER;

TYPE__EFI_MTFTP6_ACK_HEADER TypeInfo__EFI_MTFTP6_ACK_HEADER = {
  .TypeName = "EFI_MTFTP6_ACK_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_ACK_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Block",
  .StructFieldTypeName_2 = "UINT16[1]"
};


typedef struct _TYPE__UINT16_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_1;

TYPE__UINT16_ARRAY_1 TypeInfo__UINT16_ARRAY_1 = {
  .TypeName = "UINT16[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[1]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__EFI_MTFTP6_DATA8_HEADER{
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
} TYPE__EFI_MTFTP6_DATA8_HEADER;

TYPE__EFI_MTFTP6_DATA8_HEADER TypeInfo__EFI_MTFTP6_DATA8_HEADER = {
  .TypeName = "EFI_MTFTP6_DATA8_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_DATA8_HEADER),
  .StructFieldNum = 3,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Block",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "Data",
  .StructFieldTypeName_3 = "UINT8[1]"
};


typedef struct _TYPE__EFI_MTFTP6_ACK8_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_MTFTP6_ACK8_HEADER;

TYPE__EFI_MTFTP6_ACK8_HEADER TypeInfo__EFI_MTFTP6_ACK8_HEADER = {
  .TypeName = "EFI_MTFTP6_ACK8_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_ACK8_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Block",
  .StructFieldTypeName_2 = "UINT64[1]"
};


typedef struct _TYPE__UINT64_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT64_ARRAY_1;

TYPE__UINT64_ARRAY_1 TypeInfo__UINT64_ARRAY_1 = {
  .TypeName = "UINT64[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT64[1]),
  .ElementTypeName = "UINT64"
};


typedef struct _TYPE__EFI_MTFTP6_ERROR_HEADER{
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
} TYPE__EFI_MTFTP6_ERROR_HEADER;

TYPE__EFI_MTFTP6_ERROR_HEADER TypeInfo__EFI_MTFTP6_ERROR_HEADER = {
  .TypeName = "EFI_MTFTP6_ERROR_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_ERROR_HEADER),
  .StructFieldNum = 3,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "ErrorCode",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "ErrorMessage",
  .StructFieldTypeName_3 = "UINT8[1]"
};


typedef struct _TYPE__EFI_MTFTP6_PARSE_OPTIONS{
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
} TYPE__EFI_MTFTP6_PARSE_OPTIONS;

TYPE__EFI_MTFTP6_PARSE_OPTIONS TypeInfo__EFI_MTFTP6_PARSE_OPTIONS = {
  .TypeName = "EFI_MTFTP6_PARSE_OPTIONS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_PARSE_OPTIONS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_MTFTP6_PACKET*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT32*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_MTFTP6_OPTION**"
};


typedef struct _TYPE__EFI_MTFTP6_OPTION_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_OPTION_STAR_STAR;

TYPE__EFI_MTFTP6_OPTION_STAR_STAR TypeInfo__EFI_MTFTP6_OPTION_STAR_STAR = {
  .TypeName = "EFI_MTFTP6_OPTION**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_OPTION**),
  .PointedType = "EFI_MTFTP6_OPTION*"
};


typedef struct _TYPE__EFI_MTFTP6_READ_FILE{
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
} TYPE__EFI_MTFTP6_READ_FILE;

TYPE__EFI_MTFTP6_READ_FILE TypeInfo__EFI_MTFTP6_READ_FILE = {
  .TypeName = "EFI_MTFTP6_READ_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_READ_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*"
};


typedef struct _TYPE__EFI_MTFTP6_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MTFTP6_TOKEN_STAR;

TYPE__EFI_MTFTP6_TOKEN_STAR TypeInfo__EFI_MTFTP6_TOKEN_STAR = {
  .TypeName = "EFI_MTFTP6_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MTFTP6_TOKEN*),
  .PointedType = "EFI_MTFTP6_TOKEN"
};


typedef struct _TYPE__EFI_MTFTP6_TOKEN{
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
} TYPE__EFI_MTFTP6_TOKEN;

TYPE__EFI_MTFTP6_TOKEN TypeInfo__EFI_MTFTP6_TOKEN = {
  .TypeName = "EFI_MTFTP6_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MTFTP6_TOKEN),
  .StructFieldNum = 13,
  .StructFieldName_1 = "Status",
  .StructFieldTypeName_1 = "EFI_STATUS",
  .StructFieldName_2 = "Event",
  .StructFieldTypeName_2 = "EFI_EVENT",
  .StructFieldName_3 = "OverrideData",
  .StructFieldTypeName_3 = "EFI_MTFTP6_OVERRIDE_DATA*",
  .StructFieldName_4 = "Filename",
  .StructFieldTypeName_4 = "UINT8*",
  .StructFieldName_5 = "ModeStr",
  .StructFieldTypeName_5 = "UINT8*",
  .StructFieldName_6 = "OptionCount",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "OptionList",
  .StructFieldTypeName_7 = "EFI_MTFTP6_OPTION*",
  .StructFieldName_8 = "BufferSize",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "Buffer",
  .StructFieldTypeName_9 = "void*",
  .StructFieldName_10 = "Context",
  .StructFieldTypeName_10 = "void*",
  .StructFieldName_11 = "CheckPacket",
  .StructFieldTypeName_11 = "EFI_MTFTP6_CHECK_PACKET",
  .StructFieldName_12 = "TimeoutCallback",
  .StructFieldTypeName_12 = "EFI_MTFTP6_TIMEOUT_CALLBACK",
  .StructFieldName_13 = "PacketNeeded",
  .StructFieldTypeName_13 = "EFI_MTFTP6_PACKET_NEEDED"
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


typedef struct _TYPE__EFI_MTFTP6_CHECK_PACKET{
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
} TYPE__EFI_MTFTP6_CHECK_PACKET;

TYPE__EFI_MTFTP6_CHECK_PACKET TypeInfo__EFI_MTFTP6_CHECK_PACKET = {
  .TypeName = "EFI_MTFTP6_CHECK_PACKET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_CHECK_PACKET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_MTFTP6_PACKET*"
};


typedef struct _TYPE__EFI_MTFTP6_TIMEOUT_CALLBACK{
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
} TYPE__EFI_MTFTP6_TIMEOUT_CALLBACK;

TYPE__EFI_MTFTP6_TIMEOUT_CALLBACK TypeInfo__EFI_MTFTP6_TIMEOUT_CALLBACK = {
  .TypeName = "EFI_MTFTP6_TIMEOUT_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_TIMEOUT_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*"
};


typedef struct _TYPE__EFI_MTFTP6_PACKET_NEEDED{
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
} TYPE__EFI_MTFTP6_PACKET_NEEDED;

TYPE__EFI_MTFTP6_PACKET_NEEDED TypeInfo__EFI_MTFTP6_PACKET_NEEDED = {
  .TypeName = "EFI_MTFTP6_PACKET_NEEDED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_PACKET_NEEDED),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void**"
};


typedef struct _TYPE__UINT16_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT16_STAR;

TYPE__UINT16_STAR TypeInfo__UINT16_STAR = {
  .TypeName = "UINT16*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT16*),
  .PointedType = "UINT16"
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


typedef struct _TYPE__EFI_MTFTP6_WRITE_FILE{
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
} TYPE__EFI_MTFTP6_WRITE_FILE;

TYPE__EFI_MTFTP6_WRITE_FILE TypeInfo__EFI_MTFTP6_WRITE_FILE = {
  .TypeName = "EFI_MTFTP6_WRITE_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_WRITE_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*"
};


typedef struct _TYPE__EFI_MTFTP6_READ_DIRECTORY{
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
} TYPE__EFI_MTFTP6_READ_DIRECTORY;

TYPE__EFI_MTFTP6_READ_DIRECTORY TypeInfo__EFI_MTFTP6_READ_DIRECTORY = {
  .TypeName = "EFI_MTFTP6_READ_DIRECTORY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_READ_DIRECTORY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MTFTP6_TOKEN*"
};


typedef struct _TYPE__EFI_MTFTP6_POLL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_MTFTP6_POLL;

TYPE__EFI_MTFTP6_POLL TypeInfo__EFI_MTFTP6_POLL = {
  .TypeName = "EFI_MTFTP6_POLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MTFTP6_POLL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MTFTP6_PROTOCOL*"
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


typedef struct _TYPE__gEfiMtftp6ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiMtftp6ProtocolGuid;

TYPE__gEfiMtftp6ProtocolGuid TypeInfo__gEfiMtftp6ProtocolGuid = {
  .TypeName = "gEfiMtftp6ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiMtftp6ProtocolGuid,
  .InterfaceStructName = "EFI_MTFTP6_PROTOCOL"
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
  &TypeInfo__gEfiMtftp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiMtftp6ProtocolGuid,
  &TypeInfo__gEfiUdp6ProtocolGuid,
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
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiMtftp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiMtftp6ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiMtftp6ServiceBindingProtocolGuid,
  &TypeInfo__EFI_SERVICE_BINDING_PROTOCOL,
  &TypeInfo__EFI_SERVICE_BINDING_CREATE_CHILD,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_SERVICE_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_SERVICE_BINDING_DESTROY_CHILD,
  &TypeInfo__EFI_MTFTP6_PROTOCOL,
  &TypeInfo__EFI_MTFTP6_GET_MODE_DATA,
  &TypeInfo__EFI_MTFTP6_PROTOCOL_STAR,
  &TypeInfo__EFI_MTFTP6_MODE_DATA_STAR,
  &TypeInfo__EFI_MTFTP6_MODE_DATA,
  &TypeInfo__EFI_MTFTP6_CONFIG_DATA,
  &TypeInfo__EFI_IPv6_ADDRESS,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__UINT8,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_STAR_STAR,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_MTFTP6_CONFIGURE,
  &TypeInfo__EFI_MTFTP6_CONFIG_DATA_STAR,
  &TypeInfo__EFI_MTFTP6_GET_INFO,
  &TypeInfo__EFI_MTFTP6_OVERRIDE_DATA_STAR,
  &TypeInfo__EFI_MTFTP6_OVERRIDE_DATA,
  &TypeInfo__EFI_MTFTP6_OPTION_STAR,
  &TypeInfo__EFI_MTFTP6_OPTION,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_MTFTP6_PACKET_STAR_STAR,
  &TypeInfo__EFI_MTFTP6_PACKET_STAR,
  &TypeInfo__EFI_MTFTP6_PACKET,
  &TypeInfo__EFI_MTFTP6_REQ_HEADER,
  &TypeInfo__UINT8_ARRAY_1,
  &TypeInfo__EFI_MTFTP6_OACK_HEADER,
  &TypeInfo__EFI_MTFTP6_DATA_HEADER,
  &TypeInfo__EFI_MTFTP6_ACK_HEADER,
  &TypeInfo__UINT16_ARRAY_1,
  &TypeInfo__EFI_MTFTP6_DATA8_HEADER,
  &TypeInfo__EFI_MTFTP6_ACK8_HEADER,
  &TypeInfo__UINT64_ARRAY_1,
  &TypeInfo__EFI_MTFTP6_ERROR_HEADER,
  &TypeInfo__EFI_MTFTP6_PARSE_OPTIONS,
  &TypeInfo__EFI_MTFTP6_OPTION_STAR_STAR,
  &TypeInfo__EFI_MTFTP6_READ_FILE,
  &TypeInfo__EFI_MTFTP6_TOKEN_STAR,
  &TypeInfo__EFI_MTFTP6_TOKEN,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_MTFTP6_CHECK_PACKET,
  &TypeInfo__EFI_MTFTP6_TIMEOUT_CALLBACK,
  &TypeInfo__EFI_MTFTP6_PACKET_NEEDED,
  &TypeInfo__UINT16_STAR,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_MTFTP6_WRITE_FILE,
  &TypeInfo__EFI_MTFTP6_READ_DIRECTORY,
  &TypeInfo__EFI_MTFTP6_POLL,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_DRIVER_BINDING_START,
  &TypeInfo__EFI_DRIVER_BINDING_STOP,
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