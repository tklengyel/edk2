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

typedef struct _TYPE__gEfiBdsArchProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBdsArchProtocolGuid;

TYPE__gEfiBdsArchProtocolGuid TypeInfo__gEfiBdsArchProtocolGuid = {
  .TypeName = "gEfiBdsArchProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBdsArchProtocolGuid,
  .InterfaceStructName = "EFI_BDS_ARCH_PROTOCOL"
};


typedef struct _TYPE__EFI_BDS_ARCH_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_BDS_ARCH_PROTOCOL;

TYPE__EFI_BDS_ARCH_PROTOCOL TypeInfo__EFI_BDS_ARCH_PROTOCOL = {
  .TypeName = "EFI_BDS_ARCH_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BDS_ARCH_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "Entry",
  .StructFieldTypeName_1 = "EFI_BDS_ENTRY"
};


typedef struct _TYPE__EFI_BDS_ENTRY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_BDS_ENTRY;

TYPE__EFI_BDS_ENTRY TypeInfo__EFI_BDS_ENTRY = {
  .TypeName = "EFI_BDS_ENTRY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_BDS_ENTRY),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_BDS_ARCH_PROTOCOL*"
};


typedef struct _TYPE__EFI_BDS_ARCH_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BDS_ARCH_PROTOCOL_STAR;

TYPE__EFI_BDS_ARCH_PROTOCOL_STAR TypeInfo__EFI_BDS_ARCH_PROTOCOL_STAR = {
  .TypeName = "EFI_BDS_ARCH_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BDS_ARCH_PROTOCOL*),
  .PointedType = "EFI_BDS_ARCH_PROTOCOL"
};


typedef struct _TYPE__gEfiLoadFileProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadFileProtocolGuid;

TYPE__gEfiLoadFileProtocolGuid TypeInfo__gEfiLoadFileProtocolGuid = {
  .TypeName = "gEfiLoadFileProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadFileProtocolGuid,
  .InterfaceStructName = "EFI_LOAD_FILE_PROTOCOL"
};


typedef struct _TYPE__gEfiBootLogoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiBootLogoProtocolGuid;

TYPE__gEfiBootLogoProtocolGuid TypeInfo__gEfiBootLogoProtocolGuid = {
  .TypeName = "gEfiBootLogoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiBootLogoProtocolGuid,
  .InterfaceStructName = "EFI_BOOT_LOGO_PROTOCOL"
};


typedef struct _TYPE__gEdkiiBootLogo2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiBootLogo2ProtocolGuid;

TYPE__gEdkiiBootLogo2ProtocolGuid TypeInfo__gEdkiiBootLogo2ProtocolGuid = {
  .TypeName = "gEdkiiBootLogo2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiBootLogo2ProtocolGuid,
  .InterfaceStructName = "EDKII_BOOT_LOGO2_PROTOCOL"
};


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


typedef struct _TYPE__gEfiDriverHealthProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverHealthProtocolGuid;

TYPE__gEfiDriverHealthProtocolGuid TypeInfo__gEfiDriverHealthProtocolGuid = {
  .TypeName = "gEfiDriverHealthProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverHealthProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_HEALTH_PROTOCOL"
};


typedef struct _TYPE__gEfiNvmExpressPassThruProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiNvmExpressPassThruProtocolGuid;

