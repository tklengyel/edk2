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


typedef struct _TYPE__gEfiTlsProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiTlsProtocolGuid;

TYPE__gEfiTlsProtocolGuid TypeInfo__gEfiTlsProtocolGuid = {
  .TypeName = "gEfiTlsProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiTlsProtocolGuid,
  .InterfaceStructName = "EFI_TLS_PROTOCOL"
};


typedef struct _TYPE__EFI_TLS_PROTOCOL{
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
} TYPE__EFI_TLS_PROTOCOL;

TYPE__EFI_TLS_PROTOCOL TypeInfo__EFI_TLS_PROTOCOL = {
  .TypeName = "EFI_TLS_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TLS_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "SetSessionData",
  .StructFieldTypeName_1 = "EFI_TLS_SET_SESSION_DATA",
  .StructFieldName_2 = "GetSessionData",
  .StructFieldTypeName_2 = "EFI_TLS_GET_SESSION_DATA",
  .StructFieldName_3 = "BuildResponsePacket",
  .StructFieldTypeName_3 = "EFI_TLS_BUILD_RESPONSE_PACKET",
  .StructFieldName_4 = "ProcessPacket",
  .StructFieldTypeName_4 = "EFI_TLS_PROCESS_PACKET"
};


typedef struct _TYPE__EFI_TLS_SET_SESSION_DATA{
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
} TYPE__EFI_TLS_SET_SESSION_DATA;

