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


typedef struct _TYPE__EFI_CPU_ARCH_PROTOCOL{
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
} TYPE__EFI_CPU_ARCH_PROTOCOL;

TYPE__EFI_CPU_ARCH_PROTOCOL TypeInfo__EFI_CPU_ARCH_PROTOCOL = {
  .TypeName = "EFI_CPU_ARCH_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CPU_ARCH_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "FlushDataCache",
  .StructFieldTypeName_1 = "EFI_CPU_FLUSH_DATA_CACHE",
  .StructFieldName_2 = "EnableInterrupt",
  .StructFieldTypeName_2 = "EFI_CPU_ENABLE_INTERRUPT",
  .StructFieldName_3 = "DisableInterrupt",
  .StructFieldTypeName_3 = "EFI_CPU_DISABLE_INTERRUPT",
  .StructFieldName_4 = "GetInterruptState",
  .StructFieldTypeName_4 = "EFI_CPU_GET_INTERRUPT_STATE",
  .StructFieldName_5 = "Init",
  .StructFieldTypeName_5 = "EFI_CPU_INIT",
  .StructFieldName_6 = "RegisterInterruptHandler",
  .StructFieldTypeName_6 = "EFI_CPU_REGISTER_INTERRUPT_HANDLER",
  .StructFieldName_7 = "GetTimerValue",
  .StructFieldTypeName_7 = "EFI_CPU_GET_TIMER_VALUE",
  .StructFieldName_8 = "SetMemoryAttributes",
  .StructFieldTypeName_8 = "EFI_CPU_SET_MEMORY_ATTRIBUTES",
  .StructFieldName_9 = "NumberOfTimers",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "DmaBufferAlignment",
  .StructFieldTypeName_10 = "UINT32"
};


typedef struct _TYPE__EFI_CPU_FLUSH_DATA_CACHE{
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
} TYPE__EFI_CPU_FLUSH_DATA_CACHE;

