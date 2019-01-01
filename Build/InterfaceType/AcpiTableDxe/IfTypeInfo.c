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

typedef struct _TYPE__gEfiAcpiTableProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAcpiTableProtocolGuid;

TYPE__gEfiAcpiTableProtocolGuid TypeInfo__gEfiAcpiTableProtocolGuid = {
  .TypeName = "gEfiAcpiTableProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAcpiTableProtocolGuid,
  .InterfaceStructName = "EFI_ACPI_TABLE_PROTOCOL"
};


typedef struct _TYPE__EFI_ACPI_TABLE_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_ACPI_TABLE_PROTOCOL;

TYPE__EFI_ACPI_TABLE_PROTOCOL TypeInfo__EFI_ACPI_TABLE_PROTOCOL = {
  .TypeName = "EFI_ACPI_TABLE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ACPI_TABLE_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "InstallAcpiTable",
  .StructFieldTypeName_1 = "EFI_ACPI_TABLE_INSTALL_ACPI_TABLE",
  .StructFieldName_2 = "UninstallAcpiTable",
  .StructFieldTypeName_2 = "EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE"
};


typedef struct _TYPE__EFI_ACPI_TABLE_INSTALL_ACPI_TABLE{
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
} TYPE__EFI_ACPI_TABLE_INSTALL_ACPI_TABLE;

