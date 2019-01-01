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

typedef struct _TYPE__gEdkiiIoMmuProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiIoMmuProtocolGuid;

TYPE__gEdkiiIoMmuProtocolGuid TypeInfo__gEdkiiIoMmuProtocolGuid = {
  .TypeName = "gEdkiiIoMmuProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiIoMmuProtocolGuid,
  .InterfaceStructName = "EDKII_IOMMU_PROTOCOL"
};


typedef struct _TYPE__EDKII_IOMMU_PROTOCOL{
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
} TYPE__EDKII_IOMMU_PROTOCOL;

TYPE__EDKII_IOMMU_PROTOCOL TypeInfo__EDKII_IOMMU_PROTOCOL = {
  .TypeName = "EDKII_IOMMU_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EDKII_IOMMU_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Revision",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "SetAttribute",
  .StructFieldTypeName_2 = "EDKII_IOMMU_SET_ATTRIBUTE",
  .StructFieldName_3 = "Map",
  .StructFieldTypeName_3 = "EDKII_IOMMU_MAP",
  .StructFieldName_4 = "Unmap",
  .StructFieldTypeName_4 = "EDKII_IOMMU_UNMAP",
  .StructFieldName_5 = "AllocateBuffer",
  .StructFieldTypeName_5 = "EDKII_IOMMU_ALLOCATE_BUFFER",
  .StructFieldName_6 = "FreeBuffer",
  .StructFieldTypeName_6 = "EDKII_IOMMU_FREE_BUFFER"
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


typedef struct _TYPE__EDKII_IOMMU_SET_ATTRIBUTE{
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
} TYPE__EDKII_IOMMU_SET_ATTRIBUTE;

TYPE__EDKII_IOMMU_SET_ATTRIBUTE TypeInfo__EDKII_IOMMU_SET_ATTRIBUTE = {
  .TypeName = "EDKII_IOMMU_SET_ATTRIBUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_IOMMU_SET_ATTRIBUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_IOMMU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64"
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


typedef struct _TYPE__EDKII_IOMMU_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EDKII_IOMMU_PROTOCOL_STAR;

TYPE__EDKII_IOMMU_PROTOCOL_STAR TypeInfo__EDKII_IOMMU_PROTOCOL_STAR = {
  .TypeName = "EDKII_IOMMU_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EDKII_IOMMU_PROTOCOL*),
  .PointedType = "EDKII_IOMMU_PROTOCOL"
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


typedef struct _TYPE__EDKII_IOMMU_MAP{
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
} TYPE__EDKII_IOMMU_MAP;

TYPE__EDKII_IOMMU_MAP TypeInfo__EDKII_IOMMU_MAP = {
  .TypeName = "EDKII_IOMMU_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_IOMMU_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_IOMMU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EDKII_IOMMU_OPERATION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_PHYSICAL_ADDRESS*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "void**"
};


typedef struct _TYPE__EDKII_IOMMU_OPERATION{
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
} TYPE__EDKII_IOMMU_OPERATION;

TYPE__EDKII_IOMMU_OPERATION TypeInfo__EDKII_IOMMU_OPERATION = {
  .TypeName = "EDKII_IOMMU_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EDKII_IOMMU_OPERATION),
  .EnumValueNum = 7,
  .EnumValueName_1 = "EdkiiIoMmuOperationBusMasterRead",
  .EnumValue_1 = EdkiiIoMmuOperationBusMasterRead,
  .EnumValueName_2 = "EdkiiIoMmuOperationBusMasterWrite",
  .EnumValue_2 = EdkiiIoMmuOperationBusMasterWrite,
  .EnumValueName_3 = "EdkiiIoMmuOperationBusMasterCommonBuffer",
  .EnumValue_3 = EdkiiIoMmuOperationBusMasterCommonBuffer,
  .EnumValueName_4 = "EdkiiIoMmuOperationBusMasterRead64",
  .EnumValue_4 = EdkiiIoMmuOperationBusMasterRead64,
  .EnumValueName_5 = "EdkiiIoMmuOperationBusMasterWrite64",
  .EnumValue_5 = EdkiiIoMmuOperationBusMasterWrite64,
  .EnumValueName_6 = "EdkiiIoMmuOperationBusMasterCommonBuffer64",
  .EnumValue_6 = EdkiiIoMmuOperationBusMasterCommonBuffer64,
  .EnumValueName_7 = "EdkiiIoMmuOperationMaximum",
  .EnumValue_7 = EdkiiIoMmuOperationMaximum
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


typedef struct _TYPE__EDKII_IOMMU_UNMAP{
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
} TYPE__EDKII_IOMMU_UNMAP;

TYPE__EDKII_IOMMU_UNMAP TypeInfo__EDKII_IOMMU_UNMAP = {
  .TypeName = "EDKII_IOMMU_UNMAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_IOMMU_UNMAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_IOMMU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EDKII_IOMMU_ALLOCATE_BUFFER{
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
} TYPE__EDKII_IOMMU_ALLOCATE_BUFFER;

TYPE__EDKII_IOMMU_ALLOCATE_BUFFER TypeInfo__EDKII_IOMMU_ALLOCATE_BUFFER = {
  .TypeName = "EDKII_IOMMU_ALLOCATE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_IOMMU_ALLOCATE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_IOMMU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_ALLOCATE_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_MEMORY_TYPE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void**",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT64"
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


typedef struct _TYPE__EDKII_IOMMU_FREE_BUFFER{
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
} TYPE__EDKII_IOMMU_FREE_BUFFER;

TYPE__EDKII_IOMMU_FREE_BUFFER TypeInfo__EDKII_IOMMU_FREE_BUFFER = {
  .TypeName = "EDKII_IOMMU_FREE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EDKII_IOMMU_FREE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EDKII_IOMMU_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
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
  &TypeInfo__gEdkiiIoMmuProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEdkiiIoMmuProtocolGuid,
  &TypeInfo__EDKII_IOMMU_PROTOCOL,
  &TypeInfo__UINT64,
  &TypeInfo__EDKII_IOMMU_SET_ATTRIBUTE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__EDKII_IOMMU_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EDKII_IOMMU_MAP,
  &TypeInfo__EDKII_IOMMU_OPERATION,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EDKII_IOMMU_UNMAP,
  &TypeInfo__EDKII_IOMMU_ALLOCATE_BUFFER,
  &TypeInfo__EFI_ALLOCATE_TYPE,
  &TypeInfo__EFI_MEMORY_TYPE,
  &TypeInfo__EDKII_IOMMU_FREE_BUFFER,
  NULL
};