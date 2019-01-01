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

typedef struct _TYPE__gEfiSimpleTextOutProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextOutProtocolGuid;

TYPE__gEfiSimpleTextOutProtocolGuid TypeInfo__gEfiSimpleTextOutProtocolGuid = {
  .TypeName = "gEfiSimpleTextOutProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextOutProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_TEXT_RESET",
  .StructFieldName_2 = "OutputString",
  .StructFieldTypeName_2 = "EFI_TEXT_STRING",
  .StructFieldName_3 = "TestString",
  .StructFieldTypeName_3 = "EFI_TEXT_TEST_STRING",
  .StructFieldName_4 = "QueryMode",
  .StructFieldTypeName_4 = "EFI_TEXT_QUERY_MODE",
  .StructFieldName_5 = "SetMode",
  .StructFieldTypeName_5 = "EFI_TEXT_SET_MODE",
  .StructFieldName_6 = "SetAttribute",
  .StructFieldTypeName_6 = "EFI_TEXT_SET_ATTRIBUTE",
  .StructFieldName_7 = "ClearScreen",
  .StructFieldTypeName_7 = "EFI_TEXT_CLEAR_SCREEN",
  .StructFieldName_8 = "SetCursorPosition",
  .StructFieldTypeName_8 = "EFI_TEXT_SET_CURSOR_POSITION",
  .StructFieldName_9 = "EnableCursor",
  .StructFieldTypeName_9 = "EFI_TEXT_ENABLE_CURSOR",
  .StructFieldName_10 = "Mode",
  .StructFieldTypeName_10 = "EFI_SIMPLE_TEXT_OUTPUT_MODE*"
};


typedef struct _TYPE__EFI_TEXT_RESET{
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
} TYPE__EFI_TEXT_RESET;

