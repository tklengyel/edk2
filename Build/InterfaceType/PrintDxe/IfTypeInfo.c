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

typedef struct _TYPE__gEfiPrint2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPrint2ProtocolGuid;

TYPE__gEfiPrint2ProtocolGuid TypeInfo__gEfiPrint2ProtocolGuid = {
  .TypeName = "gEfiPrint2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPrint2ProtocolGuid,
  .InterfaceStructName = "EFI_PRINT2_PROTOCOL"
};


typedef struct _TYPE__EFI_PRINT2_PROTOCOL{
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
} TYPE__EFI_PRINT2_PROTOCOL;

TYPE__EFI_PRINT2_PROTOCOL TypeInfo__EFI_PRINT2_PROTOCOL = {
  .TypeName = "EFI_PRINT2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PRINT2_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "UnicodeBSPrint",
  .StructFieldTypeName_1 = "UNICODE_BS_PRINT",
  .StructFieldName_2 = "UnicodeSPrint",
  .StructFieldTypeName_2 = "UNICODE_S_PRINT",
  .StructFieldName_3 = "UnicodeBSPrintAsciiFormat",
  .StructFieldTypeName_3 = "UNICODE_BS_PRINT_ASCII_FORMAT",
  .StructFieldName_4 = "UnicodeSPrintAsciiFormat",
  .StructFieldTypeName_4 = "UNICODE_S_PRINT_ASCII_FORMAT",
  .StructFieldName_5 = "UnicodeValueToString",
  .StructFieldTypeName_5 = "UNICODE_VALUE_TO_STRING",
  .StructFieldName_6 = "AsciiBSPrint",
  .StructFieldTypeName_6 = "ASCII_BS_PRINT",
  .StructFieldName_7 = "AsciiSPrint",
  .StructFieldTypeName_7 = "ASCII_S_PRINT",
  .StructFieldName_8 = "AsciiBSPrintUnicodeFormat",
  .StructFieldTypeName_8 = "ASCII_BS_PRINT_UNICODE_FORMAT",
  .StructFieldName_9 = "AsciiSPrintUnicodeFormat",
  .StructFieldTypeName_9 = "ASCII_S_PRINT_UNICODE_FORMAT",
  .StructFieldName_10 = "AsciiValueToString",
  .StructFieldTypeName_10 = "ASCII_VALUE_TO_STRING"
};


typedef struct _TYPE__UNICODE_BS_PRINT{
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
} TYPE__UNICODE_BS_PRINT;

