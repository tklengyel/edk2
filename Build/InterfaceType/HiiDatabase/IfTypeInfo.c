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


typedef struct _TYPE__EFI_HII_FONT_PROTOCOL{
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
} TYPE__EFI_HII_FONT_PROTOCOL;

TYPE__EFI_HII_FONT_PROTOCOL TypeInfo__EFI_HII_FONT_PROTOCOL = {
  .TypeName = "EFI_HII_FONT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_FONT_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "StringToImage",
  .StructFieldTypeName_1 = "EFI_HII_STRING_TO_IMAGE",
  .StructFieldName_2 = "StringIdToImage",
  .StructFieldTypeName_2 = "EFI_HII_STRING_ID_TO_IMAGE",
  .StructFieldName_3 = "GetGlyph",
  .StructFieldTypeName_3 = "EFI_HII_GET_GLYPH",
  .StructFieldName_4 = "GetFontInfo",
  .StructFieldTypeName_4 = "EFI_HII_GET_FONT_INFO"
};


typedef struct _TYPE__EFI_HII_STRING_TO_IMAGE{
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
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
} TYPE__EFI_HII_STRING_TO_IMAGE;

TYPE__EFI_HII_STRING_TO_IMAGE TypeInfo__EFI_HII_STRING_TO_IMAGE = {
  .TypeName = "EFI_HII_STRING_TO_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_STRING_TO_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_FONT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_OUT_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_STRING",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_FONT_DISPLAY_INFO*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN",
  .ParameterInOut_8 = IO_OUT,
  .ParameterTypeName_8 = "EFI_HII_ROW_INFO**",
  .ParameterInOut_9 = IO_OUT,
  .ParameterTypeName_9 = "UINTN*",
  .ParameterInOut_10 = IO_OUT,
  .ParameterTypeName_10 = "UINTN*"
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


typedef struct _TYPE__EFI_HII_FONT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_FONT_PROTOCOL_STAR;

TYPE__EFI_HII_FONT_PROTOCOL_STAR TypeInfo__EFI_HII_FONT_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_FONT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_FONT_PROTOCOL*),
  .PointedType = "EFI_HII_FONT_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_OUT_FLAGS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_HII_OUT_FLAGS;

