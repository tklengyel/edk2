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

typedef struct _TYPE__EFI_HTTP_UTILITIES_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_HTTP_UTILITIES_PROTOCOL;

TYPE__EFI_HTTP_UTILITIES_PROTOCOL TypeInfo__EFI_HTTP_UTILITIES_PROTOCOL = {
  .TypeName = "EFI_HTTP_UTILITIES_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HTTP_UTILITIES_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Build",
  .StructFieldTypeName_1 = "EFI_HTTP_UTILS_BUILD",
  .StructFieldName_2 = "Parse",
  .StructFieldTypeName_2 = "EFI_HTTP_UTILS_PARSE"
};


typedef struct _TYPE__EFI_HTTP_UTILS_BUILD{
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
} TYPE__EFI_HTTP_UTILS_BUILD;

TYPE__EFI_HTTP_UTILS_BUILD TypeInfo__EFI_HTTP_UTILS_BUILD = {
  .TypeName = "EFI_HTTP_UTILS_BUILD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HTTP_UTILS_BUILD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 9,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HTTP_UTILITIES_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "CHAR8**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_HTTP_HEADER**",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "UINTN*",
  .ParameterInOut_9 = IO_OUT,
  .ParameterTypeName_9 = "void**"
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


typedef struct _TYPE__EFI_HTTP_UTILITIES_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HTTP_UTILITIES_PROTOCOL_STAR;

TYPE__EFI_HTTP_UTILITIES_PROTOCOL_STAR TypeInfo__EFI_HTTP_UTILITIES_PROTOCOL_STAR = {
  .TypeName = "EFI_HTTP_UTILITIES_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HTTP_UTILITIES_PROTOCOL*),
  .PointedType = "EFI_HTTP_UTILITIES_PROTOCOL"
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


typedef struct _TYPE__CHAR8_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR8_STAR_STAR;

TYPE__CHAR8_STAR_STAR TypeInfo__CHAR8_STAR_STAR = {
  .TypeName = "CHAR8**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR8**),
  .PointedType = "CHAR8*"
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


typedef struct _TYPE__EFI_HTTP_HEADER_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HTTP_HEADER_STAR_STAR;

TYPE__EFI_HTTP_HEADER_STAR_STAR TypeInfo__EFI_HTTP_HEADER_STAR_STAR = {
  .TypeName = "EFI_HTTP_HEADER**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HTTP_HEADER**),
  .PointedType = "EFI_HTTP_HEADER*"
};


typedef struct _TYPE__EFI_HTTP_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HTTP_HEADER_STAR;

TYPE__EFI_HTTP_HEADER_STAR TypeInfo__EFI_HTTP_HEADER_STAR = {
  .TypeName = "EFI_HTTP_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HTTP_HEADER*),
  .PointedType = "EFI_HTTP_HEADER"
};


typedef struct _TYPE__EFI_HTTP_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_HTTP_HEADER;

TYPE__EFI_HTTP_HEADER TypeInfo__EFI_HTTP_HEADER = {
  .TypeName = "EFI_HTTP_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HTTP_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "FieldName",
  .StructFieldTypeName_1 = "CHAR8*",
  .StructFieldName_2 = "FieldValue",
  .StructFieldTypeName_2 = "CHAR8*"
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


typedef struct _TYPE__EFI_HTTP_UTILS_PARSE{
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
} TYPE__EFI_HTTP_UTILS_PARSE;

TYPE__EFI_HTTP_UTILS_PARSE TypeInfo__EFI_HTTP_UTILS_PARSE = {
  .TypeName = "EFI_HTTP_UTILS_PARSE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HTTP_UTILS_PARSE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HTTP_UTILITIES_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_HTTP_HEADER**",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINTN*"
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


typedef struct _TYPE__gEfiHttpUtilitiesProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHttpUtilitiesProtocolGuid;

TYPE__gEfiHttpUtilitiesProtocolGuid TypeInfo__gEfiHttpUtilitiesProtocolGuid = {
  .TypeName = "gEfiHttpUtilitiesProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHttpUtilitiesProtocolGuid,
  .InterfaceStructName = "EFI_HTTP_UTILITIES_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiHttpUtilitiesProtocolGuid,
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
  &TypeInfo__gEfiHttpUtilitiesProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__EFI_HTTP_UTILITIES_PROTOCOL,
  &TypeInfo__EFI_HTTP_UTILS_BUILD,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_HTTP_UTILITIES_PROTOCOL_STAR,
  &TypeInfo__void_STAR,
  &TypeInfo__CHAR8_STAR_STAR,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_HTTP_HEADER_STAR_STAR,
  &TypeInfo__EFI_HTTP_HEADER_STAR,
  &TypeInfo__EFI_HTTP_HEADER,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_HTTP_UTILS_PARSE,
  NULL
};