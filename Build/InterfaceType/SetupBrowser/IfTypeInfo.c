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

typedef struct _TYPE__gEfiFormBrowser2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiFormBrowser2ProtocolGuid;

TYPE__gEfiFormBrowser2ProtocolGuid TypeInfo__gEfiFormBrowser2ProtocolGuid = {
  .TypeName = "gEfiFormBrowser2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiFormBrowser2ProtocolGuid,
  .InterfaceStructName = "EFI_FORM_BROWSER2_PROTOCOL"
};


typedef struct _TYPE__EFI_FORM_BROWSER2_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_FORM_BROWSER2_PROTOCOL;

TYPE__EFI_FORM_BROWSER2_PROTOCOL TypeInfo__EFI_FORM_BROWSER2_PROTOCOL = {
  .TypeName = "EFI_FORM_BROWSER2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FORM_BROWSER2_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "SendForm",
  .StructFieldTypeName_1 = "EFI_SEND_FORM2",
  .StructFieldName_2 = "BrowserCallback",
  .StructFieldTypeName_2 = "EFI_BROWSER_CALLBACK2"
};


typedef struct _TYPE__EFI_SEND_FORM2{
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
} TYPE__EFI_SEND_FORM2;

TYPE__EFI_SEND_FORM2 TypeInfo__EFI_SEND_FORM2 = {
  .TypeName = "EFI_SEND_FORM2",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SEND_FORM2),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FORM_BROWSER2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_GUID*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_FORM_ID",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_SCREEN_DESCRIPTOR*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "EFI_BROWSER_ACTION_REQUEST*"
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


typedef struct _TYPE__EFI_FORM_BROWSER2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FORM_BROWSER2_PROTOCOL_STAR;

