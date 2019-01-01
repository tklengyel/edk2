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

typedef struct _TYPE__gEfiSmbiosProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSmbiosProtocolGuid;

TYPE__gEfiSmbiosProtocolGuid TypeInfo__gEfiSmbiosProtocolGuid = {
  .TypeName = "gEfiSmbiosProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSmbiosProtocolGuid,
  .InterfaceStructName = "EFI_SMBIOS_PROTOCOL"
};


typedef struct _TYPE__EFI_SMBIOS_PROTOCOL{
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
} TYPE__EFI_SMBIOS_PROTOCOL;

TYPE__EFI_SMBIOS_PROTOCOL TypeInfo__EFI_SMBIOS_PROTOCOL = {
  .TypeName = "EFI_SMBIOS_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SMBIOS_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Add",
  .StructFieldTypeName_1 = "EFI_SMBIOS_ADD",
  .StructFieldName_2 = "UpdateString",
  .StructFieldTypeName_2 = "EFI_SMBIOS_UPDATE_STRING",
  .StructFieldName_3 = "Remove",
  .StructFieldTypeName_3 = "EFI_SMBIOS_REMOVE",
  .StructFieldName_4 = "GetNext",
  .StructFieldTypeName_4 = "EFI_SMBIOS_GET_NEXT",
  .StructFieldName_5 = "MajorVersion",
  .StructFieldTypeName_5 = "UINT8",
  .StructFieldName_6 = "MinorVersion",
  .StructFieldTypeName_6 = "UINT8"
};


typedef struct _TYPE__EFI_SMBIOS_ADD{
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
} TYPE__EFI_SMBIOS_ADD;

