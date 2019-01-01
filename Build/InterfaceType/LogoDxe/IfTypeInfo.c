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

typedef struct _TYPE__gEdkiiPlatformLogoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiPlatformLogoProtocolGuid;

TYPE__gEdkiiPlatformLogoProtocolGuid TypeInfo__gEdkiiPlatformLogoProtocolGuid = {
  .TypeName = "gEdkiiPlatformLogoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiPlatformLogoProtocolGuid,
  .InterfaceStructName = "EDKII_PLATFORM_LOGO_PROTOCOL"
};


typedef struct _TYPE__EDKII_PLATFORM_LOGO_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EDKII_PLATFORM_LOGO_PROTOCOL;

TYPE__EDKII_PLATFORM_LOGO_PROTOCOL TypeInfo__EDKII_PLATFORM_LOGO_PROTOCOL = {
  .TypeName = "EDKII_PLATFORM_LOGO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EDKII_PLATFORM_LOGO_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "GetImage",
  .StructFieldTypeName_1 = "EDKII_PLATFORM_LOGO_GET_IMAGE"
};


typedef struct _TYPE__EDKII_PLATFORM_LOGO_GET_IMAGE{
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
} TYPE__EDKII_PLATFORM_LOGO_GET_IMAGE;

TYPE__EDKII_PLATFORM_LOGO_GET_IMAGE TypeInfo__EDKII_PLATFORM_LOGO_GET_IMAGE = {
  .TypeName = "EDKII_PLATFORM_LOGO_GET_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_PLATFORM_LOGO_GET_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_PLATFORM_LOGO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_IMAGE_INPUT*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "INTN*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "INTN*"
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


typedef struct _TYPE__EDKII_PLATFORM_LOGO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EDKII_PLATFORM_LOGO_PROTOCOL_STAR;

TYPE__EDKII_PLATFORM_LOGO_PROTOCOL_STAR TypeInfo__EDKII_PLATFORM_LOGO_PROTOCOL_STAR = {
  .TypeName = "EDKII_PLATFORM_LOGO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EDKII_PLATFORM_LOGO_PROTOCOL*),
  .PointedType = "EDKII_PLATFORM_LOGO_PROTOCOL"
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


typedef struct _TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE_STAR;

TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE_STAR TypeInfo__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE_STAR = {
  .TypeName = "EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE*),
  .PointedType = "EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE"
};


typedef struct _TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE{
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
} TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE;

TYPE__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE TypeInfo__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE = {
  .TypeName = "EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE),
  .EnumValueNum = 9,
  .EnumValueName_1 = "EdkiiPlatformLogoDisplayAttributeLeftTop",
  .EnumValue_1 = EdkiiPlatformLogoDisplayAttributeLeftTop,
  .EnumValueName_2 = "EdkiiPlatformLogoDisplayAttributeCenterTop",
  .EnumValue_2 = EdkiiPlatformLogoDisplayAttributeCenterTop,
  .EnumValueName_3 = "EdkiiPlatformLogoDisplayAttributeRightTop",
  .EnumValue_3 = EdkiiPlatformLogoDisplayAttributeRightTop,
  .EnumValueName_4 = "EdkiiPlatformLogoDisplayAttributeCenterRight",
  .EnumValue_4 = EdkiiPlatformLogoDisplayAttributeCenterRight,
  .EnumValueName_5 = "EdkiiPlatformLogoDisplayAttributeRightBottom",
  .EnumValue_5 = EdkiiPlatformLogoDisplayAttributeRightBottom,
  .EnumValueName_6 = "EdkiiPlatformLogoDisplayAttributeCenterBottom",
  .EnumValue_6 = EdkiiPlatformLogoDisplayAttributeCenterBottom,
  .EnumValueName_7 = "EdkiiPlatformLogoDisplayAttributeLeftBottom",
  .EnumValue_7 = EdkiiPlatformLogoDisplayAttributeLeftBottom,
  .EnumValueName_8 = "EdkiiPlatformLogoDisplayAttributeCenterLeft",
  .EnumValue_8 = EdkiiPlatformLogoDisplayAttributeCenterLeft,
  .EnumValueName_9 = "EdkiiPlatformLogoDisplayAttributeCenter",
  .EnumValue_9 = EdkiiPlatformLogoDisplayAttributeCenter
};


typedef struct _TYPE__INTN_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__INTN_STAR;

TYPE__INTN_STAR TypeInfo__INTN_STAR = {
  .TypeName = "INTN*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(INTN*),
  .PointedType = "INTN"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiHiiPackageListProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageExProtocolGuid,
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
  &TypeInfo__gEdkiiPlatformLogoProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEdkiiPlatformLogoProtocolGuid,
  &TypeInfo__EDKII_PLATFORM_LOGO_PROTOCOL,
  &TypeInfo__EDKII_PLATFORM_LOGO_GET_IMAGE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EDKII_PLATFORM_LOGO_PROTOCOL_STAR,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_IMAGE_INPUT_STAR,
  &TypeInfo__EFI_IMAGE_INPUT,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL_STAR,
  &TypeInfo__EFI_GRAPHICS_OUTPUT_BLT_PIXEL,
  &TypeInfo__UINT8,
  &TypeInfo__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE_STAR,
  &TypeInfo__EDKII_PLATFORM_LOGO_DISPLAY_ATTRIBUTE,
  &TypeInfo__INTN_STAR,
  &TypeInfo__INTN,
  &TypeInfo__INT64,
  NULL
};