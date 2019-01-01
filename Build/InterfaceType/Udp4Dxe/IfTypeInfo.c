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

typedef struct _TYPE__gEfiUdp4ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUdp4ServiceBindingProtocolGuid;

TYPE__gEfiUdp4ServiceBindingProtocolGuid TypeInfo__gEfiUdp4ServiceBindingProtocolGuid = {
  .TypeName = "gEfiUdp4ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUdp4ServiceBindingProtocolGuid,
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


typedef struct _TYPE__EFI_UDP4_PROTOCOL{
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
} TYPE__EFI_UDP4_PROTOCOL;

TYPE__EFI_UDP4_PROTOCOL TypeInfo__EFI_UDP4_PROTOCOL = {
  .TypeName = "EFI_UDP4_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UDP4_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetModeData",
  .StructFieldTypeName_1 = "EFI_UDP4_GET_MODE_DATA",
  .StructFieldName_2 = "Configure",
  .StructFieldTypeName_2 = "EFI_UDP4_CONFIGURE",
  .StructFieldName_3 = "Groups",
  .StructFieldTypeName_3 = "EFI_UDP4_GROUPS",
  .StructFieldName_4 = "Routes",
  .StructFieldTypeName_4 = "EFI_UDP4_ROUTES",
  .StructFieldName_5 = "Transmit",
  .StructFieldTypeName_5 = "EFI_UDP4_TRANSMIT",
  .StructFieldName_6 = "Receive",
  .StructFieldTypeName_6 = "EFI_UDP4_RECEIVE",
  .StructFieldName_7 = "Cancel",
  .StructFieldTypeName_7 = "EFI_UDP4_CANCEL",
  .StructFieldName_8 = "Poll",
  .StructFieldTypeName_8 = "EFI_UDP4_POLL"
};


typedef struct _TYPE__EFI_UDP4_GET_MODE_DATA{
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
} TYPE__EFI_UDP4_GET_MODE_DATA;

TYPE__EFI_UDP4_GET_MODE_DATA TypeInfo__EFI_UDP4_GET_MODE_DATA = {
  .TypeName = "EFI_UDP4_GET_MODE_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_GET_MODE_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_UDP4_CONFIG_DATA*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_IP4_MODE_DATA*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_MANAGED_NETWORK_CONFIG_DATA*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_SIMPLE_NETWORK_MODE*"
};


typedef struct _TYPE__EFI_UDP4_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UDP4_PROTOCOL_STAR;

TYPE__EFI_UDP4_PROTOCOL_STAR TypeInfo__EFI_UDP4_PROTOCOL_STAR = {
  .TypeName = "EFI_UDP4_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UDP4_PROTOCOL*),
  .PointedType = "EFI_UDP4_PROTOCOL"
};


typedef struct _TYPE__EFI_UDP4_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UDP4_CONFIG_DATA_STAR;

TYPE__EFI_UDP4_CONFIG_DATA_STAR TypeInfo__EFI_UDP4_CONFIG_DATA_STAR = {
  .TypeName = "EFI_UDP4_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UDP4_CONFIG_DATA*),
  .PointedType = "EFI_UDP4_CONFIG_DATA"
};


typedef struct _TYPE__EFI_UDP4_CONFIG_DATA{
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
} TYPE__EFI_UDP4_CONFIG_DATA;

TYPE__EFI_UDP4_CONFIG_DATA TypeInfo__EFI_UDP4_CONFIG_DATA = {
  .TypeName = "EFI_UDP4_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UDP4_CONFIG_DATA),
  .StructFieldNum = 15,
  .StructFieldName_1 = "AcceptBroadcast",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "AcceptPromiscuous",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "AcceptAnyPort",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "AllowDuplicatePort",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "TypeOfService",
  .StructFieldTypeName_5 = "UINT8",
  .StructFieldName_6 = "TimeToLive",
  .StructFieldTypeName_6 = "UINT8",
  .StructFieldName_7 = "DoNotFragment",
  .StructFieldTypeName_7 = "BOOLEAN",
  .StructFieldName_8 = "ReceiveTimeout",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "TransmitTimeout",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "UseDefaultAddress",
  .StructFieldTypeName_10 = "BOOLEAN",
  .StructFieldName_11 = "StationAddress",
  .StructFieldTypeName_11 = "EFI_IPv4_ADDRESS",
  .StructFieldName_12 = "SubnetMask",
  .StructFieldTypeName_12 = "EFI_IPv4_ADDRESS",
  .StructFieldName_13 = "StationPort",
  .StructFieldTypeName_13 = "UINT16",
  .StructFieldName_14 = "RemoteAddress",
  .StructFieldTypeName_14 = "EFI_IPv4_ADDRESS",
  .StructFieldName_15 = "RemotePort",
  .StructFieldTypeName_15 = "UINT16"
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


typedef struct _TYPE__EFI_IP4_MODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP4_MODE_DATA_STAR;

TYPE__EFI_IP4_MODE_DATA_STAR TypeInfo__EFI_IP4_MODE_DATA_STAR = {
  .TypeName = "EFI_IP4_MODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP4_MODE_DATA*),
  .PointedType = "EFI_IP4_MODE_DATA"
};


typedef struct _TYPE__EFI_IP4_MODE_DATA{
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
} TYPE__EFI_IP4_MODE_DATA;

TYPE__EFI_IP4_MODE_DATA TypeInfo__EFI_IP4_MODE_DATA = {
  .TypeName = "EFI_IP4_MODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP4_MODE_DATA),
  .StructFieldNum = 10,
  .StructFieldName_1 = "IsStarted",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "MaxPacketSize",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "ConfigData",
  .StructFieldTypeName_3 = "EFI_IP4_CONFIG_DATA",
  .StructFieldName_4 = "IsConfigured",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "GroupCount",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "GroupTable",
  .StructFieldTypeName_6 = "EFI_IPv4_ADDRESS*",
  .StructFieldName_7 = "RouteCount",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "RouteTable",
  .StructFieldTypeName_8 = "EFI_IP4_ROUTE_TABLE*",
  .StructFieldName_9 = "IcmpTypeCount",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "IcmpTypeList",
  .StructFieldTypeName_10 = "EFI_IP4_ICMP_TYPE*"
};


typedef struct _TYPE__EFI_IP4_CONFIG_DATA{
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
} TYPE__EFI_IP4_CONFIG_DATA;

TYPE__EFI_IP4_CONFIG_DATA TypeInfo__EFI_IP4_CONFIG_DATA = {
  .TypeName = "EFI_IP4_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP4_CONFIG_DATA),
  .StructFieldNum = 14,
  .StructFieldName_1 = "DefaultProtocol",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "AcceptAnyProtocol",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "AcceptIcmpErrors",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "AcceptBroadcast",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "AcceptPromiscuous",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "UseDefaultAddress",
  .StructFieldTypeName_6 = "BOOLEAN",
  .StructFieldName_7 = "StationAddress",
  .StructFieldTypeName_7 = "EFI_IPv4_ADDRESS",
  .StructFieldName_8 = "SubnetMask",
  .StructFieldTypeName_8 = "EFI_IPv4_ADDRESS",
  .StructFieldName_9 = "TypeOfService",
  .StructFieldTypeName_9 = "UINT8",
  .StructFieldName_10 = "TimeToLive",
  .StructFieldTypeName_10 = "UINT8",
  .StructFieldName_11 = "DoNotFragment",
  .StructFieldTypeName_11 = "BOOLEAN",
  .StructFieldName_12 = "RawData",
  .StructFieldTypeName_12 = "BOOLEAN",
  .StructFieldName_13 = "ReceiveTimeout",
  .StructFieldTypeName_13 = "UINT32",
  .StructFieldName_14 = "TransmitTimeout",
  .StructFieldTypeName_14 = "UINT32"
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


typedef struct _TYPE__EFI_IP4_ROUTE_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP4_ROUTE_TABLE_STAR;

TYPE__EFI_IP4_ROUTE_TABLE_STAR TypeInfo__EFI_IP4_ROUTE_TABLE_STAR = {
  .TypeName = "EFI_IP4_ROUTE_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP4_ROUTE_TABLE*),
  .PointedType = "EFI_IP4_ROUTE_TABLE"
};


typedef struct _TYPE__EFI_IP4_ROUTE_TABLE{
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
} TYPE__EFI_IP4_ROUTE_TABLE;

TYPE__EFI_IP4_ROUTE_TABLE TypeInfo__EFI_IP4_ROUTE_TABLE = {
  .TypeName = "EFI_IP4_ROUTE_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP4_ROUTE_TABLE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "SubnetAddress",
  .StructFieldTypeName_1 = "EFI_IPv4_ADDRESS",
  .StructFieldName_2 = "SubnetMask",
  .StructFieldTypeName_2 = "EFI_IPv4_ADDRESS",
  .StructFieldName_3 = "GatewayAddress",
  .StructFieldTypeName_3 = "EFI_IPv4_ADDRESS"
};


typedef struct _TYPE__EFI_IP4_ICMP_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP4_ICMP_TYPE_STAR;

TYPE__EFI_IP4_ICMP_TYPE_STAR TypeInfo__EFI_IP4_ICMP_TYPE_STAR = {
  .TypeName = "EFI_IP4_ICMP_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP4_ICMP_TYPE*),
  .PointedType = "EFI_IP4_ICMP_TYPE"
};


typedef struct _TYPE__EFI_IP4_ICMP_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_IP4_ICMP_TYPE;

TYPE__EFI_IP4_ICMP_TYPE TypeInfo__EFI_IP4_ICMP_TYPE = {
  .TypeName = "EFI_IP4_ICMP_TYPE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP4_ICMP_TYPE),
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


typedef struct _TYPE__EFI_UDP4_CONFIGURE{
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
} TYPE__EFI_UDP4_CONFIGURE;

TYPE__EFI_UDP4_CONFIGURE TypeInfo__EFI_UDP4_CONFIGURE = {
  .TypeName = "EFI_UDP4_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_UDP4_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_UDP4_GROUPS{
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
} TYPE__EFI_UDP4_GROUPS;

TYPE__EFI_UDP4_GROUPS TypeInfo__EFI_UDP4_GROUPS = {
  .TypeName = "EFI_UDP4_GROUPS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_GROUPS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv4_ADDRESS*"
};


typedef struct _TYPE__EFI_UDP4_ROUTES{
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
} TYPE__EFI_UDP4_ROUTES;

TYPE__EFI_UDP4_ROUTES TypeInfo__EFI_UDP4_ROUTES = {
  .TypeName = "EFI_UDP4_ROUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_ROUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IPv4_ADDRESS*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IPv4_ADDRESS*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IPv4_ADDRESS*"
};


typedef struct _TYPE__EFI_UDP4_TRANSMIT{
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
} TYPE__EFI_UDP4_TRANSMIT;

TYPE__EFI_UDP4_TRANSMIT TypeInfo__EFI_UDP4_TRANSMIT = {
  .TypeName = "EFI_UDP4_TRANSMIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_TRANSMIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_UDP4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_UDP4_COMPLETION_TOKEN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UDP4_COMPLETION_TOKEN_STAR;

TYPE__EFI_UDP4_COMPLETION_TOKEN_STAR TypeInfo__EFI_UDP4_COMPLETION_TOKEN_STAR = {
  .TypeName = "EFI_UDP4_COMPLETION_TOKEN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UDP4_COMPLETION_TOKEN*),
  .PointedType = "EFI_UDP4_COMPLETION_TOKEN"
};


typedef struct _TYPE__EFI_UDP4_COMPLETION_TOKEN{
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
} TYPE__EFI_UDP4_COMPLETION_TOKEN;

TYPE__EFI_UDP4_COMPLETION_TOKEN TypeInfo__EFI_UDP4_COMPLETION_TOKEN = {
  .TypeName = "EFI_UDP4_COMPLETION_TOKEN",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UDP4_COMPLETION_TOKEN),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Event",
  .StructFieldTypeName_1 = "EFI_EVENT",
  .StructFieldName_2 = "Status",
  .StructFieldTypeName_2 = "EFI_STATUS",
  .StructFieldName_3 = "Packet",
  .StructFieldTypeName_3 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/Udp4.h:121:3)"
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


typedef struct _TYPE__EFI_UDP4_RECEIVE{
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
} TYPE__EFI_UDP4_RECEIVE;

TYPE__EFI_UDP4_RECEIVE TypeInfo__EFI_UDP4_RECEIVE = {
  .TypeName = "EFI_UDP4_RECEIVE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_RECEIVE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_UDP4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_UDP4_CANCEL{
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
} TYPE__EFI_UDP4_CANCEL;

TYPE__EFI_UDP4_CANCEL TypeInfo__EFI_UDP4_CANCEL = {
  .TypeName = "EFI_UDP4_CANCEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_CANCEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_UDP4_COMPLETION_TOKEN*"
};


typedef struct _TYPE__EFI_UDP4_POLL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_UDP4_POLL;

TYPE__EFI_UDP4_POLL TypeInfo__EFI_UDP4_POLL = {
  .TypeName = "EFI_UDP4_POLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UDP4_POLL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UDP4_PROTOCOL*"
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
  &TypeInfo__gEfiUdp4ServiceBindingProtocolGuid,
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
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiUdp4ServiceBindingProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiUdp4ProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiUdp4ServiceBindingProtocolGuid,
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
  &TypeInfo__EFI_UDP4_PROTOCOL,
  &TypeInfo__EFI_UDP4_GET_MODE_DATA,
  &TypeInfo__EFI_UDP4_PROTOCOL_STAR,
  &TypeInfo__EFI_UDP4_CONFIG_DATA_STAR,
  &TypeInfo__EFI_UDP4_CONFIG_DATA,
  &TypeInfo__BOOLEAN,
  &TypeInfo__UINT8,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_IPv4_ADDRESS,
  &TypeInfo__UINT8_ARRAY_4,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_IP4_MODE_DATA_STAR,
  &TypeInfo__EFI_IP4_MODE_DATA,
  &TypeInfo__EFI_IP4_CONFIG_DATA,
  &TypeInfo__EFI_IPv4_ADDRESS_STAR,
  &TypeInfo__EFI_IP4_ROUTE_TABLE_STAR,
  &TypeInfo__EFI_IP4_ROUTE_TABLE,
  &TypeInfo__EFI_IP4_ICMP_TYPE_STAR,
  &TypeInfo__EFI_IP4_ICMP_TYPE,
  &TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA_STAR,
  &TypeInfo__EFI_MANAGED_NETWORK_CONFIG_DATA,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE,
  &TypeInfo__EFI_MAC_ADDRESS_ARRAY_16,
  &TypeInfo__EFI_MAC_ADDRESS,
  &TypeInfo__UINT8_ARRAY_32,
  &TypeInfo__EFI_UDP4_CONFIGURE,
  &TypeInfo__EFI_UDP4_GROUPS,
  &TypeInfo__EFI_UDP4_ROUTES,
  &TypeInfo__EFI_UDP4_TRANSMIT,
  &TypeInfo__EFI_UDP4_COMPLETION_TOKEN_STAR,
  &TypeInfo__EFI_UDP4_COMPLETION_TOKEN,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_UDP4_RECEIVE,
  &TypeInfo__EFI_UDP4_CANCEL,
  &TypeInfo__EFI_UDP4_POLL,
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