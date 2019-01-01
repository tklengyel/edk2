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

typedef struct _TYPE__gEfiIp6ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp6ServiceBindingProtocolGuid;

TYPE__gEfiIp6ServiceBindingProtocolGuid TypeInfo__gEfiIp6ServiceBindingProtocolGuid = {
  .TypeName = "gEfiIp6ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp6ServiceBindingProtocolGuid,
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


typedef struct _TYPE__EFI_IP6_CONFIG_PROTOCOL{
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
} TYPE__EFI_IP6_CONFIG_PROTOCOL;

TYPE__EFI_IP6_CONFIG_PROTOCOL TypeInfo__EFI_IP6_CONFIG_PROTOCOL = {
  .TypeName = "EFI_IP6_CONFIG_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_CONFIG_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "SetData",
  .StructFieldTypeName_1 = "EFI_IP6_CONFIG_SET_DATA",
  .StructFieldName_2 = "GetData",
  .StructFieldTypeName_2 = "EFI_IP6_CONFIG_GET_DATA",
  .StructFieldName_3 = "RegisterDataNotify",
  .StructFieldTypeName_3 = "EFI_IP6_CONFIG_REGISTER_NOTIFY",
  .StructFieldName_4 = "UnregisterDataNotify",
  .StructFieldTypeName_4 = "EFI_IP6_CONFIG_UNREGISTER_NOTIFY"
};


typedef struct _TYPE__EFI_IP6_CONFIG_SET_DATA{
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
} TYPE__EFI_IP6_CONFIG_SET_DATA;

TYPE__EFI_IP6_CONFIG_SET_DATA TypeInfo__EFI_IP6_CONFIG_SET_DATA = {
  .TypeName = "EFI_IP6_CONFIG_SET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CONFIG_SET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_CONFIG_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_IP6_CONFIG_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_CONFIG_PROTOCOL_STAR;

TYPE__EFI_IP6_CONFIG_PROTOCOL_STAR TypeInfo__EFI_IP6_CONFIG_PROTOCOL_STAR = {
  .TypeName = "EFI_IP6_CONFIG_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_CONFIG_PROTOCOL*),
  .PointedType = "EFI_IP6_CONFIG_PROTOCOL"
};


typedef struct _TYPE__EFI_IP6_CONFIG_DATA_TYPE{
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
} TYPE__EFI_IP6_CONFIG_DATA_TYPE;

TYPE__EFI_IP6_CONFIG_DATA_TYPE TypeInfo__EFI_IP6_CONFIG_DATA_TYPE = {
  .TypeName = "EFI_IP6_CONFIG_DATA_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_IP6_CONFIG_DATA_TYPE),
  .EnumValueNum = 8,
  .EnumValueName_1 = "Ip6ConfigDataTypeInterfaceInfo",
  .EnumValue_1 = Ip6ConfigDataTypeInterfaceInfo,
  .EnumValueName_2 = "Ip6ConfigDataTypeAltInterfaceId",
  .EnumValue_2 = Ip6ConfigDataTypeAltInterfaceId,
  .EnumValueName_3 = "Ip6ConfigDataTypePolicy",
  .EnumValue_3 = Ip6ConfigDataTypePolicy,
  .EnumValueName_4 = "Ip6ConfigDataTypeDupAddrDetectTransmits",
  .EnumValue_4 = Ip6ConfigDataTypeDupAddrDetectTransmits,
  .EnumValueName_5 = "Ip6ConfigDataTypeManualAddress",
  .EnumValue_5 = Ip6ConfigDataTypeManualAddress,
  .EnumValueName_6 = "Ip6ConfigDataTypeGateway",
  .EnumValue_6 = Ip6ConfigDataTypeGateway,
  .EnumValueName_7 = "Ip6ConfigDataTypeDnsServer",
  .EnumValue_7 = Ip6ConfigDataTypeDnsServer,
  .EnumValueName_8 = "Ip6ConfigDataTypeMaximum",
  .EnumValue_8 = Ip6ConfigDataTypeMaximum
};


typedef struct _TYPE__EFI_IP6_CONFIG_GET_DATA{
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
} TYPE__EFI_IP6_CONFIG_GET_DATA;

TYPE__EFI_IP6_CONFIG_GET_DATA TypeInfo__EFI_IP6_CONFIG_GET_DATA = {
  .TypeName = "EFI_IP6_CONFIG_GET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CONFIG_GET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_CONFIG_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
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


typedef struct _TYPE__EFI_IP6_CONFIG_REGISTER_NOTIFY{
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
} TYPE__EFI_IP6_CONFIG_REGISTER_NOTIFY;

TYPE__EFI_IP6_CONFIG_REGISTER_NOTIFY TypeInfo__EFI_IP6_CONFIG_REGISTER_NOTIFY = {
  .TypeName = "EFI_IP6_CONFIG_REGISTER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CONFIG_REGISTER_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_CONFIG_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT"
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


typedef struct _TYPE__EFI_IP6_CONFIG_UNREGISTER_NOTIFY{
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
} TYPE__EFI_IP6_CONFIG_UNREGISTER_NOTIFY;

TYPE__EFI_IP6_CONFIG_UNREGISTER_NOTIFY TypeInfo__EFI_IP6_CONFIG_UNREGISTER_NOTIFY = {
  .TypeName = "EFI_IP6_CONFIG_UNREGISTER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CONFIG_UNREGISTER_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_CONFIG_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_IP6_PROTOCOL{
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
} TYPE__EFI_IP6_PROTOCOL;

TYPE__EFI_IP6_PROTOCOL TypeInfo__EFI_IP6_PROTOCOL = {
  .TypeName = "EFI_IP6_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_PROTOCOL),
  .StructFieldNum = 9,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_IP6_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_IP6_CONFIGURE",
  .StructFieldName_3 = "Groups",
  .StructFieldTypeName_3 = "EFI_IP6_GROUPS",
  .StructFieldName_4 = "Routes",
  .StructFieldTypeName_4 = "EFI_IP6_ROUTES",
  .StructFieldName_5 = "Neighbors",
  .StructFieldTypeName_5 = "EFI_IP6_NEIGHBORS",
  .StructFieldName_6 = "Transmit",
  .StructFieldTypeName_6 = "EFI_IP6_TRANSMIT",
  .StructFieldName_7 = "Receive",
  .StructFieldTypeName_7 = "EFI_IP6_RECEIVE",
  .StructFieldName_8 = "Cancel",
  .StructFieldTypeName_8 = "EFI_IP6_CANCEL",
  .StructFieldName_9 = "Poll",
  .StructFieldTypeName_9 = "EFI_IP6_POLL"
};


typedef struct _TYPE__EFI_IP6_GET_MODE_DATA{
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
} TYPE__EFI_IP6_GET_MODE_DATA;

TYPE__EFI_IP6_GET_MODE_DATA TypeInfo__EFI_IP6_GET_MODE_DATA = {
  .TypeName = "EFI_IP6_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_IP6_MODE_DATA*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_MANAGED_NETWORK_CONFIG_DATA*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_SIMPLE_NETWORK_MODE*"
};


typedef struct _TYPE__EFI_IP6_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_PROTOCOL_STAR;

TYPE__EFI_IP6_PROTOCOL_STAR TypeInfo__EFI_IP6_PROTOCOL_STAR = {
  .TypeName = "EFI_IP6_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_PROTOCOL*),
  .PointedType = "EFI_IP6_PROTOCOL"
};


typedef struct _TYPE__EFI_IP6_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_MODE_DATA_STAR;

TYPE__EFI_IP6_MODE_DATA_STAR TypeInfo__EFI_IP6_MODE_DATA_STAR = {
  .TypeName = "EFI_IP6_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_MODE_DATA*),
  .PointedType = "EFI_IP6_MODE_DATA"
};


typedef struct _TYPE__EFI_IP6_MODE_DATA{
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
} TYPE__EFI_IP6_MODE_DATA;

TYPE__EFI_IP6_MODE_DATA TypeInfo__EFI_IP6_MODE_DATA = {
  .TypeName = "EFI_IP6_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_MODE_DATA),
  .StructFieldNum = 16,
  .StructFieldName_1 = "IsStarted",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "MaxPacketSize",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "ConfigData",
  .StructFieldTypeName_3 = "EFI_IP6_CONFIG_DATA",
  .StructFieldName_4 = "IsConfigured",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "AddressCount",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "AddressList",
  .StructFieldTypeName_6 = "EFI_IP6_ADDRESS_INFO*",
  .StructFieldName_7 = "GroupCount",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "GroupTable",
  .StructFieldTypeName_8 = "EFI_IPv6_ADDRESS*",
  .StructFieldName_9 = "RouteCount",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "RouteTable",
  .StructFieldTypeName_10 = "EFI_IP6_ROUTE_TABLE*",
  .StructFieldName_11 = "NeighborCount",
  .StructFieldTypeName_11 = "UINT32",
  .StructFieldName_12 = "NeighborCache",
  .StructFieldTypeName_12 = "EFI_IP6_NEIGHBOR_CACHE*",
  .StructFieldName_13 = "PrefixCount",
  .StructFieldTypeName_13 = "UINT32",
  .StructFieldName_14 = "PrefixTable",
  .StructFieldTypeName_14 = "EFI_IP6_ADDRESS_INFO*",
  .StructFieldName_15 = "IcmpTypeCount",
  .StructFieldTypeName_15 = "UINT32",
  .StructFieldName_16 = "IcmpTypeList",
  .StructFieldTypeName_16 = "EFI_IP6_ICMP_TYPE*"
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


typedef struct _TYPE__EFI_IP6_CONFIG_DATA{
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
} TYPE__EFI_IP6_CONFIG_DATA;

TYPE__EFI_IP6_CONFIG_DATA TypeInfo__EFI_IP6_CONFIG_DATA = {
  .TypeName = "EFI_IP6_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_CONFIG_DATA),
  .StructFieldNum = 11,
  .StructFieldName_1 = "DefaultProtocol",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "AcceptAnyProtocol",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "AcceptIcmpErrors",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "AcceptPromiscuous",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "DestinationAddress",
  .StructFieldTypeName_5 = "EFI_IPv6_ADDRESS",
  .StructFieldName_6 = "StationAddress",
  .StructFieldTypeName_6 = "EFI_IPv6_ADDRESS",
  .StructFieldName_7 = "TrafficClass",
  .StructFieldTypeName_7 = "UINT8",
  .StructFieldName_8 = "HopLimit",
  .StructFieldTypeName_8 = "UINT8",
  .StructFieldName_9 = "FlowLabel",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "ReceiveTimeout",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "TransmitTimeout",
  .StructFieldTypeName_11 = "UINT32"
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


typedef struct _TYPE__EFI_IP6_ADDRESS_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_ADDRESS_INFO_STAR;

TYPE__EFI_IP6_ADDRESS_INFO_STAR TypeInfo__EFI_IP6_ADDRESS_INFO_STAR = {
  .TypeName = "EFI_IP6_ADDRESS_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_ADDRESS_INFO*),
  .PointedType = "EFI_IP6_ADDRESS_INFO"
};


typedef struct _TYPE__EFI_IP6_ADDRESS_INFO{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_IP6_ADDRESS_INFO;

TYPE__EFI_IP6_ADDRESS_INFO TypeInfo__EFI_IP6_ADDRESS_INFO = {
  .TypeName = "EFI_IP6_ADDRESS_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_ADDRESS_INFO),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Address",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "PrefixLength",
  .StructFieldTypeName_2 = "UINT8"
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


typedef struct _TYPE__EFI_IP6_ROUTE_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_ROUTE_TABLE_STAR;

TYPE__EFI_IP6_ROUTE_TABLE_STAR TypeInfo__EFI_IP6_ROUTE_TABLE_STAR = {
  .TypeName = "EFI_IP6_ROUTE_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_ROUTE_TABLE*),
  .PointedType = "EFI_IP6_ROUTE_TABLE"
};


typedef struct _TYPE__EFI_IP6_ROUTE_TABLE{
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
} TYPE__EFI_IP6_ROUTE_TABLE;

TYPE__EFI_IP6_ROUTE_TABLE TypeInfo__EFI_IP6_ROUTE_TABLE = {
  .TypeName = "EFI_IP6_ROUTE_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_ROUTE_TABLE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Gateway",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "Destination",
  .StructFieldTypeName_2 = "EFI_IPv6_ADDRESS",
  .StructFieldName_3 = "PrefixLength",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_IP6_NEIGHBOR_CACHE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_NEIGHBOR_CACHE_STAR;

TYPE__EFI_IP6_NEIGHBOR_CACHE_STAR TypeInfo__EFI_IP6_NEIGHBOR_CACHE_STAR = {
  .TypeName = "EFI_IP6_NEIGHBOR_CACHE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_NEIGHBOR_CACHE*),
  .PointedType = "EFI_IP6_NEIGHBOR_CACHE"
};


typedef struct _TYPE__EFI_IP6_NEIGHBOR_CACHE{
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
} TYPE__EFI_IP6_NEIGHBOR_CACHE;

TYPE__EFI_IP6_NEIGHBOR_CACHE TypeInfo__EFI_IP6_NEIGHBOR_CACHE = {
  .TypeName = "EFI_IP6_NEIGHBOR_CACHE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_NEIGHBOR_CACHE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Neighbor",
  .StructFieldTypeName_1 = "EFI_IPv6_ADDRESS",
  .StructFieldName_2 = "LinkAddress",
  .StructFieldTypeName_2 = "EFI_MAC_ADDRESS",
  .StructFieldName_3 = "State",
  .StructFieldTypeName_3 = "EFI_IP6_NEIGHBOR_STATE"
};


typedef struct _TYPE__EFI_MAC_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_MAC_ADDRESS;

TYPE__EFI_MAC_ADDRESS TypeInfo__EFI_MAC_ADDRESS = {
  .TypeName = "EFI_MAC_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MAC_ADDRESS),
  .StructFieldNum = 1,
  .StructFieldName_1 = "Addr",
  .StructFieldTypeName_1 = "UINT8[32]"
};


typedef struct _TYPE__UINT8_ARRAY_32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_32;

TYPE__UINT8_ARRAY_32 TypeInfo__UINT8_ARRAY_32 = {
  .TypeName = "UINT8[32]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[32]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_IP6_NEIGHBOR_STATE{
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
} TYPE__EFI_IP6_NEIGHBOR_STATE;

TYPE__EFI_IP6_NEIGHBOR_STATE TypeInfo__EFI_IP6_NEIGHBOR_STATE = {
  .TypeName = "EFI_IP6_NEIGHBOR_STATE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_IP6_NEIGHBOR_STATE),
  .EnumValueNum = 5,
  .EnumValueName_1 = "EfiNeighborInComplete",
  .EnumValue_1 = EfiNeighborInComplete,
  .EnumValueName_2 = "EfiNeighborReachable",
  .EnumValue_2 = EfiNeighborReachable,
  .EnumValueName_3 = "EfiNeighborStale",
  .EnumValue_3 = EfiNeighborStale,
  .EnumValueName_4 = "EfiNeighborDelay",
  .EnumValue_4 = EfiNeighborDelay,
  .EnumValueName_5 = "EfiNeighborProbe",
  .EnumValue_5 = EfiNeighborProbe
};


typedef struct _TYPE__EFI_IP6_ICMP_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_ICMP_TYPE_STAR;

TYPE__EFI_IP6_ICMP_TYPE_STAR TypeInfo__EFI_IP6_ICMP_TYPE_STAR = {
  .TypeName = "EFI_IP6_ICMP_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_ICMP_TYPE*),
  .PointedType = "EFI_IP6_ICMP_TYPE"
};


typedef struct _TYPE__EFI_IP6_ICMP_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_IP6_ICMP_TYPE;

TYPE__EFI_IP6_ICMP_TYPE TypeInfo__EFI_IP6_ICMP_TYPE = {
  .TypeName = "EFI_IP6_ICMP_TYPE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_ICMP_TYPE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Code",
  .StructFieldTypeName_2 = "UINT8"
};


typedef struct _TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR;

TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR = {
  .TypeName = "EFI_MANAGED_NETWORK_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MANAGED_NETWORK_CONFIG_DATA*),
  .PointedType = "EFI_MANAGED_NETWORK_CONFIG_DATA"
};


typedef struct _TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA{
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
} TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA;

TYPE__EFI_MANAGED_NETWORK_CONFIG_DATA TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA = {
  .TypeName = "EFI_MANAGED_NETWORK_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MANAGED_NETWORK_CONFIG_DATA),
  .StructFieldNum = 10,
  .StructFieldName_1 = "ReceivedQueueTimeoutValue",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "TransmitQueueTimeoutValue",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "ProtocolTypeFilter",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "EnableUnicastReceive",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "EnableMulticastReceive",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "EnableBroadcastReceive",
  .StructFieldTypeName_6 = "BOOLEAN",
  .StructFieldName_7 = "EnablePromiscuousReceive",
  .StructFieldTypeName_7 = "BOOLEAN",
  .StructFieldName_8 = "FlushQueuesOnReset",
  .StructFieldTypeName_8 = "BOOLEAN",
  .StructFieldName_9 = "EnableReceiveTimestamps",
  .StructFieldTypeName_9 = "BOOLEAN",
  .StructFieldName_10 = "DisableBackgroundPolling",
  .StructFieldTypeName_10 = "BOOLEAN"
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


typedef struct _TYPE__EFI_SIMPLE_NETWORK_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_NETWORK_MODE_STAR;

TYPE__EFI_SIMPLE_NETWORK_MODE_STAR TypeInfo__EFI_SIMPLE_NETWORK_MODE_STAR = {
  .TypeName = "EFI_SIMPLE_NETWORK_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_MODE*),
  .PointedType = "EFI_SIMPLE_NETWORK_MODE"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_MODE{
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
  const CHAR8* StructFieldName_18;
  const CHAR8* StructFieldTypeName_18;
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
} TYPE__EFI_SIMPLE_NETWORK_MODE;

TYPE__EFI_SIMPLE_NETWORK_MODE TypeInfo__EFI_SIMPLE_NETWORK_MODE = {
  .TypeName = "EFI_SIMPLE_NETWORK_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_MODE),
  .StructFieldNum = 19,
  .StructFieldName_1 = "State",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "HwAddressSize",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "MediaHeaderSize",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "MaxPacketSize",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "NvRamSize",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "NvRamAccessSize",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "ReceiveFilterMask",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "ReceiveFilterSetting",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "MaxMCastFilterCount",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "MCastFilterCount",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "MCastFilter",
  .StructFieldTypeName_11 = "EFI_MAC_ADDRESS[16]",
  .StructFieldName_12 = "CurrentAddress",
  .StructFieldTypeName_12 = "EFI_MAC_ADDRESS",
  .StructFieldName_13 = "BroadcastAddress",
  .StructFieldTypeName_13 = "EFI_MAC_ADDRESS",
  .StructFieldName_14 = "PermanentAddress",
  .StructFieldTypeName_14 = "EFI_MAC_ADDRESS",
  .StructFieldName_15 = "IfType",
  .StructFieldTypeName_15 = "UINT8",
  .StructFieldName_16 = "MacAddressChangeable",
  .StructFieldTypeName_16 = "BOOLEAN",
  .StructFieldName_17 = "MultipleTxSupported",
  .StructFieldTypeName_17 = "BOOLEAN",
  .StructFieldName_18 = "MediaPresentSupported",
  .StructFieldTypeName_18 = "BOOLEAN",
  .StructFieldName_19 = "MediaPresent",
  .StructFieldTypeName_19 = "BOOLEAN"
};


typedef struct _TYPE__EFI_MAC_ADDRESS_ARRAY_16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_MAC_ADDRESS_ARRAY_16;

TYPE__EFI_MAC_ADDRESS_ARRAY_16 TypeInfo__EFI_MAC_ADDRESS_ARRAY_16 = {
  .TypeName = "EFI_MAC_ADDRESS[16]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_MAC_ADDRESS[16]),
  .ElementTypeName = "EFI_MAC_ADDRESS"
};


typedef struct _TYPE__EFI_IP6_CONFIGURE{
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
} TYPE__EFI_IP6_CONFIGURE;

TYPE__EFI_IP6_CONFIGURE TypeInfo__EFI_IP6_CONFIGURE = {
  .TypeName = "EFI_IP6_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_IP6_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_CONFIG_DATA_STAR;

TYPE__EFI_IP6_CONFIG_DATA_STAR TypeInfo__EFI_IP6_CONFIG_DATA_STAR = {
  .TypeName = "EFI_IP6_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_CONFIG_DATA*),
  .PointedType = "EFI_IP6_CONFIG_DATA"
};


typedef struct _TYPE__EFI_IP6_GROUPS{
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
} TYPE__EFI_IP6_GROUPS;

TYPE__EFI_IP6_GROUPS TypeInfo__EFI_IP6_GROUPS = {
  .TypeName = "EFI_IP6_GROUPS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_GROUPS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv6_ADDRESS*"
};


typedef struct _TYPE__EFI_IP6_ROUTES{
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
} TYPE__EFI_IP6_ROUTES;

TYPE__EFI_IP6_ROUTES TypeInfo__EFI_IP6_ROUTES = {
  .TypeName = "EFI_IP6_ROUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_ROUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv6_ADDRESS*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IPv6_ADDRESS*"
};


typedef struct _TYPE__EFI_IP6_NEIGHBORS{
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
} TYPE__EFI_IP6_NEIGHBORS;

TYPE__EFI_IP6_NEIGHBORS TypeInfo__EFI_IP6_NEIGHBORS = {
  .TypeName = "EFI_IP6_NEIGHBORS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_NEIGHBORS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv6_ADDRESS*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_MAC_ADDRESS*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT32",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "BOOLEAN"
};


typedef struct _TYPE__EFI_MAC_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MAC_ADDRESS_STAR;

TYPE__EFI_MAC_ADDRESS_STAR TypeInfo__EFI_MAC_ADDRESS_STAR = {
  .TypeName = "EFI_MAC_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MAC_ADDRESS*),
  .PointedType = "EFI_MAC_ADDRESS"
};


typedef struct _TYPE__EFI_IP6_TRANSMIT{
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
} TYPE__EFI_IP6_TRANSMIT;

TYPE__EFI_IP6_TRANSMIT TypeInfo__EFI_IP6_TRANSMIT = {
  .TypeName = "EFI_IP6_TRANSMIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_TRANSMIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_IP6_COMPLETION_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP6_COMPLETION_TOKEN_STAR;

TYPE__EFI_IP6_COMPLETION_TOKEN_STAR TypeInfo__EFI_IP6_COMPLETION_TOKEN_STAR = {
  .TypeName = "EFI_IP6_COMPLETION_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP6_COMPLETION_TOKEN*),
  .PointedType = "EFI_IP6_COMPLETION_TOKEN"
};


typedef struct _TYPE__EFI_IP6_COMPLETION_TOKEN{
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
} TYPE__EFI_IP6_COMPLETION_TOKEN;

TYPE__EFI_IP6_COMPLETION_TOKEN TypeInfo__EFI_IP6_COMPLETION_TOKEN = {
  .TypeName = "EFI_IP6_COMPLETION_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP6_COMPLETION_TOKEN),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Event",
  .StructFieldTypeName_1 = "EFI_EVENT",
  .StructFieldName_2 = "Status",
  .StructFieldTypeName_2 = "EFI_STATUS",
  .StructFieldName_3 = "Packet",
  .StructFieldTypeName_3 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/Ip6.h:544:3)"
};


typedef struct _TYPE__EFI_IP6_RECEIVE{
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
} TYPE__EFI_IP6_RECEIVE;

TYPE__EFI_IP6_RECEIVE TypeInfo__EFI_IP6_RECEIVE = {
  .TypeName = "EFI_IP6_RECEIVE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_RECEIVE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_IP6_CANCEL{
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
} TYPE__EFI_IP6_CANCEL;

TYPE__EFI_IP6_CANCEL TypeInfo__EFI_IP6_CANCEL = {
  .TypeName = "EFI_IP6_CANCEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_CANCEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_IP6_POLL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_IP6_POLL;

TYPE__EFI_IP6_POLL TypeInfo__EFI_IP6_POLL = {
  .TypeName = "EFI_IP6_POLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IP6_POLL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IP6_PROTOCOL*"
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


typedef struct _TYPE__gEfiIp6ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp6ProtocolGuid;

TYPE__gEfiIp6ProtocolGuid TypeInfo__gEfiIp6ProtocolGuid = {
  .TypeName = "gEfiIp6ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp6ProtocolGuid,
  .InterfaceStructName = "EFI_IP6_PROTOCOL"
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


typedef struct _TYPE__gEfiIpSec2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIpSec2ProtocolGuid;

TYPE__gEfiIpSec2ProtocolGuid TypeInfo__gEfiIpSec2ProtocolGuid = {
  .TypeName = "gEfiIpSec2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIpSec2ProtocolGuid,
  .InterfaceStructName = "EFI_IPSEC2_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiIp6ProtocolGuid,
  &TypeInfo__gEfiManagedNetworkServiceBindingProtocolGuid,
  &TypeInfo__gEfiIp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiManagedNetworkProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiFormBrowser2ProtocolGuid,
  &TypeInfo__gEfiDpcProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiIpSec2ProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiManagedNetworkProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiManagedNetworkServiceBindingProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiHiiConfigAccessProtocolGuid,
  &TypeInfo__gEfiIp6ConfigProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiIp6ProtocolGuid,
  &TypeInfo__gEfiIp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiIp6ServiceBindingProtocolGuid,
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
  &TypeInfo__gEfiIp6ConfigProtocolGuid,
  &TypeInfo__EFI_IP6_CONFIG_PROTOCOL,
  &TypeInfo__EFI_IP6_CONFIG_SET_DATA,
  &TypeInfo__EFI_IP6_CONFIG_PROTOCOL_STAR,
  &TypeInfo__EFI_IP6_CONFIG_DATA_TYPE,
  &TypeInfo__EFI_IP6_CONFIG_GET_DATA,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_IP6_CONFIG_REGISTER_NOTIFY,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_IP6_CONFIG_UNREGISTER_NOTIFY,
  &TypeInfo__EFI_IP6_PROTOCOL,
  &TypeInfo__EFI_IP6_GET_MODE_DATA,
  &TypeInfo__EFI_IP6_PROTOCOL_STAR,
  &TypeInfo__EFI_IP6_MODE_DATA_STAR,
  &TypeInfo__EFI_IP6_MODE_DATA,
  &TypeInfo__BOOLEAN,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_IP6_CONFIG_DATA,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_IPv6_ADDRESS,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__EFI_IP6_ADDRESS_INFO_STAR,
  &TypeInfo__EFI_IP6_ADDRESS_INFO,
  &TypeInfo__EFI_IPv6_ADDRESS_STAR,
  &TypeInfo__EFI_IP6_ROUTE_TABLE_STAR,
  &TypeInfo__EFI_IP6_ROUTE_TABLE,
  &TypeInfo__EFI_IP6_NEIGHBOR_CACHE_STAR,
  &TypeInfo__EFI_IP6_NEIGHBOR_CACHE,
  &TypeInfo__EFI_MAC_ADDRESS,
  &TypeInfo__UINT8_ARRAY_32,
  &TypeInfo__EFI_IP6_NEIGHBOR_STATE,
  &TypeInfo__EFI_IP6_ICMP_TYPE_STAR,
  &TypeInfo__EFI_IP6_ICMP_TYPE,
  &TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR,
  &TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE,
  &TypeInfo__EFI_MAC_ADDRESS_ARRAY_16,
  &TypeInfo__EFI_IP6_CONFIGURE,
  &TypeInfo__EFI_IP6_CONFIG_DATA_STAR,
  &TypeInfo__EFI_IP6_GROUPS,
  &TypeInfo__EFI_IP6_ROUTES,
  &TypeInfo__EFI_IP6_NEIGHBORS,
  &TypeInfo__EFI_MAC_ADDRESS_STAR,
  &TypeInfo__EFI_IP6_TRANSMIT,
  &TypeInfo__EFI_IP6_COMPLETION_TOKEN_STAR,
  &TypeInfo__EFI_IP6_COMPLETION_TOKEN,
  &TypeInfo__EFI_IP6_RECEIVE,
  &TypeInfo__EFI_IP6_CANCEL,
  &TypeInfo__EFI_IP6_POLL,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
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
  &TypeInfo__EFI_HII_TIME,
  &TypeInfo__EFI_HII_DATE,
  &TypeInfo__EFI_STRING_ID,
  &TypeInfo__EFI_HII_REF,
  &TypeInfo__EFI_FORM_ID,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST_STAR,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DRIVER_BINDING_START,
  &TypeInfo__EFI_DRIVER_BINDING_STOP,
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