TYPE__EFI_CPU_FLUSH_DATA_CACHE TypeInfo__EFI_CPU_FLUSH_DATA_CACHE = {
  .TypeName = "EFI_CPU_FLUSH_DATA_CACHE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_FLUSH_DATA_CACHE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_CPU_FLUSH_TYPE"
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


typedef struct _TYPE__EFI_CPU_ARCH_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CPU_ARCH_PROTOCOL_STAR;

TYPE__EFI_CPU_ARCH_PROTOCOL_STAR TypeInfo__EFI_CPU_ARCH_PROTOCOL_STAR = {
  .TypeName = "EFI_CPU_ARCH_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CPU_ARCH_PROTOCOL*),
  .PointedType = "EFI_CPU_ARCH_PROTOCOL"
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


typedef struct _TYPE__EFI_CPU_FLUSH_TYPE{
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
} TYPE__EFI_CPU_FLUSH_TYPE;

TYPE__EFI_CPU_FLUSH_TYPE TypeInfo__EFI_CPU_FLUSH_TYPE = {
  .TypeName = "EFI_CPU_FLUSH_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_CPU_FLUSH_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiCpuFlushTypeWriteBackInvalidate",
  .EnumValue_1 = EfiCpuFlushTypeWriteBackInvalidate,
  .EnumValueName_2 = "EfiCpuFlushTypeWriteBack",
  .EnumValue_2 = EfiCpuFlushTypeWriteBack,
  .EnumValueName_3 = "EfiCpuFlushTypeInvalidate",
  .EnumValue_3 = EfiCpuFlushTypeInvalidate,
  .EnumValueName_4 = "EfiCpuMaxFlushType",
  .EnumValue_4 = EfiCpuMaxFlushType
};


typedef struct _TYPE__EFI_CPU_ENABLE_INTERRUPT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CPU_ENABLE_INTERRUPT;

TYPE__EFI_CPU_ENABLE_INTERRUPT TypeInfo__EFI_CPU_ENABLE_INTERRUPT = {
  .TypeName = "EFI_CPU_ENABLE_INTERRUPT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_ENABLE_INTERRUPT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*"
};


typedef struct _TYPE__EFI_CPU_DISABLE_INTERRUPT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CPU_DISABLE_INTERRUPT;

TYPE__EFI_CPU_DISABLE_INTERRUPT TypeInfo__EFI_CPU_DISABLE_INTERRUPT = {
  .TypeName = "EFI_CPU_DISABLE_INTERRUPT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_DISABLE_INTERRUPT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*"
};


typedef struct _TYPE__EFI_CPU_GET_INTERRUPT_STATE{
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
} TYPE__EFI_CPU_GET_INTERRUPT_STATE;

TYPE__EFI_CPU_GET_INTERRUPT_STATE TypeInfo__EFI_CPU_GET_INTERRUPT_STATE = {
  .TypeName = "EFI_CPU_GET_INTERRUPT_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_GET_INTERRUPT_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "BOOLEAN*"
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


typedef struct _TYPE__EFI_CPU_INIT{
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
} TYPE__EFI_CPU_INIT;

TYPE__EFI_CPU_INIT TypeInfo__EFI_CPU_INIT = {
  .TypeName = "EFI_CPU_INIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_INIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_CPU_INIT_TYPE"
};


typedef struct _TYPE__EFI_CPU_INIT_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
} TYPE__EFI_CPU_INIT_TYPE;

TYPE__EFI_CPU_INIT_TYPE TypeInfo__EFI_CPU_INIT_TYPE = {
  .TypeName = "EFI_CPU_INIT_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_CPU_INIT_TYPE),
  .EnumValueNum = 2,
  .EnumValueName_1 = "EfiCpuInit",
  .EnumValue_1 = EfiCpuInit,
  .EnumValueName_2 = "EfiCpuMaxInitType",
  .EnumValue_2 = EfiCpuMaxInitType
};


typedef struct _TYPE__EFI_CPU_REGISTER_INTERRUPT_HANDLER{
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
} TYPE__EFI_CPU_REGISTER_INTERRUPT_HANDLER;

TYPE__EFI_CPU_REGISTER_INTERRUPT_HANDLER TypeInfo__EFI_CPU_REGISTER_INTERRUPT_HANDLER = {
  .TypeName = "EFI_CPU_REGISTER_INTERRUPT_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_REGISTER_INTERRUPT_HANDLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_EXCEPTION_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_CPU_INTERRUPT_HANDLER"
};


typedef struct _TYPE__EFI_EXCEPTION_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_EXCEPTION_TYPE;

TYPE__EFI_EXCEPTION_TYPE TypeInfo__EFI_EXCEPTION_TYPE = {
  .TypeName = "EFI_EXCEPTION_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_EXCEPTION_TYPE),
  .BasicTypeName = "INTN"
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


typedef struct _TYPE__EFI_CPU_INTERRUPT_HANDLER{
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
} TYPE__EFI_CPU_INTERRUPT_HANDLER;

TYPE__EFI_CPU_INTERRUPT_HANDLER TypeInfo__EFI_CPU_INTERRUPT_HANDLER = {
  .TypeName = "EFI_CPU_INTERRUPT_HANDLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_INTERRUPT_HANDLER),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXCEPTION_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SYSTEM_CONTEXT"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT{
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
} TYPE__EFI_SYSTEM_CONTEXT;

TYPE__EFI_SYSTEM_CONTEXT TypeInfo__EFI_SYSTEM_CONTEXT = {
  .TypeName = "EFI_SYSTEM_CONTEXT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT),
  .StructFieldNum = 6,
  .StructFieldName_1 = "SystemContextEbc",
  .StructFieldTypeName_1 = "EFI_SYSTEM_CONTEXT_EBC*",
  .StructFieldName_2 = "SystemContextIa32",
  .StructFieldTypeName_2 = "EFI_SYSTEM_CONTEXT_IA32*",
  .StructFieldName_3 = "SystemContextX64",
  .StructFieldTypeName_3 = "EFI_SYSTEM_CONTEXT_X64*",
  .StructFieldName_4 = "SystemContextIpf",
  .StructFieldTypeName_4 = "EFI_SYSTEM_CONTEXT_IPF*",
  .StructFieldName_5 = "SystemContextArm",
  .StructFieldTypeName_5 = "EFI_SYSTEM_CONTEXT_ARM*",
  .StructFieldName_6 = "SystemContextAArch64",
  .StructFieldTypeName_6 = "EFI_SYSTEM_CONTEXT_AARCH64*"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_EBC_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_EBC_STAR;

TYPE__EFI_SYSTEM_CONTEXT_EBC_STAR TypeInfo__EFI_SYSTEM_CONTEXT_EBC_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_EBC*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_EBC*),
  .PointedType = "EFI_SYSTEM_CONTEXT_EBC"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_EBC{
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
} TYPE__EFI_SYSTEM_CONTEXT_EBC;

TYPE__EFI_SYSTEM_CONTEXT_EBC TypeInfo__EFI_SYSTEM_CONTEXT_EBC = {
  .TypeName = "EFI_SYSTEM_CONTEXT_EBC",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_EBC),
  .StructFieldNum = 11,
  .StructFieldName_1 = "R0",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "R1",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "R2",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "R3",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "R4",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "R5",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "R6",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "R7",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "Flags",
  .StructFieldTypeName_9 = "UINT64",
  .StructFieldName_10 = "ControlFlags",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "Ip",
  .StructFieldTypeName_11 = "UINT64"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_IA32_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_IA32_STAR;

TYPE__EFI_SYSTEM_CONTEXT_IA32_STAR TypeInfo__EFI_SYSTEM_CONTEXT_IA32_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_IA32*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_IA32*),
  .PointedType = "EFI_SYSTEM_CONTEXT_IA32"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_IA32{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
} TYPE__EFI_SYSTEM_CONTEXT_IA32;

TYPE__EFI_SYSTEM_CONTEXT_IA32 TypeInfo__EFI_SYSTEM_CONTEXT_IA32 = {
  .TypeName = "EFI_SYSTEM_CONTEXT_IA32",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_IA32),
  .StructFieldNum = 33,
  .StructFieldName_1 = "ExceptionData",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "FxSaveState",
  .StructFieldTypeName_2 = "EFI_FX_SAVE_STATE_IA32",
  .StructFieldName_3 = "Dr0",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "Dr1",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "Dr2",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "Dr3",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "Dr6",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "Dr7",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "Cr0",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "Cr1",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "Cr2",
  .StructFieldTypeName_11 = "UINT32",
  .StructFieldName_12 = "Cr3",
  .StructFieldTypeName_12 = "UINT32",
  .StructFieldName_13 = "Cr4",
  .StructFieldTypeName_13 = "UINT32",
  .StructFieldName_14 = "Eflags",
  .StructFieldTypeName_14 = "UINT32",
  .StructFieldName_15 = "Ldtr",
  .StructFieldTypeName_15 = "UINT32",
  .StructFieldName_16 = "Tr",
  .StructFieldTypeName_16 = "UINT32",
  .StructFieldName_17 = "Gdtr",
  .StructFieldTypeName_17 = "UINT32[2]",
  .StructFieldName_18 = "Idtr",
  .StructFieldTypeName_18 = "UINT32[2]",
  .StructFieldName_19 = "Eip",
  .StructFieldTypeName_19 = "UINT32",
  .StructFieldName_20 = "Gs",
  .StructFieldTypeName_20 = "UINT32",
  .StructFieldName_21 = "Fs",
  .StructFieldTypeName_21 = "UINT32",
  .StructFieldName_22 = "Es",
  .StructFieldTypeName_22 = "UINT32",
  .StructFieldName_23 = "Ds",
  .StructFieldTypeName_23 = "UINT32",
  .StructFieldName_24 = "Cs",
  .StructFieldTypeName_24 = "UINT32",
  .StructFieldName_25 = "Ss",
  .StructFieldTypeName_25 = "UINT32",
  .StructFieldName_26 = "Edi",
  .StructFieldTypeName_26 = "UINT32",
  .StructFieldName_27 = "Esi",
  .StructFieldTypeName_27 = "UINT32",
  .StructFieldName_28 = "Ebp",
  .StructFieldTypeName_28 = "UINT32",
  .StructFieldName_29 = "Esp",
  .StructFieldTypeName_29 = "UINT32",
  .StructFieldName_30 = "Ebx",
  .StructFieldTypeName_30 = "UINT32",
  .StructFieldName_31 = "Edx",
  .StructFieldTypeName_31 = "UINT32",
  .StructFieldName_32 = "Ecx",
  .StructFieldTypeName_32 = "UINT32",
  .StructFieldName_33 = "Eax",
  .StructFieldTypeName_33 = "UINT32"
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


typedef struct _TYPE__EFI_FX_SAVE_STATE_IA32{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
  const CHAR8* StructFieldName_34;
  const CHAR8* StructFieldTypeName_34;
  const CHAR8* StructFieldName_35;
  const CHAR8* StructFieldTypeName_35;
} TYPE__EFI_FX_SAVE_STATE_IA32;

TYPE__EFI_FX_SAVE_STATE_IA32 TypeInfo__EFI_FX_SAVE_STATE_IA32 = {
  .TypeName = "EFI_FX_SAVE_STATE_IA32",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FX_SAVE_STATE_IA32),
  .StructFieldNum = 35,
  .StructFieldName_1 = "Fcw",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Fsw",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Ftw",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Opcode",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "Eip",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "Cs",
  .StructFieldTypeName_6 = "UINT16",
  .StructFieldName_7 = "Reserved1",
  .StructFieldTypeName_7 = "UINT16",
  .StructFieldName_8 = "DataOffset",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "Ds",
  .StructFieldTypeName_9 = "UINT16",
  .StructFieldName_10 = "Reserved2",
  .StructFieldTypeName_10 = "UINT8[10]",
  .StructFieldName_11 = "St0Mm0",
  .StructFieldTypeName_11 = "UINT8[10]",
  .StructFieldName_12 = "Reserved3",
  .StructFieldTypeName_12 = "UINT8[6]",
  .StructFieldName_13 = "St1Mm1",
  .StructFieldTypeName_13 = "UINT8[10]",
  .StructFieldName_14 = "Reserved4",
  .StructFieldTypeName_14 = "UINT8[6]",
  .StructFieldName_15 = "St2Mm2",
  .StructFieldTypeName_15 = "UINT8[10]",
  .StructFieldName_16 = "Reserved5",
  .StructFieldTypeName_16 = "UINT8[6]",
  .StructFieldName_17 = "St3Mm3",
  .StructFieldTypeName_17 = "UINT8[10]",
  .StructFieldName_18 = "Reserved6",
  .StructFieldTypeName_18 = "UINT8[6]",
  .StructFieldName_19 = "St4Mm4",
  .StructFieldTypeName_19 = "UINT8[10]",
  .StructFieldName_20 = "Reserved7",
  .StructFieldTypeName_20 = "UINT8[6]",
  .StructFieldName_21 = "St5Mm5",
  .StructFieldTypeName_21 = "UINT8[10]",
  .StructFieldName_22 = "Reserved8",
  .StructFieldTypeName_22 = "UINT8[6]",
  .StructFieldName_23 = "St6Mm6",
  .StructFieldTypeName_23 = "UINT8[10]",
  .StructFieldName_24 = "Reserved9",
  .StructFieldTypeName_24 = "UINT8[6]",
  .StructFieldName_25 = "St7Mm7",
  .StructFieldTypeName_25 = "UINT8[10]",
  .StructFieldName_26 = "Reserved10",
  .StructFieldTypeName_26 = "UINT8[6]",
  .StructFieldName_27 = "Xmm0",
  .StructFieldTypeName_27 = "UINT8[16]",
  .StructFieldName_28 = "Xmm1",
  .StructFieldTypeName_28 = "UINT8[16]",
  .StructFieldName_29 = "Xmm2",
  .StructFieldTypeName_29 = "UINT8[16]",
  .StructFieldName_30 = "Xmm3",
  .StructFieldTypeName_30 = "UINT8[16]",
  .StructFieldName_31 = "Xmm4",
  .StructFieldTypeName_31 = "UINT8[16]",
  .StructFieldName_32 = "Xmm5",
  .StructFieldTypeName_32 = "UINT8[16]",
  .StructFieldName_33 = "Xmm6",
  .StructFieldTypeName_33 = "UINT8[16]",
  .StructFieldName_34 = "Xmm7",
  .StructFieldTypeName_34 = "UINT8[16]",
  .StructFieldName_35 = "Reserved11",
  .StructFieldTypeName_35 = "UINT8[224]"
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


typedef struct _TYPE__UINT8_ARRAY_10{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_10;

TYPE__UINT8_ARRAY_10 TypeInfo__UINT8_ARRAY_10 = {
  .TypeName = "UINT8[10]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[10]),
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


typedef struct _TYPE__UINT8_ARRAY_6{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_6;

TYPE__UINT8_ARRAY_6 TypeInfo__UINT8_ARRAY_6 = {
  .TypeName = "UINT8[6]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[6]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT8_ARRAY_16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_16;

TYPE__UINT8_ARRAY_16 TypeInfo__UINT8_ARRAY_16 = {
  .TypeName = "UINT8[16]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[16]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT8_ARRAY_224{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT8_ARRAY_224;

TYPE__UINT8_ARRAY_224 TypeInfo__UINT8_ARRAY_224 = {
  .TypeName = "UINT8[224]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT8[224]),
  .ElementTypeName = "UINT8"
};


typedef struct _TYPE__UINT32_ARRAY_2{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT32_ARRAY_2;

TYPE__UINT32_ARRAY_2 TypeInfo__UINT32_ARRAY_2 = {
  .TypeName = "UINT32[2]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT32[2]),
  .ElementTypeName = "UINT32"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_X64_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_X64_STAR;

TYPE__EFI_SYSTEM_CONTEXT_X64_STAR TypeInfo__EFI_SYSTEM_CONTEXT_X64_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_X64*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_X64*),
  .PointedType = "EFI_SYSTEM_CONTEXT_X64"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_X64{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
  const CHAR8* StructFieldName_34;
  const CHAR8* StructFieldTypeName_34;
  const CHAR8* StructFieldName_35;
  const CHAR8* StructFieldTypeName_35;
  const CHAR8* StructFieldName_36;
  const CHAR8* StructFieldTypeName_36;
  const CHAR8* StructFieldName_37;
  const CHAR8* StructFieldTypeName_37;
  const CHAR8* StructFieldName_38;
  const CHAR8* StructFieldTypeName_38;
  const CHAR8* StructFieldName_39;
  const CHAR8* StructFieldTypeName_39;
  const CHAR8* StructFieldName_40;
  const CHAR8* StructFieldTypeName_40;
  const CHAR8* StructFieldName_41;
  const CHAR8* StructFieldTypeName_41;
  const CHAR8* StructFieldName_42;
  const CHAR8* StructFieldTypeName_42;
} TYPE__EFI_SYSTEM_CONTEXT_X64;

TYPE__EFI_SYSTEM_CONTEXT_X64 TypeInfo__EFI_SYSTEM_CONTEXT_X64 = {
  .TypeName = "EFI_SYSTEM_CONTEXT_X64",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_X64),
  .StructFieldNum = 42,
  .StructFieldName_1 = "ExceptionData",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "FxSaveState",
  .StructFieldTypeName_2 = "EFI_FX_SAVE_STATE_X64",
  .StructFieldName_3 = "Dr0",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "Dr1",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "Dr2",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "Dr3",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "Dr6",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "Dr7",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "Cr0",
  .StructFieldTypeName_9 = "UINT64",
  .StructFieldName_10 = "Cr1",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "Cr2",
  .StructFieldTypeName_11 = "UINT64",
  .StructFieldName_12 = "Cr3",
  .StructFieldTypeName_12 = "UINT64",
  .StructFieldName_13 = "Cr4",
  .StructFieldTypeName_13 = "UINT64",
  .StructFieldName_14 = "Cr8",
  .StructFieldTypeName_14 = "UINT64",
  .StructFieldName_15 = "Rflags",
  .StructFieldTypeName_15 = "UINT64",
  .StructFieldName_16 = "Ldtr",
  .StructFieldTypeName_16 = "UINT64",
  .StructFieldName_17 = "Tr",
  .StructFieldTypeName_17 = "UINT64",
  .StructFieldName_18 = "Gdtr",
  .StructFieldTypeName_18 = "UINT64[2]",
  .StructFieldName_19 = "Idtr",
  .StructFieldTypeName_19 = "UINT64[2]",
  .StructFieldName_20 = "Rip",
  .StructFieldTypeName_20 = "UINT64",
  .StructFieldName_21 = "Gs",
  .StructFieldTypeName_21 = "UINT64",
  .StructFieldName_22 = "Fs",
  .StructFieldTypeName_22 = "UINT64",
  .StructFieldName_23 = "Es",
  .StructFieldTypeName_23 = "UINT64",
  .StructFieldName_24 = "Ds",
  .StructFieldTypeName_24 = "UINT64",
  .StructFieldName_25 = "Cs",
  .StructFieldTypeName_25 = "UINT64",
  .StructFieldName_26 = "Ss",
  .StructFieldTypeName_26 = "UINT64",
  .StructFieldName_27 = "Rdi",
  .StructFieldTypeName_27 = "UINT64",
  .StructFieldName_28 = "Rsi",
  .StructFieldTypeName_28 = "UINT64",
  .StructFieldName_29 = "Rbp",
  .StructFieldTypeName_29 = "UINT64",
  .StructFieldName_30 = "Rsp",
  .StructFieldTypeName_30 = "UINT64",
  .StructFieldName_31 = "Rbx",
  .StructFieldTypeName_31 = "UINT64",
  .StructFieldName_32 = "Rdx",
  .StructFieldTypeName_32 = "UINT64",
  .StructFieldName_33 = "Rcx",
  .StructFieldTypeName_33 = "UINT64",
  .StructFieldName_34 = "Rax",
  .StructFieldTypeName_34 = "UINT64",
  .StructFieldName_35 = "R8",
  .StructFieldTypeName_35 = "UINT64",
  .StructFieldName_36 = "R9",
  .StructFieldTypeName_36 = "UINT64",
  .StructFieldName_37 = "R10",
  .StructFieldTypeName_37 = "UINT64",
  .StructFieldName_38 = "R11",
  .StructFieldTypeName_38 = "UINT64",
  .StructFieldName_39 = "R12",
  .StructFieldTypeName_39 = "UINT64",
  .StructFieldName_40 = "R13",
  .StructFieldTypeName_40 = "UINT64",
  .StructFieldName_41 = "R14",
  .StructFieldTypeName_41 = "UINT64",
  .StructFieldName_42 = "R15",
  .StructFieldTypeName_42 = "UINT64"
};


typedef struct _TYPE__EFI_FX_SAVE_STATE_X64{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
} TYPE__EFI_FX_SAVE_STATE_X64;

TYPE__EFI_FX_SAVE_STATE_X64 TypeInfo__EFI_FX_SAVE_STATE_X64 = {
  .TypeName = "EFI_FX_SAVE_STATE_X64",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_FX_SAVE_STATE_X64),
  .StructFieldNum = 32,
  .StructFieldName_1 = "Fcw",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Fsw",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Ftw",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Opcode",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "Rip",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "DataOffset",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "Reserved1",
  .StructFieldTypeName_7 = "UINT8[8]",
  .StructFieldName_8 = "St0Mm0",
  .StructFieldTypeName_8 = "UINT8[10]",
  .StructFieldName_9 = "Reserved2",
  .StructFieldTypeName_9 = "UINT8[6]",
  .StructFieldName_10 = "St1Mm1",
  .StructFieldTypeName_10 = "UINT8[10]",
  .StructFieldName_11 = "Reserved3",
  .StructFieldTypeName_11 = "UINT8[6]",
  .StructFieldName_12 = "St2Mm2",
  .StructFieldTypeName_12 = "UINT8[10]",
  .StructFieldName_13 = "Reserved4",
  .StructFieldTypeName_13 = "UINT8[6]",
  .StructFieldName_14 = "St3Mm3",
  .StructFieldTypeName_14 = "UINT8[10]",
  .StructFieldName_15 = "Reserved5",
  .StructFieldTypeName_15 = "UINT8[6]",
  .StructFieldName_16 = "St4Mm4",
  .StructFieldTypeName_16 = "UINT8[10]",
  .StructFieldName_17 = "Reserved6",
  .StructFieldTypeName_17 = "UINT8[6]",
  .StructFieldName_18 = "St5Mm5",
  .StructFieldTypeName_18 = "UINT8[10]",
  .StructFieldName_19 = "Reserved7",
  .StructFieldTypeName_19 = "UINT8[6]",
  .StructFieldName_20 = "St6Mm6",
  .StructFieldTypeName_20 = "UINT8[10]",
  .StructFieldName_21 = "Reserved8",
  .StructFieldTypeName_21 = "UINT8[6]",
  .StructFieldName_22 = "St7Mm7",
  .StructFieldTypeName_22 = "UINT8[10]",
  .StructFieldName_23 = "Reserved9",
  .StructFieldTypeName_23 = "UINT8[6]",
  .StructFieldName_24 = "Xmm0",
  .StructFieldTypeName_24 = "UINT8[16]",
  .StructFieldName_25 = "Xmm1",
  .StructFieldTypeName_25 = "UINT8[16]",
  .StructFieldName_26 = "Xmm2",
  .StructFieldTypeName_26 = "UINT8[16]",
  .StructFieldName_27 = "Xmm3",
  .StructFieldTypeName_27 = "UINT8[16]",
  .StructFieldName_28 = "Xmm4",
  .StructFieldTypeName_28 = "UINT8[16]",
  .StructFieldName_29 = "Xmm5",
  .StructFieldTypeName_29 = "UINT8[16]",
  .StructFieldName_30 = "Xmm6",
  .StructFieldTypeName_30 = "UINT8[16]",
  .StructFieldName_31 = "Xmm7",
  .StructFieldTypeName_31 = "UINT8[16]",
  .StructFieldName_32 = "Reserved11",
  .StructFieldTypeName_32 = "UINT8[224]"
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


typedef struct _TYPE__UINT64_ARRAY_2{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT64_ARRAY_2;

TYPE__UINT64_ARRAY_2 TypeInfo__UINT64_ARRAY_2 = {
  .TypeName = "UINT64[2]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT64[2]),
  .ElementTypeName = "UINT64"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_IPF_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_IPF_STAR;

TYPE__EFI_SYSTEM_CONTEXT_IPF_STAR TypeInfo__EFI_SYSTEM_CONTEXT_IPF_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_IPF*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_IPF*),
  .PointedType = "EFI_SYSTEM_CONTEXT_IPF"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_IPF{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
  const CHAR8* StructFieldName_34;
  const CHAR8* StructFieldTypeName_34;
  const CHAR8* StructFieldName_35;
  const CHAR8* StructFieldTypeName_35;
  const CHAR8* StructFieldName_36;
  const CHAR8* StructFieldTypeName_36;
  const CHAR8* StructFieldName_37;
  const CHAR8* StructFieldTypeName_37;
  const CHAR8* StructFieldName_38;
  const CHAR8* StructFieldTypeName_38;
  const CHAR8* StructFieldName_39;
  const CHAR8* StructFieldTypeName_39;
  const CHAR8* StructFieldName_40;
  const CHAR8* StructFieldTypeName_40;
  const CHAR8* StructFieldName_41;
  const CHAR8* StructFieldTypeName_41;
  const CHAR8* StructFieldName_42;
  const CHAR8* StructFieldTypeName_42;
  const CHAR8* StructFieldName_43;
  const CHAR8* StructFieldTypeName_43;
  const CHAR8* StructFieldName_44;
  const CHAR8* StructFieldTypeName_44;
  const CHAR8* StructFieldName_45;
  const CHAR8* StructFieldTypeName_45;
  const CHAR8* StructFieldName_46;
  const CHAR8* StructFieldTypeName_46;
  const CHAR8* StructFieldName_47;
  const CHAR8* StructFieldTypeName_47;
  const CHAR8* StructFieldName_48;
  const CHAR8* StructFieldTypeName_48;
  const CHAR8* StructFieldName_49;
  const CHAR8* StructFieldTypeName_49;
  const CHAR8* StructFieldName_50;
  const CHAR8* StructFieldTypeName_50;
  const CHAR8* StructFieldName_51;
  const CHAR8* StructFieldTypeName_51;
  const CHAR8* StructFieldName_52;
  const CHAR8* StructFieldTypeName_52;
  const CHAR8* StructFieldName_53;
  const CHAR8* StructFieldTypeName_53;
  const CHAR8* StructFieldName_54;
  const CHAR8* StructFieldTypeName_54;
  const CHAR8* StructFieldName_55;
  const CHAR8* StructFieldTypeName_55;
  const CHAR8* StructFieldName_56;
  const CHAR8* StructFieldTypeName_56;
  const CHAR8* StructFieldName_57;
  const CHAR8* StructFieldTypeName_57;
  const CHAR8* StructFieldName_58;
  const CHAR8* StructFieldTypeName_58;
  const CHAR8* StructFieldName_59;
  const CHAR8* StructFieldTypeName_59;
  const CHAR8* StructFieldName_60;
  const CHAR8* StructFieldTypeName_60;
  const CHAR8* StructFieldName_61;
  const CHAR8* StructFieldTypeName_61;
  const CHAR8* StructFieldName_62;
  const CHAR8* StructFieldTypeName_62;
  const CHAR8* StructFieldName_63;
  const CHAR8* StructFieldTypeName_63;
  const CHAR8* StructFieldName_64;
  const CHAR8* StructFieldTypeName_64;
  const CHAR8* StructFieldName_65;
  const CHAR8* StructFieldTypeName_65;
  const CHAR8* StructFieldName_66;
  const CHAR8* StructFieldTypeName_66;
  const CHAR8* StructFieldName_67;
  const CHAR8* StructFieldTypeName_67;
  const CHAR8* StructFieldName_68;
  const CHAR8* StructFieldTypeName_68;
  const CHAR8* StructFieldName_69;
  const CHAR8* StructFieldTypeName_69;
  const CHAR8* StructFieldName_70;
  const CHAR8* StructFieldTypeName_70;
  const CHAR8* StructFieldName_71;
  const CHAR8* StructFieldTypeName_71;
  const CHAR8* StructFieldName_72;
  const CHAR8* StructFieldTypeName_72;
  const CHAR8* StructFieldName_73;
  const CHAR8* StructFieldTypeName_73;
  const CHAR8* StructFieldName_74;
  const CHAR8* StructFieldTypeName_74;
  const CHAR8* StructFieldName_75;
  const CHAR8* StructFieldTypeName_75;
  const CHAR8* StructFieldName_76;
  const CHAR8* StructFieldTypeName_76;
  const CHAR8* StructFieldName_77;
  const CHAR8* StructFieldTypeName_77;
  const CHAR8* StructFieldName_78;
  const CHAR8* StructFieldTypeName_78;
  const CHAR8* StructFieldName_79;
  const CHAR8* StructFieldTypeName_79;
  const CHAR8* StructFieldName_80;
  const CHAR8* StructFieldTypeName_80;
  const CHAR8* StructFieldName_81;
  const CHAR8* StructFieldTypeName_81;
  const CHAR8* StructFieldName_82;
  const CHAR8* StructFieldTypeName_82;
  const CHAR8* StructFieldName_83;
  const CHAR8* StructFieldTypeName_83;
  const CHAR8* StructFieldName_84;
  const CHAR8* StructFieldTypeName_84;
  const CHAR8* StructFieldName_85;
  const CHAR8* StructFieldTypeName_85;
  const CHAR8* StructFieldName_86;
  const CHAR8* StructFieldTypeName_86;
  const CHAR8* StructFieldName_87;
  const CHAR8* StructFieldTypeName_87;
  const CHAR8* StructFieldName_88;
  const CHAR8* StructFieldTypeName_88;
  const CHAR8* StructFieldName_89;
  const CHAR8* StructFieldTypeName_89;
  const CHAR8* StructFieldName_90;
  const CHAR8* StructFieldTypeName_90;
  const CHAR8* StructFieldName_91;
  const CHAR8* StructFieldTypeName_91;
  const CHAR8* StructFieldName_92;
  const CHAR8* StructFieldTypeName_92;
  const CHAR8* StructFieldName_93;
  const CHAR8* StructFieldTypeName_93;
  const CHAR8* StructFieldName_94;
  const CHAR8* StructFieldTypeName_94;
  const CHAR8* StructFieldName_95;
  const CHAR8* StructFieldTypeName_95;
  const CHAR8* StructFieldName_96;
  const CHAR8* StructFieldTypeName_96;
  const CHAR8* StructFieldName_97;
  const CHAR8* StructFieldTypeName_97;
  const CHAR8* StructFieldName_98;
  const CHAR8* StructFieldTypeName_98;
  const CHAR8* StructFieldName_99;
  const CHAR8* StructFieldTypeName_99;
  const CHAR8* StructFieldName_100;
  const CHAR8* StructFieldTypeName_100;
  const CHAR8* StructFieldName_101;
  const CHAR8* StructFieldTypeName_101;
  const CHAR8* StructFieldName_102;
  const CHAR8* StructFieldTypeName_102;
  const CHAR8* StructFieldName_103;
  const CHAR8* StructFieldTypeName_103;
  const CHAR8* StructFieldName_104;
  const CHAR8* StructFieldTypeName_104;
  const CHAR8* StructFieldName_105;
  const CHAR8* StructFieldTypeName_105;
  const CHAR8* StructFieldName_106;
  const CHAR8* StructFieldTypeName_106;
  const CHAR8* StructFieldName_107;
  const CHAR8* StructFieldTypeName_107;
  const CHAR8* StructFieldName_108;
  const CHAR8* StructFieldTypeName_108;
  const CHAR8* StructFieldName_109;
  const CHAR8* StructFieldTypeName_109;
  const CHAR8* StructFieldName_110;
  const CHAR8* StructFieldTypeName_110;
  const CHAR8* StructFieldName_111;
  const CHAR8* StructFieldTypeName_111;
  const CHAR8* StructFieldName_112;
  const CHAR8* StructFieldTypeName_112;
  const CHAR8* StructFieldName_113;
  const CHAR8* StructFieldTypeName_113;
  const CHAR8* StructFieldName_114;
  const CHAR8* StructFieldTypeName_114;
  const CHAR8* StructFieldName_115;
  const CHAR8* StructFieldTypeName_115;
  const CHAR8* StructFieldName_116;
  const CHAR8* StructFieldTypeName_116;
  const CHAR8* StructFieldName_117;
  const CHAR8* StructFieldTypeName_117;
  const CHAR8* StructFieldName_118;
  const CHAR8* StructFieldTypeName_118;
  const CHAR8* StructFieldName_119;
  const CHAR8* StructFieldTypeName_119;
} TYPE__EFI_SYSTEM_CONTEXT_IPF;

TYPE__EFI_SYSTEM_CONTEXT_IPF TypeInfo__EFI_SYSTEM_CONTEXT_IPF = {
  .TypeName = "EFI_SYSTEM_CONTEXT_IPF",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_IPF),
  .StructFieldNum = 119,
  .StructFieldName_1 = "Reserved",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "R1",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "R2",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "R3",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "R4",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "R5",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "R6",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "R7",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "R8",
  .StructFieldTypeName_9 = "UINT64",
  .StructFieldName_10 = "R9",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "R10",
  .StructFieldTypeName_11 = "UINT64",
  .StructFieldName_12 = "R11",
  .StructFieldTypeName_12 = "UINT64",
  .StructFieldName_13 = "R12",
  .StructFieldTypeName_13 = "UINT64",
  .StructFieldName_14 = "R13",
  .StructFieldTypeName_14 = "UINT64",
  .StructFieldName_15 = "R14",
  .StructFieldTypeName_15 = "UINT64",
  .StructFieldName_16 = "R15",
  .StructFieldTypeName_16 = "UINT64",
  .StructFieldName_17 = "R16",
  .StructFieldTypeName_17 = "UINT64",
  .StructFieldName_18 = "R17",
  .StructFieldTypeName_18 = "UINT64",
  .StructFieldName_19 = "R18",
  .StructFieldTypeName_19 = "UINT64",
  .StructFieldName_20 = "R19",
  .StructFieldTypeName_20 = "UINT64",
  .StructFieldName_21 = "R20",
  .StructFieldTypeName_21 = "UINT64",
  .StructFieldName_22 = "R21",
  .StructFieldTypeName_22 = "UINT64",
  .StructFieldName_23 = "R22",
  .StructFieldTypeName_23 = "UINT64",
  .StructFieldName_24 = "R23",
  .StructFieldTypeName_24 = "UINT64",
  .StructFieldName_25 = "R24",
  .StructFieldTypeName_25 = "UINT64",
  .StructFieldName_26 = "R25",
  .StructFieldTypeName_26 = "UINT64",
  .StructFieldName_27 = "R26",
  .StructFieldTypeName_27 = "UINT64",
  .StructFieldName_28 = "R27",
  .StructFieldTypeName_28 = "UINT64",
  .StructFieldName_29 = "R28",
  .StructFieldTypeName_29 = "UINT64",
  .StructFieldName_30 = "R29",
  .StructFieldTypeName_30 = "UINT64",
  .StructFieldName_31 = "R30",
  .StructFieldTypeName_31 = "UINT64",
  .StructFieldName_32 = "R31",
  .StructFieldTypeName_32 = "UINT64",
  .StructFieldName_33 = "F2",
  .StructFieldTypeName_33 = "UINT64[2]",
  .StructFieldName_34 = "F3",
  .StructFieldTypeName_34 = "UINT64[2]",
  .StructFieldName_35 = "F4",
  .StructFieldTypeName_35 = "UINT64[2]",
  .StructFieldName_36 = "F5",
  .StructFieldTypeName_36 = "UINT64[2]",
  .StructFieldName_37 = "F6",
  .StructFieldTypeName_37 = "UINT64[2]",
  .StructFieldName_38 = "F7",
  .StructFieldTypeName_38 = "UINT64[2]",
  .StructFieldName_39 = "F8",
  .StructFieldTypeName_39 = "UINT64[2]",
  .StructFieldName_40 = "F9",
  .StructFieldTypeName_40 = "UINT64[2]",
  .StructFieldName_41 = "F10",
  .StructFieldTypeName_41 = "UINT64[2]",
  .StructFieldName_42 = "F11",
  .StructFieldTypeName_42 = "UINT64[2]",
  .StructFieldName_43 = "F12",
  .StructFieldTypeName_43 = "UINT64[2]",
  .StructFieldName_44 = "F13",
  .StructFieldTypeName_44 = "UINT64[2]",
  .StructFieldName_45 = "F14",
  .StructFieldTypeName_45 = "UINT64[2]",
  .StructFieldName_46 = "F15",
  .StructFieldTypeName_46 = "UINT64[2]",
  .StructFieldName_47 = "F16",
  .StructFieldTypeName_47 = "UINT64[2]",
  .StructFieldName_48 = "F17",
  .StructFieldTypeName_48 = "UINT64[2]",
  .StructFieldName_49 = "F18",
  .StructFieldTypeName_49 = "UINT64[2]",
  .StructFieldName_50 = "F19",
  .StructFieldTypeName_50 = "UINT64[2]",
  .StructFieldName_51 = "F20",
  .StructFieldTypeName_51 = "UINT64[2]",
  .StructFieldName_52 = "F21",
  .StructFieldTypeName_52 = "UINT64[2]",
  .StructFieldName_53 = "F22",
  .StructFieldTypeName_53 = "UINT64[2]",
  .StructFieldName_54 = "F23",
  .StructFieldTypeName_54 = "UINT64[2]",
  .StructFieldName_55 = "F24",
  .StructFieldTypeName_55 = "UINT64[2]",
  .StructFieldName_56 = "F25",
  .StructFieldTypeName_56 = "UINT64[2]",
  .StructFieldName_57 = "F26",
  .StructFieldTypeName_57 = "UINT64[2]",
  .StructFieldName_58 = "F27",
  .StructFieldTypeName_58 = "UINT64[2]",
  .StructFieldName_59 = "F28",
  .StructFieldTypeName_59 = "UINT64[2]",
  .StructFieldName_60 = "F29",
  .StructFieldTypeName_60 = "UINT64[2]",
  .StructFieldName_61 = "F30",
  .StructFieldTypeName_61 = "UINT64[2]",
  .StructFieldName_62 = "F31",
  .StructFieldTypeName_62 = "UINT64[2]",
  .StructFieldName_63 = "Pr",
  .StructFieldTypeName_63 = "UINT64",
  .StructFieldName_64 = "B0",
  .StructFieldTypeName_64 = "UINT64",
  .StructFieldName_65 = "B1",
  .StructFieldTypeName_65 = "UINT64",
  .StructFieldName_66 = "B2",
  .StructFieldTypeName_66 = "UINT64",
  .StructFieldName_67 = "B3",
  .StructFieldTypeName_67 = "UINT64",
  .StructFieldName_68 = "B4",
  .StructFieldTypeName_68 = "UINT64",
  .StructFieldName_69 = "B5",
  .StructFieldTypeName_69 = "UINT64",
  .StructFieldName_70 = "B6",
  .StructFieldTypeName_70 = "UINT64",
  .StructFieldName_71 = "B7",
  .StructFieldTypeName_71 = "UINT64",
  .StructFieldName_72 = "ArRsc",
  .StructFieldTypeName_72 = "UINT64",
  .StructFieldName_73 = "ArBsp",
  .StructFieldTypeName_73 = "UINT64",
  .StructFieldName_74 = "ArBspstore",
  .StructFieldTypeName_74 = "UINT64",
  .StructFieldName_75 = "ArRnat",
  .StructFieldTypeName_75 = "UINT64",
  .StructFieldName_76 = "ArFcr",
  .StructFieldTypeName_76 = "UINT64",
  .StructFieldName_77 = "ArEflag",
  .StructFieldTypeName_77 = "UINT64",
  .StructFieldName_78 = "ArCsd",
  .StructFieldTypeName_78 = "UINT64",
  .StructFieldName_79 = "ArSsd",
  .StructFieldTypeName_79 = "UINT64",
  .StructFieldName_80 = "ArCflg",
  .StructFieldTypeName_80 = "UINT64",
  .StructFieldName_81 = "ArFsr",
  .StructFieldTypeName_81 = "UINT64",
  .StructFieldName_82 = "ArFir",
  .StructFieldTypeName_82 = "UINT64",
  .StructFieldName_83 = "ArFdr",
  .StructFieldTypeName_83 = "UINT64",
  .StructFieldName_84 = "ArCcv",
  .StructFieldTypeName_84 = "UINT64",
  .StructFieldName_85 = "ArUnat",
  .StructFieldTypeName_85 = "UINT64",
  .StructFieldName_86 = "ArFpsr",
  .StructFieldTypeName_86 = "UINT64",
  .StructFieldName_87 = "ArPfs",
  .StructFieldTypeName_87 = "UINT64",
  .StructFieldName_88 = "ArLc",
  .StructFieldTypeName_88 = "UINT64",
  .StructFieldName_89 = "ArEc",
  .StructFieldTypeName_89 = "UINT64",
  .StructFieldName_90 = "CrDcr",
  .StructFieldTypeName_90 = "UINT64",
  .StructFieldName_91 = "CrItm",
  .StructFieldTypeName_91 = "UINT64",
  .StructFieldName_92 = "CrIva",
  .StructFieldTypeName_92 = "UINT64",
  .StructFieldName_93 = "CrPta",
  .StructFieldTypeName_93 = "UINT64",
  .StructFieldName_94 = "CrIpsr",
  .StructFieldTypeName_94 = "UINT64",
  .StructFieldName_95 = "CrIsr",
  .StructFieldTypeName_95 = "UINT64",
  .StructFieldName_96 = "CrIip",
  .StructFieldTypeName_96 = "UINT64",
  .StructFieldName_97 = "CrIfa",
  .StructFieldTypeName_97 = "UINT64",
  .StructFieldName_98 = "CrItir",
  .StructFieldTypeName_98 = "UINT64",
  .StructFieldName_99 = "CrIipa",
  .StructFieldTypeName_99 = "UINT64",
  .StructFieldName_100 = "CrIfs",
  .StructFieldTypeName_100 = "UINT64",
  .StructFieldName_101 = "CrIim",
  .StructFieldTypeName_101 = "UINT64",
  .StructFieldName_102 = "CrIha",
  .StructFieldTypeName_102 = "UINT64",
  .StructFieldName_103 = "Dbr0",
  .StructFieldTypeName_103 = "UINT64",
  .StructFieldName_104 = "Dbr1",
  .StructFieldTypeName_104 = "UINT64",
  .StructFieldName_105 = "Dbr2",
  .StructFieldTypeName_105 = "UINT64",
  .StructFieldName_106 = "Dbr3",
  .StructFieldTypeName_106 = "UINT64",
  .StructFieldName_107 = "Dbr4",
  .StructFieldTypeName_107 = "UINT64",
  .StructFieldName_108 = "Dbr5",
  .StructFieldTypeName_108 = "UINT64",
  .StructFieldName_109 = "Dbr6",
  .StructFieldTypeName_109 = "UINT64",
  .StructFieldName_110 = "Dbr7",
  .StructFieldTypeName_110 = "UINT64",
  .StructFieldName_111 = "Ibr0",
  .StructFieldTypeName_111 = "UINT64",
  .StructFieldName_112 = "Ibr1",
  .StructFieldTypeName_112 = "UINT64",
  .StructFieldName_113 = "Ibr2",
  .StructFieldTypeName_113 = "UINT64",
  .StructFieldName_114 = "Ibr3",
  .StructFieldTypeName_114 = "UINT64",
  .StructFieldName_115 = "Ibr4",
  .StructFieldTypeName_115 = "UINT64",
  .StructFieldName_116 = "Ibr5",
  .StructFieldTypeName_116 = "UINT64",
  .StructFieldName_117 = "Ibr6",
  .StructFieldTypeName_117 = "UINT64",
  .StructFieldName_118 = "Ibr7",
  .StructFieldTypeName_118 = "UINT64",
  .StructFieldName_119 = "IntNat",
  .StructFieldTypeName_119 = "UINT64"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_ARM_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_ARM_STAR;

TYPE__EFI_SYSTEM_CONTEXT_ARM_STAR TypeInfo__EFI_SYSTEM_CONTEXT_ARM_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_ARM*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_ARM*),
  .PointedType = "EFI_SYSTEM_CONTEXT_ARM"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_ARM{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
} TYPE__EFI_SYSTEM_CONTEXT_ARM;

TYPE__EFI_SYSTEM_CONTEXT_ARM TypeInfo__EFI_SYSTEM_CONTEXT_ARM = {
  .TypeName = "EFI_SYSTEM_CONTEXT_ARM",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_ARM),
  .StructFieldNum = 21,
  .StructFieldName_1 = "R0",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "R1",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "R2",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "R3",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "R4",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "R5",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "R6",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "R7",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "R8",
  .StructFieldTypeName_9 = "UINT32",
  .StructFieldName_10 = "R9",
  .StructFieldTypeName_10 = "UINT32",
  .StructFieldName_11 = "R10",
  .StructFieldTypeName_11 = "UINT32",
  .StructFieldName_12 = "R11",
  .StructFieldTypeName_12 = "UINT32",
  .StructFieldName_13 = "R12",
  .StructFieldTypeName_13 = "UINT32",
  .StructFieldName_14 = "SP",
  .StructFieldTypeName_14 = "UINT32",
  .StructFieldName_15 = "LR",
  .StructFieldTypeName_15 = "UINT32",
  .StructFieldName_16 = "PC",
  .StructFieldTypeName_16 = "UINT32",
  .StructFieldName_17 = "CPSR",
  .StructFieldTypeName_17 = "UINT32",
  .StructFieldName_18 = "DFSR",
  .StructFieldTypeName_18 = "UINT32",
  .StructFieldName_19 = "DFAR",
  .StructFieldTypeName_19 = "UINT32",
  .StructFieldName_20 = "IFSR",
  .StructFieldTypeName_20 = "UINT32",
  .StructFieldName_21 = "IFAR",
  .StructFieldTypeName_21 = "UINT32"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_AARCH64_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_CONTEXT_AARCH64_STAR;

TYPE__EFI_SYSTEM_CONTEXT_AARCH64_STAR TypeInfo__EFI_SYSTEM_CONTEXT_AARCH64_STAR = {
  .TypeName = "EFI_SYSTEM_CONTEXT_AARCH64*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_AARCH64*),
  .PointedType = "EFI_SYSTEM_CONTEXT_AARCH64"
};


typedef struct _TYPE__EFI_SYSTEM_CONTEXT_AARCH64{
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
  const CHAR8* StructFieldName_19;
  const CHAR8* StructFieldTypeName_19;
  const CHAR8* StructFieldName_20;
  const CHAR8* StructFieldTypeName_20;
  const CHAR8* StructFieldName_21;
  const CHAR8* StructFieldTypeName_21;
  const CHAR8* StructFieldName_22;
  const CHAR8* StructFieldTypeName_22;
  const CHAR8* StructFieldName_23;
  const CHAR8* StructFieldTypeName_23;
  const CHAR8* StructFieldName_24;
  const CHAR8* StructFieldTypeName_24;
  const CHAR8* StructFieldName_25;
  const CHAR8* StructFieldTypeName_25;
  const CHAR8* StructFieldName_26;
  const CHAR8* StructFieldTypeName_26;
  const CHAR8* StructFieldName_27;
  const CHAR8* StructFieldTypeName_27;
  const CHAR8* StructFieldName_28;
  const CHAR8* StructFieldTypeName_28;
  const CHAR8* StructFieldName_29;
  const CHAR8* StructFieldTypeName_29;
  const CHAR8* StructFieldName_30;
  const CHAR8* StructFieldTypeName_30;
  const CHAR8* StructFieldName_31;
  const CHAR8* StructFieldTypeName_31;
  const CHAR8* StructFieldName_32;
  const CHAR8* StructFieldTypeName_32;
  const CHAR8* StructFieldName_33;
  const CHAR8* StructFieldTypeName_33;
  const CHAR8* StructFieldName_34;
  const CHAR8* StructFieldTypeName_34;
  const CHAR8* StructFieldName_35;
  const CHAR8* StructFieldTypeName_35;
  const CHAR8* StructFieldName_36;
  const CHAR8* StructFieldTypeName_36;
  const CHAR8* StructFieldName_37;
  const CHAR8* StructFieldTypeName_37;
  const CHAR8* StructFieldName_38;
  const CHAR8* StructFieldTypeName_38;
  const CHAR8* StructFieldName_39;
  const CHAR8* StructFieldTypeName_39;
  const CHAR8* StructFieldName_40;
  const CHAR8* StructFieldTypeName_40;
  const CHAR8* StructFieldName_41;
  const CHAR8* StructFieldTypeName_41;
  const CHAR8* StructFieldName_42;
  const CHAR8* StructFieldTypeName_42;
  const CHAR8* StructFieldName_43;
  const CHAR8* StructFieldTypeName_43;
  const CHAR8* StructFieldName_44;
  const CHAR8* StructFieldTypeName_44;
  const CHAR8* StructFieldName_45;
  const CHAR8* StructFieldTypeName_45;
  const CHAR8* StructFieldName_46;
  const CHAR8* StructFieldTypeName_46;
  const CHAR8* StructFieldName_47;
  const CHAR8* StructFieldTypeName_47;
  const CHAR8* StructFieldName_48;
  const CHAR8* StructFieldTypeName_48;
  const CHAR8* StructFieldName_49;
  const CHAR8* StructFieldTypeName_49;
  const CHAR8* StructFieldName_50;
  const CHAR8* StructFieldTypeName_50;
  const CHAR8* StructFieldName_51;
  const CHAR8* StructFieldTypeName_51;
  const CHAR8* StructFieldName_52;
  const CHAR8* StructFieldTypeName_52;
  const CHAR8* StructFieldName_53;
  const CHAR8* StructFieldTypeName_53;
  const CHAR8* StructFieldName_54;
  const CHAR8* StructFieldTypeName_54;
  const CHAR8* StructFieldName_55;
  const CHAR8* StructFieldTypeName_55;
  const CHAR8* StructFieldName_56;
  const CHAR8* StructFieldTypeName_56;
  const CHAR8* StructFieldName_57;
  const CHAR8* StructFieldTypeName_57;
  const CHAR8* StructFieldName_58;
  const CHAR8* StructFieldTypeName_58;
  const CHAR8* StructFieldName_59;
  const CHAR8* StructFieldTypeName_59;
  const CHAR8* StructFieldName_60;
  const CHAR8* StructFieldTypeName_60;
  const CHAR8* StructFieldName_61;
  const CHAR8* StructFieldTypeName_61;
  const CHAR8* StructFieldName_62;
  const CHAR8* StructFieldTypeName_62;
  const CHAR8* StructFieldName_63;
  const CHAR8* StructFieldTypeName_63;
  const CHAR8* StructFieldName_64;
  const CHAR8* StructFieldTypeName_64;
  const CHAR8* StructFieldName_65;
  const CHAR8* StructFieldTypeName_65;
  const CHAR8* StructFieldName_66;
  const CHAR8* StructFieldTypeName_66;
  const CHAR8* StructFieldName_67;
  const CHAR8* StructFieldTypeName_67;
  const CHAR8* StructFieldName_68;
  const CHAR8* StructFieldTypeName_68;
  const CHAR8* StructFieldName_69;
  const CHAR8* StructFieldTypeName_69;
} TYPE__EFI_SYSTEM_CONTEXT_AARCH64;

TYPE__EFI_SYSTEM_CONTEXT_AARCH64 TypeInfo__EFI_SYSTEM_CONTEXT_AARCH64 = {
  .TypeName = "EFI_SYSTEM_CONTEXT_AARCH64",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_CONTEXT_AARCH64),
  .StructFieldNum = 69,
  .StructFieldName_1 = "X0",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "X1",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "X2",
  .StructFieldTypeName_3 = "UINT64",
  .StructFieldName_4 = "X3",
  .StructFieldTypeName_4 = "UINT64",
  .StructFieldName_5 = "X4",
  .StructFieldTypeName_5 = "UINT64",
  .StructFieldName_6 = "X5",
  .StructFieldTypeName_6 = "UINT64",
  .StructFieldName_7 = "X6",
  .StructFieldTypeName_7 = "UINT64",
  .StructFieldName_8 = "X7",
  .StructFieldTypeName_8 = "UINT64",
  .StructFieldName_9 = "X8",
  .StructFieldTypeName_9 = "UINT64",
  .StructFieldName_10 = "X9",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "X10",
  .StructFieldTypeName_11 = "UINT64",
  .StructFieldName_12 = "X11",
  .StructFieldTypeName_12 = "UINT64",
  .StructFieldName_13 = "X12",
  .StructFieldTypeName_13 = "UINT64",
  .StructFieldName_14 = "X13",
  .StructFieldTypeName_14 = "UINT64",
  .StructFieldName_15 = "X14",
  .StructFieldTypeName_15 = "UINT64",
  .StructFieldName_16 = "X15",
  .StructFieldTypeName_16 = "UINT64",
  .StructFieldName_17 = "X16",
  .StructFieldTypeName_17 = "UINT64",
  .StructFieldName_18 = "X17",
  .StructFieldTypeName_18 = "UINT64",
  .StructFieldName_19 = "X18",
  .StructFieldTypeName_19 = "UINT64",
  .StructFieldName_20 = "X19",
  .StructFieldTypeName_20 = "UINT64",
  .StructFieldName_21 = "X20",
  .StructFieldTypeName_21 = "UINT64",
  .StructFieldName_22 = "X21",
  .StructFieldTypeName_22 = "UINT64",
  .StructFieldName_23 = "X22",
  .StructFieldTypeName_23 = "UINT64",
  .StructFieldName_24 = "X23",
  .StructFieldTypeName_24 = "UINT64",
  .StructFieldName_25 = "X24",
  .StructFieldTypeName_25 = "UINT64",
  .StructFieldName_26 = "X25",
  .StructFieldTypeName_26 = "UINT64",
  .StructFieldName_27 = "X26",
  .StructFieldTypeName_27 = "UINT64",
  .StructFieldName_28 = "X27",
  .StructFieldTypeName_28 = "UINT64",
  .StructFieldName_29 = "X28",
  .StructFieldTypeName_29 = "UINT64",
  .StructFieldName_30 = "FP",
  .StructFieldTypeName_30 = "UINT64",
  .StructFieldName_31 = "LR",
  .StructFieldTypeName_31 = "UINT64",
  .StructFieldName_32 = "SP",
  .StructFieldTypeName_32 = "UINT64",
  .StructFieldName_33 = "V0",
  .StructFieldTypeName_33 = "UINT64[2]",
  .StructFieldName_34 = "V1",
  .StructFieldTypeName_34 = "UINT64[2]",
  .StructFieldName_35 = "V2",
  .StructFieldTypeName_35 = "UINT64[2]",
  .StructFieldName_36 = "V3",
  .StructFieldTypeName_36 = "UINT64[2]",
  .StructFieldName_37 = "V4",
  .StructFieldTypeName_37 = "UINT64[2]",
  .StructFieldName_38 = "V5",
  .StructFieldTypeName_38 = "UINT64[2]",
  .StructFieldName_39 = "V6",
  .StructFieldTypeName_39 = "UINT64[2]",
  .StructFieldName_40 = "V7",
  .StructFieldTypeName_40 = "UINT64[2]",
  .StructFieldName_41 = "V8",
  .StructFieldTypeName_41 = "UINT64[2]",
  .StructFieldName_42 = "V9",
  .StructFieldTypeName_42 = "UINT64[2]",
  .StructFieldName_43 = "V10",
  .StructFieldTypeName_43 = "UINT64[2]",
  .StructFieldName_44 = "V11",
  .StructFieldTypeName_44 = "UINT64[2]",
  .StructFieldName_45 = "V12",
  .StructFieldTypeName_45 = "UINT64[2]",
  .StructFieldName_46 = "V13",
  .StructFieldTypeName_46 = "UINT64[2]",
  .StructFieldName_47 = "V14",
  .StructFieldTypeName_47 = "UINT64[2]",
  .StructFieldName_48 = "V15",
  .StructFieldTypeName_48 = "UINT64[2]",
  .StructFieldName_49 = "V16",
  .StructFieldTypeName_49 = "UINT64[2]",
  .StructFieldName_50 = "V17",
  .StructFieldTypeName_50 = "UINT64[2]",
  .StructFieldName_51 = "V18",
  .StructFieldTypeName_51 = "UINT64[2]",
  .StructFieldName_52 = "V19",
  .StructFieldTypeName_52 = "UINT64[2]",
  .StructFieldName_53 = "V20",
  .StructFieldTypeName_53 = "UINT64[2]",
  .StructFieldName_54 = "V21",
  .StructFieldTypeName_54 = "UINT64[2]",
  .StructFieldName_55 = "V22",
  .StructFieldTypeName_55 = "UINT64[2]",
  .StructFieldName_56 = "V23",
  .StructFieldTypeName_56 = "UINT64[2]",
  .StructFieldName_57 = "V24",
  .StructFieldTypeName_57 = "UINT64[2]",
  .StructFieldName_58 = "V25",
  .StructFieldTypeName_58 = "UINT64[2]",
  .StructFieldName_59 = "V26",
  .StructFieldTypeName_59 = "UINT64[2]",
  .StructFieldName_60 = "V27",
  .StructFieldTypeName_60 = "UINT64[2]",
  .StructFieldName_61 = "V28",
  .StructFieldTypeName_61 = "UINT64[2]",
  .StructFieldName_62 = "V29",
  .StructFieldTypeName_62 = "UINT64[2]",
  .StructFieldName_63 = "V30",
  .StructFieldTypeName_63 = "UINT64[2]",
  .StructFieldName_64 = "V31",
  .StructFieldTypeName_64 = "UINT64[2]",
  .StructFieldName_65 = "ELR",
  .StructFieldTypeName_65 = "UINT64",
  .StructFieldName_66 = "SPSR",
  .StructFieldTypeName_66 = "UINT64",
  .StructFieldName_67 = "FPSR",
  .StructFieldTypeName_67 = "UINT64",
  .StructFieldName_68 = "ESR",
  .StructFieldTypeName_68 = "UINT64",
  .StructFieldName_69 = "FAR",
  .StructFieldTypeName_69 = "UINT64"
};


typedef struct _TYPE__EFI_CPU_GET_TIMER_VALUE{
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
} TYPE__EFI_CPU_GET_TIMER_VALUE;

TYPE__EFI_CPU_GET_TIMER_VALUE TypeInfo__EFI_CPU_GET_TIMER_VALUE = {
  .TypeName = "EFI_CPU_GET_TIMER_VALUE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_GET_TIMER_VALUE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT64*"
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


typedef struct _TYPE__EFI_CPU_SET_MEMORY_ATTRIBUTES{
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
} TYPE__EFI_CPU_SET_MEMORY_ATTRIBUTES;

TYPE__EFI_CPU_SET_MEMORY_ATTRIBUTES TypeInfo__EFI_CPU_SET_MEMORY_ATTRIBUTES = {
  .TypeName = "EFI_CPU_SET_MEMORY_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_SET_MEMORY_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_ARCH_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64"
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
  &TypeInfo__gPcdProtocolGuid,
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
  &TypeInfo__gEfiCpuArchProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiCpuArchProtocolGuid,
  &TypeInfo__EFI_CPU_ARCH_PROTOCOL,
  &TypeInfo__EFI_CPU_FLUSH_DATA_CACHE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_CPU_ARCH_PROTOCOL_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__EFI_CPU_FLUSH_TYPE,
  &TypeInfo__EFI_CPU_ENABLE_INTERRUPT,
  &TypeInfo__EFI_CPU_DISABLE_INTERRUPT,
  &TypeInfo__EFI_CPU_GET_INTERRUPT_STATE,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_CPU_INIT,
  &TypeInfo__EFI_CPU_INIT_TYPE,
  &TypeInfo__EFI_CPU_REGISTER_INTERRUPT_HANDLER,
  &TypeInfo__EFI_EXCEPTION_TYPE,
  &TypeInfo__INTN,
  &TypeInfo__INT64,
  &TypeInfo__EFI_CPU_INTERRUPT_HANDLER,
  &TypeInfo__EFI_SYSTEM_CONTEXT,
  &TypeInfo__EFI_SYSTEM_CONTEXT_EBC_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_EBC,
  &TypeInfo__EFI_SYSTEM_CONTEXT_IA32_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_IA32,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_FX_SAVE_STATE_IA32,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_10,
  &TypeInfo__UINT8,
  &TypeInfo__UINT8_ARRAY_6,
  &TypeInfo__UINT8_ARRAY_16,
  &TypeInfo__UINT8_ARRAY_224,
  &TypeInfo__UINT32_ARRAY_2,
  &TypeInfo__EFI_SYSTEM_CONTEXT_X64_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_X64,
  &TypeInfo__EFI_FX_SAVE_STATE_X64,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT64_ARRAY_2,
  &TypeInfo__EFI_SYSTEM_CONTEXT_IPF_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_IPF,
  &TypeInfo__EFI_SYSTEM_CONTEXT_ARM_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_ARM,
  &TypeInfo__EFI_SYSTEM_CONTEXT_AARCH64_STAR,
  &TypeInfo__EFI_SYSTEM_CONTEXT_AARCH64,
  &TypeInfo__EFI_CPU_GET_TIMER_VALUE,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_CPU_SET_MEMORY_ATTRIBUTES,
  NULL
};