TYPE__gEfiNvmExpressPassThruProtocolGuid TypeInfo__gEfiNvmExpressPassThruProtocolGuid = {
  .TypeName = "gEfiNvmExpressPassThruProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiNvmExpressPassThruProtocolGuid,
  .InterfaceStructName = "EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL"
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


typedef struct _TYPE__gPcdProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gPcdProtocolGuid;

TYPE__gPcdProtocolGuid TypeInfo__gPcdProtocolGuid = {
  .TypeName = "gPcdProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gPcdProtocolGuid,
  .InterfaceStructName = "PCD_PROTOCOL"
};


typedef struct _TYPE__gEfiLoadFile2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLoadFile2ProtocolGuid;

TYPE__gEfiLoadFile2ProtocolGuid TypeInfo__gEfiLoadFile2ProtocolGuid = {
  .TypeName = "gEfiLoadFile2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLoadFile2ProtocolGuid,
  .InterfaceStructName = "EFI_LOAD_FILE2_PROTOCOL"
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
  .InterfaceStructName = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__gEfiUgaDrawProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUgaDrawProtocolGuid;

TYPE__gEfiUgaDrawProtocolGuid TypeInfo__gEfiUgaDrawProtocolGuid = {
  .TypeName = "gEfiUgaDrawProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUgaDrawProtocolGuid,
  .InterfaceStructName = "EFI_UGA_DRAW_PROTOCOL"
};


typedef struct _TYPE__gEfiDiskInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDiskInfoProtocolGuid;

TYPE__gEfiDiskInfoProtocolGuid TypeInfo__gEfiDiskInfoProtocolGuid = {
  .TypeName = "gEfiDiskInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDiskInfoProtocolGuid,
  .InterfaceStructName = "EFI_DISK_INFO_PROTOCOL"
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


typedef struct _TYPE__gEfiStatusCodeRuntimeProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiStatusCodeRuntimeProtocolGuid;

TYPE__gEfiStatusCodeRuntimeProtocolGuid TypeInfo__gEfiStatusCodeRuntimeProtocolGuid = {
  .TypeName = "gEfiStatusCodeRuntimeProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiStatusCodeRuntimeProtocolGuid,
  .InterfaceStructName = "EFI_STATUS_CODE_PROTOCOL"
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
  .InterfaceStructName = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__gEfiRamDiskProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiRamDiskProtocolGuid;

TYPE__gEfiRamDiskProtocolGuid TypeInfo__gEfiRamDiskProtocolGuid = {
  .TypeName = "gEfiRamDiskProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiRamDiskProtocolGuid,
  .InterfaceStructName = "EFI_RAM_DISK_PROTOCOL"
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


typedef struct _TYPE__gEfiDeferredImageLoadProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDeferredImageLoadProtocolGuid;

TYPE__gEfiDeferredImageLoadProtocolGuid TypeInfo__gEfiDeferredImageLoadProtocolGuid = {
  .TypeName = "gEfiDeferredImageLoadProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDeferredImageLoadProtocolGuid,
  .InterfaceStructName = "EFI_DEFERRED_IMAGE_LOAD_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadFileProtocolGuid,
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  &TypeInfo__gEdkiiVariableLockProtocolGuid,
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__gEfiHiiFontProtocolGuid,
  &TypeInfo__gEdkiiBootLogo2ProtocolGuid,
  &TypeInfo__gEfiBootLogoProtocolGuid,
  &TypeInfo__gEfiRamDiskProtocolGuid,
  &TypeInfo__gEdkiiPlatformLogoProtocolGuid,
  &TypeInfo__gEfiHiiDatabaseProtocolGuid,
  &TypeInfo__gEfiHiiImageProtocolGuid,
  &TypeInfo__gEfiHiiStringProtocolGuid,
  &TypeInfo__gEfiFormBrowser2ProtocolGuid,
  &TypeInfo__gEfiHiiConfigRoutingProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiFirmwareVolume2ProtocolGuid,
  &TypeInfo__gEfiGraphicsOutputProtocolGuid,
  &TypeInfo__gEfiLoadFileProtocolGuid,
  &TypeInfo__gEfiLoadFile2ProtocolGuid,
  &TypeInfo__gEfiSimpleTextInputExProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__gEfiSimpleFileSystemProtocolGuid,
  &TypeInfo__gEfiDeferredImageLoadProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiUgaDrawProtocolGuid,
  &TypeInfo__gEfiDiskInfoProtocolGuid,
  &TypeInfo__gEfiDriverHealthProtocolGuid,
  &TypeInfo__gEfiNvmExpressPassThruProtocolGuid,
  &TypeInfo__gEfiBlockIoProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiSimpleTextOutProtocolGuid,
  &TypeInfo__gEfiUsbIoProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gEfiBdsArchProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiBdsArchProtocolGuid,
  &TypeInfo__EFI_BDS_ARCH_PROTOCOL,
  &TypeInfo__EFI_BDS_ENTRY,
  &TypeInfo__EFI_BDS_ARCH_PROTOCOL_STAR,
  NULL
};