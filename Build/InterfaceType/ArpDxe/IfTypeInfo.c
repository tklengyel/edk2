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

typedef struct _TYPE__gEfiArpServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiArpServiceBindingProtocolGuid;

TYPE__gEfiArpServiceBindingProtocolGuid TypeInfo__gEfiArpServiceBindingProtocolGuid = {
  .TypeName = "gEfiArpServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiArpServiceBindingProtocolGuid,
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


typedef struct _TYPE__EFI_ARP_PROTOCOL{
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
} TYPE__EFI_ARP_PROTOCOL;

TYPE__EFI_ARP_PROTOCOL TypeInfo__EFI_ARP_PROTOCOL = {
  .TypeName = "EFI_ARP_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ARP_PROTOCOL),
  .StructFieldNum = 7,
  .StructFieldName_1 = "Configure",
  .StructFieldTypeName_1 = "EFI_ARP_CONFIGURE",
  .StructFieldName_2 = "Add",
  .StructFieldTypeName_2 = "EFI_ARP_ADD",
  .StructFieldName_3 = "Find",
  .StructFieldTypeName_3 = "EFI_ARP_FIND",
  .StructFieldName_4 = "Delete",
  .StructFieldTypeName_4 = "EFI_ARP_DELETE",
  .StructFieldName_5 = "Flush",
  .StructFieldTypeName_5 = "EFI_ARP_FLUSH",
  .StructFieldName_6 = "Request",
  .StructFieldTypeName_6 = "EFI_ARP_REQUEST",
  .StructFieldName_7 = "Cancel",
  .StructFieldTypeName_7 = "EFI_ARP_CANCEL"
};


typedef struct _TYPE__EFI_ARP_CONFIGURE{
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
} TYPE__EFI_ARP_CONFIGURE;

TYPE__EFI_ARP_CONFIGURE TypeInfo__EFI_ARP_CONFIGURE = {
  .TypeName = "EFI_ARP_CONFIGURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_CONFIGURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ARP_CONFIG_DATA*"
};


typedef struct _TYPE__EFI_ARP_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ARP_PROTOCOL_STAR;

TYPE__EFI_ARP_PROTOCOL_STAR TypeInfo__EFI_ARP_PROTOCOL_STAR = {
  .TypeName = "EFI_ARP_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ARP_PROTOCOL*),
  .PointedType = "EFI_ARP_PROTOCOL"
};


typedef struct _TYPE__EFI_ARP_CONFIG_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ARP_CONFIG_DATA_STAR;

TYPE__EFI_ARP_CONFIG_DATA_STAR TypeInfo__EFI_ARP_CONFIG_DATA_STAR = {
  .TypeName = "EFI_ARP_CONFIG_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ARP_CONFIG_DATA*),
  .PointedType = "EFI_ARP_CONFIG_DATA"
};


typedef struct _TYPE__EFI_ARP_CONFIG_DATA{
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
} TYPE__EFI_ARP_CONFIG_DATA;

TYPE__EFI_ARP_CONFIG_DATA TypeInfo__EFI_ARP_CONFIG_DATA = {
  .TypeName = "EFI_ARP_CONFIG_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ARP_CONFIG_DATA),
  .StructFieldNum = 6,
  .StructFieldName_1 = "SwAddressType",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "SwAddressLength",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "StationAddress",
  .StructFieldTypeName_3 = "void*",
  .StructFieldName_4 = "EntryTimeOut",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "RetryCount",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "RetryTimeOut",
  .StructFieldTypeName_6 = "UINT32"
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


typedef struct _TYPE__EFI_ARP_ADD{
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
} TYPE__EFI_ARP_ADD;

TYPE__EFI_ARP_ADD TypeInfo__EFI_ARP_ADD = {
  .TypeName = "EFI_ARP_ADD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_ADD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT32",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "BOOLEAN"
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


typedef struct _TYPE__EFI_ARP_FIND{
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
} TYPE__EFI_ARP_FIND;

TYPE__EFI_ARP_FIND TypeInfo__EFI_ARP_FIND = {
  .TypeName = "EFI_ARP_FIND",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_FIND),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT32*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT32*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_ARP_FIND_DATA**",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "BOOLEAN"
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


typedef struct _TYPE__EFI_ARP_FIND_DATA_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ARP_FIND_DATA_STAR_STAR;

TYPE__EFI_ARP_FIND_DATA_STAR_STAR TypeInfo__EFI_ARP_FIND_DATA_STAR_STAR = {
  .TypeName = "EFI_ARP_FIND_DATA**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ARP_FIND_DATA**),
  .PointedType = "EFI_ARP_FIND_DATA*"
};


typedef struct _TYPE__EFI_ARP_FIND_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ARP_FIND_DATA_STAR;

TYPE__EFI_ARP_FIND_DATA_STAR TypeInfo__EFI_ARP_FIND_DATA_STAR = {
  .TypeName = "EFI_ARP_FIND_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ARP_FIND_DATA*),
  .PointedType = "EFI_ARP_FIND_DATA"
};


typedef struct _TYPE__EFI_ARP_FIND_DATA{
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
} TYPE__EFI_ARP_FIND_DATA;

TYPE__EFI_ARP_FIND_DATA TypeInfo__EFI_ARP_FIND_DATA = {
  .TypeName = "EFI_ARP_FIND_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ARP_FIND_DATA),
  .StructFieldNum = 7,
  .StructFieldName_1 = "Size",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "DenyFlag",
  .StructFieldTypeName_2 = "BOOLEAN",
  .StructFieldName_3 = "StaticFlag",
  .StructFieldTypeName_3 = "BOOLEAN",
  .StructFieldName_4 = "HwAddressType",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "SwAddressType",
  .StructFieldTypeName_5 = "UINT16",
  .StructFieldName_6 = "HwAddressLength",
  .StructFieldTypeName_6 = "UINT8",
  .StructFieldName_7 = "SwAddressLength",
  .StructFieldTypeName_7 = "UINT8"
};


typedef struct _TYPE__EFI_ARP_DELETE{
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
} TYPE__EFI_ARP_DELETE;

TYPE__EFI_ARP_DELETE TypeInfo__EFI_ARP_DELETE = {
  .TypeName = "EFI_ARP_DELETE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_DELETE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_ARP_FLUSH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_ARP_FLUSH;

TYPE__EFI_ARP_FLUSH TypeInfo__EFI_ARP_FLUSH = {
  .TypeName = "EFI_ARP_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*"
};


typedef struct _TYPE__EFI_ARP_REQUEST{
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
} TYPE__EFI_ARP_REQUEST;

TYPE__EFI_ARP_REQUEST TypeInfo__EFI_ARP_REQUEST = {
  .TypeName = "EFI_ARP_REQUEST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_REQUEST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void*"
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


typedef struct _TYPE__EFI_ARP_CANCEL{
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
} TYPE__EFI_ARP_CANCEL;

TYPE__EFI_ARP_CANCEL TypeInfo__EFI_ARP_CANCEL = {
  .TypeName = "EFI_ARP_CANCEL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ARP_CANCEL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ARP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiArpProtocolGuid,
  &TypeInfo__gEfiArpServiceBindingProtocolGuid,
  &TypeInfo__gEfiManagedNetworkProtocolGuid,
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
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiArpProtocolGuid,
  &TypeInfo__gEfiArpServiceBindingProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiArpServiceBindingProtocolGuid,
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
  &TypeInfo__gEfiArpProtocolGuid,
  &TypeInfo__EFI_ARP_PROTOCOL,
  &TypeInfo__EFI_ARP_CONFIGURE,
  &TypeInfo__EFI_ARP_PROTOCOL_STAR,
  &TypeInfo__EFI_ARP_CONFIG_DATA_STAR,
  &TypeInfo__EFI_ARP_CONFIG_DATA,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_ARP_ADD,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_ARP_FIND,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_ARP_FIND_DATA_STAR_STAR,
  &TypeInfo__EFI_ARP_FIND_DATA_STAR,
  &TypeInfo__EFI_ARP_FIND_DATA,
  &TypeInfo__EFI_ARP_DELETE,
  &TypeInfo__EFI_ARP_FLUSH,
  &TypeInfo__EFI_ARP_REQUEST,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_ARP_CANCEL,
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