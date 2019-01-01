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


typedef struct _TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL{
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
} TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL;

TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL TypeInfo__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL = {
  .TypeName = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "CommandName",
  .StructFieldTypeName_1 = "CHAR16*",
  .StructFieldName_2 = "Handler",
  .StructFieldTypeName_2 = "SHELL_COMMAND_HANDLER",
  .StructFieldName_3 = "GetHelp",
  .StructFieldTypeName_3 = "SHELL_COMMAND_GETHELP"
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


typedef struct _TYPE__SHELL_COMMAND_HANDLER{
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
} TYPE__SHELL_COMMAND_HANDLER;

TYPE__SHELL_COMMAND_HANDLER TypeInfo__SHELL_COMMAND_HANDLER = {
  .TypeName = "SHELL_COMMAND_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(SHELL_COMMAND_HANDLER),
  .ReturnType = "SHELL_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SYSTEM_TABLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_SHELL_PARAMETERS_PROTOCOL*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_SHELL_PROTOCOL*"
};


typedef struct _TYPE__SHELL_STATUS{
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
  const CHAR8* EnumValueName_13;
  const UINTN EnumValue_13;
  const CHAR8* EnumValueName_14;
  const UINTN EnumValue_14;
  const CHAR8* EnumValueName_15;
  const UINTN EnumValue_15;
  const CHAR8* EnumValueName_16;
  const UINTN EnumValue_16;
  const CHAR8* EnumValueName_17;
  const UINTN EnumValue_17;
  const CHAR8* EnumValueName_18;
  const UINTN EnumValue_18;
  const CHAR8* EnumValueName_19;
  const UINTN EnumValue_19;
  const CHAR8* EnumValueName_20;
  const UINTN EnumValue_20;
  const CHAR8* EnumValueName_21;
  const UINTN EnumValue_21;
  const CHAR8* EnumValueName_22;
  const UINTN EnumValue_22;
  const CHAR8* EnumValueName_23;
  const UINTN EnumValue_23;
} TYPE__SHELL_STATUS;

TYPE__SHELL_STATUS TypeInfo__SHELL_STATUS = {
  .TypeName = "SHELL_STATUS",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(SHELL_STATUS),
  .EnumValueNum = 23,
  .EnumValueName_1 = "SHELL_SUCCESS",
  .EnumValue_1 = SHELL_SUCCESS,
  .EnumValueName_2 = "SHELL_LOAD_ERROR",
  .EnumValue_2 = SHELL_LOAD_ERROR,
  .EnumValueName_3 = "SHELL_INVALID_PARAMETER",
  .EnumValue_3 = SHELL_INVALID_PARAMETER,
  .EnumValueName_4 = "SHELL_UNSUPPORTED",
  .EnumValue_4 = SHELL_UNSUPPORTED,
  .EnumValueName_5 = "SHELL_BAD_BUFFER_SIZE",
  .EnumValue_5 = SHELL_BAD_BUFFER_SIZE,
  .EnumValueName_6 = "SHELL_BUFFER_TOO_SMALL",
  .EnumValue_6 = SHELL_BUFFER_TOO_SMALL,
  .EnumValueName_7 = "SHELL_NOT_READY",
  .EnumValue_7 = SHELL_NOT_READY,
  .EnumValueName_8 = "SHELL_DEVICE_ERROR",
  .EnumValue_8 = SHELL_DEVICE_ERROR,
  .EnumValueName_9 = "SHELL_WRITE_PROTECTED",
  .EnumValue_9 = SHELL_WRITE_PROTECTED,
  .EnumValueName_10 = "SHELL_OUT_OF_RESOURCES",
  .EnumValue_10 = SHELL_OUT_OF_RESOURCES,
  .EnumValueName_11 = "SHELL_VOLUME_CORRUPTED",
  .EnumValue_11 = SHELL_VOLUME_CORRUPTED,
  .EnumValueName_12 = "SHELL_VOLUME_FULL",
  .EnumValue_12 = SHELL_VOLUME_FULL,
  .EnumValueName_13 = "SHELL_NO_MEDIA",
  .EnumValue_13 = SHELL_NO_MEDIA,
  .EnumValueName_14 = "SHELL_MEDIA_CHANGED",
  .EnumValue_14 = SHELL_MEDIA_CHANGED,
  .EnumValueName_15 = "SHELL_NOT_FOUND",
  .EnumValue_15 = SHELL_NOT_FOUND,
  .EnumValueName_16 = "SHELL_ACCESS_DENIED",
  .EnumValue_16 = SHELL_ACCESS_DENIED,
  .EnumValueName_17 = "SHELL_TIMEOUT",
  .EnumValue_17 = SHELL_TIMEOUT,
  .EnumValueName_18 = "SHELL_NOT_STARTED",
  .EnumValue_18 = SHELL_NOT_STARTED,
  .EnumValueName_19 = "SHELL_ALREADY_STARTED",
  .EnumValue_19 = SHELL_ALREADY_STARTED,
  .EnumValueName_20 = "SHELL_ABORTED",
  .EnumValue_20 = SHELL_ABORTED,
  .EnumValueName_21 = "SHELL_INCOMPATIBLE_VERSION",
  .EnumValue_21 = SHELL_INCOMPATIBLE_VERSION,
  .EnumValueName_22 = "SHELL_SECURITY_VIOLATION",
  .EnumValue_22 = SHELL_SECURITY_VIOLATION,
  .EnumValueName_23 = "SHELL_NOT_EQUAL",
  .EnumValue_23 = SHELL_NOT_EQUAL
};


typedef struct _TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL_STAR;

TYPE__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL_STAR TypeInfo__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL_STAR = {
  .TypeName = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL*),
  .PointedType = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL"
};


typedef struct _TYPE__EFI_SYSTEM_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_TABLE_STAR;

TYPE__EFI_SYSTEM_TABLE_STAR TypeInfo__EFI_SYSTEM_TABLE_STAR = {
  .TypeName = "EFI_SYSTEM_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_TABLE*),
  .PointedType = "EFI_SYSTEM_TABLE"
};


typedef struct _TYPE__EFI_SYSTEM_TABLE{
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
} TYPE__EFI_SYSTEM_TABLE;

TYPE__EFI_SYSTEM_TABLE TypeInfo__EFI_SYSTEM_TABLE = {
  .TypeName = "EFI_SYSTEM_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_TABLE),
  .StructFieldNum = 13,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "FirmwareVendor",
  .StructFieldTypeName_2 = "CHAR16*",
  .StructFieldName_3 = "FirmwareRevision",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "ConsoleInHandle",
  .StructFieldTypeName_4 = "EFI_HANDLE",
  .StructFieldName_5 = "ConIn",
  .StructFieldTypeName_5 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .StructFieldName_6 = "ConsoleOutHandle",
  .StructFieldTypeName_6 = "EFI_HANDLE",
  .StructFieldName_7 = "ConOut",
  .StructFieldTypeName_7 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .StructFieldName_8 = "StandardErrorHandle",
  .StructFieldTypeName_8 = "EFI_HANDLE",
  .StructFieldName_9 = "StdErr",
  .StructFieldTypeName_9 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .StructFieldName_10 = "RuntimeServices",
  .StructFieldTypeName_10 = "EFI_RUNTIME_SERVICES*",
  .StructFieldName_11 = "BootServices",
  .StructFieldTypeName_11 = "EFI_BOOT_SERVICES*",
  .StructFieldName_12 = "NumberOfTableEntries",
  .StructFieldTypeName_12 = "UINTN",
  .StructFieldName_13 = "ConfigurationTable",
  .StructFieldTypeName_13 = "EFI_CONFIGURATION_TABLE*"
};