TYPE__EFI_TEXT_RESET TypeInfo__EFI_TEXT_RESET = {
  .TypeName = "EFI_TEXT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
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


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"
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


typedef struct _TYPE__EFI_TEXT_STRING{
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
} TYPE__EFI_TEXT_STRING;

TYPE__EFI_TEXT_STRING TypeInfo__EFI_TEXT_STRING = {
  .TypeName = "EFI_TEXT_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
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


typedef struct _TYPE__EFI_TEXT_TEST_STRING{
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
} TYPE__EFI_TEXT_TEST_STRING;

TYPE__EFI_TEXT_TEST_STRING TypeInfo__EFI_TEXT_TEST_STRING = {
  .TypeName = "EFI_TEXT_TEST_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_TEST_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_TEXT_QUERY_MODE{
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
} TYPE__EFI_TEXT_QUERY_MODE;

TYPE__EFI_TEXT_QUERY_MODE TypeInfo__EFI_TEXT_QUERY_MODE = {
  .TypeName = "EFI_TEXT_QUERY_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_QUERY_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
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


typedef struct _TYPE__EFI_TEXT_SET_MODE{
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
} TYPE__EFI_TEXT_SET_MODE;

TYPE__EFI_TEXT_SET_MODE TypeInfo__EFI_TEXT_SET_MODE = {
  .TypeName = "EFI_TEXT_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_SET_ATTRIBUTE{
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
} TYPE__EFI_TEXT_SET_ATTRIBUTE;

TYPE__EFI_TEXT_SET_ATTRIBUTE TypeInfo__EFI_TEXT_SET_ATTRIBUTE = {
  .TypeName = "EFI_TEXT_SET_ATTRIBUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_ATTRIBUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_CLEAR_SCREEN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_TEXT_CLEAR_SCREEN;

TYPE__EFI_TEXT_CLEAR_SCREEN TypeInfo__EFI_TEXT_CLEAR_SCREEN = {
  .TypeName = "EFI_TEXT_CLEAR_SCREEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_CLEAR_SCREEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*"
};


typedef struct _TYPE__EFI_TEXT_SET_CURSOR_POSITION{
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
} TYPE__EFI_TEXT_SET_CURSOR_POSITION;

TYPE__EFI_TEXT_SET_CURSOR_POSITION TypeInfo__EFI_TEXT_SET_CURSOR_POSITION = {
  .TypeName = "EFI_TEXT_SET_CURSOR_POSITION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_CURSOR_POSITION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_ENABLE_CURSOR{
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
} TYPE__EFI_TEXT_ENABLE_CURSOR;

TYPE__EFI_TEXT_ENABLE_CURSOR TypeInfo__EFI_TEXT_ENABLE_CURSOR = {
  .TypeName = "EFI_TEXT_ENABLE_CURSOR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_ENABLE_CURSOR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_MODE"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE),
  .StructFieldNum = 6,
  .StructFieldName_1 = "MaxMode",
  .StructFieldTypeName_1 = "INT32",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "INT32",
  .StructFieldName_3 = "Attribute",
  .StructFieldTypeName_3 = "INT32",
  .StructFieldName_4 = "CursorColumn",
  .StructFieldTypeName_4 = "INT32",
  .StructFieldName_5 = "CursorRow",
  .StructFieldTypeName_5 = "INT32",
  .StructFieldName_6 = "CursorVisible",
  .StructFieldTypeName_6 = "BOOLEAN"
};


typedef struct _TYPE__INT32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT32;

TYPE__INT32 TypeInfo__INT32 = {
  .TypeName = "INT32",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT32),
  .BasicTypeName = "int"
};


typedef struct _TYPE__gEfiShellParametersProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiShellParametersProtocolGuid;

TYPE__gEfiShellParametersProtocolGuid TypeInfo__gEfiShellParametersProtocolGuid = {
  .TypeName = "gEfiShellParametersProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiShellParametersProtocolGuid,
  .InterfaceStructName = "EFI_SHELL_PARAMETERS_PROTOCOL"
};


typedef struct _TYPE__EFI_SHELL_PARAMETERS_PROTOCOL{
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
} TYPE__EFI_SHELL_PARAMETERS_PROTOCOL;

TYPE__EFI_SHELL_PARAMETERS_PROTOCOL TypeInfo__EFI_SHELL_PARAMETERS_PROTOCOL = {
  .TypeName = "EFI_SHELL_PARAMETERS_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SHELL_PARAMETERS_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Argv",
  .StructFieldTypeName_1 = "CHAR16**",
  .StructFieldName_2 = "Argc",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "StdIn",
  .StructFieldTypeName_3 = "SHELL_FILE_HANDLE",
  .StructFieldName_4 = "StdOut",
  .StructFieldTypeName_4 = "SHELL_FILE_HANDLE",
  .StructFieldName_5 = "StdErr",
  .StructFieldTypeName_5 = "SHELL_FILE_HANDLE"
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


typedef struct _TYPE__SHELL_FILE_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__SHELL_FILE_HANDLE;

TYPE__SHELL_FILE_HANDLE TypeInfo__SHELL_FILE_HANDLE = {
  .TypeName = "SHELL_FILE_HANDLE",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(SHELL_FILE_HANDLE),
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


typedef struct _TYPE__EFI_SHELL_PROTOCOL{
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
  const CHAR8* StructFieldName_35;
  const CHAR8* StructFieldTypeName_35;
  const CHAR8* StructFieldName_36;
  const CHAR8* StructFieldTypeName_36;
  const CHAR8* StructFieldName_37;
  const CHAR8* StructFieldTypeName_37;
  const CHAR8* StructFieldName_38;
  const CHAR8* StructFieldTypeName_38;
  const CHAR8* StructFieldName_39;
  const CHAR8* StructFieldTypeName_39;
  const CHAR8* StructFieldName_40;
  const CHAR8* StructFieldTypeName_40;
  const CHAR8* StructFieldName_41;
  const CHAR8* StructFieldTypeName_41;
  const CHAR8* StructFieldName_42;
  const CHAR8* StructFieldTypeName_42;
  const CHAR8* StructFieldName_43;
  const CHAR8* StructFieldTypeName_43;
  const CHAR8* StructFieldName_44;
  const CHAR8* StructFieldTypeName_44;
  const CHAR8* StructFieldName_45;
  const CHAR8* StructFieldTypeName_45;
  const CHAR8* StructFieldName_46;
  const CHAR8* StructFieldTypeName_46;
} TYPE__EFI_SHELL_PROTOCOL;

TYPE__EFI_SHELL_PROTOCOL TypeInfo__EFI_SHELL_PROTOCOL = {
  .TypeName = "EFI_SHELL_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SHELL_PROTOCOL),
  .StructFieldNum = 46,
  .StructFieldName_1 = "Execute",
  .StructFieldTypeName_1 = "EFI_SHELL_EXECUTE",
  .StructFieldName_2 = "GetEnv",
  .StructFieldTypeName_2 = "EFI_SHELL_GET_ENV",
  .StructFieldName_3 = "SetEnv",
  .StructFieldTypeName_3 = "EFI_SHELL_SET_ENV",
  .StructFieldName_4 = "GetAlias",
  .StructFieldTypeName_4 = "EFI_SHELL_GET_ALIAS",
  .StructFieldName_5 = "SetAlias",
  .StructFieldTypeName_5 = "EFI_SHELL_SET_ALIAS",
  .StructFieldName_6 = "GetHelpText",
  .StructFieldTypeName_6 = "EFI_SHELL_GET_HELP_TEXT",
  .StructFieldName_7 = "GetDevicePathFromMap",
  .StructFieldTypeName_7 = "EFI_SHELL_GET_DEVICE_PATH_FROM_MAP",
  .StructFieldName_8 = "GetMapFromDevicePath",
  .StructFieldTypeName_8 = "EFI_SHELL_GET_MAP_FROM_DEVICE_PATH",
  .StructFieldName_9 = "GetDevicePathFromFilePath",
  .StructFieldTypeName_9 = "EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH",
  .StructFieldName_10 = "GetFilePathFromDevicePath",
  .StructFieldTypeName_10 = "EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH",
  .StructFieldName_11 = "SetMap",
  .StructFieldTypeName_11 = "EFI_SHELL_SET_MAP",
  .StructFieldName_12 = "GetCurDir",
  .StructFieldTypeName_12 = "EFI_SHELL_GET_CUR_DIR",
  .StructFieldName_13 = "SetCurDir",
  .StructFieldTypeName_13 = "EFI_SHELL_SET_CUR_DIR",
  .StructFieldName_14 = "OpenFileList",
  .StructFieldTypeName_14 = "EFI_SHELL_OPEN_FILE_LIST",
  .StructFieldName_15 = "FreeFileList",
  .StructFieldTypeName_15 = "EFI_SHELL_FREE_FILE_LIST",
  .StructFieldName_16 = "RemoveDupInFileList",
  .StructFieldTypeName_16 = "EFI_SHELL_REMOVE_DUP_IN_FILE_LIST",
  .StructFieldName_17 = "BatchIsActive",
  .StructFieldTypeName_17 = "EFI_SHELL_BATCH_IS_ACTIVE",
  .StructFieldName_18 = "IsRootShell",
  .StructFieldTypeName_18 = "EFI_SHELL_IS_ROOT_SHELL",
  .StructFieldName_19 = "EnablePageBreak",
  .StructFieldTypeName_19 = "EFI_SHELL_ENABLE_PAGE_BREAK",
  .StructFieldName_20 = "DisablePageBreak",
  .StructFieldTypeName_20 = "EFI_SHELL_DISABLE_PAGE_BREAK",
  .StructFieldName_21 = "GetPageBreak",
  .StructFieldTypeName_21 = "EFI_SHELL_GET_PAGE_BREAK",
  .StructFieldName_22 = "GetDeviceName",
  .StructFieldTypeName_22 = "EFI_SHELL_GET_DEVICE_NAME",
  .StructFieldName_23 = "GetFileInfo",
  .StructFieldTypeName_23 = "EFI_SHELL_GET_FILE_INFO",
  .StructFieldName_24 = "SetFileInfo",
  .StructFieldTypeName_24 = "EFI_SHELL_SET_FILE_INFO",
  .StructFieldName_25 = "OpenFileByName",
  .StructFieldTypeName_25 = "EFI_SHELL_OPEN_FILE_BY_NAME",
  .StructFieldName_26 = "CloseFile",
  .StructFieldTypeName_26 = "EFI_SHELL_CLOSE_FILE",
  .StructFieldName_27 = "CreateFile",
  .StructFieldTypeName_27 = "EFI_SHELL_CREATE_FILE",
  .StructFieldName_28 = "ReadFile",
  .StructFieldTypeName_28 = "EFI_SHELL_READ_FILE",
  .StructFieldName_29 = "WriteFile",
  .StructFieldTypeName_29 = "EFI_SHELL_WRITE_FILE",
  .StructFieldName_30 = "DeleteFile",
  .StructFieldTypeName_30 = "EFI_SHELL_DELETE_FILE",
  .StructFieldName_31 = "DeleteFileByName",
  .StructFieldTypeName_31 = "EFI_SHELL_DELETE_FILE_BY_NAME",
  .StructFieldName_32 = "GetFilePosition",
  .StructFieldTypeName_32 = "EFI_SHELL_GET_FILE_POSITION",
  .StructFieldName_33 = "SetFilePosition",
  .StructFieldTypeName_33 = "EFI_SHELL_SET_FILE_POSITION",
  .StructFieldName_34 = "FlushFile",
  .StructFieldTypeName_34 = "EFI_SHELL_FLUSH_FILE",
  .StructFieldName_35 = "FindFiles",
  .StructFieldTypeName_35 = "EFI_SHELL_FIND_FILES",
  .StructFieldName_36 = "FindFilesInDir",
  .StructFieldTypeName_36 = "EFI_SHELL_FIND_FILES_IN_DIR",
  .StructFieldName_37 = "GetFileSize",
  .StructFieldTypeName_37 = "EFI_SHELL_GET_FILE_SIZE",
  .StructFieldName_38 = "OpenRoot",
  .StructFieldTypeName_38 = "EFI_SHELL_OPEN_ROOT",
  .StructFieldName_39 = "OpenRootByHandle",
  .StructFieldTypeName_39 = "EFI_SHELL_OPEN_ROOT_BY_HANDLE",
  .StructFieldName_40 = "ExecutionBreak",
  .StructFieldTypeName_40 = "EFI_EVENT",
  .StructFieldName_41 = "MajorVersion",
  .StructFieldTypeName_41 = "UINT32",
  .StructFieldName_42 = "MinorVersion",
  .StructFieldTypeName_42 = "UINT32",
  .StructFieldName_43 = "RegisterGuidName",
  .StructFieldTypeName_43 = "EFI_SHELL_REGISTER_GUID_NAME",
  .StructFieldName_44 = "GetGuidName",
  .StructFieldTypeName_44 = "EFI_SHELL_GET_GUID_NAME",
  .StructFieldName_45 = "GetGuidFromName",
  .StructFieldTypeName_45 = "EFI_SHELL_GET_GUID_FROM_NAME",
  .StructFieldName_46 = "GetEnvEx",
  .StructFieldTypeName_46 = "EFI_SHELL_GET_ENV_EX"
};


typedef struct _TYPE__EFI_SHELL_EXECUTE{
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
} TYPE__EFI_SHELL_EXECUTE;

TYPE__EFI_SHELL_EXECUTE TypeInfo__EFI_SHELL_EXECUTE = {
  .TypeName = "EFI_SHELL_EXECUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_EXECUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR16**",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_STATUS*"
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


typedef struct _TYPE__EFI_STATUS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STATUS_STAR;

TYPE__EFI_STATUS_STAR TypeInfo__EFI_STATUS_STAR = {
  .TypeName = "EFI_STATUS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STATUS*),
  .PointedType = "EFI_STATUS"
};


typedef struct _TYPE__EFI_SHELL_GET_ENV{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_ENV;

TYPE__EFI_SHELL_GET_ENV TypeInfo__EFI_SHELL_GET_ENV = {
  .TypeName = "EFI_SHELL_GET_ENV",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_ENV),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_SET_ENV{
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
} TYPE__EFI_SHELL_SET_ENV;

TYPE__EFI_SHELL_SET_ENV TypeInfo__EFI_SHELL_SET_ENV = {
  .TypeName = "EFI_SHELL_SET_ENV",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_ENV),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SHELL_GET_ALIAS{
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
} TYPE__EFI_SHELL_GET_ALIAS;

TYPE__EFI_SHELL_GET_ALIAS TypeInfo__EFI_SHELL_GET_ALIAS = {
  .TypeName = "EFI_SHELL_GET_ALIAS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_ALIAS),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "BOOLEAN*"
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


typedef struct _TYPE__EFI_SHELL_SET_ALIAS{
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
} TYPE__EFI_SHELL_SET_ALIAS;

TYPE__EFI_SHELL_SET_ALIAS TypeInfo__EFI_SHELL_SET_ALIAS = {
  .TypeName = "EFI_SHELL_SET_ALIAS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_ALIAS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SHELL_GET_HELP_TEXT{
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
} TYPE__EFI_SHELL_GET_HELP_TEXT;

TYPE__EFI_SHELL_GET_HELP_TEXT TypeInfo__EFI_SHELL_GET_HELP_TEXT = {
  .TypeName = "EFI_SHELL_GET_HELP_TEXT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_HELP_TEXT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP;

TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP TypeInfo__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP = {
  .TypeName = "EFI_SHELL_GET_DEVICE_PATH_FROM_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_DEVICE_PATH_FROM_MAP),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
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


typedef struct _TYPE__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH;

TYPE__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH TypeInfo__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH = {
  .TypeName = "EFI_SHELL_GET_MAP_FROM_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_MAP_FROM_DEVICE_PATH),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL**"
};


typedef struct _TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR;

TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR = {
  .TypeName = "EFI_DEVICE_PATH_PROTOCOL**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DEVICE_PATH_PROTOCOL**),
  .PointedType = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH;

TYPE__EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH TypeInfo__EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH = {
  .TypeName = "EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH),
  .ReturnType = "EFI_DEVICE_PATH_PROTOCOL*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH;

TYPE__EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH TypeInfo__EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH = {
  .TypeName = "EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_SHELL_SET_MAP{
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
} TYPE__EFI_SHELL_SET_MAP;

TYPE__EFI_SHELL_SET_MAP TypeInfo__EFI_SHELL_SET_MAP = {
  .TypeName = "EFI_SHELL_SET_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_GET_CUR_DIR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_CUR_DIR;

TYPE__EFI_SHELL_GET_CUR_DIR TypeInfo__EFI_SHELL_GET_CUR_DIR = {
  .TypeName = "EFI_SHELL_GET_CUR_DIR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_CUR_DIR),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_SET_CUR_DIR{
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
} TYPE__EFI_SHELL_SET_CUR_DIR;

TYPE__EFI_SHELL_SET_CUR_DIR TypeInfo__EFI_SHELL_SET_CUR_DIR = {
  .TypeName = "EFI_SHELL_SET_CUR_DIR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_CUR_DIR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_OPEN_FILE_LIST{
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
} TYPE__EFI_SHELL_OPEN_FILE_LIST;

TYPE__EFI_SHELL_OPEN_FILE_LIST TypeInfo__EFI_SHELL_OPEN_FILE_LIST = {
  .TypeName = "EFI_SHELL_OPEN_FILE_LIST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_OPEN_FILE_LIST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_SHELL_FILE_INFO**"
};


typedef struct _TYPE__EFI_SHELL_FILE_INFO_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SHELL_FILE_INFO_STAR_STAR;

TYPE__EFI_SHELL_FILE_INFO_STAR_STAR TypeInfo__EFI_SHELL_FILE_INFO_STAR_STAR = {
  .TypeName = "EFI_SHELL_FILE_INFO**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SHELL_FILE_INFO**),
  .PointedType = "EFI_SHELL_FILE_INFO*"
};


typedef struct _TYPE__EFI_SHELL_FILE_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SHELL_FILE_INFO_STAR;

TYPE__EFI_SHELL_FILE_INFO_STAR TypeInfo__EFI_SHELL_FILE_INFO_STAR = {
  .TypeName = "EFI_SHELL_FILE_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SHELL_FILE_INFO*),
  .PointedType = "EFI_SHELL_FILE_INFO"
};


typedef struct _TYPE__EFI_SHELL_FILE_INFO{
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
} TYPE__EFI_SHELL_FILE_INFO;

TYPE__EFI_SHELL_FILE_INFO TypeInfo__EFI_SHELL_FILE_INFO = {
  .TypeName = "EFI_SHELL_FILE_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SHELL_FILE_INFO),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Link",
  .StructFieldTypeName_1 = "LIST_ENTRY",
  .StructFieldName_2 = "Status",
  .StructFieldTypeName_2 = "EFI_STATUS",
  .StructFieldName_3 = "FullName",
  .StructFieldTypeName_3 = "CHAR16*",
  .StructFieldName_4 = "FileName",
  .StructFieldTypeName_4 = "CHAR16*",
  .StructFieldName_5 = "Handle",
  .StructFieldTypeName_5 = "SHELL_FILE_HANDLE",
  .StructFieldName_6 = "Info",
  .StructFieldTypeName_6 = "EFI_FILE_INFO*"
};


typedef struct _TYPE__LIST_ENTRY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__LIST_ENTRY;

TYPE__LIST_ENTRY TypeInfo__LIST_ENTRY = {
  .TypeName = "LIST_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(LIST_ENTRY),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ForwardLink",
  .StructFieldTypeName_1 = "LIST_ENTRY*",
  .StructFieldName_2 = "BackLink",
  .StructFieldTypeName_2 = "LIST_ENTRY*"
};


typedef struct _TYPE__LIST_ENTRY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__LIST_ENTRY_STAR;

TYPE__LIST_ENTRY_STAR TypeInfo__LIST_ENTRY_STAR = {
  .TypeName = "LIST_ENTRY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(LIST_ENTRY*),
  .PointedType = "LIST_ENTRY"
};


typedef struct _TYPE__EFI_FILE_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FILE_INFO_STAR;

TYPE__EFI_FILE_INFO_STAR TypeInfo__EFI_FILE_INFO_STAR = {
  .TypeName = "EFI_FILE_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FILE_INFO*),
  .PointedType = "EFI_FILE_INFO"
};


typedef struct _TYPE__EFI_FILE_INFO{
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
} TYPE__EFI_FILE_INFO;

TYPE__EFI_FILE_INFO TypeInfo__EFI_FILE_INFO = {
  .TypeName = "EFI_FILE_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FILE_INFO),
  .StructFieldNum = 8,
  .StructFieldName_1 = "Size",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "FileSize",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "PhysicalSize",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "CreateTime",
  .StructFieldTypeName_4 = "EFI_TIME",
  .StructFieldName_5 = "LastAccessTime",
  .StructFieldTypeName_5 = "EFI_TIME",
  .StructFieldName_6 = "ModificationTime",
  .StructFieldTypeName_6 = "EFI_TIME",
  .StructFieldName_7 = "Attribute",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "FileName",
  .StructFieldTypeName_8 = "CHAR16[1]"
};


typedef struct _TYPE__EFI_TIME{
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
} TYPE__EFI_TIME;

TYPE__EFI_TIME TypeInfo__EFI_TIME = {
  .TypeName = "EFI_TIME",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TIME),
  .StructFieldNum = 11,
  .StructFieldName_1 = "Year",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Month",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Day",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Hour",
  .StructFieldTypeName_4 = "UINT8",
  .StructFieldName_5 = "Minute",
  .StructFieldTypeName_5 = "UINT8",
  .StructFieldName_6 = "Second",
  .StructFieldTypeName_6 = "UINT8",
  .StructFieldName_7 = "Pad1",
  .StructFieldTypeName_7 = "UINT8",
  .StructFieldName_8 = "Nanosecond",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "TimeZone",
  .StructFieldTypeName_9 = "INT16",
  .StructFieldName_10 = "Daylight",
  .StructFieldTypeName_10 = "UINT8",
  .StructFieldName_11 = "Pad2",
  .StructFieldTypeName_11 = "UINT8"
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


typedef struct _TYPE__INT16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT16;

TYPE__INT16 TypeInfo__INT16 = {
  .TypeName = "INT16",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT16),
  .BasicTypeName = "short"
};


typedef struct _TYPE__CHAR16_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR16_ARRAY_1;

TYPE__CHAR16_ARRAY_1 TypeInfo__CHAR16_ARRAY_1 = {
  .TypeName = "CHAR16[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR16[1]),
  .ElementTypeName = "CHAR16"
};


typedef struct _TYPE__EFI_SHELL_FREE_FILE_LIST{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_FREE_FILE_LIST;

TYPE__EFI_SHELL_FREE_FILE_LIST TypeInfo__EFI_SHELL_FREE_FILE_LIST = {
  .TypeName = "EFI_SHELL_FREE_FILE_LIST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_FREE_FILE_LIST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SHELL_FILE_INFO**"
};


typedef struct _TYPE__EFI_SHELL_REMOVE_DUP_IN_FILE_LIST{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_REMOVE_DUP_IN_FILE_LIST;

TYPE__EFI_SHELL_REMOVE_DUP_IN_FILE_LIST TypeInfo__EFI_SHELL_REMOVE_DUP_IN_FILE_LIST = {
  .TypeName = "EFI_SHELL_REMOVE_DUP_IN_FILE_LIST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_REMOVE_DUP_IN_FILE_LIST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SHELL_FILE_INFO**"
};


typedef struct _TYPE__EFI_SHELL_BATCH_IS_ACTIVE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_SHELL_BATCH_IS_ACTIVE;

TYPE__EFI_SHELL_BATCH_IS_ACTIVE TypeInfo__EFI_SHELL_BATCH_IS_ACTIVE = {
  .TypeName = "EFI_SHELL_BATCH_IS_ACTIVE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_BATCH_IS_ACTIVE),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EFI_SHELL_IS_ROOT_SHELL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_SHELL_IS_ROOT_SHELL;

TYPE__EFI_SHELL_IS_ROOT_SHELL TypeInfo__EFI_SHELL_IS_ROOT_SHELL = {
  .TypeName = "EFI_SHELL_IS_ROOT_SHELL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_IS_ROOT_SHELL),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EFI_SHELL_ENABLE_PAGE_BREAK{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_SHELL_ENABLE_PAGE_BREAK;

TYPE__EFI_SHELL_ENABLE_PAGE_BREAK TypeInfo__EFI_SHELL_ENABLE_PAGE_BREAK = {
  .TypeName = "EFI_SHELL_ENABLE_PAGE_BREAK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_ENABLE_PAGE_BREAK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EFI_SHELL_DISABLE_PAGE_BREAK{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_SHELL_DISABLE_PAGE_BREAK;

TYPE__EFI_SHELL_DISABLE_PAGE_BREAK TypeInfo__EFI_SHELL_DISABLE_PAGE_BREAK = {
  .TypeName = "EFI_SHELL_DISABLE_PAGE_BREAK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_DISABLE_PAGE_BREAK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EFI_SHELL_GET_PAGE_BREAK{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_SHELL_GET_PAGE_BREAK;

TYPE__EFI_SHELL_GET_PAGE_BREAK TypeInfo__EFI_SHELL_GET_PAGE_BREAK = {
  .TypeName = "EFI_SHELL_GET_PAGE_BREAK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_PAGE_BREAK),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EFI_SHELL_GET_DEVICE_NAME{
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
} TYPE__EFI_SHELL_GET_DEVICE_NAME;

TYPE__EFI_SHELL_GET_DEVICE_NAME TypeInfo__EFI_SHELL_GET_DEVICE_NAME = {
  .TypeName = "EFI_SHELL_GET_DEVICE_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_DEVICE_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SHELL_DEVICE_NAME_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "CHAR16**"
};


typedef struct _TYPE__EFI_SHELL_DEVICE_NAME_FLAGS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_SHELL_DEVICE_NAME_FLAGS;

TYPE__EFI_SHELL_DEVICE_NAME_FLAGS TypeInfo__EFI_SHELL_DEVICE_NAME_FLAGS = {
  .TypeName = "EFI_SHELL_DEVICE_NAME_FLAGS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_SHELL_DEVICE_NAME_FLAGS),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_SHELL_GET_FILE_INFO{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_GET_FILE_INFO;

TYPE__EFI_SHELL_GET_FILE_INFO TypeInfo__EFI_SHELL_GET_FILE_INFO = {
  .TypeName = "EFI_SHELL_GET_FILE_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_FILE_INFO),
  .ReturnType = "EFI_FILE_INFO*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE"
};


typedef struct _TYPE__EFI_SHELL_SET_FILE_INFO{
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
} TYPE__EFI_SHELL_SET_FILE_INFO;

TYPE__EFI_SHELL_SET_FILE_INFO TypeInfo__EFI_SHELL_SET_FILE_INFO = {
  .TypeName = "EFI_SHELL_SET_FILE_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_FILE_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_FILE_INFO*"
};


typedef struct _TYPE__EFI_SHELL_OPEN_FILE_BY_NAME{
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
} TYPE__EFI_SHELL_OPEN_FILE_BY_NAME;

TYPE__EFI_SHELL_OPEN_FILE_BY_NAME TypeInfo__EFI_SHELL_OPEN_FILE_BY_NAME = {
  .TypeName = "EFI_SHELL_OPEN_FILE_BY_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_OPEN_FILE_BY_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "SHELL_FILE_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__SHELL_FILE_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__SHELL_FILE_HANDLE_STAR;

TYPE__SHELL_FILE_HANDLE_STAR TypeInfo__SHELL_FILE_HANDLE_STAR = {
  .TypeName = "SHELL_FILE_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(SHELL_FILE_HANDLE*),
  .PointedType = "SHELL_FILE_HANDLE"
};


typedef struct _TYPE__EFI_SHELL_CLOSE_FILE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_CLOSE_FILE;

TYPE__EFI_SHELL_CLOSE_FILE TypeInfo__EFI_SHELL_CLOSE_FILE = {
  .TypeName = "EFI_SHELL_CLOSE_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_CLOSE_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE"
};


typedef struct _TYPE__EFI_SHELL_CREATE_FILE{
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
} TYPE__EFI_SHELL_CREATE_FILE;

TYPE__EFI_SHELL_CREATE_FILE TypeInfo__EFI_SHELL_CREATE_FILE = {
  .TypeName = "EFI_SHELL_CREATE_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_CREATE_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "SHELL_FILE_HANDLE*"
};


typedef struct _TYPE__EFI_SHELL_READ_FILE{
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
} TYPE__EFI_SHELL_READ_FILE;

TYPE__EFI_SHELL_READ_FILE TypeInfo__EFI_SHELL_READ_FILE = {
  .TypeName = "EFI_SHELL_READ_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_READ_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_SHELL_WRITE_FILE{
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
} TYPE__EFI_SHELL_WRITE_FILE;

TYPE__EFI_SHELL_WRITE_FILE TypeInfo__EFI_SHELL_WRITE_FILE = {
  .TypeName = "EFI_SHELL_WRITE_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_WRITE_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_SHELL_DELETE_FILE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_DELETE_FILE;

TYPE__EFI_SHELL_DELETE_FILE TypeInfo__EFI_SHELL_DELETE_FILE = {
  .TypeName = "EFI_SHELL_DELETE_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_DELETE_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE"
};


typedef struct _TYPE__EFI_SHELL_DELETE_FILE_BY_NAME{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_DELETE_FILE_BY_NAME;

TYPE__EFI_SHELL_DELETE_FILE_BY_NAME TypeInfo__EFI_SHELL_DELETE_FILE_BY_NAME = {
  .TypeName = "EFI_SHELL_DELETE_FILE_BY_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_DELETE_FILE_BY_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*"
};


typedef struct _TYPE__EFI_SHELL_GET_FILE_POSITION{
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
} TYPE__EFI_SHELL_GET_FILE_POSITION;

TYPE__EFI_SHELL_GET_FILE_POSITION TypeInfo__EFI_SHELL_GET_FILE_POSITION = {
  .TypeName = "EFI_SHELL_GET_FILE_POSITION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_FILE_POSITION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*"
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


typedef struct _TYPE__EFI_SHELL_SET_FILE_POSITION{
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
} TYPE__EFI_SHELL_SET_FILE_POSITION;

TYPE__EFI_SHELL_SET_FILE_POSITION TypeInfo__EFI_SHELL_SET_FILE_POSITION = {
  .TypeName = "EFI_SHELL_SET_FILE_POSITION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_SET_FILE_POSITION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64"
};


typedef struct _TYPE__EFI_SHELL_FLUSH_FILE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SHELL_FLUSH_FILE;

TYPE__EFI_SHELL_FLUSH_FILE TypeInfo__EFI_SHELL_FLUSH_FILE = {
  .TypeName = "EFI_SHELL_FLUSH_FILE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_FLUSH_FILE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE"
};


typedef struct _TYPE__EFI_SHELL_FIND_FILES{
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
} TYPE__EFI_SHELL_FIND_FILES;

TYPE__EFI_SHELL_FIND_FILES TypeInfo__EFI_SHELL_FIND_FILES = {
  .TypeName = "EFI_SHELL_FIND_FILES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_FIND_FILES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_SHELL_FILE_INFO**"
};


typedef struct _TYPE__EFI_SHELL_FIND_FILES_IN_DIR{
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
} TYPE__EFI_SHELL_FIND_FILES_IN_DIR;

TYPE__EFI_SHELL_FIND_FILES_IN_DIR TypeInfo__EFI_SHELL_FIND_FILES_IN_DIR = {
  .TypeName = "EFI_SHELL_FIND_FILES_IN_DIR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_FIND_FILES_IN_DIR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_NULL,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_NULL,
  .ParameterTypeName_2 = "EFI_SHELL_FILE_INFO**"
};


typedef struct _TYPE__EFI_SHELL_GET_FILE_SIZE{
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
} TYPE__EFI_SHELL_GET_FILE_SIZE;

TYPE__EFI_SHELL_GET_FILE_SIZE TypeInfo__EFI_SHELL_GET_FILE_SIZE = {
  .TypeName = "EFI_SHELL_GET_FILE_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_FILE_SIZE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "SHELL_FILE_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*"
};


typedef struct _TYPE__EFI_SHELL_OPEN_ROOT{
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
} TYPE__EFI_SHELL_OPEN_ROOT;

TYPE__EFI_SHELL_OPEN_ROOT TypeInfo__EFI_SHELL_OPEN_ROOT = {
  .TypeName = "EFI_SHELL_OPEN_ROOT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_OPEN_ROOT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "SHELL_FILE_HANDLE*"
};


typedef struct _TYPE__EFI_SHELL_OPEN_ROOT_BY_HANDLE{
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
} TYPE__EFI_SHELL_OPEN_ROOT_BY_HANDLE;

TYPE__EFI_SHELL_OPEN_ROOT_BY_HANDLE TypeInfo__EFI_SHELL_OPEN_ROOT_BY_HANDLE = {
  .TypeName = "EFI_SHELL_OPEN_ROOT_BY_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_OPEN_ROOT_BY_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "SHELL_FILE_HANDLE*"
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


typedef struct _TYPE__EFI_SHELL_REGISTER_GUID_NAME{
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
} TYPE__EFI_SHELL_REGISTER_GUID_NAME;

TYPE__EFI_SHELL_REGISTER_GUID_NAME TypeInfo__EFI_SHELL_REGISTER_GUID_NAME = {
  .TypeName = "EFI_SHELL_REGISTER_GUID_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_REGISTER_GUID_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_GUID_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR;

TYPE__EFI_GUID_STAR TypeInfo__EFI_GUID_STAR = {
  .TypeName = "EFI_GUID*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID*),
  .PointedType = "EFI_GUID"
};


typedef struct _TYPE__EFI_GUID{
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
} TYPE__EFI_GUID;

TYPE__EFI_GUID TypeInfo__EFI_GUID = {
  .TypeName = "EFI_GUID",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GUID),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Data1",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Data2",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Data3",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Data4",
  .StructFieldTypeName_4 = "UINT8[8]"
};


typedef struct _TYPE__UINT8_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_8;

TYPE__UINT8_ARRAY_8 TypeInfo__UINT8_ARRAY_8 = {
  .TypeName = "UINT8[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[8]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__EFI_SHELL_GET_GUID_NAME{
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
} TYPE__EFI_SHELL_GET_GUID_NAME;

TYPE__EFI_SHELL_GET_GUID_NAME TypeInfo__EFI_SHELL_GET_GUID_NAME = {
  .TypeName = "EFI_SHELL_GET_GUID_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_GUID_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "CHAR16**"
};


typedef struct _TYPE__EFI_SHELL_GET_GUID_FROM_NAME{
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
} TYPE__EFI_SHELL_GET_GUID_FROM_NAME;

TYPE__EFI_SHELL_GET_GUID_FROM_NAME TypeInfo__EFI_SHELL_GET_GUID_FROM_NAME = {
  .TypeName = "EFI_SHELL_GET_GUID_FROM_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_GUID_FROM_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_GUID*"
};


typedef struct _TYPE__EFI_SHELL_GET_ENV_EX{
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
} TYPE__EFI_SHELL_GET_ENV_EX;

TYPE__EFI_SHELL_GET_ENV_EX TypeInfo__EFI_SHELL_GET_ENV_EX = {
  .TypeName = "EFI_SHELL_GET_ENV_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SHELL_GET_ENV_EX),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT32*"
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


typedef struct _TYPE__gEfiSimpleTextInProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextInProtocolGuid;

TYPE__gEfiSimpleTextInProtocolGuid TypeInfo__gEfiSimpleTextInProtocolGuid = {
  .TypeName = "gEfiSimpleTextInProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextInProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_INPUT_RESET",
  .StructFieldName_2 = "ReadKeyStroke",
  .StructFieldTypeName_2 = "EFI_INPUT_READ_KEY",
  .StructFieldName_3 = "WaitForKey",
  .StructFieldTypeName_3 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_INPUT_RESET{
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
} TYPE__EFI_INPUT_RESET;

TYPE__EFI_INPUT_RESET TypeInfo__EFI_INPUT_RESET = {
  .TypeName = "EFI_INPUT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_INPUT_READ_KEY{
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
} TYPE__EFI_INPUT_READ_KEY;

TYPE__EFI_INPUT_READ_KEY TypeInfo__EFI_INPUT_READ_KEY = {
  .TypeName = "EFI_INPUT_READ_KEY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_READ_KEY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_INPUT_KEY*"
};


typedef struct _TYPE__EFI_INPUT_KEY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_INPUT_KEY_STAR;

TYPE__EFI_INPUT_KEY_STAR TypeInfo__EFI_INPUT_KEY_STAR = {
  .TypeName = "EFI_INPUT_KEY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_INPUT_KEY*),
  .PointedType = "EFI_INPUT_KEY"
};


typedef struct _TYPE__EFI_INPUT_KEY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_INPUT_KEY;

TYPE__EFI_INPUT_KEY TypeInfo__EFI_INPUT_KEY = {
  .TypeName = "EFI_INPUT_KEY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_INPUT_KEY),
  .StructFieldNum = 2,
  .StructFieldName_1 = "ScanCode",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "UnicodeChar",
  .StructFieldTypeName_2 = "CHAR16"
};


typedef struct _TYPE__SHELL_MAN_HII_VENDOR_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__SHELL_MAN_HII_VENDOR_DEVICE_PATH;

TYPE__SHELL_MAN_HII_VENDOR_DEVICE_PATH TypeInfo__SHELL_MAN_HII_VENDOR_DEVICE_PATH = {
  .TypeName = "SHELL_MAN_HII_VENDOR_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(SHELL_MAN_HII_VENDOR_DEVICE_PATH),
  .StructFieldNum = 2,
  .StructFieldName_1 = "VendorDevicePath",
  .StructFieldTypeName_1 = "VENDOR_DEVICE_PATH",
  .StructFieldName_2 = "End",
  .StructFieldTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL"
};


typedef struct _TYPE__VENDOR_DEVICE_PATH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__VENDOR_DEVICE_PATH;

TYPE__VENDOR_DEVICE_PATH TypeInfo__VENDOR_DEVICE_PATH = {
  .TypeName = "VENDOR_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(VENDOR_DEVICE_PATH),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Header",
  .StructFieldTypeName_1 = "EFI_DEVICE_PATH_PROTOCOL",
  .StructFieldName_2 = "Guid",
  .StructFieldTypeName_2 = "EFI_GUID"
};


typedef struct _TYPE__gEfiShellInterfaceGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiShellInterfaceGuid;

TYPE__gEfiShellInterfaceGuid TypeInfo__gEfiShellInterfaceGuid = {
  .TypeName = "gEfiShellInterfaceGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiShellInterfaceGuid,
  .InterfaceStructName = "EFI_SHELL_INTERFACE"
};


typedef struct _TYPE__gEfiEdidDiscoveredProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiEdidDiscoveredProtocolGuid;

TYPE__gEfiEdidDiscoveredProtocolGuid TypeInfo__gEfiEdidDiscoveredProtocolGuid = {
  .TypeName = "gEfiEdidDiscoveredProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiEdidDiscoveredProtocolGuid,
  .InterfaceStructName = "EFI_EDID_DISCOVERED_PROTOCOL"
};


typedef struct _TYPE__gEfiCpuIo2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiCpuIo2ProtocolGuid;

TYPE__gEfiCpuIo2ProtocolGuid TypeInfo__gEfiCpuIo2ProtocolGuid = {
  .TypeName = "gEfiCpuIo2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiCpuIo2ProtocolGuid,
  .InterfaceStructName = "EFI_CPU_IO2_PROTOCOL"
};


typedef struct _TYPE__gEfiSimplePointerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimplePointerProtocolGuid;

TYPE__gEfiSimplePointerProtocolGuid TypeInfo__gEfiSimplePointerProtocolGuid = {
  .TypeName = "gEfiSimplePointerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimplePointerProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_POINTER_PROTOCOL"
};


typedef struct _TYPE__gEfiPartitionInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPartitionInfoProtocolGuid;

TYPE__gEfiPartitionInfoProtocolGuid TypeInfo__gEfiPartitionInfoProtocolGuid = {
  .TypeName = "gEfiPartitionInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPartitionInfoProtocolGuid,
  .InterfaceStructName = "EFI_PARTITION_INFO_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiConfigRoutingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiConfigRoutingProtocolGuid;

TYPE__gEfiHiiConfigRoutingProtocolGuid TypeInfo__gEfiHiiConfigRoutingProtocolGuid = {
  .TypeName = "gEfiHiiConfigRoutingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiConfigRoutingProtocolGuid,
  .InterfaceStructName = "EFI_HII_CONFIG_ROUTING_PROTOCOL"
};


typedef struct _TYPE__gEfiDebugSupportProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDebugSupportProtocolGuid;

TYPE__gEfiDebugSupportProtocolGuid TypeInfo__gEfiDebugSupportProtocolGuid = {
  .TypeName = "gEfiDebugSupportProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDebugSupportProtocolGuid,
  .InterfaceStructName = "EFI_DEBUG_SUPPORT_PROTOCOL"
};


typedef struct _TYPE__gEfiGraphicsOutputProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiGraphicsOutputProtocolGuid;

TYPE__gEfiGraphicsOutputProtocolGuid TypeInfo__gEfiGraphicsOutputProtocolGuid = {
  .TypeName = "gEfiGraphicsOutputProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiGraphicsOutputProtocolGuid,
  .InterfaceStructName = "EFI_GRAPHICS_OUTPUT_PROTOCOL"
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


typedef struct _TYPE__gEfiDriverDiagnostics2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverDiagnostics2ProtocolGuid;

TYPE__gEfiDriverDiagnostics2ProtocolGuid TypeInfo__gEfiDriverDiagnostics2ProtocolGuid = {
  .TypeName = "gEfiDriverDiagnostics2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverDiagnostics2ProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_DIAGNOSTICS2_PROTOCOL"
};


typedef struct _TYPE__gEfiIp6ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp6ServiceBindingProtocolGuid;

TYPE__gEfiIp6ServiceBindingProtocolGuid TypeInfo__gEfiIp6ServiceBindingProtocolGuid = {
  .TypeName = "gEfiIp6ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp6ServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__gEfiDriverConfiguration2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverConfiguration2ProtocolGuid;

TYPE__gEfiDriverConfiguration2ProtocolGuid TypeInfo__gEfiDriverConfiguration2ProtocolGuid = {
  .TypeName = "gEfiDriverConfiguration2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverConfiguration2ProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_CONFIGURATION_PROTOCOL"
};


typedef struct _TYPE__gEfiSerialIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSerialIoProtocolGuid;

TYPE__gEfiSerialIoProtocolGuid TypeInfo__gEfiSerialIoProtocolGuid = {
  .TypeName = "gEfiSerialIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSerialIoProtocolGuid,
  .InterfaceStructName = "EFI_SERIAL_IO_PROTOCOL"
};


typedef struct _TYPE__gEfiShellDynamicCommandProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiShellDynamicCommandProtocolGuid;

TYPE__gEfiShellDynamicCommandProtocolGuid TypeInfo__gEfiShellDynamicCommandProtocolGuid = {
  .TypeName = "gEfiShellDynamicCommandProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiShellDynamicCommandProtocolGuid,
  .InterfaceStructName = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL"
};


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


typedef struct _TYPE__gEfiDriverSupportedEfiVersionProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverSupportedEfiVersionProtocolGuid;

TYPE__gEfiDriverSupportedEfiVersionProtocolGuid TypeInfo__gEfiDriverSupportedEfiVersionProtocolGuid = {
  .TypeName = "gEfiDriverSupportedEfiVersionProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverSupportedEfiVersionProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL"
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


typedef struct _TYPE__gEfiDecompressProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDecompressProtocolGuid;

TYPE__gEfiDecompressProtocolGuid TypeInfo__gEfiDecompressProtocolGuid = {
  .TypeName = "gEfiDecompressProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDecompressProtocolGuid,
  .InterfaceStructName = "EFI_DECOMPRESS_PROTOCOL"
};


typedef struct _TYPE__gEfiBusSpecificDriverOverrideProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBusSpecificDriverOverrideProtocolGuid;

TYPE__gEfiBusSpecificDriverOverrideProtocolGuid TypeInfo__gEfiBusSpecificDriverOverrideProtocolGuid = {
  .TypeName = "gEfiBusSpecificDriverOverrideProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBusSpecificDriverOverrideProtocolGuid,
  .InterfaceStructName = "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiStringProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiStringProtocolGuid;

TYPE__gEfiHiiStringProtocolGuid TypeInfo__gEfiHiiStringProtocolGuid = {
  .TypeName = "gEfiHiiStringProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiStringProtocolGuid,
  .InterfaceStructName = "EFI_HII_STRING_PROTOCOL"
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


typedef struct _TYPE__gEfiPciIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciIoProtocolGuid;

TYPE__gEfiPciIoProtocolGuid TypeInfo__gEfiPciIoProtocolGuid = {
  .TypeName = "gEfiPciIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciIoProtocolGuid,
  .InterfaceStructName = "EFI_PCI_IO_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiFontProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiFontProtocolGuid;

TYPE__gEfiHiiFontProtocolGuid TypeInfo__gEfiHiiFontProtocolGuid = {
  .TypeName = "gEfiHiiFontProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiFontProtocolGuid,
  .InterfaceStructName = "EFI_HII_FONT_PROTOCOL"
};


typedef struct _TYPE__gEfiDriverConfigurationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverConfigurationProtocolGuid;

TYPE__gEfiDriverConfigurationProtocolGuid TypeInfo__gEfiDriverConfigurationProtocolGuid = {
  .TypeName = "gEfiDriverConfigurationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverConfigurationProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_CONFIGURATION_PROTOCOL"
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


typedef struct _TYPE__gEfiFirmwareVolume2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFirmwareVolume2ProtocolGuid;

TYPE__gEfiFirmwareVolume2ProtocolGuid TypeInfo__gEfiFirmwareVolume2ProtocolGuid = {
  .TypeName = "gEfiFirmwareVolume2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFirmwareVolume2ProtocolGuid,
  .InterfaceStructName = "EFI_FIRMWARE_VOLUME2_PROTOCOL"
};


typedef struct _TYPE__gEdkiiVariableLockProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiVariableLockProtocolGuid;

TYPE__gEdkiiVariableLockProtocolGuid TypeInfo__gEdkiiVariableLockProtocolGuid = {
  .TypeName = "gEdkiiVariableLockProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiVariableLockProtocolGuid,
  .InterfaceStructName = "EDKII_VARIABLE_LOCK_PROTOCOL"
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
  .InterfaceStructName = "EFI_COMPONENT_NAME2_PROTOCOL"
};


typedef struct _TYPE__gEfiDriverDiagnosticsProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverDiagnosticsProtocolGuid;

TYPE__gEfiDriverDiagnosticsProtocolGuid TypeInfo__gEfiDriverDiagnosticsProtocolGuid = {
  .TypeName = "gEfiDriverDiagnosticsProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverDiagnosticsProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_DIAGNOSTICS_PROTOCOL"
};


typedef struct _TYPE__gEfiPciRootBridgeIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciRootBridgeIoProtocolGuid;

TYPE__gEfiPciRootBridgeIoProtocolGuid TypeInfo__gEfiPciRootBridgeIoProtocolGuid = {
  .TypeName = "gEfiPciRootBridgeIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciRootBridgeIoProtocolGuid,
  .InterfaceStructName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL"
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


typedef struct _TYPE__gEfiHiiImageProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiImageProtocolGuid;

TYPE__gEfiHiiImageProtocolGuid TypeInfo__gEfiHiiImageProtocolGuid = {
  .TypeName = "gEfiHiiImageProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiImageProtocolGuid,
  .InterfaceStructName = "EFI_HII_IMAGE_PROTOCOL"
};


typedef struct _TYPE__gEfiSimpleFileSystemProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleFileSystemProtocolGuid;

TYPE__gEfiSimpleFileSystemProtocolGuid TypeInfo__gEfiSimpleFileSystemProtocolGuid = {
  .TypeName = "gEfiSimpleFileSystemProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleFileSystemProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_FILE_SYSTEM_PROTOCOL"
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


typedef struct _TYPE__gEfiUsbIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUsbIoProtocolGuid;

TYPE__gEfiUsbIoProtocolGuid TypeInfo__gEfiUsbIoProtocolGuid = {
  .TypeName = "gEfiUsbIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUsbIoProtocolGuid,
  .InterfaceStructName = "EFI_USB_IO_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiPackageListProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiPackageListProtocolGuid;

TYPE__gEfiHiiPackageListProtocolGuid TypeInfo__gEfiHiiPackageListProtocolGuid = {
  .TypeName = "gEfiHiiPackageListProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiPackageListProtocolGuid,
  .InterfaceStructName = "EFI_HII_PACKAGE_LIST_HEADER"
};


typedef struct _TYPE__gEfiFirmwareManagementProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFirmwareManagementProtocolGuid;

TYPE__gEfiFirmwareManagementProtocolGuid TypeInfo__gEfiFirmwareManagementProtocolGuid = {
  .TypeName = "gEfiFirmwareManagementProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFirmwareManagementProtocolGuid,
  .InterfaceStructName = "EFI_FIRMWARE_MANAGEMENT_PROTOCOL"
};


typedef struct _TYPE__gEfiShellEnvironment2Guid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiShellEnvironment2Guid;

TYPE__gEfiShellEnvironment2Guid TypeInfo__gEfiShellEnvironment2Guid = {
  .TypeName = "gEfiShellEnvironment2Guid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiShellEnvironment2Guid,
  .InterfaceStructName = "EFI_SHELL_ENVIRONMENT2"
};


typedef struct _TYPE__gEfiIp4ServiceBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIp4ServiceBindingProtocolGuid;

TYPE__gEfiIp4ServiceBindingProtocolGuid TypeInfo__gEfiIp4ServiceBindingProtocolGuid = {
  .TypeName = "gEfiIp4ServiceBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIp4ServiceBindingProtocolGuid,
  .InterfaceStructName = "EFI_SERVICE_BINDING_PROTOCOL"
};


typedef struct _TYPE__gEfiSimpleTextInputExProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSimpleTextInputExProtocolGuid;

TYPE__gEfiSimpleTextInputExProtocolGuid TypeInfo__gEfiSimpleTextInputExProtocolGuid = {
  .TypeName = "gEfiSimpleTextInputExProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSimpleTextInputExProtocolGuid,
  .InterfaceStructName = "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL"
};


typedef struct _TYPE__gEfiEdidActiveProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiEdidActiveProtocolGuid;

TYPE__gEfiEdidActiveProtocolGuid TypeInfo__gEfiEdidActiveProtocolGuid = {
  .TypeName = "gEfiEdidActiveProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiEdidActiveProtocolGuid,
  .InterfaceStructName = "EFI_EDID_ACTIVE_PROTOCOL"
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


typedef struct _TYPE__gEfiHiiDatabaseProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiDatabaseProtocolGuid;

TYPE__gEfiHiiDatabaseProtocolGuid TypeInfo__gEfiHiiDatabaseProtocolGuid = {
  .TypeName = "gEfiHiiDatabaseProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiDatabaseProtocolGuid,
  .InterfaceStructName = "EFI_HII_DATABASE_PROTOCOL"
};


typedef struct _TYPE__gEfiShellProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiShellProtocolGuid;

TYPE__gEfiShellProtocolGuid TypeInfo__gEfiShellProtocolGuid = {
  .TypeName = "gEfiShellProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiShellProtocolGuid,
  .InterfaceStructName = "EFI_SHELL_PROTOCOL"
};


typedef struct _TYPE__gEfiBlockIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBlockIoProtocolGuid;

TYPE__gEfiBlockIoProtocolGuid TypeInfo__gEfiBlockIoProtocolGuid = {
  .TypeName = "gEfiBlockIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBlockIoProtocolGuid,
  .InterfaceStructName = "EFI_BLOCK_IO_PROTOCOL"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiShellInterfaceGuid,
  &TypeInfo__gEfiEdidDiscoveredProtocolGuid,
  &TypeInfo__gEfiPartitionInfoProtocolGuid,
  &TypeInfo__gEfiGraphicsOutputProtocolGuid,
  &TypeInfo__gEfiIp6ProtocolGuid,
  &TypeInfo__gEfiDriverDiagnostics2ProtocolGuid,
  &TypeInfo__gEfiDriverConfiguration2ProtocolGuid,
  &TypeInfo__gEfiShellEnvironment2Guid,
  &TypeInfo__gEfiBusSpecificDriverOverrideProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiDriverConfigurationProtocolGuid,
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiDriverDiagnosticsProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiSimpleFileSystemProtocolGuid,
  &TypeInfo__gEfiDebugSupportProtocolGuid,
  &TypeInfo__gEfiHiiPackageListProtocolGuid,
  &TypeInfo__gEfiFirmwareManagementProtocolGuid,
  &TypeInfo__gEfiUsbIoProtocolGuid,
  &TypeInfo__gEfiShellParametersProtocolGuid,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__gEfiEdidActiveProtocolGuid,
  &TypeInfo__gEfiShellProtocolGuid,
  &TypeInfo__gEfiBlockIoProtocolGuid,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiSimpleTextInProtocolGuid,
  &TypeInfo__gEfiShellProtocolGuid,
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  &TypeInfo__gEfiShellParametersProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEdkiiVariableLockProtocolGuid,
  &TypeInfo__gEfiUnicodeCollationProtocolGuid,
  &TypeInfo__gEfiDecompressProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__gEfiCpuIo2ProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiShellProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  &TypeInfo__gEfiShellProtocolGuid,
  &TypeInfo__gEfiShellParametersProtocolGuid,
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiSerialIoProtocolGuid,
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiFirmwareVolume2ProtocolGuid,
  &TypeInfo__gEfiDriverSupportedEfiVersionProtocolGuid,
  &TypeInfo__gEfiIp6ConfigProtocolGuid,
  &TypeInfo__gEfiShellDynamicCommandProtocolGuid,
  &TypeInfo__gEfiSimplePointerProtocolGuid,
  &TypeInfo__gEfiIp4ServiceBindingProtocolGuid,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__gEfiSimpleFileSystemProtocolGuid,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__gEfiSimpleNetworkProtocolGuid,
  &TypeInfo__gEfiAdapterInformationProtocolGuid,
  &TypeInfo__gEfiIp4Config2ProtocolGuid,
  &TypeInfo__gEfiBlockIoProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiIp6ServiceBindingProtocolGuid,
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL,
  &TypeInfo__EFI_TEXT_RESET,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_TEXT_STRING,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_TEXT_TEST_STRING,
  &TypeInfo__EFI_TEXT_QUERY_MODE,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_TEXT_SET_MODE,
  &TypeInfo__EFI_TEXT_SET_ATTRIBUTE,
  &TypeInfo__EFI_TEXT_CLEAR_SCREEN,
  &TypeInfo__EFI_TEXT_SET_CURSOR_POSITION,
  &TypeInfo__EFI_TEXT_ENABLE_CURSOR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE,
  &TypeInfo__INT32,
  &TypeInfo__gEfiShellParametersProtocolGuid,
  &TypeInfo__EFI_SHELL_PARAMETERS_PROTOCOL,
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__SHELL_FILE_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_SHELL_PROTOCOL,
  &TypeInfo__EFI_SHELL_EXECUTE,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__EFI_STATUS_STAR,
  &TypeInfo__EFI_SHELL_GET_ENV,
  &TypeInfo__EFI_SHELL_SET_ENV,
  &TypeInfo__EFI_SHELL_GET_ALIAS,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__EFI_SHELL_SET_ALIAS,
  &TypeInfo__EFI_SHELL_GET_HELP_TEXT,
  &TypeInfo__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__EFI_SHELL_GET_DEVICE_PATH_FROM_FILE_PATH,
  &TypeInfo__EFI_SHELL_GET_FILE_PATH_FROM_DEVICE_PATH,
  &TypeInfo__EFI_SHELL_SET_MAP,
  &TypeInfo__EFI_SHELL_GET_CUR_DIR,
  &TypeInfo__EFI_SHELL_SET_CUR_DIR,
  &TypeInfo__EFI_SHELL_OPEN_FILE_LIST,
  &TypeInfo__EFI_SHELL_FILE_INFO_STAR_STAR,
  &TypeInfo__EFI_SHELL_FILE_INFO_STAR,
  &TypeInfo__EFI_SHELL_FILE_INFO,
  &TypeInfo__LIST_ENTRY,
  &TypeInfo__LIST_ENTRY_STAR,
  &TypeInfo__EFI_FILE_INFO_STAR,
  &TypeInfo__EFI_FILE_INFO,
  &TypeInfo__EFI_TIME,
  &TypeInfo__UINT16,
  &TypeInfo__UINT32,
  &TypeInfo__INT16,
  &TypeInfo__CHAR16_ARRAY_1,
  &TypeInfo__EFI_SHELL_FREE_FILE_LIST,
  &TypeInfo__EFI_SHELL_REMOVE_DUP_IN_FILE_LIST,
  &TypeInfo__EFI_SHELL_BATCH_IS_ACTIVE,
  &TypeInfo__EFI_SHELL_IS_ROOT_SHELL,
  &TypeInfo__EFI_SHELL_ENABLE_PAGE_BREAK,
  &TypeInfo__EFI_SHELL_DISABLE_PAGE_BREAK,
  &TypeInfo__EFI_SHELL_GET_PAGE_BREAK,
  &TypeInfo__EFI_SHELL_GET_DEVICE_NAME,
  &TypeInfo__EFI_SHELL_DEVICE_NAME_FLAGS,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_SHELL_GET_FILE_INFO,
  &TypeInfo__EFI_SHELL_SET_FILE_INFO,
  &TypeInfo__EFI_SHELL_OPEN_FILE_BY_NAME,
  &TypeInfo__SHELL_FILE_HANDLE_STAR,
  &TypeInfo__EFI_SHELL_CLOSE_FILE,
  &TypeInfo__EFI_SHELL_CREATE_FILE,
  &TypeInfo__EFI_SHELL_READ_FILE,
  &TypeInfo__EFI_SHELL_WRITE_FILE,
  &TypeInfo__EFI_SHELL_DELETE_FILE,
  &TypeInfo__EFI_SHELL_DELETE_FILE_BY_NAME,
  &TypeInfo__EFI_SHELL_GET_FILE_POSITION,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_SHELL_SET_FILE_POSITION,
  &TypeInfo__EFI_SHELL_FLUSH_FILE,
  &TypeInfo__EFI_SHELL_FIND_FILES,
  &TypeInfo__EFI_SHELL_FIND_FILES_IN_DIR,
  &TypeInfo__EFI_SHELL_GET_FILE_SIZE,
  &TypeInfo__EFI_SHELL_OPEN_ROOT,
  &TypeInfo__EFI_SHELL_OPEN_ROOT_BY_HANDLE,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_SHELL_REGISTER_GUID_NAME,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__EFI_SHELL_GET_GUID_NAME,
  &TypeInfo__EFI_SHELL_GET_GUID_FROM_NAME,
  &TypeInfo__EFI_SHELL_GET_ENV_EX,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__gEfiSimpleTextInProtocolGuid,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL,
  &TypeInfo__EFI_INPUT_RESET,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_INPUT_READ_KEY,
  &TypeInfo__EFI_INPUT_KEY_STAR,
  &TypeInfo__EFI_INPUT_KEY,
  &TypeInfo__SHELL_MAN_HII_VENDOR_DEVICE_PATH,
  &TypeInfo__VENDOR_DEVICE_PATH,
  NULL
};