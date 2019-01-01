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


typedef struct _TYPE__gEfiSmbiosProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiSmbiosProtocolGuid;

TYPE__gEfiSmbiosProtocolGuid TypeInfo__gEfiSmbiosProtocolGuid = {
  .TypeName = "gEfiSmbiosProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiSmbiosProtocolGuid,
  .InterfaceStructName = "EFI_SMBIOS_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiSmbiosProtocolGuid,
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
  NULL
};