TYPE__EFI_TLS_SET_SESSION_DATA TypeInfo__EFI_TLS_SET_SESSION_DATA = {
  .TypeName = "EFI_TLS_SET_SESSION_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_SET_SESSION_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TLS_SESSION_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__EFI_TLS_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TLS_PROTOCOL_STAR;

TYPE__EFI_TLS_PROTOCOL_STAR TypeInfo__EFI_TLS_PROTOCOL_STAR = {
  .TypeName = "EFI_TLS_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TLS_PROTOCOL*),
  .PointedType = "EFI_TLS_PROTOCOL"
};


typedef struct _TYPE__EFI_TLS_SESSION_DATA_TYPE{
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
} TYPE__EFI_TLS_SESSION_DATA_TYPE;

TYPE__EFI_TLS_SESSION_DATA_TYPE TypeInfo__EFI_TLS_SESSION_DATA_TYPE = {
  .TypeName = "EFI_TLS_SESSION_DATA_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_TLS_SESSION_DATA_TYPE),
  .EnumValueNum = 12,
  .EnumValueName_1 = "EfiTlsVersion",
  .EnumValue_1 = EfiTlsVersion,
  .EnumValueName_2 = "EfiTlsConnectionEnd",
  .EnumValue_2 = EfiTlsConnectionEnd,
  .EnumValueName_3 = "EfiTlsCipherList",
  .EnumValue_3 = EfiTlsCipherList,
  .EnumValueName_4 = "EfiTlsCompressionMethod",
  .EnumValue_4 = EfiTlsCompressionMethod,
  .EnumValueName_5 = "EfiTlsExtensionData",
  .EnumValue_5 = EfiTlsExtensionData,
  .EnumValueName_6 = "EfiTlsVerifyMethod",
  .EnumValue_6 = EfiTlsVerifyMethod,
  .EnumValueName_7 = "EfiTlsSessionID",
  .EnumValue_7 = EfiTlsSessionID,
  .EnumValueName_8 = "EfiTlsSessionState",
  .EnumValue_8 = EfiTlsSessionState,
  .EnumValueName_9 = "EfiTlsClientRandom",
  .EnumValue_9 = EfiTlsClientRandom,
  .EnumValueName_10 = "EfiTlsServerRandom",
  .EnumValue_10 = EfiTlsServerRandom,
  .EnumValueName_11 = "EfiTlsKeyMaterial",
  .EnumValue_11 = EfiTlsKeyMaterial,
  .EnumValueName_12 = "EfiTlsSessionDataTypeMaximum",
  .EnumValue_12 = EfiTlsSessionDataTypeMaximum
};


typedef struct _TYPE__EFI_TLS_GET_SESSION_DATA{
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
} TYPE__EFI_TLS_GET_SESSION_DATA;

TYPE__EFI_TLS_GET_SESSION_DATA TypeInfo__EFI_TLS_GET_SESSION_DATA = {
  .TypeName = "EFI_TLS_GET_SESSION_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_GET_SESSION_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TLS_SESSION_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
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


typedef struct _TYPE__EFI_TLS_BUILD_RESPONSE_PACKET{
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
} TYPE__EFI_TLS_BUILD_RESPONSE_PACKET;

TYPE__EFI_TLS_BUILD_RESPONSE_PACKET TypeInfo__EFI_TLS_BUILD_RESPONSE_PACKET = {
  .TypeName = "EFI_TLS_BUILD_RESPONSE_PACKET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_BUILD_RESPONSE_PACKET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN*"
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


typedef struct _TYPE__EFI_TLS_PROCESS_PACKET{
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
} TYPE__EFI_TLS_PROCESS_PACKET;

TYPE__EFI_TLS_PROCESS_PACKET TypeInfo__EFI_TLS_PROCESS_PACKET = {
  .TypeName = "EFI_TLS_PROCESS_PACKET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_PROCESS_PACKET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TLS_FRAGMENT_DATA**",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_TLS_CRYPT_MODE"
};


typedef struct _TYPE__EFI_TLS_FRAGMENT_DATA_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TLS_FRAGMENT_DATA_STAR_STAR;

TYPE__EFI_TLS_FRAGMENT_DATA_STAR_STAR TypeInfo__EFI_TLS_FRAGMENT_DATA_STAR_STAR = {
  .TypeName = "EFI_TLS_FRAGMENT_DATA**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TLS_FRAGMENT_DATA**),
  .PointedType = "EFI_TLS_FRAGMENT_DATA*"
};


typedef struct _TYPE__EFI_TLS_FRAGMENT_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TLS_FRAGMENT_DATA_STAR;

TYPE__EFI_TLS_FRAGMENT_DATA_STAR TypeInfo__EFI_TLS_FRAGMENT_DATA_STAR = {
  .TypeName = "EFI_TLS_FRAGMENT_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TLS_FRAGMENT_DATA*),
  .PointedType = "EFI_TLS_FRAGMENT_DATA"
};


typedef struct _TYPE__EFI_TLS_FRAGMENT_DATA{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_TLS_FRAGMENT_DATA;

TYPE__EFI_TLS_FRAGMENT_DATA TypeInfo__EFI_TLS_FRAGMENT_DATA = {
  .TypeName = "EFI_TLS_FRAGMENT_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TLS_FRAGMENT_DATA),
  .StructFieldNum = 2,
  .StructFieldName_1 = "FragmentLength",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "FragmentBuffer",
  .StructFieldTypeName_2 = "void*"
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


typedef struct _TYPE__EFI_TLS_CRYPT_MODE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
} TYPE__EFI_TLS_CRYPT_MODE;

TYPE__EFI_TLS_CRYPT_MODE TypeInfo__EFI_TLS_CRYPT_MODE = {
  .TypeName = "EFI_TLS_CRYPT_MODE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_TLS_CRYPT_MODE),
  .EnumValueNum = 2,
  .EnumValueName_1 = "EfiTlsEncrypt",
  .EnumValue_1 = EfiTlsEncrypt,
  .EnumValueName_2 = "EfiTlsDecrypt",
  .EnumValue_2 = EfiTlsDecrypt
};


typedef struct _TYPE__gEfiTlsConfigurationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiTlsConfigurationProtocolGuid;

TYPE__gEfiTlsConfigurationProtocolGuid TypeInfo__gEfiTlsConfigurationProtocolGuid = {
  .TypeName = "gEfiTlsConfigurationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiTlsConfigurationProtocolGuid,
  .InterfaceStructName = "EFI_TLS_CONFIGURATION_PROTOCOL"
};


typedef struct _TYPE__EFI_TLS_CONFIGURATION_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_TLS_CONFIGURATION_PROTOCOL;

TYPE__EFI_TLS_CONFIGURATION_PROTOCOL TypeInfo__EFI_TLS_CONFIGURATION_PROTOCOL = {
  .TypeName = "EFI_TLS_CONFIGURATION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TLS_CONFIGURATION_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "SetData",
  .StructFieldTypeName_1 = "EFI_TLS_CONFIGURATION_SET_DATA",
  .StructFieldName_2 = "GetData",
  .StructFieldTypeName_2 = "EFI_TLS_CONFIGURATION_GET_DATA"
};


typedef struct _TYPE__EFI_TLS_CONFIGURATION_SET_DATA{
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
} TYPE__EFI_TLS_CONFIGURATION_SET_DATA;

TYPE__EFI_TLS_CONFIGURATION_SET_DATA TypeInfo__EFI_TLS_CONFIGURATION_SET_DATA = {
  .TypeName = "EFI_TLS_CONFIGURATION_SET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_CONFIGURATION_SET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_CONFIGURATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TLS_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__EFI_TLS_CONFIGURATION_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TLS_CONFIGURATION_PROTOCOL_STAR;

TYPE__EFI_TLS_CONFIGURATION_PROTOCOL_STAR TypeInfo__EFI_TLS_CONFIGURATION_PROTOCOL_STAR = {
  .TypeName = "EFI_TLS_CONFIGURATION_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TLS_CONFIGURATION_PROTOCOL*),
  .PointedType = "EFI_TLS_CONFIGURATION_PROTOCOL"
};


typedef struct _TYPE__EFI_TLS_CONFIG_DATA_TYPE{
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
} TYPE__EFI_TLS_CONFIG_DATA_TYPE;

TYPE__EFI_TLS_CONFIG_DATA_TYPE TypeInfo__EFI_TLS_CONFIG_DATA_TYPE = {
  .TypeName = "EFI_TLS_CONFIG_DATA_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_TLS_CONFIG_DATA_TYPE),
  .EnumValueNum = 5,
  .EnumValueName_1 = "EfiTlsConfigDataTypeHostPublicCert",
  .EnumValue_1 = EfiTlsConfigDataTypeHostPublicCert,
  .EnumValueName_2 = "EfiTlsConfigDataTypeHostPrivateKey",
  .EnumValue_2 = EfiTlsConfigDataTypeHostPrivateKey,
  .EnumValueName_3 = "EfiTlsConfigDataTypeCACertificate",
  .EnumValue_3 = EfiTlsConfigDataTypeCACertificate,
  .EnumValueName_4 = "EfiTlsConfigDataTypeCertRevocationList",
  .EnumValue_4 = EfiTlsConfigDataTypeCertRevocationList,
  .EnumValueName_5 = "EfiTlsConfigDataTypeMaximum",
  .EnumValue_5 = EfiTlsConfigDataTypeMaximum
};


typedef struct _TYPE__EFI_TLS_CONFIGURATION_GET_DATA{
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
} TYPE__EFI_TLS_CONFIGURATION_GET_DATA;

TYPE__EFI_TLS_CONFIGURATION_GET_DATA TypeInfo__EFI_TLS_CONFIGURATION_GET_DATA = {
  .TypeName = "EFI_TLS_CONFIGURATION_GET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TLS_CONFIGURATION_GET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TLS_CONFIGURATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TLS_CONFIG_DATA_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__gEfiTlsServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiTlsServiceBindingProtocolGuid;

TYPE__gEfiTlsServiceBindingProtocolGuid TypeInfo__gEfiTlsServiceBindingProtocolGuid = {
  .TypeName = "gEfiTlsServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiTlsServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
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
  &TypeInfo__gEfiTlsServiceBindingProtocolGuid,
  &TypeInfo__gEfiTlsProtocolGuid,
  &TypeInfo__gEfiTlsConfigurationProtocolGuid,
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
  &TypeInfo__gEfiTlsServiceBindingProtocolGuid,
  &TypeInfo__gEfiTlsProtocolGuid,
  &TypeInfo__gEfiTlsConfigurationProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
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
  &TypeInfo__gEfiTlsProtocolGuid,
  &TypeInfo__EFI_TLS_PROTOCOL,
  &TypeInfo__EFI_TLS_SET_SESSION_DATA,
  &TypeInfo__EFI_TLS_PROTOCOL_STAR,
  &TypeInfo__EFI_TLS_SESSION_DATA_TYPE,
  &TypeInfo__EFI_TLS_GET_SESSION_DATA,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_TLS_BUILD_RESPONSE_PACKET,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_TLS_PROCESS_PACKET,
  &TypeInfo__EFI_TLS_FRAGMENT_DATA_STAR_STAR,
  &TypeInfo__EFI_TLS_FRAGMENT_DATA_STAR,
  &TypeInfo__EFI_TLS_FRAGMENT_DATA,
  &TypeInfo__UINT32,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_TLS_CRYPT_MODE,
  &TypeInfo__gEfiTlsConfigurationProtocolGuid,
  &TypeInfo__EFI_TLS_CONFIGURATION_PROTOCOL,
  &TypeInfo__EFI_TLS_CONFIGURATION_SET_DATA,
  &TypeInfo__EFI_TLS_CONFIGURATION_PROTOCOL_STAR,
  &TypeInfo__EFI_TLS_CONFIG_DATA_TYPE,
  &TypeInfo__EFI_TLS_CONFIGURATION_GET_DATA,
  NULL
};