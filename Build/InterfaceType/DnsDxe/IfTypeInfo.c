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

typedef struct _TYPE__gEfiDns4ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDns4ServiceBindingProtocolGuid;

TYPE__gEfiDns4ServiceBindingProtocolGuid TypeInfo__gEfiDns4ServiceBindingProtocolGuid = {
  .TypeName = "gEfiDns4ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDns4ServiceBindingProtocolGuid,
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


typedef struct _TYPE__gEfiDns6ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDns6ServiceBindingProtocolGuid;

TYPE__gEfiDns6ServiceBindingProtocolGuid TypeInfo__gEfiDns6ServiceBindingProtocolGuid = {
  .TypeName = "gEfiDns6ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDns6ServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__EFI_DNS4_PROTOCOL{
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
} TYPE__EFI_DNS4_PROTOCOL;

TYPE__EFI_DNS4_PROTOCOL TypeInfo__EFI_DNS4_PROTOCOL = {
  .TypeName = "EFI_DNS4_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS4_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_DNS4_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_DNS4_CONFIGURE",
  .StructFieldName_3 = "HostNameToIp",
  .StructFieldTypeName_3 = "EFI_DNS4_HOST_NAME_TO_IP",
  .StructFieldName_4 = "IpToHostName",
  .StructFieldTypeName_4 = "EFI_DNS4_IP_TO_HOST_NAME",
  .StructFieldName_5 = "GeneralLookUp",
  .StructFieldTypeName_5 = "EFI_DNS4_GENERAL_LOOKUP",
  .StructFieldName_6 = "UpdateDnsCache",
  .StructFieldTypeName_6 = "EFI_DNS4_UPDATE_DNS_CACHE",
  .StructFieldName_7 = "Poll",
  .StructFieldTypeName_7 = "EFI_DNS4_POLL",
  .StructFieldName_8 = "Cancel",
  .StructFieldTypeName_8 = "EFI_DNS4_CANCEL"
};


typedef struct _TYPE__EFI_DNS4_GET_MODE_DATA{
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
} TYPE__EFI_DNS4_GET_MODE_DATA;

TYPE__EFI_DNS4_GET_MODE_DATA TypeInfo__EFI_DNS4_GET_MODE_DATA = {
  .TypeName = "EFI_DNS4_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_DNS4_MODE_DATA*"
};


typedef struct _TYPE__EFI_DNS4_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS4_PROTOCOL_STAR;

TYPE__EFI_DNS4_PROTOCOL_STAR TypeInfo__EFI_DNS4_PROTOCOL_STAR = {
  .TypeName = "EFI_DNS4_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS4_PROTOCOL*),
  .PointedType = "EFI_DNS4_PROTOCOL"
};


typedef struct _TYPE__EFI_DNS4_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS4_MODE_DATA_STAR;

TYPE__EFI_DNS4_MODE_DATA_STAR TypeInfo__EFI_DNS4_MODE_DATA_STAR = {
  .TypeName = "EFI_DNS4_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS4_MODE_DATA*),
  .PointedType = "EFI_DNS4_MODE_DATA"
};


typedef struct _TYPE__EFI_DNS4_MODE_DATA{
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
} TYPE__EFI_DNS4_MODE_DATA;

TYPE__EFI_DNS4_MODE_DATA TypeInfo__EFI_DNS4_MODE_DATA = {
  .TypeName = "EFI_DNS4_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS4_MODE_DATA),
  .StructFieldNum = 5,
  .StructFieldName_1 = "DnsConfigData",
  .StructFieldTypeName_1 = "EFI_DNS4_CONFIG_DATA",
  .StructFieldName_2 = "DnsServerCount",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "DnsServerList",
  .StructFieldTypeName_3 = "EFI_IPv4_ADDRESS*",
  .StructFieldName_4 = "DnsCacheCount",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "DnsCacheList",
  .StructFieldTypeName_5 = "EFI_DNS4_CACHE_ENTRY*"
};


typedef struct _TYPE__EFI_DNS4_CONFIG_DATA{
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
} TYPE__EFI_DNS4_CONFIG_DATA;

TYPE__EFI_DNS4_CONFIG_DATA TypeInfo__EFI_DNS4_CONFIG_DATA = {
  .TypeName = "EFI_DNS4_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS4_CONFIG_DATA),
  .StructFieldNum = 10,
  .StructFieldName_1 = "DnsServerListCount",
  .StructFieldTypeName_1 = "UINTN",
  .StructFieldName_2 = "DnsServerList",
  .StructFieldTypeName_2 = "EFI_IPv4_ADDRESS*",
  .StructFieldName_3 = "UseDefaultSetting",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "EnableDnsCache",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "Protocol",
  .StructFieldTypeName_5 = "UINT8",
  .StructFieldName_6 = "StationIp",
  .StructFieldTypeName_6 = "EFI_IPv4_ADDRESS",
  .StructFieldName_7 = "SubnetMask",
  .StructFieldTypeName_7 = "EFI_IPv4_ADDRESS",
  .StructFieldName_8 = "LocalPort",
  .StructFieldTypeName_8 = "UINT16",
  .StructFieldName_9 = "RetryCount",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "RetryInterval",
  .StructFieldTypeName_10 = "UINT32"
};


typedef struct _TYPE__EFI_IPv4_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IPv4_ADDRESS_STAR;

TYPE__EFI_IPv4_ADDRESS_STAR TypeInfo__EFI_IPv4_ADDRESS_STAR = {
  .TypeName = "EFI_IPv4_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IPv4_ADDRESS*),
  .PointedType = "EFI_IPv4_ADDRESS"
};


typedef struct _TYPE__EFI_IPv4_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_IPv4_ADDRESS;

TYPE__EFI_IPv4_ADDRESS TypeInfo__EFI_IPv4_ADDRESS = {
  .TypeName = "EFI_IPv4_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IPv4_ADDRESS),
  .StructFieldNum = 1,
  .StructFieldName_1 = "Addr",
  .StructFieldTypeName_1 = "UINT8[4]"
};


typedef struct _TYPE__UINT8_ARRAY_4{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_4;

TYPE__UINT8_ARRAY_4 TypeInfo__UINT8_ARRAY_4 = {
  .TypeName = "UINT8[4]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[4]),
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


typedef struct _TYPE__EFI_DNS4_CACHE_ENTRY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS4_CACHE_ENTRY_STAR;

TYPE__EFI_DNS4_CACHE_ENTRY_STAR TypeInfo__EFI_DNS4_CACHE_ENTRY_STAR = {
  .TypeName = "EFI_DNS4_CACHE_ENTRY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS4_CACHE_ENTRY*),
  .PointedType = "EFI_DNS4_CACHE_ENTRY"
};


typedef struct _TYPE__EFI_DNS4_CACHE_ENTRY{
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
} TYPE__EFI_DNS4_CACHE_ENTRY;

TYPE__EFI_DNS4_CACHE_ENTRY TypeInfo__EFI_DNS4_CACHE_ENTRY = {
  .TypeName = "EFI_DNS4_CACHE_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS4_CACHE_ENTRY),
  .StructFieldNum = 3,
  .StructFieldName_1 = "HostName",
  .StructFieldTypeName_1 = "CHAR16*",
  .StructFieldName_2 = "IpAddress",
  .StructFieldTypeName_2 = "EFI_IPv4_ADDRESS*",
  .StructFieldName_3 = "Timeout",
  .StructFieldTypeName_3 = "UINT32"
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


typedef struct _TYPE__EFI_DNS4_CONFIGURE{
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
} TYPE__EFI_DNS4_CONFIGURE;

TYPE__EFI_DNS4_CONFIGURE TypeInfo__EFI_DNS4_CONFIGURE = {
  .TypeName = "EFI_DNS4_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DNS4_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_DNS4_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS4_CONFIG_DATA_STAR;

TYPE__EFI_DNS4_CONFIG_DATA_STAR TypeInfo__EFI_DNS4_CONFIG_DATA_STAR = {
  .TypeName = "EFI_DNS4_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS4_CONFIG_DATA*),
  .PointedType = "EFI_DNS4_CONFIG_DATA"
};


typedef struct _TYPE__EFI_DNS4_HOST_NAME_TO_IP{
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
} TYPE__EFI_DNS4_HOST_NAME_TO_IP;

TYPE__EFI_DNS4_HOST_NAME_TO_IP TypeInfo__EFI_DNS4_HOST_NAME_TO_IP = {
  .TypeName = "EFI_DNS4_HOST_NAME_TO_IP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_HOST_NAME_TO_IP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DNS4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS4_COMPLETION_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS4_COMPLETION_TOKEN_STAR;

TYPE__EFI_DNS4_COMPLETION_TOKEN_STAR TypeInfo__EFI_DNS4_COMPLETION_TOKEN_STAR = {
  .TypeName = "EFI_DNS4_COMPLETION_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS4_COMPLETION_TOKEN*),
  .PointedType = "EFI_DNS4_COMPLETION_TOKEN"
};


typedef struct _TYPE__EFI_DNS4_COMPLETION_TOKEN{
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
} TYPE__EFI_DNS4_COMPLETION_TOKEN;

TYPE__EFI_DNS4_COMPLETION_TOKEN TypeInfo__EFI_DNS4_COMPLETION_TOKEN = {
  .TypeName = "EFI_DNS4_COMPLETION_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS4_COMPLETION_TOKEN),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Event",
  .StructFieldTypeName_1 = "EFI_EVENT",
  .StructFieldName_2 = "Status",
  .StructFieldTypeName_2 = "EFI_STATUS",
  .StructFieldName_3 = "RetryCount",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "RetryInterval",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "RspData",
  .StructFieldTypeName_5 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/Dns4.h:262:3)"
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


typedef struct _TYPE__EFI_DNS4_IP_TO_HOST_NAME{
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
} TYPE__EFI_DNS4_IP_TO_HOST_NAME;

TYPE__EFI_DNS4_IP_TO_HOST_NAME TypeInfo__EFI_DNS4_IP_TO_HOST_NAME = {
  .TypeName = "EFI_DNS4_IP_TO_HOST_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_IP_TO_HOST_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IPv4_ADDRESS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DNS4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS4_GENERAL_LOOKUP{
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
} TYPE__EFI_DNS4_GENERAL_LOOKUP;

TYPE__EFI_DNS4_GENERAL_LOOKUP TypeInfo__EFI_DNS4_GENERAL_LOOKUP = {
  .TypeName = "EFI_DNS4_GENERAL_LOOKUP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_GENERAL_LOOKUP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT16",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_DNS4_COMPLETION_TOKEN*"
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


typedef struct _TYPE__EFI_DNS4_UPDATE_DNS_CACHE{
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
} TYPE__EFI_DNS4_UPDATE_DNS_CACHE;

TYPE__EFI_DNS4_UPDATE_DNS_CACHE TypeInfo__EFI_DNS4_UPDATE_DNS_CACHE = {
  .TypeName = "EFI_DNS4_UPDATE_DNS_CACHE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_UPDATE_DNS_CACHE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_DNS4_CACHE_ENTRY"
};


typedef struct _TYPE__EFI_DNS4_POLL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DNS4_POLL;

TYPE__EFI_DNS4_POLL TypeInfo__EFI_DNS4_POLL = {
  .TypeName = "EFI_DNS4_POLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_POLL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*"
};


typedef struct _TYPE__EFI_DNS4_CANCEL{
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
} TYPE__EFI_DNS4_CANCEL;

TYPE__EFI_DNS4_CANCEL TypeInfo__EFI_DNS4_CANCEL = {
  .TypeName = "EFI_DNS4_CANCEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS4_CANCEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DNS4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS6_PROTOCOL{
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
} TYPE__EFI_DNS6_PROTOCOL;

TYPE__EFI_DNS6_PROTOCOL TypeInfo__EFI_DNS6_PROTOCOL = {
  .TypeName = "EFI_DNS6_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS6_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_DNS6_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_DNS6_CONFIGURE",
  .StructFieldName_3 = "HostNameToIp",
  .StructFieldTypeName_3 = "EFI_DNS6_HOST_NAME_TO_IP",
  .StructFieldName_4 = "IpToHostName",
  .StructFieldTypeName_4 = "EFI_DNS6_IP_TO_HOST_NAME",
  .StructFieldName_5 = "GeneralLookUp",
  .StructFieldTypeName_5 = "EFI_DNS6_GENERAL_LOOKUP",
  .StructFieldName_6 = "UpdateDnsCache",
  .StructFieldTypeName_6 = "EFI_DNS6_UPDATE_DNS_CACHE",
  .StructFieldName_7 = "Poll",
  .StructFieldTypeName_7 = "EFI_DNS6_POLL",
  .StructFieldName_8 = "Cancel",
  .StructFieldTypeName_8 = "EFI_DNS6_CANCEL"
};


typedef struct _TYPE__EFI_DNS6_GET_MODE_DATA{
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
} TYPE__EFI_DNS6_GET_MODE_DATA;

TYPE__EFI_DNS6_GET_MODE_DATA TypeInfo__EFI_DNS6_GET_MODE_DATA = {
  .TypeName = "EFI_DNS6_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_DNS6_MODE_DATA*"
};


typedef struct _TYPE__EFI_DNS6_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS6_PROTOCOL_STAR;

TYPE__EFI_DNS6_PROTOCOL_STAR TypeInfo__EFI_DNS6_PROTOCOL_STAR = {
  .TypeName = "EFI_DNS6_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS6_PROTOCOL*),
  .PointedType = "EFI_DNS6_PROTOCOL"
};


typedef struct _TYPE__EFI_DNS6_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS6_MODE_DATA_STAR;

TYPE__EFI_DNS6_MODE_DATA_STAR TypeInfo__EFI_DNS6_MODE_DATA_STAR = {
  .TypeName = "EFI_DNS6_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS6_MODE_DATA*),
  .PointedType = "EFI_DNS6_MODE_DATA"
};


typedef struct _TYPE__EFI_DNS6_MODE_DATA{
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
} TYPE__EFI_DNS6_MODE_DATA;

TYPE__EFI_DNS6_MODE_DATA TypeInfo__EFI_DNS6_MODE_DATA = {
  .TypeName = "EFI_DNS6_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS6_MODE_DATA),
  .StructFieldNum = 5,
  .StructFieldName_1 = "DnsConfigData",
  .StructFieldTypeName_1 = "EFI_DNS6_CONFIG_DATA",
  .StructFieldName_2 = "DnsServerCount",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "DnsServerList",
  .StructFieldTypeName_3 = "EFI_IPv6_ADDRESS*",
  .StructFieldName_4 = "DnsCacheCount",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "DnsCacheList",
  .StructFieldTypeName_5 = "EFI_DNS6_CACHE_ENTRY*"
};


typedef struct _TYPE__EFI_DNS6_CONFIG_DATA{
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
} TYPE__EFI_DNS6_CONFIG_DATA;

TYPE__EFI_DNS6_CONFIG_DATA TypeInfo__EFI_DNS6_CONFIG_DATA = {
  .TypeName = "EFI_DNS6_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS6_CONFIG_DATA),
  .StructFieldNum = 8,
  .StructFieldName_1 = "EnableDnsCache",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "Protocol",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "StationIp",
  .StructFieldTypeName_3 = "EFI_IPv6_ADDRESS",
  .StructFieldName_4 = "LocalPort",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "DnsServerCount",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "DnsServerList",
  .StructFieldTypeName_6 = "EFI_IPv6_ADDRESS*",
  .StructFieldName_7 = "RetryCount",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "RetryInterval",
  .StructFieldTypeName_8 = "UINT32"
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


typedef struct _TYPE__EFI_DNS6_CACHE_ENTRY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS6_CACHE_ENTRY_STAR;

TYPE__EFI_DNS6_CACHE_ENTRY_STAR TypeInfo__EFI_DNS6_CACHE_ENTRY_STAR = {
  .TypeName = "EFI_DNS6_CACHE_ENTRY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS6_CACHE_ENTRY*),
  .PointedType = "EFI_DNS6_CACHE_ENTRY"
};


typedef struct _TYPE__EFI_DNS6_CACHE_ENTRY{
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
} TYPE__EFI_DNS6_CACHE_ENTRY;

TYPE__EFI_DNS6_CACHE_ENTRY TypeInfo__EFI_DNS6_CACHE_ENTRY = {
  .TypeName = "EFI_DNS6_CACHE_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS6_CACHE_ENTRY),
  .StructFieldNum = 3,
  .StructFieldName_1 = "HostName",
  .StructFieldTypeName_1 = "CHAR16*",
  .StructFieldName_2 = "IpAddress",
  .StructFieldTypeName_2 = "EFI_IPv6_ADDRESS*",
  .StructFieldName_3 = "Timeout",
  .StructFieldTypeName_3 = "UINT32"
};


typedef struct _TYPE__EFI_DNS6_CONFIGURE{
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
} TYPE__EFI_DNS6_CONFIGURE;

TYPE__EFI_DNS6_CONFIGURE TypeInfo__EFI_DNS6_CONFIGURE = {
  .TypeName = "EFI_DNS6_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DNS6_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_DNS6_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS6_CONFIG_DATA_STAR;

TYPE__EFI_DNS6_CONFIG_DATA_STAR TypeInfo__EFI_DNS6_CONFIG_DATA_STAR = {
  .TypeName = "EFI_DNS6_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS6_CONFIG_DATA*),
  .PointedType = "EFI_DNS6_CONFIG_DATA"
};


typedef struct _TYPE__EFI_DNS6_HOST_NAME_TO_IP{
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
} TYPE__EFI_DNS6_HOST_NAME_TO_IP;

TYPE__EFI_DNS6_HOST_NAME_TO_IP TypeInfo__EFI_DNS6_HOST_NAME_TO_IP = {
  .TypeName = "EFI_DNS6_HOST_NAME_TO_IP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_HOST_NAME_TO_IP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DNS6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS6_COMPLETION_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DNS6_COMPLETION_TOKEN_STAR;

TYPE__EFI_DNS6_COMPLETION_TOKEN_STAR TypeInfo__EFI_DNS6_COMPLETION_TOKEN_STAR = {
  .TypeName = "EFI_DNS6_COMPLETION_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DNS6_COMPLETION_TOKEN*),
  .PointedType = "EFI_DNS6_COMPLETION_TOKEN"
};


typedef struct _TYPE__EFI_DNS6_COMPLETION_TOKEN{
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
} TYPE__EFI_DNS6_COMPLETION_TOKEN;

TYPE__EFI_DNS6_COMPLETION_TOKEN TypeInfo__EFI_DNS6_COMPLETION_TOKEN = {
  .TypeName = "EFI_DNS6_COMPLETION_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DNS6_COMPLETION_TOKEN),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Event",
  .StructFieldTypeName_1 = "EFI_EVENT",
  .StructFieldName_2 = "Status",
  .StructFieldTypeName_2 = "EFI_STATUS",
  .StructFieldName_3 = "RetryCount",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "RetryInterval",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "RspData",
  .StructFieldTypeName_5 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/Dns6.h:250:3)"
};


typedef struct _TYPE__EFI_DNS6_IP_TO_HOST_NAME{
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
} TYPE__EFI_DNS6_IP_TO_HOST_NAME;

TYPE__EFI_DNS6_IP_TO_HOST_NAME TypeInfo__EFI_DNS6_IP_TO_HOST_NAME = {
  .TypeName = "EFI_DNS6_IP_TO_HOST_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_IP_TO_HOST_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IPv6_ADDRESS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DNS6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS6_GENERAL_LOOKUP{
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
} TYPE__EFI_DNS6_GENERAL_LOOKUP;

TYPE__EFI_DNS6_GENERAL_LOOKUP TypeInfo__EFI_DNS6_GENERAL_LOOKUP = {
  .TypeName = "EFI_DNS6_GENERAL_LOOKUP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_GENERAL_LOOKUP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT16",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_DNS6_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_DNS6_UPDATE_DNS_CACHE{
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
} TYPE__EFI_DNS6_UPDATE_DNS_CACHE;

TYPE__EFI_DNS6_UPDATE_DNS_CACHE TypeInfo__EFI_DNS6_UPDATE_DNS_CACHE = {
  .TypeName = "EFI_DNS6_UPDATE_DNS_CACHE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_UPDATE_DNS_CACHE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_DNS6_CACHE_ENTRY"
};


typedef struct _TYPE__EFI_DNS6_POLL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_DNS6_POLL;

TYPE__EFI_DNS6_POLL TypeInfo__EFI_DNS6_POLL = {
  .TypeName = "EFI_DNS6_POLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_POLL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*"
};


typedef struct _TYPE__EFI_DNS6_CANCEL{
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
} TYPE__EFI_DNS6_CANCEL;

TYPE__EFI_DNS6_CANCEL TypeInfo__EFI_DNS6_CANCEL = {
  .TypeName = "EFI_DNS6_CANCEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DNS6_CANCEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DNS6_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DNS6_COMPLETION_TOKEN*"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDns4ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDns6ProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  &TypeInfo__gEfiManagedNetworkProtocolGuid,
  &TypeInfo__gEfiUdp6ProtocolGuid,
  &TypeInfo__gEfiDns4ProtocolGuid,
  &TypeInfo__gEfiDns6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDhcp4ProtocolGuid,
  &TypeInfo__gEfiUdp4ProtocolGuid,
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
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiIp4Config2ProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDns4ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDns6ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiDns4ProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDns6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiDns4ServiceBindingProtocolGuid,
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
  &TypeInfo__gEfiDns6ServiceBindingProtocolGuid,
  &TypeInfo__EFI_DNS4_PROTOCOL,
  &TypeInfo__EFI_DNS4_GET_MODE_DATA,
  &TypeInfo__EFI_DNS4_PROTOCOL_STAR,
  &TypeInfo__EFI_DNS4_MODE_DATA_STAR,
  &TypeInfo__EFI_DNS4_MODE_DATA,
  &TypeInfo__EFI_DNS4_CONFIG_DATA,
  &TypeInfo__EFI_IPv4_ADDRESS_STAR,
  &TypeInfo__EFI_IPv4_ADDRESS,
  &TypeInfo__UINT8_ARRAY_4,
  &TypeInfo__UINT8,
  &TypeInfo__BOOLEAN,
  &TypeInfo__UINT16,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_DNS4_CACHE_ENTRY_STAR,
  &TypeInfo__EFI_DNS4_CACHE_ENTRY,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_DNS4_CONFIGURE,
  &TypeInfo__EFI_DNS4_CONFIG_DATA_STAR,
  &TypeInfo__EFI_DNS4_HOST_NAME_TO_IP,
  &TypeInfo__EFI_DNS4_COMPLETION_TOKEN_STAR,
  &TypeInfo__EFI_DNS4_COMPLETION_TOKEN,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_DNS4_IP_TO_HOST_NAME,
  &TypeInfo__EFI_DNS4_GENERAL_LOOKUP,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_DNS4_UPDATE_DNS_CACHE,
  &TypeInfo__EFI_DNS4_POLL,
  &TypeInfo__EFI_DNS4_CANCEL,
  &TypeInfo__EFI_DNS6_PROTOCOL,
  &TypeInfo__EFI_DNS6_GET_MODE_DATA,
  &TypeInfo__EFI_DNS6_PROTOCOL_STAR,
  &TypeInfo__EFI_DNS6_MODE_DATA_STAR,
  &TypeInfo__EFI_DNS6_MODE_DATA,
  &TypeInfo__EFI_DNS6_CONFIG_DATA,
  &TypeInfo__EFI_IPv6_ADDRESS,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__EFI_IPv6_ADDRESS_STAR,
  &TypeInfo__EFI_DNS6_CACHE_ENTRY_STAR,
  &TypeInfo__EFI_DNS6_CACHE_ENTRY,
  &TypeInfo__EFI_DNS6_CONFIGURE,
  &TypeInfo__EFI_DNS6_CONFIG_DATA_STAR,
  &TypeInfo__EFI_DNS6_HOST_NAME_TO_IP,
  &TypeInfo__EFI_DNS6_COMPLETION_TOKEN_STAR,
  &TypeInfo__EFI_DNS6_COMPLETION_TOKEN,
  &TypeInfo__EFI_DNS6_IP_TO_HOST_NAME,
  &TypeInfo__EFI_DNS6_GENERAL_LOOKUP,
  &TypeInfo__EFI_DNS6_UPDATE_DNS_CACHE,
  &TypeInfo__EFI_DNS6_POLL,
  &TypeInfo__EFI_DNS6_CANCEL,
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
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR,
  &TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME,
  NULL
};