TYPE__UNICODE_BS_PRINT TypeInfo__UNICODE_BS_PRINT = {
  .TypeName = "UNICODE_BS_PRINT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_BS_PRINT),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BASE_LIST"
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


typedef struct _TYPE__BASE_LIST{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__BASE_LIST;

TYPE__BASE_LIST TypeInfo__BASE_LIST = {
  .TypeName = "BASE_LIST",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(BASE_LIST),
  .TypedefName = "UINTN*"
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


typedef struct _TYPE__UNICODE_S_PRINT{
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
} TYPE__UNICODE_S_PRINT;

TYPE__UNICODE_S_PRINT TypeInfo__UNICODE_S_PRINT = {
  .TypeName = "UNICODE_S_PRINT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_S_PRINT),
  .ReturnType = "UINTN",
  .HasVarArg = TRUE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*"
};


typedef struct _TYPE__UNICODE_BS_PRINT_ASCII_FORMAT{
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
} TYPE__UNICODE_BS_PRINT_ASCII_FORMAT;

TYPE__UNICODE_BS_PRINT_ASCII_FORMAT TypeInfo__UNICODE_BS_PRINT_ASCII_FORMAT = {
  .TypeName = "UNICODE_BS_PRINT_ASCII_FORMAT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_BS_PRINT_ASCII_FORMAT),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BASE_LIST"
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


typedef struct _TYPE__UNICODE_S_PRINT_ASCII_FORMAT{
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
} TYPE__UNICODE_S_PRINT_ASCII_FORMAT;

TYPE__UNICODE_S_PRINT_ASCII_FORMAT TypeInfo__UNICODE_S_PRINT_ASCII_FORMAT = {
  .TypeName = "UNICODE_S_PRINT_ASCII_FORMAT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_S_PRINT_ASCII_FORMAT),
  .ReturnType = "UINTN",
  .HasVarArg = TRUE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__UNICODE_VALUE_TO_STRING{
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
} TYPE__UNICODE_VALUE_TO_STRING;

TYPE__UNICODE_VALUE_TO_STRING TypeInfo__UNICODE_VALUE_TO_STRING = {
  .TypeName = "UNICODE_VALUE_TO_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_VALUE_TO_STRING),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "INT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
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


typedef struct _TYPE__ASCII_BS_PRINT{
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
} TYPE__ASCII_BS_PRINT;

TYPE__ASCII_BS_PRINT TypeInfo__ASCII_BS_PRINT = {
  .TypeName = "ASCII_BS_PRINT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_BS_PRINT),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BASE_LIST"
};


typedef struct _TYPE__ASCII_S_PRINT{
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
} TYPE__ASCII_S_PRINT;

TYPE__ASCII_S_PRINT TypeInfo__ASCII_S_PRINT = {
  .TypeName = "ASCII_S_PRINT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_S_PRINT),
  .ReturnType = "UINTN",
  .HasVarArg = TRUE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__ASCII_BS_PRINT_UNICODE_FORMAT{
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
} TYPE__ASCII_BS_PRINT_UNICODE_FORMAT;

TYPE__ASCII_BS_PRINT_UNICODE_FORMAT TypeInfo__ASCII_BS_PRINT_UNICODE_FORMAT = {
  .TypeName = "ASCII_BS_PRINT_UNICODE_FORMAT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_BS_PRINT_UNICODE_FORMAT),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BASE_LIST"
};


typedef struct _TYPE__ASCII_S_PRINT_UNICODE_FORMAT{
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
} TYPE__ASCII_S_PRINT_UNICODE_FORMAT;

TYPE__ASCII_S_PRINT_UNICODE_FORMAT TypeInfo__ASCII_S_PRINT_UNICODE_FORMAT = {
  .TypeName = "ASCII_S_PRINT_UNICODE_FORMAT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_S_PRINT_UNICODE_FORMAT),
  .ReturnType = "UINTN",
  .HasVarArg = TRUE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16*"
};


typedef struct _TYPE__ASCII_VALUE_TO_STRING{
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
} TYPE__ASCII_VALUE_TO_STRING;

TYPE__ASCII_VALUE_TO_STRING TypeInfo__ASCII_VALUE_TO_STRING = {
  .TypeName = "ASCII_VALUE_TO_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_VALUE_TO_STRING),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "INT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__gEfiPrint2SProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPrint2SProtocolGuid;

TYPE__gEfiPrint2SProtocolGuid TypeInfo__gEfiPrint2SProtocolGuid = {
  .TypeName = "gEfiPrint2SProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPrint2SProtocolGuid,
  .InterfaceStructName = "EFI_PRINT2S_PROTOCOL"
};


typedef struct _TYPE__EFI_PRINT2S_PROTOCOL{
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
} TYPE__EFI_PRINT2S_PROTOCOL;

TYPE__EFI_PRINT2S_PROTOCOL TypeInfo__EFI_PRINT2S_PROTOCOL = {
  .TypeName = "EFI_PRINT2S_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PRINT2S_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "UnicodeBSPrint",
  .StructFieldTypeName_1 = "UNICODE_BS_PRINT",
  .StructFieldName_2 = "UnicodeSPrint",
  .StructFieldTypeName_2 = "UNICODE_S_PRINT",
  .StructFieldName_3 = "UnicodeBSPrintAsciiFormat",
  .StructFieldTypeName_3 = "UNICODE_BS_PRINT_ASCII_FORMAT",
  .StructFieldName_4 = "UnicodeSPrintAsciiFormat",
  .StructFieldTypeName_4 = "UNICODE_S_PRINT_ASCII_FORMAT",
  .StructFieldName_5 = "UnicodeValueToStringS",
  .StructFieldTypeName_5 = "UNICODE_VALUE_TO_STRING_S",
  .StructFieldName_6 = "AsciiBSPrint",
  .StructFieldTypeName_6 = "ASCII_BS_PRINT",
  .StructFieldName_7 = "AsciiSPrint",
  .StructFieldTypeName_7 = "ASCII_S_PRINT",
  .StructFieldName_8 = "AsciiBSPrintUnicodeFormat",
  .StructFieldTypeName_8 = "ASCII_BS_PRINT_UNICODE_FORMAT",
  .StructFieldName_9 = "AsciiSPrintUnicodeFormat",
  .StructFieldTypeName_9 = "ASCII_S_PRINT_UNICODE_FORMAT",
  .StructFieldName_10 = "AsciiValueToStringS",
  .StructFieldTypeName_10 = "ASCII_VALUE_TO_STRING_S"
};


typedef struct _TYPE__UNICODE_VALUE_TO_STRING_S{
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
} TYPE__UNICODE_VALUE_TO_STRING_S;

TYPE__UNICODE_VALUE_TO_STRING_S TypeInfo__UNICODE_VALUE_TO_STRING_S = {
  .TypeName = "UNICODE_VALUE_TO_STRING_S",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(UNICODE_VALUE_TO_STRING_S),
  .ReturnType = "RETURN_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "INT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN"
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


typedef struct _TYPE__ASCII_VALUE_TO_STRING_S{
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
} TYPE__ASCII_VALUE_TO_STRING_S;

TYPE__ASCII_VALUE_TO_STRING_S TypeInfo__ASCII_VALUE_TO_STRING_S = {
  .TypeName = "ASCII_VALUE_TO_STRING_S",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(ASCII_VALUE_TO_STRING_S),
  .ReturnType = "RETURN_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR8*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "INT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN"
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
  &TypeInfo__gEfiPrint2SProtocolGuid,
  &TypeInfo__gEfiPrint2ProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiPrint2ProtocolGuid,
  &TypeInfo__EFI_PRINT2_PROTOCOL,
  &TypeInfo__UNICODE_BS_PRINT,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__BASE_LIST,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__UNICODE_S_PRINT,
  &TypeInfo__UNICODE_BS_PRINT_ASCII_FORMAT,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__UNICODE_S_PRINT_ASCII_FORMAT,
  &TypeInfo__UNICODE_VALUE_TO_STRING,
  &TypeInfo__INT64,
  &TypeInfo__ASCII_BS_PRINT,
  &TypeInfo__ASCII_S_PRINT,
  &TypeInfo__ASCII_BS_PRINT_UNICODE_FORMAT,
  &TypeInfo__ASCII_S_PRINT_UNICODE_FORMAT,
  &TypeInfo__ASCII_VALUE_TO_STRING,
  &TypeInfo__gEfiPrint2SProtocolGuid,
  &TypeInfo__EFI_PRINT2S_PROTOCOL,
  &TypeInfo__UNICODE_VALUE_TO_STRING_S,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__ASCII_VALUE_TO_STRING_S,
  NULL
};