typedef struct _TYPE__EFI_TABLE_HEADER{
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
} TYPE__EFI_TABLE_HEADER;

TYPE__EFI_TABLE_HEADER TypeInfo__EFI_TABLE_HEADER = {
  .TypeName = "EFI_TABLE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TABLE_HEADER),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Signature",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Revision",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "HeaderSize",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "CRC32",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "Reserved",
  .StructFieldTypeName_5 = "UINT32"
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


typedef struct _TYPE__EFI_RUNTIME_SERVICES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_RUNTIME_SERVICES_STAR;

TYPE__EFI_RUNTIME_SERVICES_STAR TypeInfo__EFI_RUNTIME_SERVICES_STAR = {
  .TypeName = "EFI_RUNTIME_SERVICES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_RUNTIME_SERVICES*),
  .PointedType = "EFI_RUNTIME_SERVICES"
};


typedef struct _TYPE__EFI_RUNTIME_SERVICES{
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
} TYPE__EFI_RUNTIME_SERVICES;

TYPE__EFI_RUNTIME_SERVICES TypeInfo__EFI_RUNTIME_SERVICES = {
  .TypeName = "EFI_RUNTIME_SERVICES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_RUNTIME_SERVICES),
  .StructFieldNum = 15,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "GetTime",
  .StructFieldTypeName_2 = "EFI_GET_TIME",
  .StructFieldName_3 = "SetTime",
  .StructFieldTypeName_3 = "EFI_SET_TIME",
  .StructFieldName_4 = "GetWakeupTime",
  .StructFieldTypeName_4 = "EFI_GET_WAKEUP_TIME",
  .StructFieldName_5 = "SetWakeupTime",
  .StructFieldTypeName_5 = "EFI_SET_WAKEUP_TIME",
  .StructFieldName_6 = "SetVirtualAddressMap",
  .StructFieldTypeName_6 = "EFI_SET_VIRTUAL_ADDRESS_MAP",
  .StructFieldName_7 = "ConvertPointer",
  .StructFieldTypeName_7 = "EFI_CONVERT_POINTER",
  .StructFieldName_8 = "GetVariable",
  .StructFieldTypeName_8 = "EFI_GET_VARIABLE",
  .StructFieldName_9 = "GetNextVariableName",
  .StructFieldTypeName_9 = "EFI_GET_NEXT_VARIABLE_NAME",
  .StructFieldName_10 = "SetVariable",
  .StructFieldTypeName_10 = "EFI_SET_VARIABLE",
  .StructFieldName_11 = "GetNextHighMonotonicCount",
  .StructFieldTypeName_11 = "EFI_GET_NEXT_HIGH_MONO_COUNT",
  .StructFieldName_12 = "ResetSystem",
  .StructFieldTypeName_12 = "EFI_RESET_SYSTEM",
  .StructFieldName_13 = "UpdateCapsule",
  .StructFieldTypeName_13 = "EFI_UPDATE_CAPSULE",
  .StructFieldName_14 = "QueryCapsuleCapabilities",
  .StructFieldTypeName_14 = "EFI_QUERY_CAPSULE_CAPABILITIES",
  .StructFieldName_15 = "QueryVariableInfo",
  .StructFieldTypeName_15 = "EFI_QUERY_VARIABLE_INFO"
};


typedef struct _TYPE__EFI_GET_TIME{
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
} TYPE__EFI_GET_TIME;

TYPE__EFI_GET_TIME TypeInfo__EFI_GET_TIME = {
  .TypeName = "EFI_GET_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "EFI_TIME*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_TIME_CAPABILITIES*"
};


typedef struct _TYPE__EFI_TIME_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TIME_STAR;

TYPE__EFI_TIME_STAR TypeInfo__EFI_TIME_STAR = {
  .TypeName = "EFI_TIME*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TIME*),
  .PointedType = "EFI_TIME"
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


typedef struct _TYPE__EFI_TIME_CAPABILITIES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TIME_CAPABILITIES_STAR;

TYPE__EFI_TIME_CAPABILITIES_STAR TypeInfo__EFI_TIME_CAPABILITIES_STAR = {
  .TypeName = "EFI_TIME_CAPABILITIES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TIME_CAPABILITIES*),
  .PointedType = "EFI_TIME_CAPABILITIES"
};


typedef struct _TYPE__EFI_TIME_CAPABILITIES{
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
} TYPE__EFI_TIME_CAPABILITIES;

TYPE__EFI_TIME_CAPABILITIES TypeInfo__EFI_TIME_CAPABILITIES = {
  .TypeName = "EFI_TIME_CAPABILITIES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TIME_CAPABILITIES),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Resolution",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Accuracy",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "SetsToZero",
  .StructFieldTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SET_TIME{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SET_TIME;

TYPE__EFI_SET_TIME TypeInfo__EFI_SET_TIME = {
  .TypeName = "EFI_SET_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIME*"
};


typedef struct _TYPE__EFI_GET_WAKEUP_TIME{
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
} TYPE__EFI_GET_WAKEUP_TIME;

TYPE__EFI_GET_WAKEUP_TIME TypeInfo__EFI_GET_WAKEUP_TIME = {
  .TypeName = "EFI_GET_WAKEUP_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_WAKEUP_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "BOOLEAN*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "BOOLEAN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_TIME*"
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


typedef struct _TYPE__EFI_SET_WAKEUP_TIME{
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
} TYPE__EFI_SET_WAKEUP_TIME;

TYPE__EFI_SET_WAKEUP_TIME TypeInfo__EFI_SET_WAKEUP_TIME = {
  .TypeName = "EFI_SET_WAKEUP_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_WAKEUP_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BOOLEAN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TIME*"
};


typedef struct _TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP{
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
} TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP;

TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP TypeInfo__EFI_SET_VIRTUAL_ADDRESS_MAP = {
  .TypeName = "EFI_SET_VIRTUAL_ADDRESS_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_VIRTUAL_ADDRESS_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_MEMORY_DESCRIPTOR*"
};


typedef struct _TYPE__EFI_MEMORY_DESCRIPTOR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_MEMORY_DESCRIPTOR_STAR;

TYPE__EFI_MEMORY_DESCRIPTOR_STAR TypeInfo__EFI_MEMORY_DESCRIPTOR_STAR = {
  .TypeName = "EFI_MEMORY_DESCRIPTOR*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_MEMORY_DESCRIPTOR*),
  .PointedType = "EFI_MEMORY_DESCRIPTOR"
};


typedef struct _TYPE__EFI_MEMORY_DESCRIPTOR{
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
} TYPE__EFI_MEMORY_DESCRIPTOR;

TYPE__EFI_MEMORY_DESCRIPTOR TypeInfo__EFI_MEMORY_DESCRIPTOR = {
  .TypeName = "EFI_MEMORY_DESCRIPTOR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_MEMORY_DESCRIPTOR),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "PhysicalStart",
  .StructFieldTypeName_2 = "EFI_PHYSICAL_ADDRESS",
  .StructFieldName_3 = "VirtualStart",
  .StructFieldTypeName_3 = "EFI_VIRTUAL_ADDRESS",
  .StructFieldName_4 = "NumberOfPages",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "Attribute",
  .StructFieldTypeName_5 = "UINT64"
};


typedef struct _TYPE__EFI_PHYSICAL_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_PHYSICAL_ADDRESS;

TYPE__EFI_PHYSICAL_ADDRESS TypeInfo__EFI_PHYSICAL_ADDRESS = {
  .TypeName = "EFI_PHYSICAL_ADDRESS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_PHYSICAL_ADDRESS),
  .BasicTypeName = "UINT64"
};


typedef struct _TYPE__EFI_VIRTUAL_ADDRESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_VIRTUAL_ADDRESS;

TYPE__EFI_VIRTUAL_ADDRESS TypeInfo__EFI_VIRTUAL_ADDRESS = {
  .TypeName = "EFI_VIRTUAL_ADDRESS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_VIRTUAL_ADDRESS),
  .BasicTypeName = "UINT64"
};


typedef struct _TYPE__EFI_CONVERT_POINTER{
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
} TYPE__EFI_CONVERT_POINTER;

TYPE__EFI_CONVERT_POINTER TypeInfo__EFI_CONVERT_POINTER = {
  .TypeName = "EFI_CONVERT_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONVERT_POINTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void**"
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


typedef struct _TYPE__EFI_GET_VARIABLE{
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
} TYPE__EFI_GET_VARIABLE;

TYPE__EFI_GET_VARIABLE TypeInfo__EFI_GET_VARIABLE = {
  .TypeName = "EFI_GET_VARIABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_VARIABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "void*"
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


typedef struct _TYPE__EFI_GET_NEXT_VARIABLE_NAME{
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
} TYPE__EFI_GET_NEXT_VARIABLE_NAME;

TYPE__EFI_GET_NEXT_VARIABLE_NAME TypeInfo__EFI_GET_NEXT_VARIABLE_NAME = {
  .TypeName = "EFI_GET_NEXT_VARIABLE_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_VARIABLE_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GUID*"
};


typedef struct _TYPE__EFI_SET_VARIABLE{
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
} TYPE__EFI_SET_VARIABLE;

TYPE__EFI_SET_VARIABLE TypeInfo__EFI_SET_VARIABLE = {
  .TypeName = "EFI_SET_VARIABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_VARIABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT;

TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT TypeInfo__EFI_GET_NEXT_HIGH_MONO_COUNT = {
  .TypeName = "EFI_GET_NEXT_HIGH_MONO_COUNT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_HIGH_MONO_COUNT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "UINT32*"
};


typedef struct _TYPE__EFI_RESET_SYSTEM{
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
} TYPE__EFI_RESET_SYSTEM;

TYPE__EFI_RESET_SYSTEM TypeInfo__EFI_RESET_SYSTEM = {
  .TypeName = "EFI_RESET_SYSTEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RESET_SYSTEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_RESET_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STATUS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_RESET_TYPE{
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
} TYPE__EFI_RESET_TYPE;

TYPE__EFI_RESET_TYPE TypeInfo__EFI_RESET_TYPE = {
  .TypeName = "EFI_RESET_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_RESET_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiResetCold",
  .EnumValue_1 = EfiResetCold,
  .EnumValueName_2 = "EfiResetWarm",
  .EnumValue_2 = EfiResetWarm,
  .EnumValueName_3 = "EfiResetShutdown",
  .EnumValue_3 = EfiResetShutdown,
  .EnumValueName_4 = "EfiResetPlatformSpecific",
  .EnumValue_4 = EfiResetPlatformSpecific
};


typedef struct _TYPE__EFI_UPDATE_CAPSULE{
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
} TYPE__EFI_UPDATE_CAPSULE;

TYPE__EFI_UPDATE_CAPSULE TypeInfo__EFI_UPDATE_CAPSULE = {
  .TypeName = "EFI_UPDATE_CAPSULE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UPDATE_CAPSULE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CAPSULE_HEADER**",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PHYSICAL_ADDRESS"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CAPSULE_HEADER_STAR_STAR;

TYPE__EFI_CAPSULE_HEADER_STAR_STAR TypeInfo__EFI_CAPSULE_HEADER_STAR_STAR = {
  .TypeName = "EFI_CAPSULE_HEADER**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER**),
  .PointedType = "EFI_CAPSULE_HEADER*"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CAPSULE_HEADER_STAR;

TYPE__EFI_CAPSULE_HEADER_STAR TypeInfo__EFI_CAPSULE_HEADER_STAR = {
  .TypeName = "EFI_CAPSULE_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER*),
  .PointedType = "EFI_CAPSULE_HEADER"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER{
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
} TYPE__EFI_CAPSULE_HEADER;

TYPE__EFI_CAPSULE_HEADER TypeInfo__EFI_CAPSULE_HEADER = {
  .TypeName = "EFI_CAPSULE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER),
  .StructFieldNum = 4,
  .StructFieldName_1 = "CapsuleGuid",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "HeaderSize",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Flags",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "CapsuleImageSize",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_QUERY_CAPSULE_CAPABILITIES{
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
} TYPE__EFI_QUERY_CAPSULE_CAPABILITIES;

TYPE__EFI_QUERY_CAPSULE_CAPABILITIES TypeInfo__EFI_QUERY_CAPSULE_CAPABILITIES = {
  .TypeName = "EFI_QUERY_CAPSULE_CAPABILITIES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_QUERY_CAPSULE_CAPABILITIES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CAPSULE_HEADER**",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_RESET_TYPE*"
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


typedef struct _TYPE__EFI_RESET_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_RESET_TYPE_STAR;

TYPE__EFI_RESET_TYPE_STAR TypeInfo__EFI_RESET_TYPE_STAR = {
  .TypeName = "EFI_RESET_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_RESET_TYPE*),
  .PointedType = "EFI_RESET_TYPE"
};


typedef struct _TYPE__EFI_QUERY_VARIABLE_INFO{
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
} TYPE__EFI_QUERY_VARIABLE_INFO;

TYPE__EFI_QUERY_VARIABLE_INFO TypeInfo__EFI_QUERY_VARIABLE_INFO = {
  .TypeName = "EFI_QUERY_VARIABLE_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_QUERY_VARIABLE_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT64*"
};


typedef struct _TYPE__EFI_BOOT_SERVICES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BOOT_SERVICES_STAR;

TYPE__EFI_BOOT_SERVICES_STAR TypeInfo__EFI_BOOT_SERVICES_STAR = {
  .TypeName = "EFI_BOOT_SERVICES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BOOT_SERVICES*),
  .PointedType = "EFI_BOOT_SERVICES"
};


typedef struct _TYPE__EFI_BOOT_SERVICES{
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
} TYPE__EFI_BOOT_SERVICES;

TYPE__EFI_BOOT_SERVICES TypeInfo__EFI_BOOT_SERVICES = {
  .TypeName = "EFI_BOOT_SERVICES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BOOT_SERVICES),
  .StructFieldNum = 45,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "RaiseTPL",
  .StructFieldTypeName_2 = "EFI_RAISE_TPL",
  .StructFieldName_3 = "RestoreTPL",
  .StructFieldTypeName_3 = "EFI_RESTORE_TPL",
  .StructFieldName_4 = "AllocatePages",
  .StructFieldTypeName_4 = "EFI_ALLOCATE_PAGES",
  .StructFieldName_5 = "FreePages",
  .StructFieldTypeName_5 = "EFI_FREE_PAGES",
  .StructFieldName_6 = "GetMemoryMap",
  .StructFieldTypeName_6 = "EFI_GET_MEMORY_MAP",
  .StructFieldName_7 = "AllocatePool",
  .StructFieldTypeName_7 = "EFI_ALLOCATE_POOL",
  .StructFieldName_8 = "FreePool",
  .StructFieldTypeName_8 = "EFI_FREE_POOL",
  .StructFieldName_9 = "CreateEvent",
  .StructFieldTypeName_9 = "EFI_CREATE_EVENT",
  .StructFieldName_10 = "SetTimer",
  .StructFieldTypeName_10 = "EFI_SET_TIMER",
  .StructFieldName_11 = "WaitForEvent",
  .StructFieldTypeName_11 = "EFI_WAIT_FOR_EVENT",
  .StructFieldName_12 = "SignalEvent",
  .StructFieldTypeName_12 = "EFI_SIGNAL_EVENT",
  .StructFieldName_13 = "CloseEvent",
  .StructFieldTypeName_13 = "EFI_CLOSE_EVENT",
  .StructFieldName_14 = "CheckEvent",
  .StructFieldTypeName_14 = "EFI_CHECK_EVENT",
  .StructFieldName_15 = "InstallProtocolInterface",
  .StructFieldTypeName_15 = "EFI_INSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_16 = "ReinstallProtocolInterface",
  .StructFieldTypeName_16 = "EFI_REINSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_17 = "UninstallProtocolInterface",
  .StructFieldTypeName_17 = "EFI_UNINSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_18 = "HandleProtocol",
  .StructFieldTypeName_18 = "EFI_HANDLE_PROTOCOL",
  .StructFieldName_19 = "Reserved",
  .StructFieldTypeName_19 = "void*",
  .StructFieldName_20 = "RegisterProtocolNotify",
  .StructFieldTypeName_20 = "EFI_REGISTER_PROTOCOL_NOTIFY",
  .StructFieldName_21 = "LocateHandle",
  .StructFieldTypeName_21 = "EFI_LOCATE_HANDLE",
  .StructFieldName_22 = "LocateDevicePath",
  .StructFieldTypeName_22 = "EFI_LOCATE_DEVICE_PATH",
  .StructFieldName_23 = "InstallConfigurationTable",
  .StructFieldTypeName_23 = "EFI_INSTALL_CONFIGURATION_TABLE",
  .StructFieldName_24 = "LoadImage",
  .StructFieldTypeName_24 = "EFI_IMAGE_LOAD",
  .StructFieldName_25 = "StartImage",
  .StructFieldTypeName_25 = "EFI_IMAGE_START",
  .StructFieldName_26 = "Exit",
  .StructFieldTypeName_26 = "EFI_EXIT",
  .StructFieldName_27 = "UnloadImage",
  .StructFieldTypeName_27 = "EFI_IMAGE_UNLOAD",
  .StructFieldName_28 = "ExitBootServices",
  .StructFieldTypeName_28 = "EFI_EXIT_BOOT_SERVICES",
  .StructFieldName_29 = "GetNextMonotonicCount",
  .StructFieldTypeName_29 = "EFI_GET_NEXT_MONOTONIC_COUNT",
  .StructFieldName_30 = "Stall",
  .StructFieldTypeName_30 = "EFI_STALL",
  .StructFieldName_31 = "SetWatchdogTimer",
  .StructFieldTypeName_31 = "EFI_SET_WATCHDOG_TIMER",
  .StructFieldName_32 = "ConnectController",
  .StructFieldTypeName_32 = "EFI_CONNECT_CONTROLLER",
  .StructFieldName_33 = "DisconnectController",
  .StructFieldTypeName_33 = "EFI_DISCONNECT_CONTROLLER",
  .StructFieldName_34 = "OpenProtocol",
  .StructFieldTypeName_34 = "EFI_OPEN_PROTOCOL",
  .StructFieldName_35 = "CloseProtocol",
  .StructFieldTypeName_35 = "EFI_CLOSE_PROTOCOL",
  .StructFieldName_36 = "OpenProtocolInformation",
  .StructFieldTypeName_36 = "EFI_OPEN_PROTOCOL_INFORMATION",
  .StructFieldName_37 = "ProtocolsPerHandle",
  .StructFieldTypeName_37 = "EFI_PROTOCOLS_PER_HANDLE",
  .StructFieldName_38 = "LocateHandleBuffer",
  .StructFieldTypeName_38 = "EFI_LOCATE_HANDLE_BUFFER",
  .StructFieldName_39 = "LocateProtocol",
  .StructFieldTypeName_39 = "EFI_LOCATE_PROTOCOL",
  .StructFieldName_40 = "InstallMultipleProtocolInterfaces",
  .StructFieldTypeName_40 = "EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .StructFieldName_41 = "UninstallMultipleProtocolInterfaces",
  .StructFieldTypeName_41 = "EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .StructFieldName_42 = "CalculateCrc32",
  .StructFieldTypeName_42 = "EFI_CALCULATE_CRC32",
  .StructFieldName_43 = "CopyMem",
  .StructFieldTypeName_43 = "EFI_COPY_MEM",
  .StructFieldName_44 = "SetMem",
  .StructFieldTypeName_44 = "EFI_SET_MEM",
  .StructFieldName_45 = "CreateEventEx",
  .StructFieldTypeName_45 = "EFI_CREATE_EVENT_EX"
};


typedef struct _TYPE__EFI_RAISE_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_RAISE_TPL;

TYPE__EFI_RAISE_TPL TypeInfo__EFI_RAISE_TPL = {
  .TypeName = "EFI_RAISE_TPL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RAISE_TPL),
  .ReturnType = "EFI_TPL",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TPL"
};


typedef struct _TYPE__EFI_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_TPL;

TYPE__EFI_TPL TypeInfo__EFI_TPL = {
  .TypeName = "EFI_TPL",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_TPL),
  .BasicTypeName = "UINTN"
};


typedef struct _TYPE__EFI_RESTORE_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_RESTORE_TPL;

TYPE__EFI_RESTORE_TPL TypeInfo__EFI_RESTORE_TPL = {
  .TypeName = "EFI_RESTORE_TPL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RESTORE_TPL),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TPL"
};


typedef struct _TYPE__EFI_ALLOCATE_PAGES{
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
} TYPE__EFI_ALLOCATE_PAGES;

TYPE__EFI_ALLOCATE_PAGES TypeInfo__EFI_ALLOCATE_PAGES = {
  .TypeName = "EFI_ALLOCATE_PAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ALLOCATE_PAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ALLOCATE_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MEMORY_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_PHYSICAL_ADDRESS*"
};


typedef struct _TYPE__EFI_ALLOCATE_TYPE{
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
} TYPE__EFI_ALLOCATE_TYPE;

TYPE__EFI_ALLOCATE_TYPE TypeInfo__EFI_ALLOCATE_TYPE = {
  .TypeName = "EFI_ALLOCATE_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_ALLOCATE_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "AllocateAnyPages",
  .EnumValue_1 = AllocateAnyPages,
  .EnumValueName_2 = "AllocateMaxAddress",
  .EnumValue_2 = AllocateMaxAddress,
  .EnumValueName_3 = "AllocateAddress",
  .EnumValue_3 = AllocateAddress,
  .EnumValueName_4 = "MaxAllocateType",
  .EnumValue_4 = MaxAllocateType
};


typedef struct _TYPE__EFI_MEMORY_TYPE{
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
  const CHAR8* EnumValueName_13;
  const UINTN EnumValue_13;
  const CHAR8* EnumValueName_14;
  const UINTN EnumValue_14;
  const CHAR8* EnumValueName_15;
  const UINTN EnumValue_15;
  const CHAR8* EnumValueName_16;
  const UINTN EnumValue_16;
} TYPE__EFI_MEMORY_TYPE;

TYPE__EFI_MEMORY_TYPE TypeInfo__EFI_MEMORY_TYPE = {
  .TypeName = "EFI_MEMORY_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_MEMORY_TYPE),
  .EnumValueNum = 16,
  .EnumValueName_1 = "EfiReservedMemoryType",
  .EnumValue_1 = EfiReservedMemoryType,
  .EnumValueName_2 = "EfiLoaderCode",
  .EnumValue_2 = EfiLoaderCode,
  .EnumValueName_3 = "EfiLoaderData",
  .EnumValue_3 = EfiLoaderData,
  .EnumValueName_4 = "EfiBootServicesCode",
  .EnumValue_4 = EfiBootServicesCode,
  .EnumValueName_5 = "EfiBootServicesData",
  .EnumValue_5 = EfiBootServicesData,
  .EnumValueName_6 = "EfiRuntimeServicesCode",
  .EnumValue_6 = EfiRuntimeServicesCode,
  .EnumValueName_7 = "EfiRuntimeServicesData",
  .EnumValue_7 = EfiRuntimeServicesData,
  .EnumValueName_8 = "EfiConventionalMemory",
  .EnumValue_8 = EfiConventionalMemory,
  .EnumValueName_9 = "EfiUnusableMemory",
  .EnumValue_9 = EfiUnusableMemory,
  .EnumValueName_10 = "EfiACPIReclaimMemory",
  .EnumValue_10 = EfiACPIReclaimMemory,
  .EnumValueName_11 = "EfiACPIMemoryNVS",
  .EnumValue_11 = EfiACPIMemoryNVS,
  .EnumValueName_12 = "EfiMemoryMappedIO",
  .EnumValue_12 = EfiMemoryMappedIO,
  .EnumValueName_13 = "EfiMemoryMappedIOPortSpace",
  .EnumValue_13 = EfiMemoryMappedIOPortSpace,
  .EnumValueName_14 = "EfiPalCode",
  .EnumValue_14 = EfiPalCode,
  .EnumValueName_15 = "EfiPersistentMemory",
  .EnumValue_15 = EfiPersistentMemory,
  .EnumValueName_16 = "EfiMaxMemoryType",
  .EnumValue_16 = EfiMaxMemoryType
};


typedef struct _TYPE__EFI_PHYSICAL_ADDRESS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PHYSICAL_ADDRESS_STAR;

TYPE__EFI_PHYSICAL_ADDRESS_STAR TypeInfo__EFI_PHYSICAL_ADDRESS_STAR = {
  .TypeName = "EFI_PHYSICAL_ADDRESS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PHYSICAL_ADDRESS*),
  .PointedType = "EFI_PHYSICAL_ADDRESS"
};


typedef struct _TYPE__EFI_FREE_PAGES{
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
} TYPE__EFI_FREE_PAGES;

TYPE__EFI_FREE_PAGES TypeInfo__EFI_FREE_PAGES = {
  .TypeName = "EFI_FREE_PAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FREE_PAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_GET_MEMORY_MAP{
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
} TYPE__EFI_GET_MEMORY_MAP;

TYPE__EFI_GET_MEMORY_MAP TypeInfo__EFI_GET_MEMORY_MAP = {
  .TypeName = "EFI_GET_MEMORY_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_MEMORY_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MEMORY_DESCRIPTOR*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT32*"
};


typedef struct _TYPE__EFI_ALLOCATE_POOL{
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
} TYPE__EFI_ALLOCATE_POOL;

TYPE__EFI_ALLOCATE_POOL TypeInfo__EFI_ALLOCATE_POOL = {
  .TypeName = "EFI_ALLOCATE_POOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ALLOCATE_POOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MEMORY_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_FREE_POOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_FREE_POOL;

TYPE__EFI_FREE_POOL TypeInfo__EFI_FREE_POOL = {
  .TypeName = "EFI_FREE_POOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FREE_POOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*"
};


typedef struct _TYPE__EFI_CREATE_EVENT{
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
} TYPE__EFI_CREATE_EVENT;

TYPE__EFI_CREATE_EVENT TypeInfo__EFI_CREATE_EVENT = {
  .TypeName = "EFI_CREATE_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CREATE_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TPL",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT_NOTIFY",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_EVENT*"
};


typedef struct _TYPE__EFI_EVENT_NOTIFY{
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
} TYPE__EFI_EVENT_NOTIFY;

TYPE__EFI_EVENT_NOTIFY TypeInfo__EFI_EVENT_NOTIFY = {
  .TypeName = "EFI_EVENT_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EVENT_NOTIFY),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_EVENT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EVENT_STAR;

TYPE__EFI_EVENT_STAR TypeInfo__EFI_EVENT_STAR = {
  .TypeName = "EFI_EVENT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EVENT*),
  .PointedType = "EFI_EVENT"
};


typedef struct _TYPE__EFI_SET_TIMER{
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
} TYPE__EFI_SET_TIMER;

TYPE__EFI_SET_TIMER TypeInfo__EFI_SET_TIMER = {
  .TypeName = "EFI_SET_TIMER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_TIMER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TIMER_DELAY",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__EFI_TIMER_DELAY{
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
} TYPE__EFI_TIMER_DELAY;

TYPE__EFI_TIMER_DELAY TypeInfo__EFI_TIMER_DELAY = {
  .TypeName = "EFI_TIMER_DELAY",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_TIMER_DELAY),
  .EnumValueNum = 3,
  .EnumValueName_1 = "TimerCancel",
  .EnumValue_1 = TimerCancel,
  .EnumValueName_2 = "TimerPeriodic",
  .EnumValue_2 = TimerPeriodic,
  .EnumValueName_3 = "TimerRelative",
  .EnumValue_3 = TimerRelative
};


typedef struct _TYPE__EFI_WAIT_FOR_EVENT{
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
} TYPE__EFI_WAIT_FOR_EVENT;

TYPE__EFI_WAIT_FOR_EVENT TypeInfo__EFI_WAIT_FOR_EVENT = {
  .TypeName = "EFI_WAIT_FOR_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_WAIT_FOR_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_EVENT*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*"
};


typedef struct _TYPE__EFI_SIGNAL_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SIGNAL_EVENT;

TYPE__EFI_SIGNAL_EVENT TypeInfo__EFI_SIGNAL_EVENT = {
  .TypeName = "EFI_SIGNAL_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIGNAL_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_CLOSE_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CLOSE_EVENT;

TYPE__EFI_CLOSE_EVENT TypeInfo__EFI_CLOSE_EVENT = {
  .TypeName = "EFI_CLOSE_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CLOSE_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_CHECK_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CHECK_EVENT;

TYPE__EFI_CHECK_EVENT TypeInfo__EFI_CHECK_EVENT = {
  .TypeName = "EFI_CHECK_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CHECK_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_INSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_INSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_INSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_INSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_INSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_INTERFACE_TYPE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
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


typedef struct _TYPE__EFI_INTERFACE_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
} TYPE__EFI_INTERFACE_TYPE;

TYPE__EFI_INTERFACE_TYPE TypeInfo__EFI_INTERFACE_TYPE = {
  .TypeName = "EFI_INTERFACE_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_INTERFACE_TYPE),
  .EnumValueNum = 1,
  .EnumValueName_1 = "EFI_NATIVE_INTERFACE",
  .EnumValue_1 = EFI_NATIVE_INTERFACE
};


typedef struct _TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_REINSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_REINSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REINSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_UNINSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_UNINSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNINSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_HANDLE_PROTOCOL{
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
} TYPE__EFI_HANDLE_PROTOCOL;

TYPE__EFI_HANDLE_PROTOCOL TypeInfo__EFI_HANDLE_PROTOCOL = {
  .TypeName = "EFI_HANDLE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HANDLE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_REGISTER_PROTOCOL_NOTIFY{
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
} TYPE__EFI_REGISTER_PROTOCOL_NOTIFY;

TYPE__EFI_REGISTER_PROTOCOL_NOTIFY TypeInfo__EFI_REGISTER_PROTOCOL_NOTIFY = {
  .TypeName = "EFI_REGISTER_PROTOCOL_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_PROTOCOL_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_EVENT",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_LOCATE_HANDLE{
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
} TYPE__EFI_LOCATE_HANDLE;

TYPE__EFI_LOCATE_HANDLE TypeInfo__EFI_LOCATE_HANDLE = {
  .TypeName = "EFI_LOCATE_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOCATE_SEARCH_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_LOCATE_SEARCH_TYPE{
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
} TYPE__EFI_LOCATE_SEARCH_TYPE;

TYPE__EFI_LOCATE_SEARCH_TYPE TypeInfo__EFI_LOCATE_SEARCH_TYPE = {
  .TypeName = "EFI_LOCATE_SEARCH_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_LOCATE_SEARCH_TYPE),
  .EnumValueNum = 3,
  .EnumValueName_1 = "AllHandles",
  .EnumValue_1 = AllHandles,
  .EnumValueName_2 = "ByRegisterNotify",
  .EnumValue_2 = ByRegisterNotify,
  .EnumValueName_3 = "ByProtocol",
  .EnumValue_3 = ByProtocol
};


typedef struct _TYPE__EFI_LOCATE_DEVICE_PATH{
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
} TYPE__EFI_LOCATE_DEVICE_PATH;

TYPE__EFI_LOCATE_DEVICE_PATH TypeInfo__EFI_LOCATE_DEVICE_PATH = {
  .TypeName = "EFI_LOCATE_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_DEVICE_PATH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL**",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_HANDLE*"
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


typedef struct _TYPE__EFI_INSTALL_CONFIGURATION_TABLE{
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
} TYPE__EFI_INSTALL_CONFIGURATION_TABLE;

TYPE__EFI_INSTALL_CONFIGURATION_TABLE TypeInfo__EFI_INSTALL_CONFIGURATION_TABLE = {
  .TypeName = "EFI_INSTALL_CONFIGURATION_TABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_CONFIGURATION_TABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_IMAGE_LOAD{
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
} TYPE__EFI_IMAGE_LOAD;

TYPE__EFI_IMAGE_LOAD TypeInfo__EFI_IMAGE_LOAD = {
  .TypeName = "EFI_IMAGE_LOAD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_LOAD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BOOLEAN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_IMAGE_START{
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
} TYPE__EFI_IMAGE_START;

TYPE__EFI_IMAGE_START TypeInfo__EFI_IMAGE_START = {
  .TypeName = "EFI_IMAGE_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
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


typedef struct _TYPE__EFI_EXIT{
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
} TYPE__EFI_EXIT;

TYPE__EFI_EXIT TypeInfo__EFI_EXIT = {
  .TypeName = "EFI_EXIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STATUS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR16*"
};


typedef struct _TYPE__EFI_IMAGE_UNLOAD{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_IMAGE_UNLOAD;

TYPE__EFI_IMAGE_UNLOAD TypeInfo__EFI_IMAGE_UNLOAD = {
  .TypeName = "EFI_IMAGE_UNLOAD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_UNLOAD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_EXIT_BOOT_SERVICES{
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
} TYPE__EFI_EXIT_BOOT_SERVICES;

TYPE__EFI_EXIT_BOOT_SERVICES TypeInfo__EFI_EXIT_BOOT_SERVICES = {
  .TypeName = "EFI_EXIT_BOOT_SERVICES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXIT_BOOT_SERVICES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_GET_NEXT_MONOTONIC_COUNT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_GET_NEXT_MONOTONIC_COUNT;

TYPE__EFI_GET_NEXT_MONOTONIC_COUNT TypeInfo__EFI_GET_NEXT_MONOTONIC_COUNT = {
  .TypeName = "EFI_GET_NEXT_MONOTONIC_COUNT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_MONOTONIC_COUNT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "UINT64*"
};


typedef struct _TYPE__EFI_STALL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_STALL;

TYPE__EFI_STALL TypeInfo__EFI_STALL = {
  .TypeName = "EFI_STALL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_STALL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
};


typedef struct _TYPE__EFI_SET_WATCHDOG_TIMER{
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
} TYPE__EFI_SET_WATCHDOG_TIMER;

TYPE__EFI_SET_WATCHDOG_TIMER TypeInfo__EFI_SET_WATCHDOG_TIMER = {
  .TypeName = "EFI_SET_WATCHDOG_TIMER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_WATCHDOG_TIMER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR16*"
};


typedef struct _TYPE__EFI_CONNECT_CONTROLLER{
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
} TYPE__EFI_CONNECT_CONTROLLER;

TYPE__EFI_CONNECT_CONTROLLER TypeInfo__EFI_CONNECT_CONTROLLER = {
  .TypeName = "EFI_CONNECT_CONTROLLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONNECT_CONTROLLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN"
};


typedef struct _TYPE__EFI_DISCONNECT_CONTROLLER{
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
} TYPE__EFI_DISCONNECT_CONTROLLER;

TYPE__EFI_DISCONNECT_CONTROLLER TypeInfo__EFI_DISCONNECT_CONTROLLER = {
  .TypeName = "EFI_DISCONNECT_CONTROLLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISCONNECT_CONTROLLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL{
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
} TYPE__EFI_OPEN_PROTOCOL;

TYPE__EFI_OPEN_PROTOCOL TypeInfo__EFI_OPEN_PROTOCOL = {
  .TypeName = "EFI_OPEN_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_HANDLE",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT32"
};


typedef struct _TYPE__EFI_CLOSE_PROTOCOL{
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
} TYPE__EFI_CLOSE_PROTOCOL;

TYPE__EFI_CLOSE_PROTOCOL TypeInfo__EFI_CLOSE_PROTOCOL = {
  .TypeName = "EFI_CLOSE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CLOSE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION{
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
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**),
  .PointedType = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*),
  .PointedType = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY{
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
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY),
  .StructFieldNum = 4,
  .StructFieldName_1 = "AgentHandle",
  .StructFieldTypeName_1 = "EFI_HANDLE",
  .StructFieldName_2 = "ControllerHandle",
  .StructFieldTypeName_2 = "EFI_HANDLE",
  .StructFieldName_3 = "Attributes",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "OpenCount",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_PROTOCOLS_PER_HANDLE{
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
} TYPE__EFI_PROTOCOLS_PER_HANDLE;

TYPE__EFI_PROTOCOLS_PER_HANDLE TypeInfo__EFI_PROTOCOLS_PER_HANDLE = {
  .TypeName = "EFI_PROTOCOLS_PER_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PROTOCOLS_PER_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_GUID***",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*"
};


typedef struct _TYPE__EFI_GUID_STAR_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR_STAR_STAR;

TYPE__EFI_GUID_STAR_STAR_STAR TypeInfo__EFI_GUID_STAR_STAR_STAR = {
  .TypeName = "EFI_GUID***",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID***),
  .PointedType = "EFI_GUID**"
};


typedef struct _TYPE__EFI_GUID_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR_STAR;

TYPE__EFI_GUID_STAR_STAR TypeInfo__EFI_GUID_STAR_STAR = {
  .TypeName = "EFI_GUID**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID**),
  .PointedType = "EFI_GUID*"
};


typedef struct _TYPE__EFI_LOCATE_HANDLE_BUFFER{
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
} TYPE__EFI_LOCATE_HANDLE_BUFFER;

TYPE__EFI_LOCATE_HANDLE_BUFFER TypeInfo__EFI_LOCATE_HANDLE_BUFFER = {
  .TypeName = "EFI_LOCATE_HANDLE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_HANDLE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOCATE_SEARCH_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HANDLE**"
};


typedef struct _TYPE__EFI_HANDLE_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HANDLE_STAR_STAR;

TYPE__EFI_HANDLE_STAR_STAR TypeInfo__EFI_HANDLE_STAR_STAR = {
  .TypeName = "EFI_HANDLE**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HANDLE**),
  .PointedType = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_LOCATE_PROTOCOL{
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
} TYPE__EFI_LOCATE_PROTOCOL;

TYPE__EFI_LOCATE_PROTOCOL TypeInfo__EFI_LOCATE_PROTOCOL = {
  .TypeName = "EFI_LOCATE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES;

TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES TypeInfo__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES = {
  .TypeName = "EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = TRUE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES;

TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES TypeInfo__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES = {
  .TypeName = "EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = TRUE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_CALCULATE_CRC32{
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
} TYPE__EFI_CALCULATE_CRC32;

TYPE__EFI_CALCULATE_CRC32 TypeInfo__EFI_CALCULATE_CRC32 = {
  .TypeName = "EFI_CALCULATE_CRC32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CALCULATE_CRC32),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__EFI_COPY_MEM{
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
} TYPE__EFI_COPY_MEM;

TYPE__EFI_COPY_MEM TypeInfo__EFI_COPY_MEM = {
  .TypeName = "EFI_COPY_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COPY_MEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_SET_MEM{
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
} TYPE__EFI_SET_MEM;

TYPE__EFI_SET_MEM TypeInfo__EFI_SET_MEM = {
  .TypeName = "EFI_SET_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_MEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_CREATE_EVENT_EX{
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
} TYPE__EFI_CREATE_EVENT_EX;

TYPE__EFI_CREATE_EVENT_EX TypeInfo__EFI_CREATE_EVENT_EX = {
  .TypeName = "EFI_CREATE_EVENT_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CREATE_EVENT_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TPL",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT_NOTIFY",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_GUID*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_EVENT*"
};


typedef struct _TYPE__EFI_CONFIGURATION_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CONFIGURATION_TABLE_STAR;

TYPE__EFI_CONFIGURATION_TABLE_STAR TypeInfo__EFI_CONFIGURATION_TABLE_STAR = {
  .TypeName = "EFI_CONFIGURATION_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CONFIGURATION_TABLE*),
  .PointedType = "EFI_CONFIGURATION_TABLE"
};


typedef struct _TYPE__EFI_CONFIGURATION_TABLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_CONFIGURATION_TABLE;

TYPE__EFI_CONFIGURATION_TABLE TypeInfo__EFI_CONFIGURATION_TABLE = {
  .TypeName = "EFI_CONFIGURATION_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CONFIGURATION_TABLE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "VendorGuid",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "VendorTable",
  .StructFieldTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_SHELL_PARAMETERS_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SHELL_PARAMETERS_PROTOCOL_STAR;

TYPE__EFI_SHELL_PARAMETERS_PROTOCOL_STAR TypeInfo__EFI_SHELL_PARAMETERS_PROTOCOL_STAR = {
  .TypeName = "EFI_SHELL_PARAMETERS_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SHELL_PARAMETERS_PROTOCOL*),
  .PointedType = "EFI_SHELL_PARAMETERS_PROTOCOL"
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


typedef struct _TYPE__EFI_SHELL_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SHELL_PROTOCOL_STAR;

TYPE__EFI_SHELL_PROTOCOL_STAR TypeInfo__EFI_SHELL_PROTOCOL_STAR = {
  .TypeName = "EFI_SHELL_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SHELL_PROTOCOL*),
  .PointedType = "EFI_SHELL_PROTOCOL"
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


typedef struct _TYPE__SHELL_COMMAND_GETHELP{
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
} TYPE__SHELL_COMMAND_GETHELP;

TYPE__SHELL_COMMAND_GETHELP TypeInfo__SHELL_COMMAND_GETHELP = {
  .TypeName = "SHELL_COMMAND_GETHELP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(SHELL_COMMAND_GETHELP),
  .ReturnType = "CHAR16*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiHiiPackageListProtocolGuid,
  &TypeInfo__gEfiShellInterfaceGuid,
  &TypeInfo__gEfiShellEnvironment2Guid,
  &TypeInfo__gEfiShellParametersProtocolGuid,
  &TypeInfo__gEfiSimpleFileSystemProtocolGuid,
  &TypeInfo__gEfiShellProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiShellDynamicCommandProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiShellProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
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
  &TypeInfo__gEfiShellDynamicCommandProtocolGuid,
  &TypeInfo__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__SHELL_COMMAND_HANDLER,
  &TypeInfo__SHELL_STATUS,
  &TypeInfo__EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL_STAR,
  &TypeInfo__EFI_SYSTEM_TABLE_STAR,
  &TypeInfo__EFI_SYSTEM_TABLE,
  &TypeInfo__EFI_TABLE_HEADER,
  &TypeInfo__UINT64,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL,
  &TypeInfo__EFI_INPUT_RESET,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_INPUT_READ_KEY,
  &TypeInfo__EFI_INPUT_KEY_STAR,
  &TypeInfo__EFI_INPUT_KEY,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL,
  &TypeInfo__EFI_TEXT_RESET,
  &TypeInfo__EFI_TEXT_STRING,
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
  &TypeInfo__EFI_RUNTIME_SERVICES_STAR,
  &TypeInfo__EFI_RUNTIME_SERVICES,
  &TypeInfo__EFI_GET_TIME,
  &TypeInfo__EFI_TIME_STAR,
  &TypeInfo__EFI_TIME,
  &TypeInfo__UINT8,
  &TypeInfo__INT16,
  &TypeInfo__EFI_TIME_CAPABILITIES_STAR,
  &TypeInfo__EFI_TIME_CAPABILITIES,
  &TypeInfo__EFI_SET_TIME,
  &TypeInfo__EFI_GET_WAKEUP_TIME,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__EFI_SET_WAKEUP_TIME,
  &TypeInfo__EFI_SET_VIRTUAL_ADDRESS_MAP,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR_STAR,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__EFI_VIRTUAL_ADDRESS,
  &TypeInfo__EFI_CONVERT_POINTER,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_GET_VARIABLE,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_GET_NEXT_VARIABLE_NAME,
  &TypeInfo__EFI_SET_VARIABLE,
  &TypeInfo__EFI_GET_NEXT_HIGH_MONO_COUNT,
  &TypeInfo__EFI_RESET_SYSTEM,
  &TypeInfo__EFI_RESET_TYPE,
  &TypeInfo__EFI_UPDATE_CAPSULE,
  &TypeInfo__EFI_CAPSULE_HEADER_STAR_STAR,
  &TypeInfo__EFI_CAPSULE_HEADER_STAR,
  &TypeInfo__EFI_CAPSULE_HEADER,
  &TypeInfo__EFI_QUERY_CAPSULE_CAPABILITIES,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_RESET_TYPE_STAR,
  &TypeInfo__EFI_QUERY_VARIABLE_INFO,
  &TypeInfo__EFI_BOOT_SERVICES_STAR,
  &TypeInfo__EFI_BOOT_SERVICES,
  &TypeInfo__EFI_RAISE_TPL,
  &TypeInfo__EFI_TPL,
  &TypeInfo__EFI_RESTORE_TPL,
  &TypeInfo__EFI_ALLOCATE_PAGES,
  &TypeInfo__EFI_ALLOCATE_TYPE,
  &TypeInfo__EFI_MEMORY_TYPE,
  &TypeInfo__EFI_PHYSICAL_ADDRESS_STAR,
  &TypeInfo__EFI_FREE_PAGES,
  &TypeInfo__EFI_GET_MEMORY_MAP,
  &TypeInfo__EFI_ALLOCATE_POOL,
  &TypeInfo__EFI_FREE_POOL,
  &TypeInfo__EFI_CREATE_EVENT,
  &TypeInfo__EFI_EVENT_NOTIFY,
  &TypeInfo__EFI_EVENT_STAR,
  &TypeInfo__EFI_SET_TIMER,
  &TypeInfo__EFI_TIMER_DELAY,
  &TypeInfo__EFI_WAIT_FOR_EVENT,
  &TypeInfo__EFI_SIGNAL_EVENT,
  &TypeInfo__EFI_CLOSE_EVENT,
  &TypeInfo__EFI_CHECK_EVENT,
  &TypeInfo__EFI_INSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_INTERFACE_TYPE,
  &TypeInfo__EFI_REINSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_UNINSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_HANDLE_PROTOCOL,
  &TypeInfo__EFI_REGISTER_PROTOCOL_NOTIFY,
  &TypeInfo__EFI_LOCATE_HANDLE,
  &TypeInfo__EFI_LOCATE_SEARCH_TYPE,
  &TypeInfo__EFI_LOCATE_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_INSTALL_CONFIGURATION_TABLE,
  &TypeInfo__EFI_IMAGE_LOAD,
  &TypeInfo__EFI_IMAGE_START,
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__EFI_EXIT,
  &TypeInfo__EFI_IMAGE_UNLOAD,
  &TypeInfo__EFI_EXIT_BOOT_SERVICES,
  &TypeInfo__EFI_GET_NEXT_MONOTONIC_COUNT,
  &TypeInfo__EFI_STALL,
  &TypeInfo__EFI_SET_WATCHDOG_TIMER,
  &TypeInfo__EFI_CONNECT_CONTROLLER,
  &TypeInfo__EFI_DISCONNECT_CONTROLLER,
  &TypeInfo__EFI_OPEN_PROTOCOL,
  &TypeInfo__EFI_CLOSE_PROTOCOL,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY,
  &TypeInfo__EFI_PROTOCOLS_PER_HANDLE,
  &TypeInfo__EFI_GUID_STAR_STAR_STAR,
  &TypeInfo__EFI_GUID_STAR_STAR,
  &TypeInfo__EFI_LOCATE_HANDLE_BUFFER,
  &TypeInfo__EFI_HANDLE_STAR_STAR,
  &TypeInfo__EFI_LOCATE_PROTOCOL,
  &TypeInfo__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES,
  &TypeInfo__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES,
  &TypeInfo__EFI_CALCULATE_CRC32,
  &TypeInfo__EFI_COPY_MEM,
  &TypeInfo__EFI_SET_MEM,
  &TypeInfo__EFI_CREATE_EVENT_EX,
  &TypeInfo__EFI_CONFIGURATION_TABLE_STAR,
  &TypeInfo__EFI_CONFIGURATION_TABLE,
  &TypeInfo__EFI_SHELL_PARAMETERS_PROTOCOL_STAR,
  &TypeInfo__EFI_SHELL_PARAMETERS_PROTOCOL,
  &TypeInfo__SHELL_FILE_HANDLE,
  &TypeInfo__EFI_SHELL_PROTOCOL_STAR,
  &TypeInfo__EFI_SHELL_PROTOCOL,
  &TypeInfo__EFI_SHELL_EXECUTE,
  &TypeInfo__EFI_STATUS_STAR,
  &TypeInfo__EFI_SHELL_GET_ENV,
  &TypeInfo__EFI_SHELL_SET_ENV,
  &TypeInfo__EFI_SHELL_GET_ALIAS,
  &TypeInfo__EFI_SHELL_SET_ALIAS,
  &TypeInfo__EFI_SHELL_GET_HELP_TEXT,
  &TypeInfo__EFI_SHELL_GET_DEVICE_PATH_FROM_MAP,
  &TypeInfo__EFI_SHELL_GET_MAP_FROM_DEVICE_PATH,
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
  &TypeInfo__EFI_SHELL_SET_FILE_POSITION,
  &TypeInfo__EFI_SHELL_FLUSH_FILE,
  &TypeInfo__EFI_SHELL_FIND_FILES,
  &TypeInfo__EFI_SHELL_FIND_FILES_IN_DIR,
  &TypeInfo__EFI_SHELL_GET_FILE_SIZE,
  &TypeInfo__EFI_SHELL_OPEN_ROOT,
  &TypeInfo__EFI_SHELL_OPEN_ROOT_BY_HANDLE,
  &TypeInfo__EFI_SHELL_REGISTER_GUID_NAME,
  &TypeInfo__EFI_SHELL_GET_GUID_NAME,
  &TypeInfo__EFI_SHELL_GET_GUID_FROM_NAME,
  &TypeInfo__EFI_SHELL_GET_ENV_EX,
  &TypeInfo__SHELL_COMMAND_GETHELP,
  NULL
};