TYPE__EFI_SMBIOS_ADD TypeInfo__EFI_SMBIOS_ADD = {
  .TypeName = "EFI_SMBIOS_ADD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SMBIOS_ADD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SMBIOS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_SMBIOS_HANDLE*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_SMBIOS_TABLE_HEADER*"
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


typedef struct _TYPE__EFI_SMBIOS_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SMBIOS_PROTOCOL_STAR;

TYPE__EFI_SMBIOS_PROTOCOL_STAR TypeInfo__EFI_SMBIOS_PROTOCOL_STAR = {
  .TypeName = "EFI_SMBIOS_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SMBIOS_PROTOCOL*),
  .PointedType = "EFI_SMBIOS_PROTOCOL"
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


typedef struct _TYPE__EFI_SMBIOS_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SMBIOS_HANDLE_STAR;

TYPE__EFI_SMBIOS_HANDLE_STAR TypeInfo__EFI_SMBIOS_HANDLE_STAR = {
  .TypeName = "EFI_SMBIOS_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SMBIOS_HANDLE*),
  .PointedType = "EFI_SMBIOS_HANDLE"
};


typedef struct _TYPE__EFI_SMBIOS_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_SMBIOS_HANDLE;

TYPE__EFI_SMBIOS_HANDLE TypeInfo__EFI_SMBIOS_HANDLE = {
  .TypeName = "EFI_SMBIOS_HANDLE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_SMBIOS_HANDLE),
  .BasicTypeName = "SMBIOS_HANDLE"
};


typedef struct _TYPE__SMBIOS_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__SMBIOS_HANDLE;

TYPE__SMBIOS_HANDLE TypeInfo__SMBIOS_HANDLE = {
  .TypeName = "SMBIOS_HANDLE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(SMBIOS_HANDLE),
  .BasicTypeName = "UINT16"
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


typedef struct _TYPE__EFI_SMBIOS_TABLE_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SMBIOS_TABLE_HEADER_STAR;

TYPE__EFI_SMBIOS_TABLE_HEADER_STAR TypeInfo__EFI_SMBIOS_TABLE_HEADER_STAR = {
  .TypeName = "EFI_SMBIOS_TABLE_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SMBIOS_TABLE_HEADER*),
  .PointedType = "EFI_SMBIOS_TABLE_HEADER"
};


typedef struct _TYPE__EFI_SMBIOS_TABLE_HEADER{
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
} TYPE__EFI_SMBIOS_TABLE_HEADER;

TYPE__EFI_SMBIOS_TABLE_HEADER TypeInfo__EFI_SMBIOS_TABLE_HEADER = {
  .TypeName = "EFI_SMBIOS_TABLE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SMBIOS_TABLE_HEADER),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "SMBIOS_TYPE",
  .StructFieldName_2 = "Length",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Handle",
  .StructFieldTypeName_3 = "SMBIOS_HANDLE"
};


typedef struct _TYPE__SMBIOS_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__SMBIOS_TYPE;

TYPE__SMBIOS_TYPE TypeInfo__SMBIOS_TYPE = {
  .TypeName = "SMBIOS_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(SMBIOS_TYPE),
  .BasicTypeName = "UINT8"
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


typedef struct _TYPE__EFI_SMBIOS_UPDATE_STRING{
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
} TYPE__EFI_SMBIOS_UPDATE_STRING;

TYPE__EFI_SMBIOS_UPDATE_STRING TypeInfo__EFI_SMBIOS_UPDATE_STRING = {
  .TypeName = "EFI_SMBIOS_UPDATE_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SMBIOS_UPDATE_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SMBIOS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SMBIOS_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*"
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


typedef struct _TYPE__EFI_SMBIOS_REMOVE{
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
} TYPE__EFI_SMBIOS_REMOVE;

TYPE__EFI_SMBIOS_REMOVE TypeInfo__EFI_SMBIOS_REMOVE = {
  .TypeName = "EFI_SMBIOS_REMOVE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SMBIOS_REMOVE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SMBIOS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SMBIOS_HANDLE"
};


typedef struct _TYPE__EFI_SMBIOS_GET_NEXT{
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
} TYPE__EFI_SMBIOS_GET_NEXT;

TYPE__EFI_SMBIOS_GET_NEXT TypeInfo__EFI_SMBIOS_GET_NEXT = {
  .TypeName = "EFI_SMBIOS_GET_NEXT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SMBIOS_GET_NEXT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SMBIOS_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SMBIOS_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_SMBIOS_TYPE*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_SMBIOS_TABLE_HEADER**",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_SMBIOS_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SMBIOS_TYPE_STAR;

TYPE__EFI_SMBIOS_TYPE_STAR TypeInfo__EFI_SMBIOS_TYPE_STAR = {
  .TypeName = "EFI_SMBIOS_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SMBIOS_TYPE*),
  .PointedType = "EFI_SMBIOS_TYPE"
};


typedef struct _TYPE__EFI_SMBIOS_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_SMBIOS_TYPE;

TYPE__EFI_SMBIOS_TYPE TypeInfo__EFI_SMBIOS_TYPE = {
  .TypeName = "EFI_SMBIOS_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_SMBIOS_TYPE),
  .BasicTypeName = "SMBIOS_TYPE"
};


typedef struct _TYPE__EFI_SMBIOS_TABLE_HEADER_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SMBIOS_TABLE_HEADER_STAR_STAR;

TYPE__EFI_SMBIOS_TABLE_HEADER_STAR_STAR TypeInfo__EFI_SMBIOS_TABLE_HEADER_STAR_STAR = {
  .TypeName = "EFI_SMBIOS_TABLE_HEADER**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SMBIOS_TABLE_HEADER**),
  .PointedType = "EFI_SMBIOS_TABLE_HEADER*"
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
  &TypeInfo__gEfiSmbiosProtocolGuid,
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
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiSmbiosProtocolGuid,
  &TypeInfo__EFI_SMBIOS_PROTOCOL,
  &TypeInfo__EFI_SMBIOS_ADD,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_SMBIOS_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_SMBIOS_HANDLE_STAR,
  &TypeInfo__EFI_SMBIOS_HANDLE,
  &TypeInfo__SMBIOS_HANDLE,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_SMBIOS_TABLE_HEADER_STAR,
  &TypeInfo__EFI_SMBIOS_TABLE_HEADER,
  &TypeInfo__SMBIOS_TYPE,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_SMBIOS_UPDATE_STRING,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_SMBIOS_REMOVE,
  &TypeInfo__EFI_SMBIOS_GET_NEXT,
  &TypeInfo__EFI_SMBIOS_TYPE_STAR,
  &TypeInfo__EFI_SMBIOS_TYPE,
  &TypeInfo__EFI_SMBIOS_TABLE_HEADER_STAR_STAR,
  &TypeInfo__EFI_HANDLE_STAR,
  NULL
};