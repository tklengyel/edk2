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

typedef struct _TYPE__gEdkiiFormDisplayEngineProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiFormDisplayEngineProtocolGuid;

TYPE__gEdkiiFormDisplayEngineProtocolGuid TypeInfo__gEdkiiFormDisplayEngineProtocolGuid = {
  .TypeName = "gEdkiiFormDisplayEngineProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiFormDisplayEngineProtocolGuid,
  .InterfaceStructName = "EDKII_FORM_DISPLAY_ENGINE_PROTOCOL"
};


typedef struct _TYPE__EDKII_FORM_DISPLAY_ENGINE_PROTOCOL{
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
} TYPE__EDKII_FORM_DISPLAY_ENGINE_PROTOCOL;

TYPE__EDKII_FORM_DISPLAY_ENGINE_PROTOCOL TypeInfo__EDKII_FORM_DISPLAY_ENGINE_PROTOCOL = {
  .TypeName = "EDKII_FORM_DISPLAY_ENGINE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EDKII_FORM_DISPLAY_ENGINE_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "FormDisplay",
  .StructFieldTypeName_1 = "FORM_DISPLAY",
  .StructFieldName_2 = "ExitDisplay",
  .StructFieldTypeName_2 = "EXIT_DISPLAY",
  .StructFieldName_3 = "ConfirmDataChange",
  .StructFieldTypeName_3 = "CONFIRM_DATA_CHANGE"
};


typedef struct _TYPE__FORM_DISPLAY{
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
} TYPE__FORM_DISPLAY;

