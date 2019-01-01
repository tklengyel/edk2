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

typedef struct _TYPE__gEfiRuntimeArchProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiRuntimeArchProtocolGuid;

TYPE__gEfiRuntimeArchProtocolGuid TypeInfo__gEfiRuntimeArchProtocolGuid = {
  .TypeName = "gEfiRuntimeArchProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiRuntimeArchProtocolGuid,
  .InterfaceStructName = "EFI_RUNTIME_ARCH_PROTOCOL"
};


typedef struct _TYPE__EFI_RUNTIME_ARCH_PROTOCOL{
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
} TYPE__EFI_RUNTIME_ARCH_PROTOCOL;

TYPE__EFI_RUNTIME_ARCH_PROTOCOL TypeInfo__EFI_RUNTIME_ARCH_PROTOCOL = {
  .TypeName = "EFI_RUNTIME_ARCH_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_RUNTIME_ARCH_PROTOCOL),
  .StructFieldNum = 9,
  .StructFieldName_1 = "ImageHead",
  .StructFieldTypeName_1 = "EFI_LIST_ENTRY",
  .StructFieldName_2 = "EventHead",
  .StructFieldTypeName_2 = "EFI_LIST_ENTRY",
  .StructFieldName_3 = "MemoryDescriptorSize",
  .StructFieldTypeName_3 = "UINTN",
  .StructFieldName_4 = "MemoryDesciptorVersion",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "MemoryMapSize",
  .StructFieldTypeName_5 = "UINTN",
  .StructFieldName_6 = "MemoryMapPhysical",
  .StructFieldTypeName_6 = "EFI_MEMORY_DESCRIPTOR*",
  .StructFieldName_7 = "MemoryMapVirtual",
  .StructFieldTypeName_7 = "EFI_MEMORY_DESCRIPTOR*",
  .StructFieldName_8 = "VirtualMode",
  .StructFieldTypeName_8 = "BOOLEAN",
  .StructFieldName_9 = "AtRuntime",
  .StructFieldTypeName_9 = "BOOLEAN"
};


typedef struct _TYPE__EFI_LIST_ENTRY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_LIST_ENTRY;

TYPE__EFI_LIST_ENTRY TypeInfo__EFI_LIST_ENTRY = {
  .TypeName = "EFI_LIST_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_LIST_ENTRY),
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
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
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
  &TypeInfo__gEfiRuntimeArchProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiRuntimeArchProtocolGuid,
  &TypeInfo__EFI_RUNTIME_ARCH_PROTOCOL,
  &TypeInfo__EFI_LIST_ENTRY,
  &TypeInfo__LIST_ENTRY_STAR,
  &TypeInfo__LIST_ENTRY,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR_STAR,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__EFI_VIRTUAL_ADDRESS,
  &TypeInfo__BOOLEAN,
  NULL
};