TYPE__EFI_HII_OUT_FLAGS TypeInfo__EFI_HII_OUT_FLAGS = {
  .TypeName = "EFI_HII_OUT_FLAGS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_HII_OUT_FLAGS),
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


typedef struct _TYPE__EFI_FONT_DISPLAY_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FONT_DISPLAY_INFO_STAR;

TYPE__EFI_FONT_DISPLAY_INFO_STAR TypeInfo__EFI_FONT_DISPLAY_INFO_STAR = {
  .TypeName = "EFI_FONT_DISPLAY_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FONT_DISPLAY_INFO*),
  .PointedType = "EFI_FONT_DISPLAY_INFO"
};


typedef struct _TYPE__EFI_FONT_DISPLAY_INFO{
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
} TYPE__EFI_FONT_DISPLAY_INFO;

TYPE__EFI_FONT_DISPLAY_INFO TypeInfo__EFI_FONT_DISPLAY_INFO = {
  .TypeName = "EFI_FONT_DISPLAY_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FONT_DISPLAY_INFO),
  .StructFieldNum = 4,
  .StructFieldName_1 = "ForegroundColor",
  .StructFieldTypeName_1 = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL",
  .StructFieldName_2 = "BackgroundColor",
  .StructFieldTypeName_2 = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL",
  .StructFieldName_3 = "FontInfoMask",
  .StructFieldTypeName_3 = "EFI_FONT_INFO_MASK",
  .StructFieldName_4 = "FontInfo",
  .StructFieldTypeName_4 = "EFI_FONT_INFO"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL{
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
} TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL;

TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Blue",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Green",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Red",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Reserved",
  .StructFieldTypeName_4 = "UINT8"
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


typedef struct _TYPE__EFI_FONT_INFO_MASK{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_FONT_INFO_MASK;

TYPE__EFI_FONT_INFO_MASK TypeInfo__EFI_FONT_INFO_MASK = {
  .TypeName = "EFI_FONT_INFO_MASK",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_FONT_INFO_MASK),
  .BasicTypeName = "UINT32"
};


typedef struct _TYPE__EFI_FONT_INFO{
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
} TYPE__EFI_FONT_INFO;

TYPE__EFI_FONT_INFO TypeInfo__EFI_FONT_INFO = {
  .TypeName = "EFI_FONT_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FONT_INFO),
  .StructFieldNum = 3,
  .StructFieldName_1 = "FontStyle",
  .StructFieldTypeName_1 = "EFI_HII_FONT_STYLE",
  .StructFieldName_2 = "FontSize",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "FontName",
  .StructFieldTypeName_3 = "CHAR16[1]"
};


typedef struct _TYPE__EFI_HII_FONT_STYLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_HII_FONT_STYLE;

TYPE__EFI_HII_FONT_STYLE TypeInfo__EFI_HII_FONT_STYLE = {
  .TypeName = "EFI_HII_FONT_STYLE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_HII_FONT_STYLE),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_IMAGE_OUTPUT_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IMAGE_OUTPUT_STAR_STAR;

TYPE__EFI_IMAGE_OUTPUT_STAR_STAR TypeInfo__EFI_IMAGE_OUTPUT_STAR_STAR = {
  .TypeName = "EFI_IMAGE_OUTPUT**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IMAGE_OUTPUT**),
  .PointedType = "EFI_IMAGE_OUTPUT*"
};


typedef struct _TYPE__EFI_IMAGE_OUTPUT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IMAGE_OUTPUT_STAR;

TYPE__EFI_IMAGE_OUTPUT_STAR TypeInfo__EFI_IMAGE_OUTPUT_STAR = {
  .TypeName = "EFI_IMAGE_OUTPUT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IMAGE_OUTPUT*),
  .PointedType = "EFI_IMAGE_OUTPUT"
};


typedef struct _TYPE__EFI_IMAGE_OUTPUT{
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
} TYPE__EFI_IMAGE_OUTPUT;

TYPE__EFI_IMAGE_OUTPUT TypeInfo__EFI_IMAGE_OUTPUT = {
  .TypeName = "EFI_IMAGE_OUTPUT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IMAGE_OUTPUT),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Width",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Height",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Image",
  .StructFieldTypeName_3 = "union(anonymousunionat/home/jshi19/wksp_efi/simicsx58_bios_udk2017-simicsx58_edk2/MdePkg/Include/Protocol/HiiImage.h:196:3)"
};


typedef struct _TYPE__EFI_HII_ROW_INFO_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_ROW_INFO_STAR_STAR;

TYPE__EFI_HII_ROW_INFO_STAR_STAR TypeInfo__EFI_HII_ROW_INFO_STAR_STAR = {
  .TypeName = "EFI_HII_ROW_INFO**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_ROW_INFO**),
  .PointedType = "EFI_HII_ROW_INFO*"
};


typedef struct _TYPE__EFI_HII_ROW_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_ROW_INFO_STAR;

TYPE__EFI_HII_ROW_INFO_STAR TypeInfo__EFI_HII_ROW_INFO_STAR = {
  .TypeName = "EFI_HII_ROW_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_ROW_INFO*),
  .PointedType = "EFI_HII_ROW_INFO"
};


typedef struct _TYPE__EFI_HII_ROW_INFO{
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
} TYPE__EFI_HII_ROW_INFO;

TYPE__EFI_HII_ROW_INFO TypeInfo__EFI_HII_ROW_INFO = {
  .TypeName = "EFI_HII_ROW_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_ROW_INFO),
  .StructFieldNum = 5,
  .StructFieldName_1 = "StartIndex",
  .StructFieldTypeName_1 = "UINTN",
  .StructFieldName_2 = "EndIndex",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "LineHeight",
  .StructFieldTypeName_3 = "UINTN",
  .StructFieldName_4 = "LineWidth",
  .StructFieldTypeName_4 = "UINTN",
  .StructFieldName_5 = "BaselineOffset",
  .StructFieldTypeName_5 = "UINTN"
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


typedef struct _TYPE__EFI_HII_STRING_ID_TO_IMAGE{
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
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
  const UINTN ParameterInOut_12;
  const CHAR8* ParameterTypeName_12;
} TYPE__EFI_HII_STRING_ID_TO_IMAGE;

TYPE__EFI_HII_STRING_ID_TO_IMAGE TypeInfo__EFI_HII_STRING_ID_TO_IMAGE = {
  .TypeName = "EFI_HII_STRING_ID_TO_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_STRING_ID_TO_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 12,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_FONT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_OUT_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_STRING_ID",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "CHAR8*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_FONT_DISPLAY_INFO*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_OUT,
  .ParameterTypeName_10 = "EFI_HII_ROW_INFO**",
  .ParameterInOut_11 = IO_OUT,
  .ParameterTypeName_11 = "UINTN*",
  .ParameterInOut_12 = IO_OUT,
  .ParameterTypeName_12 = "UINTN*"
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


typedef struct _TYPE__EFI_HII_GET_GLYPH{
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
} TYPE__EFI_HII_GET_GLYPH;

TYPE__EFI_HII_GET_GLYPH TypeInfo__EFI_HII_GET_GLYPH = {
  .TypeName = "EFI_HII_GET_GLYPH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_GLYPH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_FONT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_FONT_DISPLAY_INFO*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINTN*"
};


typedef struct _TYPE__EFI_HII_GET_FONT_INFO{
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
} TYPE__EFI_HII_GET_FONT_INFO;

TYPE__EFI_HII_GET_FONT_INFO TypeInfo__EFI_HII_GET_FONT_INFO = {
  .TypeName = "EFI_HII_GET_FONT_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_FONT_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_FONT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_FONT_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_FONT_DISPLAY_INFO*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_FONT_DISPLAY_INFO**",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_STRING"
};


typedef struct _TYPE__EFI_FONT_HANDLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FONT_HANDLE_STAR;

TYPE__EFI_FONT_HANDLE_STAR TypeInfo__EFI_FONT_HANDLE_STAR = {
  .TypeName = "EFI_FONT_HANDLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FONT_HANDLE*),
  .PointedType = "EFI_FONT_HANDLE"
};


typedef struct _TYPE__EFI_FONT_HANDLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_FONT_HANDLE;

TYPE__EFI_FONT_HANDLE TypeInfo__EFI_FONT_HANDLE = {
  .TypeName = "EFI_FONT_HANDLE",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_FONT_HANDLE),
  .TypedefName = "void*"
};


typedef struct _TYPE__EFI_FONT_DISPLAY_INFO_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FONT_DISPLAY_INFO_STAR_STAR;

TYPE__EFI_FONT_DISPLAY_INFO_STAR_STAR TypeInfo__EFI_FONT_DISPLAY_INFO_STAR_STAR = {
  .TypeName = "EFI_FONT_DISPLAY_INFO**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FONT_DISPLAY_INFO**),
  .PointedType = "EFI_FONT_DISPLAY_INFO*"
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


typedef struct _TYPE__EFI_HII_STRING_PROTOCOL{
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
} TYPE__EFI_HII_STRING_PROTOCOL;

TYPE__EFI_HII_STRING_PROTOCOL TypeInfo__EFI_HII_STRING_PROTOCOL = {
  .TypeName = "EFI_HII_STRING_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_STRING_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "NewString",
  .StructFieldTypeName_1 = "EFI_HII_NEW_STRING",
  .StructFieldName_2 = "GetString",
  .StructFieldTypeName_2 = "EFI_HII_GET_STRING",
  .StructFieldName_3 = "SetString",
  .StructFieldTypeName_3 = "EFI_HII_SET_STRING",
  .StructFieldName_4 = "GetLanguages",
  .StructFieldTypeName_4 = "EFI_HII_GET_LANGUAGES",
  .StructFieldName_5 = "GetSecondaryLanguages",
  .StructFieldTypeName_5 = "EFI_HII_GET_2ND_LANGUAGES"
};


typedef struct _TYPE__EFI_HII_NEW_STRING{
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
} TYPE__EFI_HII_NEW_STRING;

TYPE__EFI_HII_NEW_STRING TypeInfo__EFI_HII_NEW_STRING = {
  .TypeName = "EFI_HII_NEW_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_NEW_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_STRING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING_ID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "CHAR16*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_STRING",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "EFI_FONT_INFO*"
};


typedef struct _TYPE__EFI_HII_STRING_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_STRING_PROTOCOL_STAR;

TYPE__EFI_HII_STRING_PROTOCOL_STAR TypeInfo__EFI_HII_STRING_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_STRING_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_STRING_PROTOCOL*),
  .PointedType = "EFI_HII_STRING_PROTOCOL"
};


typedef struct _TYPE__EFI_STRING_ID_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STRING_ID_STAR;

TYPE__EFI_STRING_ID_STAR TypeInfo__EFI_STRING_ID_STAR = {
  .TypeName = "EFI_STRING_ID*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STRING_ID*),
  .PointedType = "EFI_STRING_ID"
};


typedef struct _TYPE__EFI_FONT_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FONT_INFO_STAR;

TYPE__EFI_FONT_INFO_STAR TypeInfo__EFI_FONT_INFO_STAR = {
  .TypeName = "EFI_FONT_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FONT_INFO*),
  .PointedType = "EFI_FONT_INFO"
};


typedef struct _TYPE__EFI_HII_GET_STRING{
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
} TYPE__EFI_HII_GET_STRING;

TYPE__EFI_HII_GET_STRING TypeInfo__EFI_HII_GET_STRING = {
  .TypeName = "EFI_HII_GET_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_STRING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_STRING_ID",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_STRING",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "EFI_FONT_INFO**"
};


typedef struct _TYPE__EFI_FONT_INFO_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_FONT_INFO_STAR_STAR;

TYPE__EFI_FONT_INFO_STAR_STAR TypeInfo__EFI_FONT_INFO_STAR_STAR = {
  .TypeName = "EFI_FONT_INFO**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_FONT_INFO**),
  .PointedType = "EFI_FONT_INFO*"
};


typedef struct _TYPE__EFI_HII_SET_STRING{
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
} TYPE__EFI_HII_SET_STRING;

TYPE__EFI_HII_SET_STRING TypeInfo__EFI_HII_SET_STRING = {
  .TypeName = "EFI_HII_SET_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_SET_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_STRING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_STRING_ID",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_STRING",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_FONT_INFO*"
};


typedef struct _TYPE__EFI_HII_GET_LANGUAGES{
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
} TYPE__EFI_HII_GET_LANGUAGES;

TYPE__EFI_HII_GET_LANGUAGES TypeInfo__EFI_HII_GET_LANGUAGES = {
  .TypeName = "EFI_HII_GET_LANGUAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_LANGUAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_STRING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__EFI_HII_GET_2ND_LANGUAGES{
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
} TYPE__EFI_HII_GET_2ND_LANGUAGES;

TYPE__EFI_HII_GET_2ND_LANGUAGES TypeInfo__EFI_HII_GET_2ND_LANGUAGES = {
  .TypeName = "EFI_HII_GET_2ND_LANGUAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_2ND_LANGUAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_STRING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "CHAR8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN*"
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


typedef struct _TYPE__EFI_HII_DATABASE_PROTOCOL{
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
} TYPE__EFI_HII_DATABASE_PROTOCOL;

TYPE__EFI_HII_DATABASE_PROTOCOL TypeInfo__EFI_HII_DATABASE_PROTOCOL = {
  .TypeName = "EFI_HII_DATABASE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_DATABASE_PROTOCOL),
  .StructFieldNum = 11,
  .StructFieldName_1 = "NewPackageList",
  .StructFieldTypeName_1 = "EFI_HII_DATABASE_NEW_PACK",
  .StructFieldName_2 = "RemovePackageList",
  .StructFieldTypeName_2 = "EFI_HII_DATABASE_REMOVE_PACK",
  .StructFieldName_3 = "UpdatePackageList",
  .StructFieldTypeName_3 = "EFI_HII_DATABASE_UPDATE_PACK",
  .StructFieldName_4 = "ListPackageLists",
  .StructFieldTypeName_4 = "EFI_HII_DATABASE_LIST_PACKS",
  .StructFieldName_5 = "ExportPackageLists",
  .StructFieldTypeName_5 = "EFI_HII_DATABASE_EXPORT_PACKS",
  .StructFieldName_6 = "RegisterPackageNotify",
  .StructFieldTypeName_6 = "EFI_HII_DATABASE_REGISTER_NOTIFY",
  .StructFieldName_7 = "UnregisterPackageNotify",
  .StructFieldTypeName_7 = "EFI_HII_DATABASE_UNREGISTER_NOTIFY",
  .StructFieldName_8 = "FindKeyboardLayouts",
  .StructFieldTypeName_8 = "EFI_HII_FIND_KEYBOARD_LAYOUTS",
  .StructFieldName_9 = "GetKeyboardLayout",
  .StructFieldTypeName_9 = "EFI_HII_GET_KEYBOARD_LAYOUT",
  .StructFieldName_10 = "SetKeyboardLayout",
  .StructFieldTypeName_10 = "EFI_HII_SET_KEYBOARD_LAYOUT",
  .StructFieldName_11 = "GetPackageListHandle",
  .StructFieldTypeName_11 = "EFI_HII_DATABASE_GET_PACK_HANDLE"
};


typedef struct _TYPE__EFI_HII_DATABASE_NEW_PACK{
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
} TYPE__EFI_HII_DATABASE_NEW_PACK;

TYPE__EFI_HII_DATABASE_NEW_PACK TypeInfo__EFI_HII_DATABASE_NEW_PACK = {
  .TypeName = "EFI_HII_DATABASE_NEW_PACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_NEW_PACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_PACKAGE_LIST_HEADER*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_HII_HANDLE*"
};


typedef struct _TYPE__EFI_HII_DATABASE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_DATABASE_PROTOCOL_STAR;

TYPE__EFI_HII_DATABASE_PROTOCOL_STAR TypeInfo__EFI_HII_DATABASE_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_DATABASE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_DATABASE_PROTOCOL*),
  .PointedType = "EFI_HII_DATABASE_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_PACKAGE_LIST_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_PACKAGE_LIST_HEADER_STAR;

TYPE__EFI_HII_PACKAGE_LIST_HEADER_STAR TypeInfo__EFI_HII_PACKAGE_LIST_HEADER_STAR = {
  .TypeName = "EFI_HII_PACKAGE_LIST_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_PACKAGE_LIST_HEADER*),
  .PointedType = "EFI_HII_PACKAGE_LIST_HEADER"
};


typedef struct _TYPE__EFI_HII_PACKAGE_LIST_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_HII_PACKAGE_LIST_HEADER;

TYPE__EFI_HII_PACKAGE_LIST_HEADER TypeInfo__EFI_HII_PACKAGE_LIST_HEADER = {
  .TypeName = "EFI_HII_PACKAGE_LIST_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_PACKAGE_LIST_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "PackageListGuid",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "PackageLength",
  .StructFieldTypeName_2 = "UINT32"
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


typedef struct _TYPE__EFI_HII_DATABASE_REMOVE_PACK{
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
} TYPE__EFI_HII_DATABASE_REMOVE_PACK;

TYPE__EFI_HII_DATABASE_REMOVE_PACK TypeInfo__EFI_HII_DATABASE_REMOVE_PACK = {
  .TypeName = "EFI_HII_DATABASE_REMOVE_PACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_REMOVE_PACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE"
};


typedef struct _TYPE__EFI_HII_DATABASE_UPDATE_PACK{
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
} TYPE__EFI_HII_DATABASE_UPDATE_PACK;

TYPE__EFI_HII_DATABASE_UPDATE_PACK TypeInfo__EFI_HII_DATABASE_UPDATE_PACK = {
  .TypeName = "EFI_HII_DATABASE_UPDATE_PACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_UPDATE_PACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_PACKAGE_LIST_HEADER*"
};


typedef struct _TYPE__EFI_HII_DATABASE_LIST_PACKS{
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
} TYPE__EFI_HII_DATABASE_LIST_PACKS;

TYPE__EFI_HII_DATABASE_LIST_PACKS TypeInfo__EFI_HII_DATABASE_LIST_PACKS = {
  .TypeName = "EFI_HII_DATABASE_LIST_PACKS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_LIST_PACKS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GUID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HII_HANDLE*"
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


typedef struct _TYPE__EFI_HII_DATABASE_EXPORT_PACKS{
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
} TYPE__EFI_HII_DATABASE_EXPORT_PACKS;

TYPE__EFI_HII_DATABASE_EXPORT_PACKS TypeInfo__EFI_HII_DATABASE_EXPORT_PACKS = {
  .TypeName = "EFI_HII_DATABASE_EXPORT_PACKS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_EXPORT_PACKS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_HII_PACKAGE_LIST_HEADER*"
};


typedef struct _TYPE__EFI_HII_DATABASE_REGISTER_NOTIFY{
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
} TYPE__EFI_HII_DATABASE_REGISTER_NOTIFY;

TYPE__EFI_HII_DATABASE_REGISTER_NOTIFY TypeInfo__EFI_HII_DATABASE_REGISTER_NOTIFY = {
  .TypeName = "EFI_HII_DATABASE_REGISTER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_REGISTER_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GUID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HII_DATABASE_NOTIFY",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_HII_DATABASE_NOTIFY_TYPE",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_HII_DATABASE_NOTIFY{
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
} TYPE__EFI_HII_DATABASE_NOTIFY;

TYPE__EFI_HII_DATABASE_NOTIFY TypeInfo__EFI_HII_DATABASE_NOTIFY = {
  .TypeName = "EFI_HII_DATABASE_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT8",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_PACKAGE_HEADER*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HII_HANDLE",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_HII_DATABASE_NOTIFY_TYPE"
};


typedef struct _TYPE__EFI_HII_PACKAGE_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_PACKAGE_HEADER_STAR;

TYPE__EFI_HII_PACKAGE_HEADER_STAR TypeInfo__EFI_HII_PACKAGE_HEADER_STAR = {
  .TypeName = "EFI_HII_PACKAGE_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_PACKAGE_HEADER*),
  .PointedType = "EFI_HII_PACKAGE_HEADER"
};


typedef struct _TYPE__EFI_HII_PACKAGE_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_HII_PACKAGE_HEADER;

TYPE__EFI_HII_PACKAGE_HEADER TypeInfo__EFI_HII_PACKAGE_HEADER = {
  .TypeName = "EFI_HII_PACKAGE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_PACKAGE_HEADER),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Length",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Type",
  .StructFieldTypeName_2 = "UINT32"
};


typedef struct _TYPE__EFI_HII_DATABASE_NOTIFY_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_HII_DATABASE_NOTIFY_TYPE;

TYPE__EFI_HII_DATABASE_NOTIFY_TYPE TypeInfo__EFI_HII_DATABASE_NOTIFY_TYPE = {
  .TypeName = "EFI_HII_DATABASE_NOTIFY_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_HII_DATABASE_NOTIFY_TYPE),
  .BasicTypeName = "UINTN"
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


typedef struct _TYPE__EFI_HII_DATABASE_UNREGISTER_NOTIFY{
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
} TYPE__EFI_HII_DATABASE_UNREGISTER_NOTIFY;

TYPE__EFI_HII_DATABASE_UNREGISTER_NOTIFY TypeInfo__EFI_HII_DATABASE_UNREGISTER_NOTIFY = {
  .TypeName = "EFI_HII_DATABASE_UNREGISTER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_UNREGISTER_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_HII_FIND_KEYBOARD_LAYOUTS{
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
} TYPE__EFI_HII_FIND_KEYBOARD_LAYOUTS;

TYPE__EFI_HII_FIND_KEYBOARD_LAYOUTS TypeInfo__EFI_HII_FIND_KEYBOARD_LAYOUTS = {
  .TypeName = "EFI_HII_FIND_KEYBOARD_LAYOUTS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_FIND_KEYBOARD_LAYOUTS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_GUID*"
};


typedef struct _TYPE__UINT16_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__UINT16_STAR;

TYPE__UINT16_STAR TypeInfo__UINT16_STAR = {
  .TypeName = "UINT16*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(UINT16*),
  .PointedType = "UINT16"
};


typedef struct _TYPE__EFI_HII_GET_KEYBOARD_LAYOUT{
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
} TYPE__EFI_HII_GET_KEYBOARD_LAYOUT;

TYPE__EFI_HII_GET_KEYBOARD_LAYOUT TypeInfo__EFI_HII_GET_KEYBOARD_LAYOUT = {
  .TypeName = "EFI_HII_GET_KEYBOARD_LAYOUT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_KEYBOARD_LAYOUT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_HII_KEYBOARD_LAYOUT*"
};


typedef struct _TYPE__EFI_HII_KEYBOARD_LAYOUT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_KEYBOARD_LAYOUT_STAR;

TYPE__EFI_HII_KEYBOARD_LAYOUT_STAR TypeInfo__EFI_HII_KEYBOARD_LAYOUT_STAR = {
  .TypeName = "EFI_HII_KEYBOARD_LAYOUT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_KEYBOARD_LAYOUT*),
  .PointedType = "EFI_HII_KEYBOARD_LAYOUT"
};


typedef struct _TYPE__EFI_HII_KEYBOARD_LAYOUT{
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
} TYPE__EFI_HII_KEYBOARD_LAYOUT;

TYPE__EFI_HII_KEYBOARD_LAYOUT TypeInfo__EFI_HII_KEYBOARD_LAYOUT = {
  .TypeName = "EFI_HII_KEYBOARD_LAYOUT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_KEYBOARD_LAYOUT),
  .StructFieldNum = 4,
  .StructFieldName_1 = "LayoutLength",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Guid",
  .StructFieldTypeName_2 = "EFI_GUID",
  .StructFieldName_3 = "LayoutDescriptorStringOffset",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "DescriptorCount",
  .StructFieldTypeName_4 = "UINT8"
};


typedef struct _TYPE__EFI_HII_SET_KEYBOARD_LAYOUT{
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
} TYPE__EFI_HII_SET_KEYBOARD_LAYOUT;

TYPE__EFI_HII_SET_KEYBOARD_LAYOUT TypeInfo__EFI_HII_SET_KEYBOARD_LAYOUT = {
  .TypeName = "EFI_HII_SET_KEYBOARD_LAYOUT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_SET_KEYBOARD_LAYOUT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*"
};


typedef struct _TYPE__EFI_HII_DATABASE_GET_PACK_HANDLE{
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
} TYPE__EFI_HII_DATABASE_GET_PACK_HANDLE;

TYPE__EFI_HII_DATABASE_GET_PACK_HANDLE TypeInfo__EFI_HII_DATABASE_GET_PACK_HANDLE = {
  .TypeName = "EFI_HII_DATABASE_GET_PACK_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DATABASE_GET_PACK_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_DATABASE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_HANDLE*"
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


typedef struct _TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL{
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
} TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL;

TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL TypeInfo__EFI_HII_CONFIG_ROUTING_PROTOCOL = {
  .TypeName = "EFI_HII_CONFIG_ROUTING_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_CONFIG_ROUTING_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "ExtractConfig",
  .StructFieldTypeName_1 = "EFI_HII_EXTRACT_CONFIG",
  .StructFieldName_2 = "ExportConfig",
  .StructFieldTypeName_2 = "EFI_HII_EXPORT_CONFIG",
  .StructFieldName_3 = "RouteConfig",
  .StructFieldTypeName_3 = "EFI_HII_ROUTE_CONFIG",
  .StructFieldName_4 = "BlockToConfig",
  .StructFieldTypeName_4 = "EFI_HII_BLOCK_TO_CONFIG",
  .StructFieldName_5 = "ConfigToBlock",
  .StructFieldTypeName_5 = "EFI_HII_CONFIG_TO_BLOCK",
  .StructFieldName_6 = "GetAltConfig",
  .StructFieldTypeName_6 = "EFI_HII_GET_ALT_CFG"
};


typedef struct _TYPE__EFI_HII_EXTRACT_CONFIG{
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
} TYPE__EFI_HII_EXTRACT_CONFIG;

TYPE__EFI_HII_EXTRACT_CONFIG TypeInfo__EFI_HII_EXTRACT_CONFIG = {
  .TypeName = "EFI_HII_EXTRACT_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_EXTRACT_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL_STAR;

TYPE__EFI_HII_CONFIG_ROUTING_PROTOCOL_STAR TypeInfo__EFI_HII_CONFIG_ROUTING_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_CONFIG_ROUTING_PROTOCOL*),
  .PointedType = "EFI_HII_CONFIG_ROUTING_PROTOCOL"
};


typedef struct _TYPE__EFI_STRING_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STRING_STAR;

TYPE__EFI_STRING_STAR TypeInfo__EFI_STRING_STAR = {
  .TypeName = "EFI_STRING*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STRING*),
  .PointedType = "EFI_STRING"
};


typedef struct _TYPE__EFI_HII_EXPORT_CONFIG{
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
} TYPE__EFI_HII_EXPORT_CONFIG;

TYPE__EFI_HII_EXPORT_CONFIG TypeInfo__EFI_HII_EXPORT_CONFIG = {
  .TypeName = "EFI_HII_EXPORT_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_EXPORT_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_ROUTE_CONFIG{
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
} TYPE__EFI_HII_ROUTE_CONFIG;

TYPE__EFI_HII_ROUTE_CONFIG TypeInfo__EFI_HII_ROUTE_CONFIG = {
  .TypeName = "EFI_HII_ROUTE_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_ROUTE_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_BLOCK_TO_CONFIG{
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
} TYPE__EFI_HII_BLOCK_TO_CONFIG;

TYPE__EFI_HII_BLOCK_TO_CONFIG TypeInfo__EFI_HII_BLOCK_TO_CONFIG = {
  .TypeName = "EFI_HII_BLOCK_TO_CONFIG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_BLOCK_TO_CONFIG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_STRING*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_STRING*"
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


typedef struct _TYPE__EFI_HII_CONFIG_TO_BLOCK{
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
} TYPE__EFI_HII_CONFIG_TO_BLOCK;

TYPE__EFI_HII_CONFIG_TO_BLOCK TypeInfo__EFI_HII_CONFIG_TO_BLOCK = {
  .TypeName = "EFI_HII_CONFIG_TO_BLOCK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_CONFIG_TO_BLOCK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_STRING*"
};


typedef struct _TYPE__EFI_HII_GET_ALT_CFG{
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
} TYPE__EFI_HII_GET_ALT_CFG;

TYPE__EFI_HII_GET_ALT_CFG TypeInfo__EFI_HII_GET_ALT_CFG = {
  .TypeName = "EFI_HII_GET_ALT_CFG",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_ALT_CFG),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_CONFIG_ROUTING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GUID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_STRING",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT16*",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "EFI_STRING*"
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


typedef struct _TYPE__gEfiConfigKeywordHandlerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiConfigKeywordHandlerProtocolGuid;

TYPE__gEfiConfigKeywordHandlerProtocolGuid TypeInfo__gEfiConfigKeywordHandlerProtocolGuid = {
  .TypeName = "gEfiConfigKeywordHandlerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiConfigKeywordHandlerProtocolGuid,
  .InterfaceStructName = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL"
};


typedef struct _TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL;

TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL = {
  .TypeName = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "SetData",
  .StructFieldTypeName_1 = "EFI_CONFIG_KEYWORD_HANDLER_SET_DATA",
  .StructFieldName_2 = "GetData",
  .StructFieldTypeName_2 = "EFI_CONFIG_KEYWORD_HANDLER_GET_DATA"
};


typedef struct _TYPE__EFI_CONFIG_KEYWORD_HANDLER_SET_DATA{
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
} TYPE__EFI_CONFIG_KEYWORD_HANDLER_SET_DATA;

TYPE__EFI_CONFIG_KEYWORD_HANDLER_SET_DATA TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_SET_DATA = {
  .TypeName = "EFI_CONFIG_KEYWORD_HANDLER_SET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONFIG_KEYWORD_HANDLER_SET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_STRING*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT32*"
};


typedef struct _TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL_STAR;

TYPE__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL_STAR TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL_STAR = {
  .TypeName = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL*),
  .PointedType = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL"
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


typedef struct _TYPE__EFI_CONFIG_KEYWORD_HANDLER_GET_DATA{
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
} TYPE__EFI_CONFIG_KEYWORD_HANDLER_GET_DATA;

TYPE__EFI_CONFIG_KEYWORD_HANDLER_GET_DATA TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_GET_DATA = {
  .TypeName = "EFI_CONFIG_KEYWORD_HANDLER_GET_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONFIG_KEYWORD_HANDLER_GET_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STRING",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_STRING",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_STRING*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT32*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_STRING*"
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


typedef struct _TYPE__EFI_HII_IMAGE_PROTOCOL{
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
} TYPE__EFI_HII_IMAGE_PROTOCOL;

TYPE__EFI_HII_IMAGE_PROTOCOL TypeInfo__EFI_HII_IMAGE_PROTOCOL = {
  .TypeName = "EFI_HII_IMAGE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_IMAGE_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "NewImage",
  .StructFieldTypeName_1 = "EFI_HII_NEW_IMAGE",
  .StructFieldName_2 = "GetImage",
  .StructFieldTypeName_2 = "EFI_HII_GET_IMAGE",
  .StructFieldName_3 = "SetImage",
  .StructFieldTypeName_3 = "EFI_HII_SET_IMAGE",
  .StructFieldName_4 = "DrawImage",
  .StructFieldTypeName_4 = "EFI_HII_DRAW_IMAGE",
  .StructFieldName_5 = "DrawImageId",
  .StructFieldTypeName_5 = "EFI_HII_DRAW_IMAGE_ID"
};


typedef struct _TYPE__EFI_HII_NEW_IMAGE{
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
} TYPE__EFI_HII_NEW_IMAGE;

TYPE__EFI_HII_NEW_IMAGE TypeInfo__EFI_HII_NEW_IMAGE = {
  .TypeName = "EFI_HII_NEW_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_NEW_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_IMAGE_ID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_IMAGE_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_IMAGE_PROTOCOL_STAR;

TYPE__EFI_HII_IMAGE_PROTOCOL_STAR TypeInfo__EFI_HII_IMAGE_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_IMAGE_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_IMAGE_PROTOCOL*),
  .PointedType = "EFI_HII_IMAGE_PROTOCOL"
};


typedef struct _TYPE__EFI_IMAGE_ID_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IMAGE_ID_STAR;

TYPE__EFI_IMAGE_ID_STAR TypeInfo__EFI_IMAGE_ID_STAR = {
  .TypeName = "EFI_IMAGE_ID*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IMAGE_ID*),
  .PointedType = "EFI_IMAGE_ID"
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


typedef struct _TYPE__EFI_IMAGE_INPUT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IMAGE_INPUT_STAR;

TYPE__EFI_IMAGE_INPUT_STAR TypeInfo__EFI_IMAGE_INPUT_STAR = {
  .TypeName = "EFI_IMAGE_INPUT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IMAGE_INPUT*),
  .PointedType = "EFI_IMAGE_INPUT"
};


typedef struct _TYPE__EFI_IMAGE_INPUT{
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
} TYPE__EFI_IMAGE_INPUT;

TYPE__EFI_IMAGE_INPUT TypeInfo__EFI_IMAGE_INPUT = {
  .TypeName = "EFI_IMAGE_INPUT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IMAGE_INPUT),
  .StructFieldNum = 4,
  .StructFieldName_1 = "Flags",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Width",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Height",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Bitmap",
  .StructFieldTypeName_4 = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL*"
};


typedef struct _TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR;

TYPE__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR = {
  .TypeName = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL*),
  .PointedType = "EFI_GRAPHICS_OUTPUT_BLT_PIXEL"
};


typedef struct _TYPE__EFI_HII_GET_IMAGE{
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
} TYPE__EFI_HII_GET_IMAGE;

TYPE__EFI_HII_GET_IMAGE TypeInfo__EFI_HII_GET_IMAGE = {
  .TypeName = "EFI_HII_GET_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_ID",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_SET_IMAGE{
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
} TYPE__EFI_HII_SET_IMAGE;

TYPE__EFI_HII_SET_IMAGE TypeInfo__EFI_HII_SET_IMAGE = {
  .TypeName = "EFI_HII_SET_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_SET_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_ID",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_DRAW_IMAGE{
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
} TYPE__EFI_HII_DRAW_IMAGE;

TYPE__EFI_HII_DRAW_IMAGE TypeInfo__EFI_HII_DRAW_IMAGE = {
  .TypeName = "EFI_HII_DRAW_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DRAW_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_DRAW_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_INPUT*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN"
};


typedef struct _TYPE__EFI_HII_DRAW_FLAGS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_HII_DRAW_FLAGS;

TYPE__EFI_HII_DRAW_FLAGS TypeInfo__EFI_HII_DRAW_FLAGS = {
  .TypeName = "EFI_HII_DRAW_FLAGS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_HII_DRAW_FLAGS),
  .BasicTypeName = "UINT32"
};


typedef struct _TYPE__EFI_HII_DRAW_IMAGE_ID{
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
} TYPE__EFI_HII_DRAW_IMAGE_ID;

TYPE__EFI_HII_DRAW_IMAGE_ID TypeInfo__EFI_HII_DRAW_IMAGE_ID = {
  .TypeName = "EFI_HII_DRAW_IMAGE_ID",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DRAW_IMAGE_ID),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_NULL,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_PROTOCOL*",
  .ParameterInOut_2 = IO_NULL,
  .ParameterTypeName_2 = "EFI_HII_DRAW_FLAGS",
  .ParameterInOut_3 = IO_NULL,
  .ParameterTypeName_3 = "EFI_HII_HANDLE",
  .ParameterInOut_4 = IO_NULL,
  .ParameterTypeName_4 = "EFI_IMAGE_ID",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_6 = IO_NULL,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_NULL,
  .ParameterTypeName_7 = "UINTN"
};


typedef struct _TYPE__gEfiHiiImageExProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiImageExProtocolGuid;

TYPE__gEfiHiiImageExProtocolGuid TypeInfo__gEfiHiiImageExProtocolGuid = {
  .TypeName = "gEfiHiiImageExProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiImageExProtocolGuid,
  .InterfaceStructName = "EFI_HII_IMAGE_EX_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_IMAGE_EX_PROTOCOL{
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
} TYPE__EFI_HII_IMAGE_EX_PROTOCOL;

TYPE__EFI_HII_IMAGE_EX_PROTOCOL TypeInfo__EFI_HII_IMAGE_EX_PROTOCOL = {
  .TypeName = "EFI_HII_IMAGE_EX_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_HII_IMAGE_EX_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "NewImageEx",
  .StructFieldTypeName_1 = "EFI_HII_NEW_IMAGE_EX",
  .StructFieldName_2 = "GetImageEx",
  .StructFieldTypeName_2 = "EFI_HII_GET_IMAGE_EX",
  .StructFieldName_3 = "SetImageEx",
  .StructFieldTypeName_3 = "EFI_HII_SET_IMAGE_EX",
  .StructFieldName_4 = "DrawImageEx",
  .StructFieldTypeName_4 = "EFI_HII_DRAW_IMAGE_EX",
  .StructFieldName_5 = "DrawImageIdEx",
  .StructFieldTypeName_5 = "EFI_HII_DRAW_IMAGE_ID_EX",
  .StructFieldName_6 = "GetImageInfo",
  .StructFieldTypeName_6 = "EFI_HII_GET_IMAGE_INFO"
};


typedef struct _TYPE__EFI_HII_NEW_IMAGE_EX{
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
} TYPE__EFI_HII_NEW_IMAGE_EX;

TYPE__EFI_HII_NEW_IMAGE_EX TypeInfo__EFI_HII_NEW_IMAGE_EX = {
  .TypeName = "EFI_HII_NEW_IMAGE_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_NEW_IMAGE_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_IMAGE_ID*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_IMAGE_EX_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HII_IMAGE_EX_PROTOCOL_STAR;

TYPE__EFI_HII_IMAGE_EX_PROTOCOL_STAR TypeInfo__EFI_HII_IMAGE_EX_PROTOCOL_STAR = {
  .TypeName = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HII_IMAGE_EX_PROTOCOL*),
  .PointedType = "EFI_HII_IMAGE_EX_PROTOCOL"
};


typedef struct _TYPE__EFI_HII_GET_IMAGE_EX{
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
} TYPE__EFI_HII_GET_IMAGE_EX;

TYPE__EFI_HII_GET_IMAGE_EX TypeInfo__EFI_HII_GET_IMAGE_EX = {
  .TypeName = "EFI_HII_GET_IMAGE_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_IMAGE_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_ID",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_SET_IMAGE_EX{
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
} TYPE__EFI_HII_SET_IMAGE_EX;

TYPE__EFI_HII_SET_IMAGE_EX TypeInfo__EFI_HII_SET_IMAGE_EX = {
  .TypeName = "EFI_HII_SET_IMAGE_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_SET_IMAGE_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_ID",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_INPUT*"
};


typedef struct _TYPE__EFI_HII_DRAW_IMAGE_EX{
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
} TYPE__EFI_HII_DRAW_IMAGE_EX;

TYPE__EFI_HII_DRAW_IMAGE_EX TypeInfo__EFI_HII_DRAW_IMAGE_EX = {
  .TypeName = "EFI_HII_DRAW_IMAGE_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DRAW_IMAGE_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_DRAW_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_INPUT*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN"
};


typedef struct _TYPE__EFI_HII_DRAW_IMAGE_ID_EX{
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
} TYPE__EFI_HII_DRAW_IMAGE_ID_EX;

TYPE__EFI_HII_DRAW_IMAGE_ID_EX TypeInfo__EFI_HII_DRAW_IMAGE_ID_EX = {
  .TypeName = "EFI_HII_DRAW_IMAGE_ID_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_DRAW_IMAGE_ID_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_DRAW_FLAGS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HII_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IMAGE_ID",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_IMAGE_OUTPUT**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINTN",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN"
};


typedef struct _TYPE__EFI_HII_GET_IMAGE_INFO{
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
} TYPE__EFI_HII_GET_IMAGE_INFO;

TYPE__EFI_HII_GET_IMAGE_INFO TypeInfo__EFI_HII_GET_IMAGE_INFO = {
  .TypeName = "EFI_HII_GET_IMAGE_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HII_GET_IMAGE_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HII_IMAGE_EX_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HII_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_IMAGE_ID",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_IMAGE_OUTPUT*"
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


typedef struct _TYPE__gEfiPcdProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPcdProtocolGuid;

TYPE__gEfiPcdProtocolGuid TypeInfo__gEfiPcdProtocolGuid = {
  .TypeName = "gEfiPcdProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPcdProtocolGuid,
  .InterfaceStructName = "EFI_PCD_PROTOCOL"
};


typedef struct _TYPE__gEfiHiiImageDecoderProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiHiiImageDecoderProtocolGuid;

TYPE__gEfiHiiImageDecoderProtocolGuid TypeInfo__gEfiHiiImageDecoderProtocolGuid = {
  .TypeName = "gEfiHiiImageDecoderProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiHiiImageDecoderProtocolGuid,
  .InterfaceStructName = "EFI_HII_IMAGE_DECODER_PROTOCOL"
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


typedef struct _TYPE__gEfiGetPcdInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiGetPcdInfoProtocolGuid;

TYPE__gEfiGetPcdInfoProtocolGuid TypeInfo__gEfiGetPcdInfoProtocolGuid = {
  .TypeName = "gEfiGetPcdInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiGetPcdInfoProtocolGuid,
  .InterfaceStructName = "EFI_GET_PCD_INFO_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiPcdProtocolGuid,
  &TypeInfo__gEfiGetPcdInfoProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiHiiConfigAccessProtocolGuid,
  &TypeInfo__gEfiHiiImageDecoderProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiHiiImageExProtocolGuid,
  &TypeInfo__gEfiConfigKeywordHandlerProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiHiiFontProtocolGuid,
  &TypeInfo__EFI_HII_FONT_PROTOCOL,
  &TypeInfo__EFI_HII_STRING_TO_IMAGE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_HII_FONT_PROTOCOL_STAR,
  &TypeInfo__EFI_HII_OUT_FLAGS,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_STRING,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_FONT_DISPLAY_INFO_STAR,
  &TypeInfo__EFI_FONT_DISPLAY_INFO,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_FONT_INFO_MASK,
  &TypeInfo__EFI_FONT_INFO,
  &TypeInfo__EFI_HII_FONT_STYLE,
  &TypeInfo__UINT16,
  &TypeInfo__CHAR16_ARRAY_1,
  &TypeInfo__EFI_IMAGE_OUTPUT_STAR_STAR,
  &TypeInfo__EFI_IMAGE_OUTPUT_STAR,
  &TypeInfo__EFI_IMAGE_OUTPUT,
  &TypeInfo__EFI_HII_ROW_INFO_STAR_STAR,
  &TypeInfo__EFI_HII_ROW_INFO_STAR,
  &TypeInfo__EFI_HII_ROW_INFO,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_HII_STRING_ID_TO_IMAGE,
  &TypeInfo__EFI_HII_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_STRING_ID,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__EFI_HII_GET_GLYPH,
  &TypeInfo__EFI_HII_GET_FONT_INFO,
  &TypeInfo__EFI_FONT_HANDLE_STAR,
  &TypeInfo__EFI_FONT_HANDLE,
  &TypeInfo__EFI_FONT_DISPLAY_INFO_STAR_STAR,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__EFI_HII_STRING_PROTOCOL,
  &TypeInfo__EFI_HII_NEW_STRING,
  &TypeInfo__EFI_HII_STRING_PROTOCOL_STAR,
  &TypeInfo__EFI_STRING_ID_STAR,
  &TypeInfo__EFI_FONT_INFO_STAR,
  &TypeInfo__EFI_HII_GET_STRING,
  &TypeInfo__EFI_FONT_INFO_STAR_STAR,
  &TypeInfo__EFI_HII_SET_STRING,
  &TypeInfo__EFI_HII_GET_LANGUAGES,
  &TypeInfo__EFI_HII_GET_2ND_LANGUAGES,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__EFI_HII_DATABASE_PROTOCOL,
  &TypeInfo__EFI_HII_DATABASE_NEW_PACK,
  &TypeInfo__EFI_HII_DATABASE_PROTOCOL_STAR,
  &TypeInfo__EFI_HII_PACKAGE_LIST_HEADER_STAR,
  &TypeInfo__EFI_HII_PACKAGE_LIST_HEADER,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__EFI_HII_HANDLE_STAR,
  &TypeInfo__EFI_HII_DATABASE_REMOVE_PACK,
  &TypeInfo__EFI_HII_DATABASE_UPDATE_PACK,
  &TypeInfo__EFI_HII_DATABASE_LIST_PACKS,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_HII_DATABASE_EXPORT_PACKS,
  &TypeInfo__EFI_HII_DATABASE_REGISTER_NOTIFY,
  &TypeInfo__EFI_HII_DATABASE_NOTIFY,
  &TypeInfo__EFI_HII_PACKAGE_HEADER_STAR,
  &TypeInfo__EFI_HII_PACKAGE_HEADER,
  &TypeInfo__EFI_HII_DATABASE_NOTIFY_TYPE,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_HII_DATABASE_UNREGISTER_NOTIFY,
  &TypeInfo__EFI_HII_FIND_KEYBOARD_LAYOUTS,
  &TypeInfo__UINT16_STAR,
  &TypeInfo__EFI_HII_GET_KEYBOARD_LAYOUT,
  &TypeInfo__EFI_HII_KEYBOARD_LAYOUT_STAR,
  &TypeInfo__EFI_HII_KEYBOARD_LAYOUT,
  &TypeInfo__EFI_HII_SET_KEYBOARD_LAYOUT,
  &TypeInfo__EFI_HII_DATABASE_GET_PACK_HANDLE,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  &TypeInfo__EFI_HII_CONFIG_ROUTING_PROTOCOL,
  &TypeInfo__EFI_HII_EXTRACT_CONFIG,
  &TypeInfo__EFI_HII_CONFIG_ROUTING_PROTOCOL_STAR,
  &TypeInfo__EFI_STRING_STAR,
  &TypeInfo__EFI_HII_EXPORT_CONFIG,
  &TypeInfo__EFI_HII_ROUTE_CONFIG,
  &TypeInfo__EFI_HII_BLOCK_TO_CONFIG,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_HII_CONFIG_TO_BLOCK,
  &TypeInfo__EFI_HII_GET_ALT_CFG,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__gEfiConfigKeywordHandlerProtocolGuid,
  &TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL,
  &TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_SET_DATA,
  &TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_PROTOCOL_STAR,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_CONFIG_KEYWORD_HANDLER_GET_DATA,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__EFI_HII_IMAGE_PROTOCOL,
  &TypeInfo__EFI_HII_NEW_IMAGE,
  &TypeInfo__EFI_HII_IMAGE_PROTOCOL_STAR,
  &TypeInfo__EFI_IMAGE_ID_STAR,
  &TypeInfo__EFI_IMAGE_ID,
  &TypeInfo__EFI_IMAGE_INPUT_STAR,
  &TypeInfo__EFI_IMAGE_INPUT,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR,
  &TypeInfo__EFI_HII_GET_IMAGE,
  &TypeInfo__EFI_HII_SET_IMAGE,
  &TypeInfo__EFI_HII_DRAW_IMAGE,
  &TypeInfo__EFI_HII_DRAW_FLAGS,
  &TypeInfo__EFI_HII_DRAW_IMAGE_ID,
  &TypeInfo__gEfiHiiImageExProtocolGuid,
  &TypeInfo__EFI_HII_IMAGE_EX_PROTOCOL,
  &TypeInfo__EFI_HII_NEW_IMAGE_EX,
  &TypeInfo__EFI_HII_IMAGE_EX_PROTOCOL_STAR,
  &TypeInfo__EFI_HII_GET_IMAGE_EX,
  &TypeInfo__EFI_HII_SET_IMAGE_EX,
  &TypeInfo__EFI_HII_DRAW_IMAGE_EX,
  &TypeInfo__EFI_HII_DRAW_IMAGE_ID_EX,
  &TypeInfo__EFI_HII_GET_IMAGE_INFO,
  NULL
};