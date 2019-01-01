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

typedef struct _TYPE__gEfiGenericMemTestProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiGenericMemTestProtocolGuid;

TYPE__gEfiGenericMemTestProtocolGuid TypeInfo__gEfiGenericMemTestProtocolGuid = {
  .TypeName = "gEfiGenericMemTestProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiGenericMemTestProtocolGuid,
  .InterfaceStructName = "EFI_GENERIC_MEMORY_TEST_PROTOCOL"
};


typedef struct _TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL{
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
} TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL;

TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL TypeInfo__EFI_GENERIC_MEMORY_TEST_PROTOCOL = {
  .TypeName = "EFI_GENERIC_MEMORY_TEST_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GENERIC_MEMORY_TEST_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "MemoryTestInit",
  .StructFieldTypeName_1 = "EFI_MEMORY_TEST_INIT",
  .StructFieldName_2 = "PerformMemoryTest",
  .StructFieldTypeName_2 = "EFI_PERFORM_MEMORY_TEST",
  .StructFieldName_3 = "Finished",
  .StructFieldTypeName_3 = "EFI_MEMORY_TEST_FINISHED",
  .StructFieldName_4 = "CompatibleRangeTest",
  .StructFieldTypeName_4 = "EFI_MEMORY_TEST_COMPATIBLE_RANGE"
};


typedef struct _TYPE__EFI_MEMORY_TEST_INIT{
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
} TYPE__EFI_MEMORY_TEST_INIT;

TYPE__EFI_MEMORY_TEST_INIT TypeInfo__EFI_MEMORY_TEST_INIT = {
  .TypeName = "EFI_MEMORY_TEST_INIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MEMORY_TEST_INIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GENERIC_MEMORY_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EXTENDMEM_COVERAGE_LEVEL",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "BOOLEAN*"
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


typedef struct _TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL_STAR;

TYPE__EFI_GENERIC_MEMORY_TEST_PROTOCOL_STAR TypeInfo__EFI_GENERIC_MEMORY_TEST_PROTOCOL_STAR = {
  .TypeName = "EFI_GENERIC_MEMORY_TEST_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GENERIC_MEMORY_TEST_PROTOCOL*),
  .PointedType = "EFI_GENERIC_MEMORY_TEST_PROTOCOL"
};


typedef struct _TYPE__EXTENDMEM_COVERAGE_LEVEL{
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
} TYPE__EXTENDMEM_COVERAGE_LEVEL;

TYPE__EXTENDMEM_COVERAGE_LEVEL TypeInfo__EXTENDMEM_COVERAGE_LEVEL = {
  .TypeName = "EXTENDMEM_COVERAGE_LEVEL",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EXTENDMEM_COVERAGE_LEVEL),
  .EnumValueNum = 5,
  .EnumValueName_1 = "IGNORE",
  .EnumValue_1 = IGNORE,
  .EnumValueName_2 = "QUICK",
  .EnumValue_2 = QUICK,
  .EnumValueName_3 = "SPARSE",
  .EnumValue_3 = SPARSE,
  .EnumValueName_4 = "EXTENSIVE",
  .EnumValue_4 = EXTENSIVE,
  .EnumValueName_5 = "MAXLEVEL",
  .EnumValue_5 = MAXLEVEL
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


typedef struct _TYPE__EFI_PERFORM_MEMORY_TEST{
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
} TYPE__EFI_PERFORM_MEMORY_TEST;

TYPE__EFI_PERFORM_MEMORY_TEST TypeInfo__EFI_PERFORM_MEMORY_TEST = {
  .TypeName = "EFI_PERFORM_MEMORY_TEST",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PERFORM_MEMORY_TEST),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GENERIC_MEMORY_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "BOOLEAN*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "BOOLEAN"
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


typedef struct _TYPE__EFI_MEMORY_TEST_FINISHED{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_MEMORY_TEST_FINISHED;

TYPE__EFI_MEMORY_TEST_FINISHED TypeInfo__EFI_MEMORY_TEST_FINISHED = {
  .TypeName = "EFI_MEMORY_TEST_FINISHED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MEMORY_TEST_FINISHED),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GENERIC_MEMORY_TEST_PROTOCOL*"
};


typedef struct _TYPE__EFI_MEMORY_TEST_COMPATIBLE_RANGE{
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
} TYPE__EFI_MEMORY_TEST_COMPATIBLE_RANGE;

TYPE__EFI_MEMORY_TEST_COMPATIBLE_RANGE TypeInfo__EFI_MEMORY_TEST_COMPATIBLE_RANGE = {
  .TypeName = "EFI_MEMORY_TEST_COMPATIBLE_RANGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_MEMORY_TEST_COMPATIBLE_RANGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GENERIC_MEMORY_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
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
  &TypeInfo__gEfiGenericMemTestProtocolGuid,
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
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiGenericMemTestProtocolGuid,
  &TypeInfo__EFI_GENERIC_MEMORY_TEST_PROTOCOL,
  &TypeInfo__EFI_MEMORY_TEST_INIT,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_GENERIC_MEMORY_TEST_PROTOCOL_STAR,
  &TypeInfo__EXTENDMEM_COVERAGE_LEVEL,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_PERFORM_MEMORY_TEST,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_MEMORY_TEST_FINISHED,
  &TypeInfo__EFI_MEMORY_TEST_COMPATIBLE_RANGE,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  NULL
};