TYPE__EFI_FORM_BROWSER2_PROTOCOL_STAR TypeInfo__EFI_FORM_BROWSER2_PROTOCOL_STAR = {
  .TypeName = "EFI_FORM_BROWSER2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FORM_BROWSER2_PROTOCOL*),
  .PointedType = "EFI_FORM_BROWSER2_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_HANDLE_STAR;

TYPE__EFI_HII_HANDLE_STAR TypeInfo__EFI_HII_HANDLE_STAR = {
  .TypeName = "EFI_HII_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_HANDLE*),
  .PointedType = "EFI_HII_HANDLE"
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


typedef struct _TYPE__EFI_BROWSER_ACTION_REQUEST_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BROWSER_ACTION_REQUEST_STAR;

TYPE__EFI_BROWSER_ACTION_REQUEST_STAR TypeInfo__EFI_BROWSER_ACTION_REQUEST_STAR = {
  .TypeName = "EFI_BROWSER_ACTION_REQUEST*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BROWSER_ACTION_REQUEST*),
  .PointedType = "EFI_BROWSER_ACTION_REQUEST"
};


typedef struct _TYPE__EFI_BROWSER_ACTION_REQUEST{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_BROWSER_ACTION_REQUEST;

TYPE__EFI_BROWSER_ACTION_REQUEST TypeInfo__EFI_BROWSER_ACTION_REQUEST = {
  .TypeName = "EFI_BROWSER_ACTION_REQUEST",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_BROWSER_ACTION_REQUEST),
  .BasicTypeName = "UINTN"
};


typedef struct _TYPE__EFI_BROWSER_CALLBACK2{
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
} TYPE__EFI_BROWSER_CALLBACK2;

TYPE__EFI_BROWSER_CALLBACK2 TypeInfo__EFI_BROWSER_CALLBACK2 = {
  .TypeName = "EFI_BROWSER_CALLBACK2",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BROWSER_CALLBACK2),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_FORM_BROWSER2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_STRING",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_GUID*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "CHAR16*"
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


typedef struct _TYPE__EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL{
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
} TYPE__EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL;

TYPE__EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL TypeInfo__EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL = {
  .TypeName = "EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL),
  .StructFieldNum = 9,
  .StructFieldName_1 = "Version",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "SetScope",
  .StructFieldTypeName_2 = "SET_SCOPE",
  .StructFieldName_3 = "RegisterHotKey",
  .StructFieldTypeName_3 = "REGISTER_HOT_KEY",
  .StructFieldName_4 = "RegiserExitHandler",
  .StructFieldTypeName_4 = "REGISTER_EXIT_HANDLER",
  .StructFieldName_5 = "IsBrowserDataModified",
  .StructFieldTypeName_5 = "IS_BROWSER_DATA_MODIFIED",
  .StructFieldName_6 = "ExecuteAction",
  .StructFieldTypeName_6 = "EXECUTE_ACTION",
  .StructFieldName_7 = "FormViewHistoryHead",
  .StructFieldTypeName_7 = "LIST_ENTRY",
  .StructFieldName_8 = "OverrideQestListHead",
  .StructFieldTypeName_8 = "LIST_ENTRY",
  .StructFieldName_9 = "IsResetRequired",
  .StructFieldTypeName_9 = "IS_RESET_REQUIRED"
};


typedef struct _TYPE__SET_SCOPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__SET_SCOPE;

TYPE__SET_SCOPE TypeInfo__SET_SCOPE = {
  .TypeName = "SET_SCOPE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(SET_SCOPE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BROWSER_SETTING_SCOPE"
};


typedef struct _TYPE__BROWSER_SETTING_SCOPE{
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
} TYPE__BROWSER_SETTING_SCOPE;

TYPE__BROWSER_SETTING_SCOPE TypeInfo__BROWSER_SETTING_SCOPE = {
  .TypeName = "BROWSER_SETTING_SCOPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(BROWSER_SETTING_SCOPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "FormLevel",
  .EnumValue_1 = FormLevel,
  .EnumValueName_2 = "FormSetLevel",
  .EnumValue_2 = FormSetLevel,
  .EnumValueName_3 = "SystemLevel",
  .EnumValue_3 = SystemLevel,
  .EnumValueName_4 = "MaxLevel",
  .EnumValue_4 = MaxLevel
};


typedef struct _TYPE__REGISTER_HOT_KEY{
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
} TYPE__REGISTER_HOT_KEY;

TYPE__REGISTER_HOT_KEY TypeInfo__REGISTER_HOT_KEY = {
  .TypeName = "REGISTER_HOT_KEY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(REGISTER_HOT_KEY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_INPUT_KEY*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_STRING"
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


typedef struct _TYPE__REGISTER_EXIT_HANDLER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__REGISTER_EXIT_HANDLER;

TYPE__REGISTER_EXIT_HANDLER TypeInfo__REGISTER_EXIT_HANDLER = {
  .TypeName = "REGISTER_EXIT_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(REGISTER_EXIT_HANDLER),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EXIT_HANDLER"
};


typedef struct _TYPE__EXIT_HANDLER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EXIT_HANDLER;

TYPE__EXIT_HANDLER TypeInfo__EXIT_HANDLER = {
  .TypeName = "EXIT_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EXIT_HANDLER),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__IS_BROWSER_DATA_MODIFIED{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__IS_BROWSER_DATA_MODIFIED;

TYPE__IS_BROWSER_DATA_MODIFIED TypeInfo__IS_BROWSER_DATA_MODIFIED = {
  .TypeName = "IS_BROWSER_DATA_MODIFIED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(IS_BROWSER_DATA_MODIFIED),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__EXECUTE_ACTION{
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
} TYPE__EXECUTE_ACTION;

TYPE__EXECUTE_ACTION TypeInfo__EXECUTE_ACTION = {
  .TypeName = "EXECUTE_ACTION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EXECUTE_ACTION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16"
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


typedef struct _TYPE__IS_RESET_REQUIRED{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__IS_RESET_REQUIRED;

TYPE__IS_RESET_REQUIRED TypeInfo__IS_RESET_REQUIRED = {
  .TypeName = "IS_RESET_REQUIRED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(IS_RESET_REQUIRED),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__gEdkiiFormBrowserExProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiFormBrowserExProtocolGuid;

TYPE__gEdkiiFormBrowserExProtocolGuid TypeInfo__gEdkiiFormBrowserExProtocolGuid = {
  .TypeName = "gEdkiiFormBrowserExProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiFormBrowserExProtocolGuid,
  .InterfaceStructName = "EDKII_FORM_BROWSER_EXTENSION_PROTOCOL"
};


typedef struct _TYPE__EDKII_FORM_BROWSER_EXTENSION_PROTOCOL{
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
} TYPE__EDKII_FORM_BROWSER_EXTENSION_PROTOCOL;

TYPE__EDKII_FORM_BROWSER_EXTENSION_PROTOCOL TypeInfo__EDKII_FORM_BROWSER_EXTENSION_PROTOCOL = {
  .TypeName = "EDKII_FORM_BROWSER_EXTENSION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EDKII_FORM_BROWSER_EXTENSION_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "SetScope",
  .StructFieldTypeName_1 = "SET_SCOPE",
  .StructFieldName_2 = "RegisterHotKey",
  .StructFieldTypeName_2 = "REGISTER_HOT_KEY",
  .StructFieldName_3 = "RegiserExitHandler",
  .StructFieldTypeName_3 = "REGISTER_EXIT_HANDLER",
  .StructFieldName_4 = "SaveReminder",
  .StructFieldTypeName_4 = "SAVE_REMINDER"
};


typedef struct _TYPE__SAVE_REMINDER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__SAVE_REMINDER;

TYPE__SAVE_REMINDER TypeInfo__SAVE_REMINDER = {
  .TypeName = "SAVE_REMINDER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(SAVE_REMINDER),
  .ReturnType = "UINT32",
  .HasVarArg = FALSE,
  .ParameterNum = 0
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


typedef struct _TYPE__gEfiHiiConfigAccessProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiConfigAccessProtocolGuid;

TYPE__gEfiHiiConfigAccessProtocolGuid TypeInfo__gEfiHiiConfigAccessProtocolGuid = {
  .TypeName = "gEfiHiiConfigAccessProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiConfigAccessProtocolGuid,
  .InterfaceStructName = "EFI_HII_CONFIG_ACCESS_PROTOCOL"
};


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


typedef struct _TYPE__gEfiUserManagerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUserManagerProtocolGuid;

TYPE__gEfiUserManagerProtocolGuid TypeInfo__gEfiUserManagerProtocolGuid = {
  .TypeName = "gEfiUserManagerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUserManagerProtocolGuid,
  .InterfaceStructName = "EFI_USER_MANAGER_PROTOCOL"
};


typedef struct _TYPE__gEfiDevicePathFromTextProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDevicePathFromTextProtocolGuid;

TYPE__gEfiDevicePathFromTextProtocolGuid TypeInfo__gEfiDevicePathFromTextProtocolGuid = {
  .TypeName = "gEfiDevicePathFromTextProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDevicePathFromTextProtocolGuid,
  .InterfaceStructName = "EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL"
};


typedef struct _TYPE__gEfiRegularExpressionProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiRegularExpressionProtocolGuid;

TYPE__gEfiRegularExpressionProtocolGuid TypeInfo__gEfiRegularExpressionProtocolGuid = {
  .TypeName = "gEfiRegularExpressionProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiRegularExpressionProtocolGuid,
  .InterfaceStructName = "EFI_REGULAR_EXPRESSION_PROTOCOL"
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
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEdkiiFormBrowserEx2ProtocolGuid,
  &TypeInfo__gEfiFormBrowser2ProtocolGuid,
  &TypeInfo__gEdkiiFormBrowserExProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEdkiiFormDisplayEngineProtocolGuid,
  &TypeInfo__gEfiUserManagerProtocolGuid,
  &TypeInfo__gEfiDevicePathFromTextProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiUnicodeCollation2ProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiHiiConfigAccessProtocolGuid,
  &TypeInfo__gEfiRegularExpressionProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiFormBrowser2ProtocolGuid,
  &TypeInfo__EFI_FORM_BROWSER2_PROTOCOL,
  &TypeInfo__EFI_SEND_FORM2,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_FORM_BROWSER2_PROTOCOL_STAR,
  &TypeInfo__EFI_HII_HANDLE_STAR,
  &TypeInfo__EFI_HII_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT32,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_FORM_ID,
  &TypeInfo__EFI_SCREEN_DESCRIPTOR_STAR,
  &TypeInfo__EFI_SCREEN_DESCRIPTOR,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST_STAR,
  &TypeInfo__EFI_BROWSER_ACTION_REQUEST,
  &TypeInfo__EFI_BROWSER_CALLBACK2,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_STRING,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__BOOLEAN,
  &TypeInfo__gEdkiiFormBrowserEx2ProtocolGuid,
  &TypeInfo__EDKII_FORM_BROWSER_EXTENSION2_PROTOCOL,
  &TypeInfo__SET_SCOPE,
  &TypeInfo__BROWSER_SETTING_SCOPE,
  &TypeInfo__REGISTER_HOT_KEY,
  &TypeInfo__EFI_INPUT_KEY_STAR,
  &TypeInfo__EFI_INPUT_KEY,
  &TypeInfo__REGISTER_EXIT_HANDLER,
  &TypeInfo__EXIT_HANDLER,
  &TypeInfo__IS_BROWSER_DATA_MODIFIED,
  &TypeInfo__EXECUTE_ACTION,
  &TypeInfo__LIST_ENTRY,
  &TypeInfo__LIST_ENTRY_STAR,
  &TypeInfo__IS_RESET_REQUIRED,
  &TypeInfo__gEdkiiFormBrowserExProtocolGuid,
  &TypeInfo__EDKII_FORM_BROWSER_EXTENSION_PROTOCOL,
  &TypeInfo__SAVE_REMINDER,
  NULL
};