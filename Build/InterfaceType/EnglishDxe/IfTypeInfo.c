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

typedef struct _TYPE__gEfiUnicodeCollationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUnicodeCollationProtocolGuid;

TYPE__gEfiUnicodeCollationProtocolGuid TypeInfo__gEfiUnicodeCollationProtocolGuid = {
  .TypeName = "gEfiUnicodeCollationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUnicodeCollationProtocolGuid,
  .InterfaceStructName = "EFI_UNICODE_COLLATION_PROTOCOL"
};


typedef struct _TYPE__EFI_UNICODE_COLLATION_PROTOCOL{
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
} TYPE__EFI_UNICODE_COLLATION_PROTOCOL;

TYPE__EFI_UNICODE_COLLATION_PROTOCOL TypeInfo__EFI_UNICODE_COLLATION_PROTOCOL = {
  .TypeName = "EFI_UNICODE_COLLATION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_PROTOCOL),
  .StructFieldNum = 7,
  .StructFieldName_1 = "StriColl",
  .StructFieldTypeName_1 = "EFI_UNICODE_COLLATION_STRICOLL",
  .StructFieldName_2 = "MetaiMatch",
  .StructFieldTypeName_2 = "EFI_UNICODE_COLLATION_METAIMATCH",
  .StructFieldName_3 = "StrLwr",
  .StructFieldTypeName_3 = "EFI_UNICODE_COLLATION_STRLWR",
  .StructFieldName_4 = "StrUpr",
  .StructFieldTypeName_4 = "EFI_UNICODE_COLLATION_STRUPR",
  .StructFieldName_5 = "FatToStr",
  .StructFieldTypeName_5 = "EFI_UNICODE_COLLATION_FATTOSTR",
  .StructFieldName_6 = "StrToFat",
  .StructFieldTypeName_6 = "EFI_UNICODE_COLLATION_STRTOFAT",
  .StructFieldName_7 = "SupportedLanguages",
  .StructFieldTypeName_7 = "CHAR8*"
};


typedef struct _TYPE__EFI_UNICODE_COLLATION_STRICOLL{
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
} TYPE__EFI_UNICODE_COLLATION_STRICOLL;

TYPE__EFI_UNICODE_COLLATION_STRICOLL TypeInfo__EFI_UNICODE_COLLATION_STRICOLL = {
  .TypeName = "EFI_UNICODE_COLLATION_STRICOLL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_STRICOLL),
  .ReturnType = "INTN",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*"
};


typedef struct _TYPE__INTN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INTN;

TYPE__INTN TypeInfo__INTN = {
  .TypeName = "INTN",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INTN),
  .BasicTypeName = "INT64"
};


typedef struct _TYPE__INT64{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT64;

TYPE__INT64 TypeInfo__INT64 = {
  .TypeName = "INT64",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT64),
  .BasicTypeName = "longlong"
};


typedef struct _TYPE__EFI_UNICODE_COLLATION_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_UNICODE_COLLATION_PROTOCOL_STAR;

TYPE__EFI_UNICODE_COLLATION_PROTOCOL_STAR TypeInfo__EFI_UNICODE_COLLATION_PROTOCOL_STAR = {
  .TypeName = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_PROTOCOL*),
  .PointedType = "EFI_UNICODE_COLLATION_PROTOCOL"
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


typedef struct _TYPE__EFI_UNICODE_COLLATION_METAIMATCH{
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
} TYPE__EFI_UNICODE_COLLATION_METAIMATCH;

TYPE__EFI_UNICODE_COLLATION_METAIMATCH TypeInfo__EFI_UNICODE_COLLATION_METAIMATCH = {
  .TypeName = "EFI_UNICODE_COLLATION_METAIMATCH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_METAIMATCH),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*"
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


typedef struct _TYPE__EFI_UNICODE_COLLATION_STRLWR{
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
} TYPE__EFI_UNICODE_COLLATION_STRLWR;

TYPE__EFI_UNICODE_COLLATION_STRLWR TypeInfo__EFI_UNICODE_COLLATION_STRLWR = {
  .TypeName = "EFI_UNICODE_COLLATION_STRLWR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_STRLWR),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_UNICODE_COLLATION_STRUPR{
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
} TYPE__EFI_UNICODE_COLLATION_STRUPR;

TYPE__EFI_UNICODE_COLLATION_STRUPR TypeInfo__EFI_UNICODE_COLLATION_STRUPR = {
  .TypeName = "EFI_UNICODE_COLLATION_STRUPR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_STRUPR),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_UNICODE_COLLATION_FATTOSTR{
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
} TYPE__EFI_UNICODE_COLLATION_FATTOSTR;

TYPE__EFI_UNICODE_COLLATION_FATTOSTR TypeInfo__EFI_UNICODE_COLLATION_FATTOSTR = {
  .TypeName = "EFI_UNICODE_COLLATION_FATTOSTR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_FATTOSTR),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "CHAR16*"
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


typedef struct _TYPE__EFI_UNICODE_COLLATION_STRTOFAT{
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
} TYPE__EFI_UNICODE_COLLATION_STRTOFAT;

TYPE__EFI_UNICODE_COLLATION_STRTOFAT TypeInfo__EFI_UNICODE_COLLATION_STRTOFAT = {
  .TypeName = "EFI_UNICODE_COLLATION_STRTOFAT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNICODE_COLLATION_STRTOFAT),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_UNICODE_COLLATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "CHAR8*"
};


typedef struct _TYPE__gEfiUnicodeCollation2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUnicodeCollation2ProtocolGuid;

TYPE__gEfiUnicodeCollation2ProtocolGuid TypeInfo__gEfiUnicodeCollation2ProtocolGuid = {
  .TypeName = "gEfiUnicodeCollation2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUnicodeCollation2ProtocolGuid,
  .InterfaceStructName = "EFI_UNICODE_COLLATION_PROTOCOL"
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
  &TypeInfo__gEfiUnicodeCollationProtocolGuid,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiUnicodeCollationProtocolGuid,
  &TypeInfo__EFI_UNICODE_COLLATION_PROTOCOL,
  &TypeInfo__EFI_UNICODE_COLLATION_STRICOLL,
  &TypeInfo__INTN,
  &TypeInfo__INT64,
  &TypeInfo__EFI_UNICODE_COLLATION_PROTOCOL_STAR,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_UNICODE_COLLATION_METAIMATCH,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_UNICODE_COLLATION_STRLWR,
  &TypeInfo__EFI_UNICODE_COLLATION_STRUPR,
  &TypeInfo__EFI_UNICODE_COLLATION_FATTOSTR,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_UNICODE_COLLATION_STRTOFAT,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  NULL
};