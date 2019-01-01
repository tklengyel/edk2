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

typedef struct _TYPE__gEfiTimerArchProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiTimerArchProtocolGuid;

TYPE__gEfiTimerArchProtocolGuid TypeInfo__gEfiTimerArchProtocolGuid = {
  .TypeName = "gEfiTimerArchProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiTimerArchProtocolGuid,
  .InterfaceStructName = "EFI_TIMER_ARCH_PROTOCOL"
};


typedef struct _TYPE__EFI_TIMER_ARCH_PROTOCOL{
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
} TYPE__EFI_TIMER_ARCH_PROTOCOL;

TYPE__EFI_TIMER_ARCH_PROTOCOL TypeInfo__EFI_TIMER_ARCH_PROTOCOL = {
  .TypeName = "EFI_TIMER_ARCH_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TIMER_ARCH_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "RegisterHandler",
  .StructFieldTypeName_1 = "EFI_TIMER_REGISTER_HANDLER",
  .StructFieldName_2 = "SetTimerPeriod",
  .StructFieldTypeName_2 = "EFI_TIMER_SET_TIMER_PERIOD",
  .StructFieldName_3 = "GetTimerPeriod",
  .StructFieldTypeName_3 = "EFI_TIMER_GET_TIMER_PERIOD",
  .StructFieldName_4 = "GenerateSoftInterrupt",
  .StructFieldTypeName_4 = "EFI_TIMER_GENERATE_SOFT_INTERRUPT"
};


typedef struct _TYPE__EFI_TIMER_REGISTER_HANDLER{
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
} TYPE__EFI_TIMER_REGISTER_HANDLER;

TYPE__EFI_TIMER_REGISTER_HANDLER TypeInfo__EFI_TIMER_REGISTER_HANDLER = {
  .TypeName = "EFI_TIMER_REGISTER_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TIMER_REGISTER_HANDLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIMER_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TIMER_NOTIFY"
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


typedef struct _TYPE__EFI_TIMER_ARCH_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TIMER_ARCH_PROTOCOL_STAR;

TYPE__EFI_TIMER_ARCH_PROTOCOL_STAR TypeInfo__EFI_TIMER_ARCH_PROTOCOL_STAR = {
  .TypeName = "EFI_TIMER_ARCH_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TIMER_ARCH_PROTOCOL*),
  .PointedType = "EFI_TIMER_ARCH_PROTOCOL"
};


typedef struct _TYPE__EFI_TIMER_NOTIFY{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_TIMER_NOTIFY;

TYPE__EFI_TIMER_NOTIFY TypeInfo__EFI_TIMER_NOTIFY = {
  .TypeName = "EFI_TIMER_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TIMER_NOTIFY),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT64"
};


typedef struct _TYPE__EFI_TIMER_SET_TIMER_PERIOD{
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
} TYPE__EFI_TIMER_SET_TIMER_PERIOD;

TYPE__EFI_TIMER_SET_TIMER_PERIOD TypeInfo__EFI_TIMER_SET_TIMER_PERIOD = {
  .TypeName = "EFI_TIMER_SET_TIMER_PERIOD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TIMER_SET_TIMER_PERIOD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIMER_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64"
};


typedef struct _TYPE__EFI_TIMER_GET_TIMER_PERIOD{
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
} TYPE__EFI_TIMER_GET_TIMER_PERIOD;

TYPE__EFI_TIMER_GET_TIMER_PERIOD TypeInfo__EFI_TIMER_GET_TIMER_PERIOD = {
  .TypeName = "EFI_TIMER_GET_TIMER_PERIOD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TIMER_GET_TIMER_PERIOD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIMER_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*"
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


typedef struct _TYPE__EFI_TIMER_GENERATE_SOFT_INTERRUPT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_TIMER_GENERATE_SOFT_INTERRUPT;

TYPE__EFI_TIMER_GENERATE_SOFT_INTERRUPT TypeInfo__EFI_TIMER_GENERATE_SOFT_INTERRUPT = {
  .TypeName = "EFI_TIMER_GENERATE_SOFT_INTERRUPT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TIMER_GENERATE_SOFT_INTERRUPT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIMER_ARCH_PROTOCOL*"
};


typedef struct _TYPE__gEfiLegacy8259ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiLegacy8259ProtocolGuid;

TYPE__gEfiLegacy8259ProtocolGuid TypeInfo__gEfiLegacy8259ProtocolGuid = {
  .TypeName = "gEfiLegacy8259ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiLegacy8259ProtocolGuid,
  .InterfaceStructName = "EFI_LEGACY_8259_PROTOCOL"
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


typedef struct _TYPE__gEfiCpuArchProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiCpuArchProtocolGuid;

TYPE__gEfiCpuArchProtocolGuid TypeInfo__gEfiCpuArchProtocolGuid = {
  .TypeName = "gEfiCpuArchProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiCpuArchProtocolGuid,
  .InterfaceStructName = "EFI_CPU_ARCH_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiLegacy8259ProtocolGuid,
  &TypeInfo__gEfiCpuArchProtocolGuid,
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
  &TypeInfo__gEfiTimerArchProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiTimerArchProtocolGuid,
  &TypeInfo__EFI_TIMER_ARCH_PROTOCOL,
  &TypeInfo__EFI_TIMER_REGISTER_HANDLER,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_TIMER_ARCH_PROTOCOL_STAR,
  &TypeInfo__EFI_TIMER_NOTIFY,
  &TypeInfo__EFI_TIMER_SET_TIMER_PERIOD,
  &TypeInfo__EFI_TIMER_GET_TIMER_PERIOD,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_TIMER_GENERATE_SOFT_INTERRUPT,
  NULL
};