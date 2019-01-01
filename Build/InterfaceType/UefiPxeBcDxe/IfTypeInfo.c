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


typedef struct _TYPE__gEfiLoadFileProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadFileProtocolGuid;

TYPE__gEfiLoadFileProtocolGuid TypeInfo__gEfiLoadFileProtocolGuid = {
  .TypeName = "gEfiLoadFileProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadFileProtocolGuid,
  .InterfaceStructName = "EFI_LOAD_FILE_PROTOCOL"
};


typedef struct _TYPE__EFI_LOAD_FILE_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_LOAD_FILE_PROTOCOL;

TYPE__EFI_LOAD_FILE_PROTOCOL TypeInfo__EFI_LOAD_FILE_PROTOCOL = {
  .TypeName = "EFI_LOAD_FILE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_LOAD_FILE_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "LoadFile",
  .StructFieldTypeName_1 = "EFI_LOAD_FILE"
};


typedef struct _TYPE__EFI_LOAD_FILE{
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
} TYPE__EFI_LOAD_FILE;

TYPE__EFI_LOAD_FILE TypeInfo__EFI_LOAD_FILE = {
  .TypeName = "EFI_LOAD_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOAD_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOAD_FILE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
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


typedef struct _TYPE__EFI_LOAD_FILE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_LOAD_FILE_PROTOCOL_STAR;

TYPE__EFI_LOAD_FILE_PROTOCOL_STAR TypeInfo__EFI_LOAD_FILE_PROTOCOL_STAR = {
  .TypeName = "EFI_LOAD_FILE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_LOAD_FILE_PROTOCOL*),
  .PointedType = "EFI_LOAD_FILE_PROTOCOL"
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


typedef struct _TYPE__gEfiPxeBaseCodeProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPxeBaseCodeProtocolGuid;

TYPE__gEfiPxeBaseCodeProtocolGuid TypeInfo__gEfiPxeBaseCodeProtocolGuid = {
  .TypeName = "gEfiPxeBaseCodeProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPxeBaseCodeProtocolGuid,
  .InterfaceStructName = "EFI_PXE_BASE_CODE_PROTOCOL"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_PROTOCOL{
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
} TYPE__EFI_PXE_BASE_CODE_PROTOCOL;

TYPE__EFI_PXE_BASE_CODE_PROTOCOL TypeInfo__EFI_PXE_BASE_CODE_PROTOCOL = {
  .TypeName = "EFI_PXE_BASE_CODE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_PROTOCOL),
  .StructFieldNum = 14,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Start",
  .StructFieldTypeName_2 = "EFI_PXE_BASE_CODE_START",
  .StructFieldName_3 = "Stop",
  .StructFieldTypeName_3 = "EFI_PXE_BASE_CODE_STOP",
  .StructFieldName_4 = "Dhcp",
  .StructFieldTypeName_4 = "EFI_PXE_BASE_CODE_DHCP",
  .StructFieldName_5 = "Discover",
  .StructFieldTypeName_5 = "EFI_PXE_BASE_CODE_DISCOVER",
  .StructFieldName_6 = "Mtftp",
  .StructFieldTypeName_6 = "EFI_PXE_BASE_CODE_MTFTP",
  .StructFieldName_7 = "UdpWrite",
  .StructFieldTypeName_7 = "EFI_PXE_BASE_CODE_UDP_WRITE",
  .StructFieldName_8 = "UdpRead",
  .StructFieldTypeName_8 = "EFI_PXE_BASE_CODE_UDP_READ",
  .StructFieldName_9 = "SetIpFilter",
  .StructFieldTypeName_9 = "EFI_PXE_BASE_CODE_SET_IP_FILTER",
  .StructFieldName_10 = "Arp",
  .StructFieldTypeName_10 = "EFI_PXE_BASE_CODE_ARP",
  .StructFieldName_11 = "SetParameters",
  .StructFieldTypeName_11 = "EFI_PXE_BASE_CODE_SET_PARAMETERS",
  .StructFieldName_12 = "SetStationIp",
  .StructFieldTypeName_12 = "EFI_PXE_BASE_CODE_SET_STATION_IP",
  .StructFieldName_13 = "SetPackets",
  .StructFieldTypeName_13 = "EFI_PXE_BASE_CODE_SET_PACKETS",
  .StructFieldName_14 = "Mode",
  .StructFieldTypeName_14 = "EFI_PXE_BASE_CODE_MODE*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_START{
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
} TYPE__EFI_PXE_BASE_CODE_START;

TYPE__EFI_PXE_BASE_CODE_START TypeInfo__EFI_PXE_BASE_CODE_START = {
  .TypeName = "EFI_PXE_BASE_CODE_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_PROTOCOL_STAR;

TYPE__EFI_PXE_BASE_CODE_PROTOCOL_STAR TypeInfo__EFI_PXE_BASE_CODE_PROTOCOL_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_PROTOCOL*),
  .PointedType = "EFI_PXE_BASE_CODE_PROTOCOL"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_STOP{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PXE_BASE_CODE_STOP;

TYPE__EFI_PXE_BASE_CODE_STOP TypeInfo__EFI_PXE_BASE_CODE_STOP = {
  .TypeName = "EFI_PXE_BASE_CODE_STOP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_STOP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_DHCP{
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
} TYPE__EFI_PXE_BASE_CODE_DHCP;

TYPE__EFI_PXE_BASE_CODE_DHCP TypeInfo__EFI_PXE_BASE_CODE_DHCP = {
  .TypeName = "EFI_PXE_BASE_CODE_DHCP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DHCP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_DISCOVER{
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
} TYPE__EFI_PXE_BASE_CODE_DISCOVER;

TYPE__EFI_PXE_BASE_CODE_DISCOVER TypeInfo__EFI_PXE_BASE_CODE_DISCOVER = {
  .TypeName = "EFI_PXE_BASE_CODE_DISCOVER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DISCOVER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_PXE_BASE_CODE_DISCOVER_INFO*"
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


typedef struct _TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO_STAR;

TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO_STAR TypeInfo__EFI_PXE_BASE_CODE_DISCOVER_INFO_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_DISCOVER_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DISCOVER_INFO*),
  .PointedType = "EFI_PXE_BASE_CODE_DISCOVER_INFO"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO{
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
} TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO;

TYPE__EFI_PXE_BASE_CODE_DISCOVER_INFO TypeInfo__EFI_PXE_BASE_CODE_DISCOVER_INFO = {
  .TypeName = "EFI_PXE_BASE_CODE_DISCOVER_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DISCOVER_INFO),
  .StructFieldNum = 7,
  .StructFieldName_1 = "UseMCast",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "UseBCast",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "UseUCast",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "MustUseList",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "ServerMCastIp",
  .StructFieldTypeName_5 = "EFI_IP_ADDRESS",
  .StructFieldName_6 = "IpCnt",
  .StructFieldTypeName_6 = "UINT16",
  .StructFieldName_7 = "SrvList",
  .StructFieldTypeName_7 = "EFI_PXE_BASE_CODE_SRVLIST[1]"
};


typedef struct _TYPE__EFI_IP_ADDRESS{
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
} TYPE__EFI_IP_ADDRESS;

TYPE__EFI_IP_ADDRESS TypeInfo__EFI_IP_ADDRESS = {
  .TypeName = "EFI_IP_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IP_ADDRESS),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Addr",
  .StructFieldTypeName_1 = "UINT32[4]",
  .StructFieldName_2 = "v4",
  .StructFieldTypeName_2 = "EFI_IPv4_ADDRESS",
  .StructFieldName_3 = "v6",
  .StructFieldTypeName_3 = "EFI_IPv6_ADDRESS"
};


typedef struct _TYPE__UINT32_ARRAY_4{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT32_ARRAY_4;

TYPE__UINT32_ARRAY_4 TypeInfo__UINT32_ARRAY_4 = {
  .TypeName = "UINT32[4]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT32[4]),
  .ElementTypeName = "UINT32"
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


typedef struct _TYPE__EFI_PXE_BASE_CODE_SRVLIST_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_PXE_BASE_CODE_SRVLIST_ARRAY_1;

TYPE__EFI_PXE_BASE_CODE_SRVLIST_ARRAY_1 TypeInfo__EFI_PXE_BASE_CODE_SRVLIST_ARRAY_1 = {
  .TypeName = "EFI_PXE_BASE_CODE_SRVLIST[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SRVLIST[1]),
  .ElementTypeName = "EFI_PXE_BASE_CODE_SRVLIST"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_SRVLIST{
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
} TYPE__EFI_PXE_BASE_CODE_SRVLIST;

TYPE__EFI_PXE_BASE_CODE_SRVLIST TypeInfo__EFI_PXE_BASE_CODE_SRVLIST = {
  .TypeName = "EFI_PXE_BASE_CODE_SRVLIST",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SRVLIST),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "AcceptAnyResponse",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "Reserved",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "IpAddr",
  .StructFieldTypeName_4 = "EFI_IP_ADDRESS"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_MTFTP{
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
} TYPE__EFI_PXE_BASE_CODE_MTFTP;

TYPE__EFI_PXE_BASE_CODE_MTFTP TypeInfo__EFI_PXE_BASE_CODE_MTFTP = {
  .TypeName = "EFI_PXE_BASE_CODE_MTFTP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_MTFTP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PXE_BASE_CODE_TFTP_OPCODE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT64*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_IP_ADDRESS*",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINT8*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "EFI_PXE_BASE_CODE_MTFTP_INFO*",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "BOOLEAN"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_TFTP_OPCODE{
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
} TYPE__EFI_PXE_BASE_CODE_TFTP_OPCODE;

TYPE__EFI_PXE_BASE_CODE_TFTP_OPCODE TypeInfo__EFI_PXE_BASE_CODE_TFTP_OPCODE = {
  .TypeName = "EFI_PXE_BASE_CODE_TFTP_OPCODE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_TFTP_OPCODE),
  .EnumValueNum = 9,
  .EnumValueName_1 = "EFI_PXE_BASE_CODE_TFTP_FIRST",
  .EnumValue_1 = EFI_PXE_BASE_CODE_TFTP_FIRST,
  .EnumValueName_2 = "EFI_PXE_BASE_CODE_TFTP_GET_FILE_SIZE",
  .EnumValue_2 = EFI_PXE_BASE_CODE_TFTP_GET_FILE_SIZE,
  .EnumValueName_3 = "EFI_PXE_BASE_CODE_TFTP_READ_FILE",
  .EnumValue_3 = EFI_PXE_BASE_CODE_TFTP_READ_FILE,
  .EnumValueName_4 = "EFI_PXE_BASE_CODE_TFTP_WRITE_FILE",
  .EnumValue_4 = EFI_PXE_BASE_CODE_TFTP_WRITE_FILE,
  .EnumValueName_5 = "EFI_PXE_BASE_CODE_TFTP_READ_DIRECTORY",
  .EnumValue_5 = EFI_PXE_BASE_CODE_TFTP_READ_DIRECTORY,
  .EnumValueName_6 = "EFI_PXE_BASE_CODE_MTFTP_GET_FILE_SIZE",
  .EnumValue_6 = EFI_PXE_BASE_CODE_MTFTP_GET_FILE_SIZE,
  .EnumValueName_7 = "EFI_PXE_BASE_CODE_MTFTP_READ_FILE",
  .EnumValue_7 = EFI_PXE_BASE_CODE_MTFTP_READ_FILE,
  .EnumValueName_8 = "EFI_PXE_BASE_CODE_MTFTP_READ_DIRECTORY",
  .EnumValue_8 = EFI_PXE_BASE_CODE_MTFTP_READ_DIRECTORY,
  .EnumValueName_9 = "EFI_PXE_BASE_CODE_MTFTP_LAST",
  .EnumValue_9 = EFI_PXE_BASE_CODE_MTFTP_LAST
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


typedef struct _TYPE__EFI_IP_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IP_ADDRESS_STAR;

TYPE__EFI_IP_ADDRESS_STAR TypeInfo__EFI_IP_ADDRESS_STAR = {
  .TypeName = "EFI_IP_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IP_ADDRESS*),
  .PointedType = "EFI_IP_ADDRESS"
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


typedef struct _TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO_STAR;

TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO_STAR TypeInfo__EFI_PXE_BASE_CODE_MTFTP_INFO_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_MTFTP_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_MTFTP_INFO*),
  .PointedType = "EFI_PXE_BASE_CODE_MTFTP_INFO"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO{
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
} TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO;

TYPE__EFI_PXE_BASE_CODE_MTFTP_INFO TypeInfo__EFI_PXE_BASE_CODE_MTFTP_INFO = {
  .TypeName = "EFI_PXE_BASE_CODE_MTFTP_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_MTFTP_INFO),
  .StructFieldNum = 5,
  .StructFieldName_1 = "MCastIp",
  .StructFieldTypeName_1 = "EFI_IP_ADDRESS",
  .StructFieldName_2 = "CPort",
  .StructFieldTypeName_2 = "EFI_PXE_BASE_CODE_UDP_PORT",
  .StructFieldName_3 = "SPort",
  .StructFieldTypeName_3 = "EFI_PXE_BASE_CODE_UDP_PORT",
  .StructFieldName_4 = "ListenTimeout",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "TransmitTimeout",
  .StructFieldTypeName_5 = "UINT16"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_UDP_PORT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_PXE_BASE_CODE_UDP_PORT;

TYPE__EFI_PXE_BASE_CODE_UDP_PORT TypeInfo__EFI_PXE_BASE_CODE_UDP_PORT = {
  .TypeName = "EFI_PXE_BASE_CODE_UDP_PORT",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_UDP_PORT),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_UDP_WRITE{
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
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
} TYPE__EFI_PXE_BASE_CODE_UDP_WRITE;

TYPE__EFI_PXE_BASE_CODE_UDP_WRITE TypeInfo__EFI_PXE_BASE_CODE_UDP_WRITE = {
  .TypeName = "EFI_PXE_BASE_CODE_UDP_WRITE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_UDP_WRITE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 11,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IP_ADDRESS*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_PXE_BASE_CODE_UDP_PORT*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IP_ADDRESS*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_IP_ADDRESS*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_PXE_BASE_CODE_UDP_PORT*",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "void*",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "UINTN*",
  .ParameterInOut_11 = IO_IN,
  .ParameterTypeName_11 = "void*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_UDP_PORT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_UDP_PORT_STAR;

TYPE__EFI_PXE_BASE_CODE_UDP_PORT_STAR TypeInfo__EFI_PXE_BASE_CODE_UDP_PORT_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_UDP_PORT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_UDP_PORT*),
  .PointedType = "EFI_PXE_BASE_CODE_UDP_PORT"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_UDP_READ{
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
} TYPE__EFI_PXE_BASE_CODE_UDP_READ;

TYPE__EFI_PXE_BASE_CODE_UDP_READ TypeInfo__EFI_PXE_BASE_CODE_UDP_READ = {
  .TypeName = "EFI_PXE_BASE_CODE_UDP_READ",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_UDP_READ),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IP_ADDRESS*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_PXE_BASE_CODE_UDP_PORT*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IP_ADDRESS*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_PXE_BASE_CODE_UDP_PORT*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN*",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "void*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN*",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "void*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_SET_IP_FILTER{
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
} TYPE__EFI_PXE_BASE_CODE_SET_IP_FILTER;

TYPE__EFI_PXE_BASE_CODE_SET_IP_FILTER TypeInfo__EFI_PXE_BASE_CODE_SET_IP_FILTER = {
  .TypeName = "EFI_PXE_BASE_CODE_SET_IP_FILTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SET_IP_FILTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PXE_BASE_CODE_IP_FILTER*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_IP_FILTER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_IP_FILTER_STAR;

TYPE__EFI_PXE_BASE_CODE_IP_FILTER_STAR TypeInfo__EFI_PXE_BASE_CODE_IP_FILTER_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_IP_FILTER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_IP_FILTER*),
  .PointedType = "EFI_PXE_BASE_CODE_IP_FILTER"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_IP_FILTER{
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
} TYPE__EFI_PXE_BASE_CODE_IP_FILTER;

TYPE__EFI_PXE_BASE_CODE_IP_FILTER TypeInfo__EFI_PXE_BASE_CODE_IP_FILTER = {
  .TypeName = "EFI_PXE_BASE_CODE_IP_FILTER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_IP_FILTER),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Filters",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "IpCnt",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "reserved",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "IpList",
  .StructFieldTypeName_4 = "EFI_IP_ADDRESS[8]"
};


typedef struct _TYPE__EFI_IP_ADDRESS_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_IP_ADDRESS_ARRAY_8;

TYPE__EFI_IP_ADDRESS_ARRAY_8 TypeInfo__EFI_IP_ADDRESS_ARRAY_8 = {
  .TypeName = "EFI_IP_ADDRESS[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_IP_ADDRESS[8]),
  .ElementTypeName = "EFI_IP_ADDRESS"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ARP{
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
} TYPE__EFI_PXE_BASE_CODE_ARP;

TYPE__EFI_PXE_BASE_CODE_ARP TypeInfo__EFI_PXE_BASE_CODE_ARP = {
  .TypeName = "EFI_PXE_BASE_CODE_ARP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ARP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP_ADDRESS*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_MAC_ADDRESS*"
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


typedef struct _TYPE__EFI_PXE_BASE_CODE_SET_PARAMETERS{
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
} TYPE__EFI_PXE_BASE_CODE_SET_PARAMETERS;

TYPE__EFI_PXE_BASE_CODE_SET_PARAMETERS TypeInfo__EFI_PXE_BASE_CODE_SET_PARAMETERS = {
  .TypeName = "EFI_PXE_BASE_CODE_SET_PARAMETERS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SET_PARAMETERS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT8*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "BOOLEAN*"
};


typedef struct _TYPE__BOOLEAN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__BOOLEAN_STAR;

TYPE__BOOLEAN_STAR TypeInfo__BOOLEAN_STAR = {
  .TypeName = "BOOLEAN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(BOOLEAN*),
  .PointedType = "BOOLEAN"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_SET_STATION_IP{
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
} TYPE__EFI_PXE_BASE_CODE_SET_STATION_IP;

TYPE__EFI_PXE_BASE_CODE_SET_STATION_IP TypeInfo__EFI_PXE_BASE_CODE_SET_STATION_IP = {
  .TypeName = "EFI_PXE_BASE_CODE_SET_STATION_IP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SET_STATION_IP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IP_ADDRESS*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IP_ADDRESS*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_SET_PACKETS{
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
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
  const UINTN ParameterInOut_12;
  const CHAR8* ParameterTypeName_12;
  const UINTN ParameterInOut_13;
  const CHAR8* ParameterTypeName_13;
} TYPE__EFI_PXE_BASE_CODE_SET_PACKETS;

TYPE__EFI_PXE_BASE_CODE_SET_PACKETS TypeInfo__EFI_PXE_BASE_CODE_SET_PACKETS = {
  .TypeName = "EFI_PXE_BASE_CODE_SET_PACKETS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_SET_PACKETS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 13,
  .ParameterInOut_1 = IO_NULL,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_PROTOCOL*",
  .ParameterInOut_2 = IO_NULL,
  .ParameterTypeName_2 = "BOOLEAN*",
  .ParameterInOut_3 = IO_NULL,
  .ParameterTypeName_3 = "BOOLEAN*",
  .ParameterInOut_4 = IO_NULL,
  .ParameterTypeName_4 = "BOOLEAN*",
  .ParameterInOut_5 = IO_NULL,
  .ParameterTypeName_5 = "BOOLEAN*",
  .ParameterInOut_6 = IO_NULL,
  .ParameterTypeName_6 = "BOOLEAN*",
  .ParameterInOut_7 = IO_NULL,
  .ParameterTypeName_7 = "BOOLEAN*",
  .ParameterInOut_8 = IO_NULL,
  .ParameterTypeName_8 = "EFI_PXE_BASE_CODE_PACKET*",
  .ParameterInOut_9 = IO_NULL,
  .ParameterTypeName_9 = "EFI_PXE_BASE_CODE_PACKET*",
  .ParameterInOut_10 = IO_NULL,
  .ParameterTypeName_10 = "EFI_PXE_BASE_CODE_PACKET*",
  .ParameterInOut_11 = IO_NULL,
  .ParameterTypeName_11 = "EFI_PXE_BASE_CODE_PACKET*",
  .ParameterInOut_12 = IO_NULL,
  .ParameterTypeName_12 = "EFI_PXE_BASE_CODE_PACKET*",
  .ParameterInOut_13 = IO_NULL,
  .ParameterTypeName_13 = "EFI_PXE_BASE_CODE_PACKET*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_PACKET_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_PACKET_STAR;

TYPE__EFI_PXE_BASE_CODE_PACKET_STAR TypeInfo__EFI_PXE_BASE_CODE_PACKET_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_PACKET*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_PACKET*),
  .PointedType = "EFI_PXE_BASE_CODE_PACKET"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_PACKET{
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
} TYPE__EFI_PXE_BASE_CODE_PACKET;

TYPE__EFI_PXE_BASE_CODE_PACKET TypeInfo__EFI_PXE_BASE_CODE_PACKET = {
  .TypeName = "EFI_PXE_BASE_CODE_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_PACKET),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Raw",
  .StructFieldTypeName_1 = "UINT8[1472]",
  .StructFieldName_2 = "Dhcpv4",
  .StructFieldTypeName_2 = "EFI_PXE_BASE_CODE_DHCPV4_PACKET",
  .StructFieldName_3 = "Dhcpv6",
  .StructFieldTypeName_3 = "EFI_PXE_BASE_CODE_DHCPV6_PACKET"
};


typedef struct _TYPE__UINT8_ARRAY_1472{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_1472;

TYPE__UINT8_ARRAY_1472 TypeInfo__UINT8_ARRAY_1472 = {
  .TypeName = "UINT8[1472]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[1472]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_DHCPV4_PACKET{
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
} TYPE__EFI_PXE_BASE_CODE_DHCPV4_PACKET;

TYPE__EFI_PXE_BASE_CODE_DHCPV4_PACKET TypeInfo__EFI_PXE_BASE_CODE_DHCPV4_PACKET = {
  .TypeName = "EFI_PXE_BASE_CODE_DHCPV4_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DHCPV4_PACKET),
  .StructFieldNum = 16,
  .StructFieldName_1 = "BootpOpcode",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "BootpHwType",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "BootpHwAddrLen",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "BootpGateHops",
  .StructFieldTypeName_4 = "UINT8",
  .StructFieldName_5 = "BootpIdent",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "BootpSeconds",
  .StructFieldTypeName_6 = "UINT16",
  .StructFieldName_7 = "BootpFlags",
  .StructFieldTypeName_7 = "UINT16",
  .StructFieldName_8 = "BootpCiAddr",
  .StructFieldTypeName_8 = "UINT8[4]",
  .StructFieldName_9 = "BootpYiAddr",
  .StructFieldTypeName_9 = "UINT8[4]",
  .StructFieldName_10 = "BootpSiAddr",
  .StructFieldTypeName_10 = "UINT8[4]",
  .StructFieldName_11 = "BootpGiAddr",
  .StructFieldTypeName_11 = "UINT8[4]",
  .StructFieldName_12 = "BootpHwAddr",
  .StructFieldTypeName_12 = "UINT8[16]",
  .StructFieldName_13 = "BootpSrvName",
  .StructFieldTypeName_13 = "UINT8[64]",
  .StructFieldName_14 = "BootpBootFile",
  .StructFieldTypeName_14 = "UINT8[128]",
  .StructFieldName_15 = "DhcpMagik",
  .StructFieldTypeName_15 = "UINT32",
  .StructFieldName_16 = "DhcpOptions",
  .StructFieldTypeName_16 = "UINT8[56]"
};


typedef struct _TYPE__UINT8_ARRAY_64{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_64;

TYPE__UINT8_ARRAY_64 TypeInfo__UINT8_ARRAY_64 = {
  .TypeName = "UINT8[64]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[64]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT8_ARRAY_128{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_128;

TYPE__UINT8_ARRAY_128 TypeInfo__UINT8_ARRAY_128 = {
  .TypeName = "UINT8[128]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[128]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT8_ARRAY_56{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_56;

TYPE__UINT8_ARRAY_56 TypeInfo__UINT8_ARRAY_56 = {
  .TypeName = "UINT8[56]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[56]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_DHCPV6_PACKET{
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
} TYPE__EFI_PXE_BASE_CODE_DHCPV6_PACKET;

TYPE__EFI_PXE_BASE_CODE_DHCPV6_PACKET TypeInfo__EFI_PXE_BASE_CODE_DHCPV6_PACKET = {
  .TypeName = "EFI_PXE_BASE_CODE_DHCPV6_PACKET",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_DHCPV6_PACKET),
  .StructFieldNum = 3,
  .StructFieldName_1 = "MessageType",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "TransactionId",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "DhcpOptions",
  .StructFieldTypeName_3 = "UINT8[1024]"
};


typedef struct _TYPE__UINT8_ARRAY_1024{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_1024;

TYPE__UINT8_ARRAY_1024 TypeInfo__UINT8_ARRAY_1024 = {
  .TypeName = "UINT8[1024]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[1024]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_MODE_STAR;

TYPE__EFI_PXE_BASE_CODE_MODE_STAR TypeInfo__EFI_PXE_BASE_CODE_MODE_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_MODE*),
  .PointedType = "EFI_PXE_BASE_CODE_MODE"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_MODE{
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
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
  const CHAR8* StructFieldName_34;
  const CHAR8* StructFieldTypeName_34;
} TYPE__EFI_PXE_BASE_CODE_MODE;

TYPE__EFI_PXE_BASE_CODE_MODE TypeInfo__EFI_PXE_BASE_CODE_MODE = {
  .TypeName = "EFI_PXE_BASE_CODE_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_MODE),
  .StructFieldNum = 34,
  .StructFieldName_1 = "Started",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "Ipv6Available",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "Ipv6Supported",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "UsingIpv6",
  .StructFieldTypeName_4 = "BOOLEAN",
  .StructFieldName_5 = "BisSupported",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "BisDetected",
  .StructFieldTypeName_6 = "BOOLEAN",
  .StructFieldName_7 = "AutoArp",
  .StructFieldTypeName_7 = "BOOLEAN",
  .StructFieldName_8 = "SendGUID",
  .StructFieldTypeName_8 = "BOOLEAN",
  .StructFieldName_9 = "DhcpDiscoverValid",
  .StructFieldTypeName_9 = "BOOLEAN",
  .StructFieldName_10 = "DhcpAckReceived",
  .StructFieldTypeName_10 = "BOOLEAN",
  .StructFieldName_11 = "ProxyOfferReceived",
  .StructFieldTypeName_11 = "BOOLEAN",
  .StructFieldName_12 = "PxeDiscoverValid",
  .StructFieldTypeName_12 = "BOOLEAN",
  .StructFieldName_13 = "PxeReplyReceived",
  .StructFieldTypeName_13 = "BOOLEAN",
  .StructFieldName_14 = "PxeBisReplyReceived",
  .StructFieldTypeName_14 = "BOOLEAN",
  .StructFieldName_15 = "IcmpErrorReceived",
  .StructFieldTypeName_15 = "BOOLEAN",
  .StructFieldName_16 = "TftpErrorReceived",
  .StructFieldTypeName_16 = "BOOLEAN",
  .StructFieldName_17 = "MakeCallbacks",
  .StructFieldTypeName_17 = "BOOLEAN",
  .StructFieldName_18 = "TTL",
  .StructFieldTypeName_18 = "UINT8",
  .StructFieldName_19 = "ToS",
  .StructFieldTypeName_19 = "UINT8",
  .StructFieldName_20 = "StationIp",
  .StructFieldTypeName_20 = "EFI_IP_ADDRESS",
  .StructFieldName_21 = "SubnetMask",
  .StructFieldTypeName_21 = "EFI_IP_ADDRESS",
  .StructFieldName_22 = "DhcpDiscover",
  .StructFieldTypeName_22 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_23 = "DhcpAck",
  .StructFieldTypeName_23 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_24 = "ProxyOffer",
  .StructFieldTypeName_24 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_25 = "PxeDiscover",
  .StructFieldTypeName_25 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_26 = "PxeReply",
  .StructFieldTypeName_26 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_27 = "PxeBisReply",
  .StructFieldTypeName_27 = "EFI_PXE_BASE_CODE_PACKET",
  .StructFieldName_28 = "IpFilter",
  .StructFieldTypeName_28 = "EFI_PXE_BASE_CODE_IP_FILTER",
  .StructFieldName_29 = "ArpCacheEntries",
  .StructFieldTypeName_29 = "UINT32",
  .StructFieldName_30 = "ArpCache",
  .StructFieldTypeName_30 = "EFI_PXE_BASE_CODE_ARP_ENTRY[8]",
  .StructFieldName_31 = "RouteTableEntries",
  .StructFieldTypeName_31 = "UINT32",
  .StructFieldName_32 = "RouteTable",
  .StructFieldTypeName_32 = "EFI_PXE_BASE_CODE_ROUTE_ENTRY[8]",
  .StructFieldName_33 = "IcmpError",
  .StructFieldTypeName_33 = "EFI_PXE_BASE_CODE_ICMP_ERROR",
  .StructFieldName_34 = "TftpError",
  .StructFieldTypeName_34 = "EFI_PXE_BASE_CODE_TFTP_ERROR"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY_ARRAY_8;

TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY_ARRAY_8 TypeInfo__EFI_PXE_BASE_CODE_ARP_ENTRY_ARRAY_8 = {
  .TypeName = "EFI_PXE_BASE_CODE_ARP_ENTRY[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ARP_ENTRY[8]),
  .ElementTypeName = "EFI_PXE_BASE_CODE_ARP_ENTRY"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY;

TYPE__EFI_PXE_BASE_CODE_ARP_ENTRY TypeInfo__EFI_PXE_BASE_CODE_ARP_ENTRY = {
  .TypeName = "EFI_PXE_BASE_CODE_ARP_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ARP_ENTRY),
  .StructFieldNum = 2,
  .StructFieldName_1 = "IpAddr",
  .StructFieldTypeName_1 = "EFI_IP_ADDRESS",
  .StructFieldName_2 = "MacAddr",
  .StructFieldTypeName_2 = "EFI_MAC_ADDRESS"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY_ARRAY_8;

TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY_ARRAY_8 TypeInfo__EFI_PXE_BASE_CODE_ROUTE_ENTRY_ARRAY_8 = {
  .TypeName = "EFI_PXE_BASE_CODE_ROUTE_ENTRY[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ROUTE_ENTRY[8]),
  .ElementTypeName = "EFI_PXE_BASE_CODE_ROUTE_ENTRY"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY{
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
} TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY;

TYPE__EFI_PXE_BASE_CODE_ROUTE_ENTRY TypeInfo__EFI_PXE_BASE_CODE_ROUTE_ENTRY = {
  .TypeName = "EFI_PXE_BASE_CODE_ROUTE_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ROUTE_ENTRY),
  .StructFieldNum = 3,
  .StructFieldName_1 = "IpAddr",
  .StructFieldTypeName_1 = "EFI_IP_ADDRESS",
  .StructFieldName_2 = "SubnetMask",
  .StructFieldTypeName_2 = "EFI_IP_ADDRESS",
  .StructFieldName_3 = "GwAddr",
  .StructFieldTypeName_3 = "EFI_IP_ADDRESS"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_ICMP_ERROR{
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
} TYPE__EFI_PXE_BASE_CODE_ICMP_ERROR;

TYPE__EFI_PXE_BASE_CODE_ICMP_ERROR TypeInfo__EFI_PXE_BASE_CODE_ICMP_ERROR = {
  .TypeName = "EFI_PXE_BASE_CODE_ICMP_ERROR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_ICMP_ERROR),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Code",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Checksum",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "u",
  .StructFieldTypeName_4 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/PxeBaseCode.h:49:3)",
  .StructFieldName_5 = "Data",
  .StructFieldTypeName_5 = "UINT8[494]"
};


typedef struct _TYPE__UINT8_ARRAY_494{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_494;

TYPE__UINT8_ARRAY_494 TypeInfo__UINT8_ARRAY_494 = {
  .TypeName = "UINT8[494]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[494]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_TFTP_ERROR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PXE_BASE_CODE_TFTP_ERROR;

TYPE__EFI_PXE_BASE_CODE_TFTP_ERROR TypeInfo__EFI_PXE_BASE_CODE_TFTP_ERROR = {
  .TypeName = "EFI_PXE_BASE_CODE_TFTP_ERROR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_TFTP_ERROR),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ErrorCode",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "ErrorString",
  .StructFieldTypeName_2 = "CHAR8[127]"
};


typedef struct _TYPE__CHAR8_ARRAY_127{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_127;

TYPE__CHAR8_ARRAY_127 TypeInfo__CHAR8_ARRAY_127 = {
  .TypeName = "CHAR8[127]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[127]),
  .ElementTypeName = "CHAR8"
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


typedef struct _TYPE__EFI_SIMPLE_NETWORK_PROTOCOL{
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
} TYPE__EFI_SIMPLE_NETWORK_PROTOCOL;

TYPE__EFI_SIMPLE_NETWORK_PROTOCOL TypeInfo__EFI_SIMPLE_NETWORK_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_NETWORK_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_PROTOCOL),
  .StructFieldNum = 16,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Start",
  .StructFieldTypeName_2 = "EFI_SIMPLE_NETWORK_START",
  .StructFieldName_3 = "Stop",
  .StructFieldTypeName_3 = "EFI_SIMPLE_NETWORK_STOP",
  .StructFieldName_4 = "Initialize",
  .StructFieldTypeName_4 = "EFI_SIMPLE_NETWORK_INITIALIZE",
  .StructFieldName_5 = "Reset",
  .StructFieldTypeName_5 = "EFI_SIMPLE_NETWORK_RESET",
  .StructFieldName_6 = "Shutdown",
  .StructFieldTypeName_6 = "EFI_SIMPLE_NETWORK_SHUTDOWN",
  .StructFieldName_7 = "ReceiveFilters",
  .StructFieldTypeName_7 = "EFI_SIMPLE_NETWORK_RECEIVE_FILTERS",
  .StructFieldName_8 = "StationAddress",
  .StructFieldTypeName_8 = "EFI_SIMPLE_NETWORK_STATION_ADDRESS",
  .StructFieldName_9 = "Statistics",
  .StructFieldTypeName_9 = "EFI_SIMPLE_NETWORK_STATISTICS",
  .StructFieldName_10 = "MCastIpToMac",
  .StructFieldTypeName_10 = "EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC",
  .StructFieldName_11 = "NvData",
  .StructFieldTypeName_11 = "EFI_SIMPLE_NETWORK_NVDATA",
  .StructFieldName_12 = "GetStatus",
  .StructFieldTypeName_12 = "EFI_SIMPLE_NETWORK_GET_STATUS",
  .StructFieldName_13 = "Transmit",
  .StructFieldTypeName_13 = "EFI_SIMPLE_NETWORK_TRANSMIT",
  .StructFieldName_14 = "Receive",
  .StructFieldTypeName_14 = "EFI_SIMPLE_NETWORK_RECEIVE",
  .StructFieldName_15 = "WaitForPacket",
  .StructFieldTypeName_15 = "EFI_EVENT",
  .StructFieldName_16 = "Mode",
  .StructFieldTypeName_16 = "EFI_SIMPLE_NETWORK_MODE*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_START{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SIMPLE_NETWORK_START;

TYPE__EFI_SIMPLE_NETWORK_START TypeInfo__EFI_SIMPLE_NETWORK_START = {
  .TypeName = "EFI_SIMPLE_NETWORK_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_NETWORK_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_NETWORK_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_NETWORK_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_NETWORK_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_STOP{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SIMPLE_NETWORK_STOP;

TYPE__EFI_SIMPLE_NETWORK_STOP TypeInfo__EFI_SIMPLE_NETWORK_STOP = {
  .TypeName = "EFI_SIMPLE_NETWORK_STOP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_STOP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_INITIALIZE{
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
} TYPE__EFI_SIMPLE_NETWORK_INITIALIZE;

TYPE__EFI_SIMPLE_NETWORK_INITIALIZE TypeInfo__EFI_SIMPLE_NETWORK_INITIALIZE = {
  .TypeName = "EFI_SIMPLE_NETWORK_INITIALIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_INITIALIZE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_RESET{
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
} TYPE__EFI_SIMPLE_NETWORK_RESET;

TYPE__EFI_SIMPLE_NETWORK_RESET TypeInfo__EFI_SIMPLE_NETWORK_RESET = {
  .TypeName = "EFI_SIMPLE_NETWORK_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_SHUTDOWN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SIMPLE_NETWORK_SHUTDOWN;

TYPE__EFI_SIMPLE_NETWORK_SHUTDOWN TypeInfo__EFI_SIMPLE_NETWORK_SHUTDOWN = {
  .TypeName = "EFI_SIMPLE_NETWORK_SHUTDOWN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_SHUTDOWN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_RECEIVE_FILTERS{
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
} TYPE__EFI_SIMPLE_NETWORK_RECEIVE_FILTERS;

TYPE__EFI_SIMPLE_NETWORK_RECEIVE_FILTERS TypeInfo__EFI_SIMPLE_NETWORK_RECEIVE_FILTERS = {
  .TypeName = "EFI_SIMPLE_NETWORK_RECEIVE_FILTERS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_RECEIVE_FILTERS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_MAC_ADDRESS*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_STATION_ADDRESS{
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
} TYPE__EFI_SIMPLE_NETWORK_STATION_ADDRESS;

TYPE__EFI_SIMPLE_NETWORK_STATION_ADDRESS TypeInfo__EFI_SIMPLE_NETWORK_STATION_ADDRESS = {
  .TypeName = "EFI_SIMPLE_NETWORK_STATION_ADDRESS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_STATION_ADDRESS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_MAC_ADDRESS*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_STATISTICS{
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
} TYPE__EFI_SIMPLE_NETWORK_STATISTICS;

TYPE__EFI_SIMPLE_NETWORK_STATISTICS TypeInfo__EFI_SIMPLE_NETWORK_STATISTICS = {
  .TypeName = "EFI_SIMPLE_NETWORK_STATISTICS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_STATISTICS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_NETWORK_STATISTICS*"
};


typedef struct _TYPE__EFI_NETWORK_STATISTICS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_NETWORK_STATISTICS_STAR;

TYPE__EFI_NETWORK_STATISTICS_STAR TypeInfo__EFI_NETWORK_STATISTICS_STAR = {
  .TypeName = "EFI_NETWORK_STATISTICS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_NETWORK_STATISTICS*),
  .PointedType = "EFI_NETWORK_STATISTICS"
};


typedef struct _TYPE__EFI_NETWORK_STATISTICS{
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
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
} TYPE__EFI_NETWORK_STATISTICS;

TYPE__EFI_NETWORK_STATISTICS TypeInfo__EFI_NETWORK_STATISTICS = {
  .TypeName = "EFI_NETWORK_STATISTICS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_NETWORK_STATISTICS),
  .StructFieldNum = 26,
  .StructFieldName_1 = "RxTotalFrames",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "RxGoodFrames",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "RxUndersizeFrames",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "RxOversizeFrames",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "RxDroppedFrames",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "RxUnicastFrames",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "RxBroadcastFrames",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "RxMulticastFrames",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "RxCrcErrorFrames",
  .StructFieldTypeName_9 = "UINT64",
  .StructFieldName_10 = "RxTotalBytes",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "TxTotalFrames",
  .StructFieldTypeName_11 = "UINT64",
  .StructFieldName_12 = "TxGoodFrames",
  .StructFieldTypeName_12 = "UINT64",
  .StructFieldName_13 = "TxUndersizeFrames",
  .StructFieldTypeName_13 = "UINT64",
  .StructFieldName_14 = "TxOversizeFrames",
  .StructFieldTypeName_14 = "UINT64",
  .StructFieldName_15 = "TxDroppedFrames",
  .StructFieldTypeName_15 = "UINT64",
  .StructFieldName_16 = "TxUnicastFrames",
  .StructFieldTypeName_16 = "UINT64",
  .StructFieldName_17 = "TxBroadcastFrames",
  .StructFieldTypeName_17 = "UINT64",
  .StructFieldName_18 = "TxMulticastFrames",
  .StructFieldTypeName_18 = "UINT64",
  .StructFieldName_19 = "TxCrcErrorFrames",
  .StructFieldTypeName_19 = "UINT64",
  .StructFieldName_20 = "TxTotalBytes",
  .StructFieldTypeName_20 = "UINT64",
  .StructFieldName_21 = "Collisions",
  .StructFieldTypeName_21 = "UINT64",
  .StructFieldName_22 = "UnsupportedProtocol",
  .StructFieldTypeName_22 = "UINT64",
  .StructFieldName_23 = "RxDuplicatedFrames",
  .StructFieldTypeName_23 = "UINT64",
  .StructFieldName_24 = "RxDecryptErrorFrames",
  .StructFieldTypeName_24 = "UINT64",
  .StructFieldName_25 = "TxErrorFrames",
  .StructFieldTypeName_25 = "UINT64",
  .StructFieldName_26 = "TxRetryFrames",
  .StructFieldTypeName_26 = "UINT64"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC{
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
} TYPE__EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC;

TYPE__EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC TypeInfo__EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC = {
  .TypeName = "EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IP_ADDRESS*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_MAC_ADDRESS*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_NVDATA{
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
} TYPE__EFI_SIMPLE_NETWORK_NVDATA;

TYPE__EFI_SIMPLE_NETWORK_NVDATA TypeInfo__EFI_SIMPLE_NETWORK_NVDATA = {
  .TypeName = "EFI_SIMPLE_NETWORK_NVDATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_NVDATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_GET_STATUS{
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
} TYPE__EFI_SIMPLE_NETWORK_GET_STATUS;

TYPE__EFI_SIMPLE_NETWORK_GET_STATUS TypeInfo__EFI_SIMPLE_NETWORK_GET_STATUS = {
  .TypeName = "EFI_SIMPLE_NETWORK_GET_STATUS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_GET_STATUS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT32*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
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


typedef struct _TYPE__EFI_SIMPLE_NETWORK_TRANSMIT{
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
} TYPE__EFI_SIMPLE_NETWORK_TRANSMIT;

TYPE__EFI_SIMPLE_NETWORK_TRANSMIT TypeInfo__EFI_SIMPLE_NETWORK_TRANSMIT = {
  .TypeName = "EFI_SIMPLE_NETWORK_TRANSMIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_TRANSMIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_MAC_ADDRESS*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_MAC_ADDRESS*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINT16*"
};


typedef struct _TYPE__EFI_SIMPLE_NETWORK_RECEIVE{
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
} TYPE__EFI_SIMPLE_NETWORK_RECEIVE;

TYPE__EFI_SIMPLE_NETWORK_RECEIVE TypeInfo__EFI_SIMPLE_NETWORK_RECEIVE = {
  .TypeName = "EFI_SIMPLE_NETWORK_RECEIVE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIMPLE_NETWORK_RECEIVE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_NETWORK_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_MAC_ADDRESS*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_MAC_ADDRESS*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "UINT16*"
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


typedef struct _TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL;

TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL = {
  .TypeName = "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Callback",
  .StructFieldTypeName_2 = "EFI_PXE_CALLBACK"
};


typedef struct _TYPE__EFI_PXE_CALLBACK{
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
} TYPE__EFI_PXE_CALLBACK;

TYPE__EFI_PXE_CALLBACK TypeInfo__EFI_PXE_CALLBACK = {
  .TypeName = "EFI_PXE_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PXE_CALLBACK),
  .ReturnType = "EFI_PXE_BASE_CODE_CALLBACK_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PXE_BASE_CODE_FUNCTION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT32",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_PXE_BASE_CODE_PACKET*"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_CALLBACK_STATUS{
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
} TYPE__EFI_PXE_BASE_CODE_CALLBACK_STATUS;

TYPE__EFI_PXE_BASE_CODE_CALLBACK_STATUS TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_STATUS = {
  .TypeName = "EFI_PXE_BASE_CODE_CALLBACK_STATUS",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_CALLBACK_STATUS),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EFI_PXE_BASE_CODE_CALLBACK_STATUS_FIRST",
  .EnumValue_1 = EFI_PXE_BASE_CODE_CALLBACK_STATUS_FIRST,
  .EnumValueName_2 = "EFI_PXE_BASE_CODE_CALLBACK_STATUS_CONTINUE",
  .EnumValue_2 = EFI_PXE_BASE_CODE_CALLBACK_STATUS_CONTINUE,
  .EnumValueName_3 = "EFI_PXE_BASE_CODE_CALLBACK_STATUS_ABORT",
  .EnumValue_3 = EFI_PXE_BASE_CODE_CALLBACK_STATUS_ABORT,
  .EnumValueName_4 = "EFI_PXE_BASE_CODE_CALLBACK_STATUS_LAST",
  .EnumValue_4 = EFI_PXE_BASE_CODE_CALLBACK_STATUS_LAST
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_STAR;

TYPE__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_STAR TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_STAR = {
  .TypeName = "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL*),
  .PointedType = "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL"
};


typedef struct _TYPE__EFI_PXE_BASE_CODE_FUNCTION{
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
} TYPE__EFI_PXE_BASE_CODE_FUNCTION;

TYPE__EFI_PXE_BASE_CODE_FUNCTION TypeInfo__EFI_PXE_BASE_CODE_FUNCTION = {
  .TypeName = "EFI_PXE_BASE_CODE_FUNCTION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PXE_BASE_CODE_FUNCTION),
  .EnumValueNum = 9,
  .EnumValueName_1 = "EFI_PXE_BASE_CODE_FUNCTION_FIRST",
  .EnumValue_1 = EFI_PXE_BASE_CODE_FUNCTION_FIRST,
  .EnumValueName_2 = "EFI_PXE_BASE_CODE_FUNCTION_DHCP",
  .EnumValue_2 = EFI_PXE_BASE_CODE_FUNCTION_DHCP,
  .EnumValueName_3 = "EFI_PXE_BASE_CODE_FUNCTION_DISCOVER",
  .EnumValue_3 = EFI_PXE_BASE_CODE_FUNCTION_DISCOVER,
  .EnumValueName_4 = "EFI_PXE_BASE_CODE_FUNCTION_MTFTP",
  .EnumValue_4 = EFI_PXE_BASE_CODE_FUNCTION_MTFTP,
  .EnumValueName_5 = "EFI_PXE_BASE_CODE_FUNCTION_UDP_WRITE",
  .EnumValue_5 = EFI_PXE_BASE_CODE_FUNCTION_UDP_WRITE,
  .EnumValueName_6 = "EFI_PXE_BASE_CODE_FUNCTION_UDP_READ",
  .EnumValue_6 = EFI_PXE_BASE_CODE_FUNCTION_UDP_READ,
  .EnumValueName_7 = "EFI_PXE_BASE_CODE_FUNCTION_ARP",
  .EnumValue_7 = EFI_PXE_BASE_CODE_FUNCTION_ARP,
  .EnumValueName_8 = "EFI_PXE_BASE_CODE_FUNCTION_IGMP",
  .EnumValue_8 = EFI_PXE_BASE_CODE_FUNCTION_IGMP,
  .EnumValueName_9 = "EFI_PXE_BASE_CODE_PXE_FUNCTION_LAST",
  .EnumValue_9 = EFI_PXE_BASE_CODE_PXE_FUNCTION_LAST
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


typedef struct _TYPE__gEfiIp4ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp4ProtocolGuid;

TYPE__gEfiIp4ProtocolGuid TypeInfo__gEfiIp4ProtocolGuid = {
  .TypeName = "gEfiIp4ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp4ProtocolGuid,
  .InterfaceStructName = "EFI_IP4_PROTOCOL"
};


typedef struct _TYPE__gEfiPxeBaseCodeCallbackProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPxeBaseCodeCallbackProtocolGuid;

TYPE__gEfiPxeBaseCodeCallbackProtocolGuid TypeInfo__gEfiPxeBaseCodeCallbackProtocolGuid = {
  .TypeName = "gEfiPxeBaseCodeCallbackProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPxeBaseCodeCallbackProtocolGuid,
  .InterfaceStructName = "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL"
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


typedef struct _TYPE__gEfiArpProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiArpProtocolGuid;

TYPE__gEfiArpProtocolGuid TypeInfo__gEfiArpProtocolGuid = {
  .TypeName = "gEfiArpProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiArpProtocolGuid,
  .InterfaceStructName = "EFI_ARP_PROTOCOL"
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


typedef struct _TYPE__gEfiMtftp4ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiMtftp4ProtocolGuid;

TYPE__gEfiMtftp4ProtocolGuid TypeInfo__gEfiMtftp4ProtocolGuid = {
  .TypeName = "gEfiMtftp4ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiMtftp4ProtocolGuid,
  .InterfaceStructName = "EFI_MTFTP4_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiArpProtocolGuid,
  &TypeInfo__gEfiUdp4ProtocolGuid,
  &TypeInfo__gEfiDns6ProtocolGuid,
  &TypeInfo__gEfiDhcp6ProtocolGuid,
  &TypeInfo__gEfiIp4ProtocolGuid,
  &TypeInfo__gEfiUdp6ProtocolGuid,
  &TypeInfo__gEfiLoadFileProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiDhcp4ProtocolGuid,
  &TypeInfo__gEfiIp6ProtocolGuid,
  &TypeInfo__gEfiMtftp4ProtocolGuid,
  &TypeInfo__gEfiNetworkInterfaceIdentifierProtocolGuid_31,
  &TypeInfo__gEfiMtftp6ProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiPxeBaseCodeCallbackProtocolGuid,
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
  &TypeInfo__gEfiPxeBaseCodeCallbackProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiIp4Config2ProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadFileProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiPxeBaseCodeProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__gEfiLoadFileProtocolGuid,
  &TypeInfo__EFI_LOAD_FILE_PROTOCOL,
  &TypeInfo__EFI_LOAD_FILE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_LOAD_FILE_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__void_STAR,
  &TypeInfo__gEfiPxeBaseCodeProtocolGuid,
  &TypeInfo__EFI_PXE_BASE_CODE_PROTOCOL,
  &TypeInfo__EFI_PXE_BASE_CODE_START,
  &TypeInfo__EFI_PXE_BASE_CODE_PROTOCOL_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_STOP,
  &TypeInfo__EFI_PXE_BASE_CODE_DHCP,
  &TypeInfo__EFI_PXE_BASE_CODE_DISCOVER,
  &TypeInfo__UINT16,
  &TypeInfo__UINT16_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_DISCOVER_INFO_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_DISCOVER_INFO,
  &TypeInfo__EFI_IP_ADDRESS,
  &TypeInfo__UINT32_ARRAY_4,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_IPv4_ADDRESS,
  &TypeInfo__UINT8_ARRAY_4,
  &TypeInfo__EFI_IPv6_ADDRESS,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__EFI_PXE_BASE_CODE_SRVLIST_ARRAY_1,
  &TypeInfo__EFI_PXE_BASE_CODE_SRVLIST,
  &TypeInfo__EFI_PXE_BASE_CODE_MTFTP,
  &TypeInfo__EFI_PXE_BASE_CODE_TFTP_OPCODE,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_IP_ADDRESS_STAR,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_MTFTP_INFO_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_MTFTP_INFO,
  &TypeInfo__EFI_PXE_BASE_CODE_UDP_PORT,
  &TypeInfo__EFI_PXE_BASE_CODE_UDP_WRITE,
  &TypeInfo__EFI_PXE_BASE_CODE_UDP_PORT_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_UDP_READ,
  &TypeInfo__EFI_PXE_BASE_CODE_SET_IP_FILTER,
  &TypeInfo__EFI_PXE_BASE_CODE_IP_FILTER_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_IP_FILTER,
  &TypeInfo__EFI_IP_ADDRESS_ARRAY_8,
  &TypeInfo__EFI_PXE_BASE_CODE_ARP,
  &TypeInfo__EFI_MAC_ADDRESS_STAR,
  &TypeInfo__EFI_MAC_ADDRESS,
  &TypeInfo__UINT8_ARRAY_32,
  &TypeInfo__EFI_PXE_BASE_CODE_SET_PARAMETERS,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_SET_STATION_IP,
  &TypeInfo__EFI_PXE_BASE_CODE_SET_PACKETS,
  &TypeInfo__EFI_PXE_BASE_CODE_PACKET_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_PACKET,
  &TypeInfo__UINT8_ARRAY_1472,
  &TypeInfo__EFI_PXE_BASE_CODE_DHCPV4_PACKET,
  &TypeInfo__UINT8_ARRAY_64,
  &TypeInfo__UINT8_ARRAY_128,
  &TypeInfo__UINT8_ARRAY_56,
  &TypeInfo__EFI_PXE_BASE_CODE_DHCPV6_PACKET,
  &TypeInfo__UINT8_ARRAY_1024,
  &TypeInfo__EFI_PXE_BASE_CODE_MODE_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_MODE,
  &TypeInfo__EFI_PXE_BASE_CODE_ARP_ENTRY_ARRAY_8,
  &TypeInfo__EFI_PXE_BASE_CODE_ARP_ENTRY,
  &TypeInfo__EFI_PXE_BASE_CODE_ROUTE_ENTRY_ARRAY_8,
  &TypeInfo__EFI_PXE_BASE_CODE_ROUTE_ENTRY,
  &TypeInfo__EFI_PXE_BASE_CODE_ICMP_ERROR,
  &TypeInfo__UINT8_ARRAY_494,
  &TypeInfo__EFI_PXE_BASE_CODE_TFTP_ERROR,
  &TypeInfo__CHAR8_ARRAY_127,
  &TypeInfo__CHAR8,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__EFI_SIMPLE_NETWORK_PROTOCOL,
  &TypeInfo__EFI_SIMPLE_NETWORK_START,
  &TypeInfo__EFI_SIMPLE_NETWORK_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_NETWORK_STOP,
  &TypeInfo__EFI_SIMPLE_NETWORK_INITIALIZE,
  &TypeInfo__EFI_SIMPLE_NETWORK_RESET,
  &TypeInfo__EFI_SIMPLE_NETWORK_SHUTDOWN,
  &TypeInfo__EFI_SIMPLE_NETWORK_RECEIVE_FILTERS,
  &TypeInfo__EFI_SIMPLE_NETWORK_STATION_ADDRESS,
  &TypeInfo__EFI_SIMPLE_NETWORK_STATISTICS,
  &TypeInfo__EFI_NETWORK_STATISTICS_STAR,
  &TypeInfo__EFI_NETWORK_STATISTICS,
  &TypeInfo__EFI_SIMPLE_NETWORK_MCAST_IP_TO_MAC,
  &TypeInfo__EFI_SIMPLE_NETWORK_NVDATA,
  &TypeInfo__EFI_SIMPLE_NETWORK_GET_STATUS,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_SIMPLE_NETWORK_TRANSMIT,
  &TypeInfo__EFI_SIMPLE_NETWORK_RECEIVE,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_NETWORK_MODE,
  &TypeInfo__EFI_MAC_ADDRESS_ARRAY_16,
  &TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL,
  &TypeInfo__EFI_PXE_CALLBACK,
  &TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_STATUS,
  &TypeInfo__EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_STAR,
  &TypeInfo__EFI_PXE_BASE_CODE_FUNCTION,
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