TYPE__EFI_ACPI_TABLE_INSTALL_ACPI_TABLE TypeInfo__EFI_ACPI_TABLE_INSTALL_ACPI_TABLE = {
  .TypeName = "EFI_ACPI_TABLE_INSTALL_ACPI_TABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_TABLE_INSTALL_ACPI_TABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_TABLE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
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


typedef struct _TYPE__EFI_ACPI_TABLE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_TABLE_PROTOCOL_STAR;

TYPE__EFI_ACPI_TABLE_PROTOCOL_STAR TypeInfo__EFI_ACPI_TABLE_PROTOCOL_STAR = {
  .TypeName = "EFI_ACPI_TABLE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_TABLE_PROTOCOL*),
  .PointedType = "EFI_ACPI_TABLE_PROTOCOL"
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


typedef struct _TYPE__EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE{
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
} TYPE__EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE;

TYPE__EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE TypeInfo__EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE = {
  .TypeName = "EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_TABLE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__gEfiAcpiSdtProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiAcpiSdtProtocolGuid;

TYPE__gEfiAcpiSdtProtocolGuid TypeInfo__gEfiAcpiSdtProtocolGuid = {
  .TypeName = "gEfiAcpiSdtProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiAcpiSdtProtocolGuid,
  .InterfaceStructName = "EFI_ACPI_SDT_PROTOCOL"
};


typedef struct _TYPE__EFI_ACPI_SDT_PROTOCOL{
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
} TYPE__EFI_ACPI_SDT_PROTOCOL;

TYPE__EFI_ACPI_SDT_PROTOCOL TypeInfo__EFI_ACPI_SDT_PROTOCOL = {
  .TypeName = "EFI_ACPI_SDT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ACPI_SDT_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "AcpiVersion",
  .StructFieldTypeName_1 = "EFI_ACPI_TABLE_VERSION",
  .StructFieldName_2 = "GetAcpiTable",
  .StructFieldTypeName_2 = "EFI_ACPI_GET_ACPI_TABLE2",
  .StructFieldName_3 = "RegisterNotify",
  .StructFieldTypeName_3 = "EFI_ACPI_REGISTER_NOTIFY",
  .StructFieldName_4 = "Open",
  .StructFieldTypeName_4 = "EFI_ACPI_OPEN",
  .StructFieldName_5 = "OpenSdt",
  .StructFieldTypeName_5 = "EFI_ACPI_OPEN_SDT",
  .StructFieldName_6 = "Close",
  .StructFieldTypeName_6 = "EFI_ACPI_CLOSE",
  .StructFieldName_7 = "GetChild",
  .StructFieldTypeName_7 = "EFI_ACPI_GET_CHILD",
  .StructFieldName_8 = "GetOption",
  .StructFieldTypeName_8 = "EFI_ACPI_GET_OPTION",
  .StructFieldName_9 = "SetOption",
  .StructFieldTypeName_9 = "EFI_ACPI_SET_OPTION",
  .StructFieldName_10 = "FindPath",
  .StructFieldTypeName_10 = "EFI_ACPI_FIND_PATH"
};


typedef struct _TYPE__EFI_ACPI_TABLE_VERSION{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_ACPI_TABLE_VERSION;

TYPE__EFI_ACPI_TABLE_VERSION TypeInfo__EFI_ACPI_TABLE_VERSION = {
  .TypeName = "EFI_ACPI_TABLE_VERSION",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_ACPI_TABLE_VERSION),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_ACPI_GET_ACPI_TABLE2{
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
} TYPE__EFI_ACPI_GET_ACPI_TABLE2;

TYPE__EFI_ACPI_GET_ACPI_TABLE2 TypeInfo__EFI_ACPI_GET_ACPI_TABLE2 = {
  .TypeName = "EFI_ACPI_GET_ACPI_TABLE2",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_GET_ACPI_TABLE2),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_ACPI_SDT_HEADER**",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_ACPI_TABLE_VERSION*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__EFI_ACPI_SDT_HEADER_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_SDT_HEADER_STAR_STAR;

TYPE__EFI_ACPI_SDT_HEADER_STAR_STAR TypeInfo__EFI_ACPI_SDT_HEADER_STAR_STAR = {
  .TypeName = "EFI_ACPI_SDT_HEADER**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_SDT_HEADER**),
  .PointedType = "EFI_ACPI_SDT_HEADER*"
};


typedef struct _TYPE__EFI_ACPI_SDT_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_SDT_HEADER_STAR;

TYPE__EFI_ACPI_SDT_HEADER_STAR TypeInfo__EFI_ACPI_SDT_HEADER_STAR = {
  .TypeName = "EFI_ACPI_SDT_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_SDT_HEADER*),
  .PointedType = "EFI_ACPI_SDT_HEADER"
};


typedef struct _TYPE__EFI_ACPI_SDT_HEADER{
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
} TYPE__EFI_ACPI_SDT_HEADER;

TYPE__EFI_ACPI_SDT_HEADER TypeInfo__EFI_ACPI_SDT_HEADER = {
  .TypeName = "EFI_ACPI_SDT_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ACPI_SDT_HEADER),
  .StructFieldNum = 9,
  .StructFieldName_1 = "Signature",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Length",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Revision",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Checksum",
  .StructFieldTypeName_4 = "UINT8",
  .StructFieldName_5 = "OemId",
  .StructFieldTypeName_5 = "CHAR8[6]",
  .StructFieldName_6 = "OemTableId",
  .StructFieldTypeName_6 = "CHAR8[8]",
  .StructFieldName_7 = "OemRevision",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "CreatorId",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "CreatorRevision",
  .StructFieldTypeName_9 = "UINT32"
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


typedef struct _TYPE__CHAR8_ARRAY_6{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_6;

TYPE__CHAR8_ARRAY_6 TypeInfo__CHAR8_ARRAY_6 = {
  .TypeName = "CHAR8[6]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[6]),
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


typedef struct _TYPE__CHAR8_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_8;

TYPE__CHAR8_ARRAY_8 TypeInfo__CHAR8_ARRAY_8 = {
  .TypeName = "CHAR8[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[8]),
  .ElementTypeName = "CHAR8"
};


typedef struct _TYPE__EFI_ACPI_TABLE_VERSION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_TABLE_VERSION_STAR;

TYPE__EFI_ACPI_TABLE_VERSION_STAR TypeInfo__EFI_ACPI_TABLE_VERSION_STAR = {
  .TypeName = "EFI_ACPI_TABLE_VERSION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_TABLE_VERSION*),
  .PointedType = "EFI_ACPI_TABLE_VERSION"
};


typedef struct _TYPE__EFI_ACPI_REGISTER_NOTIFY{
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
} TYPE__EFI_ACPI_REGISTER_NOTIFY;

TYPE__EFI_ACPI_REGISTER_NOTIFY TypeInfo__EFI_ACPI_REGISTER_NOTIFY = {
  .TypeName = "EFI_ACPI_REGISTER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_REGISTER_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BOOLEAN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ACPI_NOTIFICATION_FN"
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


typedef struct _TYPE__EFI_ACPI_NOTIFICATION_FN{
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
} TYPE__EFI_ACPI_NOTIFICATION_FN;

TYPE__EFI_ACPI_NOTIFICATION_FN TypeInfo__EFI_ACPI_NOTIFICATION_FN = {
  .TypeName = "EFI_ACPI_NOTIFICATION_FN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_NOTIFICATION_FN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_SDT_HEADER*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ACPI_TABLE_VERSION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_ACPI_OPEN{
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
} TYPE__EFI_ACPI_OPEN;

TYPE__EFI_ACPI_OPEN TypeInfo__EFI_ACPI_OPEN = {
  .TypeName = "EFI_ACPI_OPEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_OPEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_ACPI_HANDLE*"
};


typedef struct _TYPE__EFI_ACPI_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_HANDLE_STAR;

TYPE__EFI_ACPI_HANDLE_STAR TypeInfo__EFI_ACPI_HANDLE_STAR = {
  .TypeName = "EFI_ACPI_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_HANDLE*),
  .PointedType = "EFI_ACPI_HANDLE"
};


typedef struct _TYPE__EFI_ACPI_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_ACPI_HANDLE;

TYPE__EFI_ACPI_HANDLE TypeInfo__EFI_ACPI_HANDLE = {
  .TypeName = "EFI_ACPI_HANDLE",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_ACPI_HANDLE),
  .TypedefName = "void*"
};


typedef struct _TYPE__EFI_ACPI_OPEN_SDT{
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
} TYPE__EFI_ACPI_OPEN_SDT;

TYPE__EFI_ACPI_OPEN_SDT TypeInfo__EFI_ACPI_OPEN_SDT = {
  .TypeName = "EFI_ACPI_OPEN_SDT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_OPEN_SDT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_ACPI_HANDLE*"
};


typedef struct _TYPE__EFI_ACPI_CLOSE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_ACPI_CLOSE;

TYPE__EFI_ACPI_CLOSE TypeInfo__EFI_ACPI_CLOSE = {
  .TypeName = "EFI_ACPI_CLOSE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_CLOSE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_HANDLE"
};


typedef struct _TYPE__EFI_ACPI_GET_CHILD{
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
} TYPE__EFI_ACPI_GET_CHILD;

TYPE__EFI_ACPI_GET_CHILD TypeInfo__EFI_ACPI_GET_CHILD = {
  .TypeName = "EFI_ACPI_GET_CHILD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_GET_CHILD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ACPI_HANDLE*"
};


typedef struct _TYPE__EFI_ACPI_GET_OPTION{
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
} TYPE__EFI_ACPI_GET_OPTION;

TYPE__EFI_ACPI_GET_OPTION TypeInfo__EFI_ACPI_GET_OPTION = {
  .TypeName = "EFI_ACPI_GET_OPTION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_GET_OPTION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_ACPI_DATA_TYPE*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void**",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINTN*"
};


typedef struct _TYPE__EFI_ACPI_DATA_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ACPI_DATA_TYPE_STAR;

TYPE__EFI_ACPI_DATA_TYPE_STAR TypeInfo__EFI_ACPI_DATA_TYPE_STAR = {
  .TypeName = "EFI_ACPI_DATA_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ACPI_DATA_TYPE*),
  .PointedType = "EFI_ACPI_DATA_TYPE"
};


typedef struct _TYPE__EFI_ACPI_DATA_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_ACPI_DATA_TYPE;

TYPE__EFI_ACPI_DATA_TYPE TypeInfo__EFI_ACPI_DATA_TYPE = {
  .TypeName = "EFI_ACPI_DATA_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_ACPI_DATA_TYPE),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_ACPI_SET_OPTION{
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
} TYPE__EFI_ACPI_SET_OPTION;

TYPE__EFI_ACPI_SET_OPTION TypeInfo__EFI_ACPI_SET_OPTION = {
  .TypeName = "EFI_ACPI_SET_OPTION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_SET_OPTION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__EFI_ACPI_FIND_PATH{
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
} TYPE__EFI_ACPI_FIND_PATH;

TYPE__EFI_ACPI_FIND_PATH TypeInfo__EFI_ACPI_FIND_PATH = {
  .TypeName = "EFI_ACPI_FIND_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ACPI_FIND_PATH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ACPI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_ACPI_HANDLE*"
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
  &TypeInfo__gEfiAcpiTableProtocolGuid,
  &TypeInfo__gEfiAcpiSdtProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiAcpiTableProtocolGuid,
  &TypeInfo__EFI_ACPI_TABLE_PROTOCOL,
  &TypeInfo__EFI_ACPI_TABLE_INSTALL_ACPI_TABLE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_ACPI_TABLE_PROTOCOL_STAR,
  &TypeInfo__void_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_ACPI_TABLE_UNINSTALL_ACPI_TABLE,
  &TypeInfo__gEfiAcpiSdtProtocolGuid,
  &TypeInfo__EFI_ACPI_SDT_PROTOCOL,
  &TypeInfo__EFI_ACPI_TABLE_VERSION,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_ACPI_GET_ACPI_TABLE2,
  &TypeInfo__EFI_ACPI_SDT_HEADER_STAR_STAR,
  &TypeInfo__EFI_ACPI_SDT_HEADER_STAR,
  &TypeInfo__EFI_ACPI_SDT_HEADER,
  &TypeInfo__UINT8,
  &TypeInfo__CHAR8_ARRAY_6,
  &TypeInfo__CHAR8,
  &TypeInfo__CHAR8_ARRAY_8,
  &TypeInfo__EFI_ACPI_TABLE_VERSION_STAR,
  &TypeInfo__EFI_ACPI_REGISTER_NOTIFY,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_ACPI_NOTIFICATION_FN,
  &TypeInfo__EFI_ACPI_OPEN,
  &TypeInfo__EFI_ACPI_HANDLE_STAR,
  &TypeInfo__EFI_ACPI_HANDLE,
  &TypeInfo__EFI_ACPI_OPEN_SDT,
  &TypeInfo__EFI_ACPI_CLOSE,
  &TypeInfo__EFI_ACPI_GET_CHILD,
  &TypeInfo__EFI_ACPI_GET_OPTION,
  &TypeInfo__EFI_ACPI_DATA_TYPE_STAR,
  &TypeInfo__EFI_ACPI_DATA_TYPE,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_ACPI_SET_OPTION,
  &TypeInfo__EFI_ACPI_FIND_PATH,
  NULL
};