TYPE__FORM_DISPLAY TypeInfo__FORM_DISPLAY = {
  .TypeName = "FORM_DISPLAY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(FORM_DISPLAY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "FORM_DISPLAY_ENGINE_FORM*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "USER_INPUT*"
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


typedef struct _TYPE__FORM_DISPLAY_ENGINE_FORM_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__FORM_DISPLAY_ENGINE_FORM_STAR;

TYPE__FORM_DISPLAY_ENGINE_FORM_STAR TypeInfo__FORM_DISPLAY_ENGINE_FORM_STAR = {
  .TypeName = "FORM_DISPLAY_ENGINE_FORM*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(FORM_DISPLAY_ENGINE_FORM*),
  .PointedType = "FORM_DISPLAY_ENGINE_FORM"
};


typedef struct _TYPE__FORM_DISPLAY_ENGINE_FORM{
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
} TYPE__FORM_DISPLAY_ENGINE_FORM;

TYPE__FORM_DISPLAY_ENGINE_FORM TypeInfo__FORM_DISPLAY_ENGINE_FORM = {
  .TypeName = "FORM_DISPLAY_ENGINE_FORM",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(FORM_DISPLAY_ENGINE_FORM),
  .StructFieldNum = 18,
  .StructFieldName_1 = "Signature",
  .StructFieldTypeName_1 = "UINTN",
  .StructFieldName_2 = "Version",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "StatementListHead",
  .StructFieldTypeName_3 = "LIST_ENTRY",
  .StructFieldName_4 = "StatementListOSF",
  .StructFieldTypeName_4 = "LIST_ENTRY",
  .StructFieldName_5 = "ScreenDimensions",
  .StructFieldTypeName_5 = "EFI_SCREEN_DESCRIPTOR*",
  .StructFieldName_6 = "FormSetGuid",
  .StructFieldTypeName_6 = "EFI_GUID",
  .StructFieldName_7 = "HiiHandle",
  .StructFieldTypeName_7 = "EFI_HII_HANDLE",
  .StructFieldName_8 = "FormId",
  .StructFieldTypeName_8 = "UINT16",
  .StructFieldName_9 = "FormTitle",
  .StructFieldTypeName_9 = "EFI_STRING_ID",
  .StructFieldName_10 = "Attribute",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "SettingChangedFlag",
  .StructFieldTypeName_11 = "BOOLEAN",
  .StructFieldName_12 = "HighLightedStatement",
  .StructFieldTypeName_12 = "FORM_DISPLAY_ENGINE_STATEMENT*",
  .StructFieldName_13 = "FormRefreshEvent",
  .StructFieldTypeName_13 = "EFI_EVENT",
  .StructFieldName_14 = "HotKeyListHead",
  .StructFieldTypeName_14 = "LIST_ENTRY",
  .StructFieldName_15 = "ImageId",
  .StructFieldTypeName_15 = "EFI_IMAGE_ID",
  .StructFieldName_16 = "AnimationId",
  .StructFieldTypeName_16 = "EFI_ANIMATION_ID",
  .StructFieldName_17 = "BrowserStatus",
  .StructFieldTypeName_17 = "UINT32",
  .StructFieldName_18 = "ErrorString",
  .StructFieldTypeName_18 = "EFI_STRING"
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


typedef struct _TYPE__EFI_SCREEN_DESCRIPTOR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SCREEN_DESCRIPTOR_STAR;

TYPE__EFI_SCREEN_DESCRIPTOR_STAR TypeInfo__EFI_SCREEN_DESCRIPTOR_STAR = {
  .TypeName = "EFI_SCREEN_DESCRIPTOR*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SCREEN_DESCRIPTOR*),
  .PointedType = "EFI_SCREEN_DESCRIPTOR"
};


typedef struct _TYPE__EFI_SCREEN_DESCRIPTOR{
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
} TYPE__EFI_SCREEN_DESCRIPTOR;

TYPE__EFI_SCREEN_DESCRIPTOR TypeInfo__EFI_SCREEN_DESCRIPTOR = {
  .TypeName = "EFI_SCREEN_DESCRIPTOR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SCREEN_DESCRIPTOR),
  .StructFieldNum = 4,
  .StructFieldName_1 = "LeftColumn",
  .StructFieldTypeName_1 = "UINTN",
  .StructFieldName_2 = "RightColumn",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "TopRow",
  .StructFieldTypeName_3 = "UINTN",
  .StructFieldName_4 = "BottomRow",
  .StructFieldTypeName_4 = "UINTN"
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


typedef struct _TYPE__EFI_HII_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_HII_HANDLE;

TYPE__EFI_HII_HANDLE TypeInfo__EFI_HII_HANDLE = {
  .TypeName = "EFI_HII_HANDLE",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_HII_HANDLE),
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


typedef struct _TYPE__EFI_STRING_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_STRING_ID;

TYPE__EFI_STRING_ID TypeInfo__EFI_STRING_ID = {
  .TypeName = "EFI_STRING_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_STRING_ID),
  .BasicTypeName = "UINT16"
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


typedef struct _TYPE__FORM_DISPLAY_ENGINE_STATEMENT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__FORM_DISPLAY_ENGINE_STATEMENT_STAR;

TYPE__FORM_DISPLAY_ENGINE_STATEMENT_STAR TypeInfo__FORM_DISPLAY_ENGINE_STATEMENT_STAR = {
  .TypeName = "FORM_DISPLAY_ENGINE_STATEMENT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(FORM_DISPLAY_ENGINE_STATEMENT*),
  .PointedType = "FORM_DISPLAY_ENGINE_STATEMENT"
};


typedef struct _TYPE__FORM_DISPLAY_ENGINE_STATEMENT{
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
} TYPE__FORM_DISPLAY_ENGINE_STATEMENT;

TYPE__FORM_DISPLAY_ENGINE_STATEMENT TypeInfo__FORM_DISPLAY_ENGINE_STATEMENT = {
  .TypeName = "FORM_DISPLAY_ENGINE_STATEMENT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(FORM_DISPLAY_ENGINE_STATEMENT),
  .StructFieldNum = 13,
  .StructFieldName_1 = "Signature",
  .StructFieldTypeName_1 = "UINTN",
  .StructFieldName_2 = "Version",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "DisplayLink",
  .StructFieldTypeName_3 = "LIST_ENTRY",
  .StructFieldName_4 = "OpCode",
  .StructFieldTypeName_4 = "EFI_IFR_OP_HEADER*",
  .StructFieldName_5 = "CurrentValue",
  .StructFieldTypeName_5 = "EFI_HII_VALUE",
  .StructFieldName_6 = "SettingChangedFlag",
  .StructFieldTypeName_6 = "BOOLEAN",
  .StructFieldName_7 = "NestStatementList",
  .StructFieldTypeName_7 = "LIST_ENTRY",
  .StructFieldName_8 = "OptionListHead",
  .StructFieldTypeName_8 = "LIST_ENTRY",
  .StructFieldName_9 = "Attribute",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "ValidateQuestion",
  .StructFieldTypeName_10 = "VALIDATE_QUESTION",
  .StructFieldName_11 = "PasswordCheck",
  .StructFieldTypeName_11 = "PASSWORD_CHECK",
  .StructFieldName_12 = "ImageId",
  .StructFieldTypeName_12 = "EFI_IMAGE_ID",
  .StructFieldName_13 = "AnimationId",
  .StructFieldTypeName_13 = "EFI_ANIMATION_ID"
};


typedef struct _TYPE__EFI_IFR_OP_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IFR_OP_HEADER_STAR;

TYPE__EFI_IFR_OP_HEADER_STAR TypeInfo__EFI_IFR_OP_HEADER_STAR = {
  .TypeName = "EFI_IFR_OP_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IFR_OP_HEADER*),
  .PointedType = "EFI_IFR_OP_HEADER"
};


typedef struct _TYPE__EFI_IFR_OP_HEADER{
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
} TYPE__EFI_IFR_OP_HEADER;

TYPE__EFI_IFR_OP_HEADER TypeInfo__EFI_IFR_OP_HEADER = {
  .TypeName = "EFI_IFR_OP_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IFR_OP_HEADER),
  .StructFieldNum = 3,
  .StructFieldName_1 = "OpCode",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Length",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Scope",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_HII_VALUE{
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
} TYPE__EFI_HII_VALUE;

TYPE__EFI_HII_VALUE TypeInfo__EFI_HII_VALUE = {
  .TypeName = "EFI_HII_VALUE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_VALUE),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Type",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Buffer",
  .StructFieldTypeName_2 = "UINT8*",
  .StructFieldName_3 = "BufferLen",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Value",
  .StructFieldTypeName_4 = "EFI_IFR_TYPE_VALUE"
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


typedef struct _TYPE__EFI_IFR_TYPE_VALUE{
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
} TYPE__EFI_IFR_TYPE_VALUE;

TYPE__EFI_IFR_TYPE_VALUE TypeInfo__EFI_IFR_TYPE_VALUE = {
  .TypeName = "EFI_IFR_TYPE_VALUE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IFR_TYPE_VALUE),
  .StructFieldNum = 9,
  .StructFieldName_1 = "u8",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "u16",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "u32",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "u64",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "b",
  .StructFieldTypeName_5 = "BOOLEAN",
  .StructFieldName_6 = "time",
  .StructFieldTypeName_6 = "EFI_HII_TIME",
  .StructFieldName_7 = "date",
  .StructFieldTypeName_7 = "EFI_HII_DATE",
  .StructFieldName_8 = "string",
  .StructFieldTypeName_8 = "EFI_STRING_ID",
  .StructFieldName_9 = "ref",
  .StructFieldTypeName_9 = "EFI_HII_REF"
};


typedef struct _TYPE__EFI_HII_TIME{
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
} TYPE__EFI_HII_TIME;

TYPE__EFI_HII_TIME TypeInfo__EFI_HII_TIME = {
  .TypeName = "EFI_HII_TIME",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_TIME),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Hour",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Minute",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Second",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_HII_DATE{
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
} TYPE__EFI_HII_DATE;

TYPE__EFI_HII_DATE TypeInfo__EFI_HII_DATE = {
  .TypeName = "EFI_HII_DATE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_DATE),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Year",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Month",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Day",
  .StructFieldTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_HII_REF{
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
} TYPE__EFI_HII_REF;

TYPE__EFI_HII_REF TypeInfo__EFI_HII_REF = {
  .TypeName = "EFI_HII_REF",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_REF),
  .StructFieldNum = 4,
  .StructFieldName_1 = "QuestionId",
  .StructFieldTypeName_1 = "EFI_QUESTION_ID",
  .StructFieldName_2 = "FormId",
  .StructFieldTypeName_2 = "EFI_FORM_ID",
  .StructFieldName_3 = "FormSetGuid",
  .StructFieldTypeName_3 = "EFI_GUID",
  .StructFieldName_4 = "DevicePath",
  .StructFieldTypeName_4 = "EFI_STRING_ID"
};


typedef struct _TYPE__EFI_QUESTION_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_QUESTION_ID;

TYPE__EFI_QUESTION_ID TypeInfo__EFI_QUESTION_ID = {
  .TypeName = "EFI_QUESTION_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_QUESTION_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_FORM_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_FORM_ID;

TYPE__EFI_FORM_ID TypeInfo__EFI_FORM_ID = {
  .TypeName = "EFI_FORM_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_FORM_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__VALIDATE_QUESTION{
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
} TYPE__VALIDATE_QUESTION;

TYPE__VALIDATE_QUESTION TypeInfo__VALIDATE_QUESTION = {
  .TypeName = "VALIDATE_QUESTION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(VALIDATE_QUESTION),
  .ReturnType = "UINT32",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "FORM_DISPLAY_ENGINE_FORM*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "FORM_DISPLAY_ENGINE_STATEMENT*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_VALUE*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "STATEMENT_ERROR_INFO*"
};


typedef struct _TYPE__EFI_HII_VALUE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_VALUE_STAR;

TYPE__EFI_HII_VALUE_STAR TypeInfo__EFI_HII_VALUE_STAR = {
  .TypeName = "EFI_HII_VALUE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_VALUE*),
  .PointedType = "EFI_HII_VALUE"
};


typedef struct _TYPE__STATEMENT_ERROR_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__STATEMENT_ERROR_INFO_STAR;

TYPE__STATEMENT_ERROR_INFO_STAR TypeInfo__STATEMENT_ERROR_INFO_STAR = {
  .TypeName = "STATEMENT_ERROR_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(STATEMENT_ERROR_INFO*),
  .PointedType = "STATEMENT_ERROR_INFO"
};


typedef struct _TYPE__STATEMENT_ERROR_INFO{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__STATEMENT_ERROR_INFO;

TYPE__STATEMENT_ERROR_INFO TypeInfo__STATEMENT_ERROR_INFO = {
  .TypeName = "STATEMENT_ERROR_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(STATEMENT_ERROR_INFO),
  .StructFieldNum = 2,
  .StructFieldName_1 = "StringId",
  .StructFieldTypeName_1 = "EFI_STRING_ID",
  .StructFieldName_2 = "TimeOut",
  .StructFieldTypeName_2 = "UINT8"
};


typedef struct _TYPE__PASSWORD_CHECK{
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
} TYPE__PASSWORD_CHECK;

TYPE__PASSWORD_CHECK TypeInfo__PASSWORD_CHECK = {
  .TypeName = "PASSWORD_CHECK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PASSWORD_CHECK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "FORM_DISPLAY_ENGINE_FORM*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "FORM_DISPLAY_ENGINE_STATEMENT*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_STRING"
};


typedef struct _TYPE__EFI_STRING{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_STRING;

TYPE__EFI_STRING TypeInfo__EFI_STRING = {
  .TypeName = "EFI_STRING",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_STRING),
  .TypedefName = "CHAR16*"
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


typedef struct _TYPE__EFI_IMAGE_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_IMAGE_ID;

TYPE__EFI_IMAGE_ID TypeInfo__EFI_IMAGE_ID = {
  .TypeName = "EFI_IMAGE_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_IMAGE_ID),
  .BasicTypeName = "UINT16"
};


typedef struct _TYPE__EFI_ANIMATION_ID{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_ANIMATION_ID;

TYPE__EFI_ANIMATION_ID TypeInfo__EFI_ANIMATION_ID = {
  .TypeName = "EFI_ANIMATION_ID",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_ANIMATION_ID),
  .BasicTypeName = "UINT16"
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


typedef struct _TYPE__USER_INPUT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__USER_INPUT_STAR;

TYPE__USER_INPUT_STAR TypeInfo__USER_INPUT_STAR = {
  .TypeName = "USER_INPUT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(USER_INPUT*),
  .PointedType = "USER_INPUT"
};


typedef struct _TYPE__USER_INPUT{
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
} TYPE__USER_INPUT;

TYPE__USER_INPUT TypeInfo__USER_INPUT = {
  .TypeName = "USER_INPUT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(USER_INPUT),
  .StructFieldNum = 4,
  .StructFieldName_1 = "SelectedStatement",
  .StructFieldTypeName_1 = "FORM_DISPLAY_ENGINE_STATEMENT*",
  .StructFieldName_2 = "InputValue",
  .StructFieldTypeName_2 = "EFI_HII_VALUE",
  .StructFieldName_3 = "Action",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "DefaultId",
  .StructFieldTypeName_4 = "UINT16"
};


typedef struct _TYPE__EXIT_DISPLAY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EXIT_DISPLAY;

TYPE__EXIT_DISPLAY TypeInfo__EXIT_DISPLAY = {
  .TypeName = "EXIT_DISPLAY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EXIT_DISPLAY),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__CONFIRM_DATA_CHANGE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__CONFIRM_DATA_CHANGE;

TYPE__CONFIRM_DATA_CHANGE TypeInfo__CONFIRM_DATA_CHANGE = {
  .TypeName = "CONFIRM_DATA_CHANGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(CONFIRM_DATA_CHANGE),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__gEfiHiiPopupProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiPopupProtocolGuid;

TYPE__gEfiHiiPopupProtocolGuid TypeInfo__gEfiHiiPopupProtocolGuid = {
  .TypeName = "gEfiHiiPopupProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiPopupProtocolGuid,
  .InterfaceStructName = "EFI_HII_POPUP_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_POPUP_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_HII_POPUP_PROTOCOL;

TYPE__EFI_HII_POPUP_PROTOCOL TypeInfo__EFI_HII_POPUP_PROTOCOL = {
  .TypeName = "EFI_HII_POPUP_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_POPUP_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "CreatePopup",
  .StructFieldTypeName_2 = "EFI_HII_CREATE_POPUP"
};


typedef struct _TYPE__EFI_HII_CREATE_POPUP{
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
} TYPE__EFI_HII_CREATE_POPUP;

TYPE__EFI_HII_CREATE_POPUP TypeInfo__EFI_HII_CREATE_POPUP = {
  .TypeName = "EFI_HII_CREATE_POPUP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_CREATE_POPUP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_POPUP_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_POPUP_STYLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_POPUP_TYPE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HII_HANDLE",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_STRING_ID",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_HII_POPUP_SELECTION*"
};


typedef struct _TYPE__EFI_HII_POPUP_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_POPUP_PROTOCOL_STAR;

TYPE__EFI_HII_POPUP_PROTOCOL_STAR TypeInfo__EFI_HII_POPUP_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_POPUP_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_POPUP_PROTOCOL*),
  .PointedType = "EFI_HII_POPUP_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_POPUP_STYLE{
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
} TYPE__EFI_HII_POPUP_STYLE;

TYPE__EFI_HII_POPUP_STYLE TypeInfo__EFI_HII_POPUP_STYLE = {
  .TypeName = "EFI_HII_POPUP_STYLE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_HII_POPUP_STYLE),
  .EnumValueNum = 3,
  .EnumValueName_1 = "EfiHiiPopupStyleInfo",
  .EnumValue_1 = EfiHiiPopupStyleInfo,
  .EnumValueName_2 = "EfiHiiPopupStyleWarning",
  .EnumValue_2 = EfiHiiPopupStyleWarning,
  .EnumValueName_3 = "EfiHiiPopupStyleError",
  .EnumValue_3 = EfiHiiPopupStyleError
};


typedef struct _TYPE__EFI_HII_POPUP_TYPE{
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
} TYPE__EFI_HII_POPUP_TYPE;

TYPE__EFI_HII_POPUP_TYPE TypeInfo__EFI_HII_POPUP_TYPE = {
  .TypeName = "EFI_HII_POPUP_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_HII_POPUP_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiHiiPopupTypeOk",
  .EnumValue_1 = EfiHiiPopupTypeOk,
  .EnumValueName_2 = "EfiHiiPopupTypeOkCancel",
  .EnumValue_2 = EfiHiiPopupTypeOkCancel,
  .EnumValueName_3 = "EfiHiiPopupTypeYesNo",
  .EnumValue_3 = EfiHiiPopupTypeYesNo,
  .EnumValueName_4 = "EfiHiiPopupTypeYesNoCancel",
  .EnumValue_4 = EfiHiiPopupTypeYesNoCancel
};


typedef struct _TYPE__EFI_HII_POPUP_SELECTION_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_POPUP_SELECTION_STAR;

TYPE__EFI_HII_POPUP_SELECTION_STAR TypeInfo__EFI_HII_POPUP_SELECTION_STAR = {
  .TypeName = "EFI_HII_POPUP_SELECTION*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_POPUP_SELECTION*),
  .PointedType = "EFI_HII_POPUP_SELECTION"
};


typedef struct _TYPE__EFI_HII_POPUP_SELECTION{
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
} TYPE__EFI_HII_POPUP_SELECTION;

TYPE__EFI_HII_POPUP_SELECTION TypeInfo__EFI_HII_POPUP_SELECTION = {
  .TypeName = "EFI_HII_POPUP_SELECTION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_HII_POPUP_SELECTION),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiHiiPopupSelectionOk",
  .EnumValue_1 = EfiHiiPopupSelectionOk,
  .EnumValueName_2 = "EfiHiiPopupSelectionCancel",
  .EnumValue_2 = EfiHiiPopupSelectionCancel,
  .EnumValueName_3 = "EfiHiiPopupSelectionYes",
  .EnumValue_3 = EfiHiiPopupSelectionYes,
  .EnumValueName_4 = "EfiHiiPopupSelectionNo",
  .EnumValue_4 = EfiHiiPopupSelectionNo
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


typedef struct _TYPE__gEdkiiFormBrowserEx2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiFormBrowserEx2ProtocolGuid;

TYPE__gEdkiiFormBrowserEx2ProtocolGuid TypeInfo__gEdkiiFormBrowserEx2ProtocolGuid = {
  .TypeName = "gEdkiiFormBrowserEx2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiFormBrowserEx2ProtocolGuid,
  .InterfaceStructName = "EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL"
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
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiHiiPopupProtocolGuid,
  &TypeInfo__gEdkiiFormDisplayEngineProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEdkiiFormBrowserEx2ProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
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
  &TypeInfo__gEdkiiFormDisplayEngineProtocolGuid,
  &TypeInfo__EDKII_FORM_DISPLAY_ENGINE_PROTOCOL,
  &TypeInfo__FORM_DISPLAY,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__FORM_DISPLAY_ENGINE_FORM_STAR,
  &TypeInfo__FORM_DISPLAY_ENGINE_FORM,
  &TypeInfo__LIST_ENTRY,
  &TypeInfo__LIST_ENTRY_STAR,
  &TypeInfo__EFI_SCREEN_DESCRIPTOR_STAR,
  &TypeInfo__EFI_SCREEN_DESCRIPTOR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT32,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_HII_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_STRING_ID,
  &TypeInfo__BOOLEAN,
  &TypeInfo__FORM_DISPLAY_ENGINE_STATEMENT_STAR,
  &TypeInfo__FORM_DISPLAY_ENGINE_STATEMENT,
  &TypeInfo__EFI_IFR_OP_HEADER_STAR,
  &TypeInfo__EFI_IFR_OP_HEADER,
  &TypeInfo__EFI_HII_VALUE,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_IFR_TYPE_VALUE,
  &TypeInfo__EFI_HII_TIME,
  &TypeInfo__EFI_HII_DATE,
  &TypeInfo__EFI_HII_REF,
  &TypeInfo__EFI_QUESTION_ID,
  &TypeInfo__EFI_FORM_ID,
  &TypeInfo__VALIDATE_QUESTION,
  &TypeInfo__EFI_HII_VALUE_STAR,
  &TypeInfo__STATEMENT_ERROR_INFO_STAR,
  &TypeInfo__STATEMENT_ERROR_INFO,
  &TypeInfo__PASSWORD_CHECK,
  &TypeInfo__EFI_STRING,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_IMAGE_ID,
  &TypeInfo__EFI_ANIMATION_ID,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__USER_INPUT_STAR,
  &TypeInfo__USER_INPUT,
  &TypeInfo__EXIT_DISPLAY,
  &TypeInfo__CONFIRM_DATA_CHANGE,
  &TypeInfo__gEfiHiiPopupProtocolGuid,
  &TypeInfo__EFI_HII_POPUP_PROTOCOL,
  &TypeInfo__EFI_HII_CREATE_POPUP,
  &TypeInfo__EFI_HII_POPUP_PROTOCOL_STAR,
  &TypeInfo__EFI_HII_POPUP_STYLE,
  &TypeInfo__EFI_HII_POPUP_TYPE,
  &TypeInfo__EFI_HII_POPUP_SELECTION_STAR,
  &TypeInfo__EFI_HII_POPUP_SELECTION,
  NULL
};