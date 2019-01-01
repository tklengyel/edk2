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

typedef struct _TYPE__EFI_EBC_PROTOCOL{
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
} TYPE__EFI_EBC_PROTOCOL;

TYPE__EFI_EBC_PROTOCOL TypeInfo__EFI_EBC_PROTOCOL = {
  .TypeName = "EFI_EBC_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_EBC_PROTOCOL),
  .StructFieldNum = 4,
  .StructFieldName_1 = "CreateThunk",
  .StructFieldTypeName_1 = "EFI_EBC_CREATE_THUNK",
  .StructFieldName_2 = "UnloadImage",
  .StructFieldTypeName_2 = "EFI_EBC_UNLOAD_IMAGE",
  .StructFieldName_3 = "RegisterICacheFlush",
  .StructFieldTypeName_3 = "EFI_EBC_REGISTER_ICACHE_FLUSH",
  .StructFieldName_4 = "GetVersion",
  .StructFieldTypeName_4 = "EFI_EBC_GET_VERSION"
};


typedef struct _TYPE__EFI_EBC_CREATE_THUNK{
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
} TYPE__EFI_EBC_CREATE_THUNK;

TYPE__EFI_EBC_CREATE_THUNK TypeInfo__EFI_EBC_CREATE_THUNK = {
  .TypeName = "EFI_EBC_CREATE_THUNK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EBC_CREATE_THUNK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "void**"
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


typedef struct _TYPE__EFI_EBC_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EBC_PROTOCOL_STAR;

TYPE__EFI_EBC_PROTOCOL_STAR TypeInfo__EFI_EBC_PROTOCOL_STAR = {
  .TypeName = "EFI_EBC_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EBC_PROTOCOL*),
  .PointedType = "EFI_EBC_PROTOCOL"
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


typedef struct _TYPE__EFI_EBC_UNLOAD_IMAGE{
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
} TYPE__EFI_EBC_UNLOAD_IMAGE;

TYPE__EFI_EBC_UNLOAD_IMAGE TypeInfo__EFI_EBC_UNLOAD_IMAGE = {
  .TypeName = "EFI_EBC_UNLOAD_IMAGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EBC_UNLOAD_IMAGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_EBC_REGISTER_ICACHE_FLUSH{
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
} TYPE__EFI_EBC_REGISTER_ICACHE_FLUSH;

TYPE__EFI_EBC_REGISTER_ICACHE_FLUSH TypeInfo__EFI_EBC_REGISTER_ICACHE_FLUSH = {
  .TypeName = "EFI_EBC_REGISTER_ICACHE_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EBC_REGISTER_ICACHE_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EBC_ICACHE_FLUSH"
};


typedef struct _TYPE__EBC_ICACHE_FLUSH{
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
} TYPE__EBC_ICACHE_FLUSH;

TYPE__EBC_ICACHE_FLUSH TypeInfo__EBC_ICACHE_FLUSH = {
  .TypeName = "EBC_ICACHE_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EBC_ICACHE_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64"
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


typedef struct _TYPE__EFI_EBC_GET_VERSION{
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
} TYPE__EFI_EBC_GET_VERSION;

TYPE__EFI_EBC_GET_VERSION TypeInfo__EFI_EBC_GET_VERSION = {
  .TypeName = "EFI_EBC_GET_VERSION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EBC_GET_VERSION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
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


typedef struct _TYPE__gEfiDebugSupportProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDebugSupportProtocolGuid;

TYPE__gEfiDebugSupportProtocolGuid TypeInfo__gEfiDebugSupportProtocolGuid = {
  .TypeName = "gEfiDebugSupportProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDebugSupportProtocolGuid,
  .InterfaceStructName = "EFI_DEBUG_SUPPORT_PROTOCOL"
};


typedef struct _TYPE__EFI_DEBUG_SUPPORT_PROTOCOL{
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
} TYPE__EFI_DEBUG_SUPPORT_PROTOCOL;

TYPE__EFI_DEBUG_SUPPORT_PROTOCOL TypeInfo__EFI_DEBUG_SUPPORT_PROTOCOL = {
  .TypeName = "EFI_DEBUG_SUPPORT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DEBUG_SUPPORT_PROTOCOL),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Isa",
  .StructFieldTypeName_1 = "EFI_INSTRUCTION_SET_ARCHITECTURE",
  .StructFieldName_2 = "GetMaximumProcessorIndex",
  .StructFieldTypeName_2 = "EFI_GET_MAXIMUM_PROCESSOR_INDEX",
  .StructFieldName_3 = "RegisterPeriodicCallback",
  .StructFieldTypeName_3 = "EFI_REGISTER_PERIODIC_CALLBACK",
  .StructFieldName_4 = "RegisterExceptionCallback",
  .StructFieldTypeName_4 = "EFI_REGISTER_EXCEPTION_CALLBACK",
  .StructFieldName_5 = "InvalidateInstructionCache",
  .StructFieldTypeName_5 = "EFI_INVALIDATE_INSTRUCTION_CACHE"
};


typedef struct _TYPE__EFI_INSTRUCTION_SET_ARCHITECTURE{
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
} TYPE__EFI_INSTRUCTION_SET_ARCHITECTURE;

TYPE__EFI_INSTRUCTION_SET_ARCHITECTURE TypeInfo__EFI_INSTRUCTION_SET_ARCHITECTURE = {
  .TypeName = "EFI_INSTRUCTION_SET_ARCHITECTURE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_INSTRUCTION_SET_ARCHITECTURE),
  .EnumValueNum = 6,
  .EnumValueName_1 = "IsaIa32",
  .EnumValue_1 = IsaIa32,
  .EnumValueName_2 = "IsaX64",
  .EnumValue_2 = IsaX64,
  .EnumValueName_3 = "IsaIpf",
  .EnumValue_3 = IsaIpf,
  .EnumValueName_4 = "IsaEbc",
  .EnumValue_4 = IsaEbc,
  .EnumValueName_5 = "IsaArm",
  .EnumValue_5 = IsaArm,
  .EnumValueName_6 = "IsaAArch64",
  .EnumValue_6 = IsaAArch64
};


typedef struct _TYPE__EFI_GET_MAXIMUM_PROCESSOR_INDEX{
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
} TYPE__EFI_GET_MAXIMUM_PROCESSOR_INDEX;

TYPE__EFI_GET_MAXIMUM_PROCESSOR_INDEX TypeInfo__EFI_GET_MAXIMUM_PROCESSOR_INDEX = {
  .TypeName = "EFI_GET_MAXIMUM_PROCESSOR_INDEX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_MAXIMUM_PROCESSOR_INDEX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEBUG_SUPPORT_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*"
};


typedef struct _TYPE__EFI_DEBUG_SUPPORT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DEBUG_SUPPORT_PROTOCOL_STAR;

TYPE__EFI_DEBUG_SUPPORT_PROTOCOL_STAR TypeInfo__EFI_DEBUG_SUPPORT_PROTOCOL_STAR = {
  .TypeName = "EFI_DEBUG_SUPPORT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DEBUG_SUPPORT_PROTOCOL*),
  .PointedType = "EFI_DEBUG_SUPPORT_PROTOCOL"
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


typedef struct _TYPE__EFI_REGISTER_PERIODIC_CALLBACK{
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
} TYPE__EFI_REGISTER_PERIODIC_CALLBACK;

TYPE__EFI_REGISTER_PERIODIC_CALLBACK TypeInfo__EFI_REGISTER_PERIODIC_CALLBACK = {
  .TypeName = "EFI_REGISTER_PERIODIC_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_PERIODIC_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEBUG_SUPPORT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PERIODIC_CALLBACK"
};


typedef struct _TYPE__EFI_PERIODIC_CALLBACK{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PERIODIC_CALLBACK;

TYPE__EFI_PERIODIC_CALLBACK TypeInfo__EFI_PERIODIC_CALLBACK = {
  .TypeName = "EFI_PERIODIC_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PERIODIC_CALLBACK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SYSTEM_CONTEXT"
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


typedef struct _TYPE__EFI_REGISTER_EXCEPTION_CALLBACK{
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
} TYPE__EFI_REGISTER_EXCEPTION_CALLBACK;

TYPE__EFI_REGISTER_EXCEPTION_CALLBACK TypeInfo__EFI_REGISTER_EXCEPTION_CALLBACK = {
  .TypeName = "EFI_REGISTER_EXCEPTION_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_EXCEPTION_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEBUG_SUPPORT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EXCEPTION_CALLBACK",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_EXCEPTION_TYPE"
};


typedef struct _TYPE__EFI_EXCEPTION_CALLBACK{
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
} TYPE__EFI_EXCEPTION_CALLBACK;

TYPE__EFI_EXCEPTION_CALLBACK TypeInfo__EFI_EXCEPTION_CALLBACK = {
  .TypeName = "EFI_EXCEPTION_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXCEPTION_CALLBACK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EXCEPTION_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_SYSTEM_CONTEXT"
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


typedef struct _TYPE__EFI_INVALIDATE_INSTRUCTION_CACHE{
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
} TYPE__EFI_INVALIDATE_INSTRUCTION_CACHE;

TYPE__EFI_INVALIDATE_INSTRUCTION_CACHE TypeInfo__EFI_INVALIDATE_INSTRUCTION_CACHE = {
  .TypeName = "EFI_INVALIDATE_INSTRUCTION_CACHE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INVALIDATE_INSTRUCTION_CACHE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DEBUG_SUPPORT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64"
};


typedef struct _TYPE__gEfiEbcVmTestProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiEbcVmTestProtocolGuid;

TYPE__gEfiEbcVmTestProtocolGuid TypeInfo__gEfiEbcVmTestProtocolGuid = {
  .TypeName = "gEfiEbcVmTestProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiEbcVmTestProtocolGuid,
  .InterfaceStructName = "EFI_EBC_VM_TEST_PROTOCOL"
};


typedef struct _TYPE__EFI_EBC_VM_TEST_PROTOCOL{
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
} TYPE__EFI_EBC_VM_TEST_PROTOCOL;

TYPE__EFI_EBC_VM_TEST_PROTOCOL TypeInfo__EFI_EBC_VM_TEST_PROTOCOL = {
  .TypeName = "EFI_EBC_VM_TEST_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_EBC_VM_TEST_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Execute",
  .StructFieldTypeName_1 = "EBC_VM_TEST_EXECUTE",
  .StructFieldName_2 = "Assemble",
  .StructFieldTypeName_2 = "EBC_VM_TEST_ASM",
  .StructFieldName_3 = "Disassemble",
  .StructFieldTypeName_3 = "EBC_VM_TEST_DASM"
};


typedef struct _TYPE__EBC_VM_TEST_EXECUTE{
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
} TYPE__EBC_VM_TEST_EXECUTE;

TYPE__EBC_VM_TEST_EXECUTE TypeInfo__EBC_VM_TEST_EXECUTE = {
  .TypeName = "EBC_VM_TEST_EXECUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EBC_VM_TEST_EXECUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_VM_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "VM_CONTEXT*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*"
};


typedef struct _TYPE__EFI_EBC_VM_TEST_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EBC_VM_TEST_PROTOCOL_STAR;

TYPE__EFI_EBC_VM_TEST_PROTOCOL_STAR TypeInfo__EFI_EBC_VM_TEST_PROTOCOL_STAR = {
  .TypeName = "EFI_EBC_VM_TEST_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EBC_VM_TEST_PROTOCOL*),
  .PointedType = "EFI_EBC_VM_TEST_PROTOCOL"
};


typedef struct _TYPE__VM_CONTEXT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__VM_CONTEXT_STAR;

TYPE__VM_CONTEXT_STAR TypeInfo__VM_CONTEXT_STAR = {
  .TypeName = "VM_CONTEXT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(VM_CONTEXT*),
  .PointedType = "VM_CONTEXT"
};


typedef struct _TYPE__VM_CONTEXT{
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
} TYPE__VM_CONTEXT;

TYPE__VM_CONTEXT TypeInfo__VM_CONTEXT = {
  .TypeName = "VM_CONTEXT",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(VM_CONTEXT),
  .StructFieldNum = 20,
  .StructFieldName_1 = "Gpr",
  .StructFieldTypeName_1 = "VM_REGISTER[8]",
  .StructFieldName_2 = "Flags",
  .StructFieldTypeName_2 = "UINT64",
  .StructFieldName_3 = "Ip",
  .StructFieldTypeName_3 = "VMIP",
  .StructFieldName_4 = "LastException",
  .StructFieldTypeName_4 = "UINTN",
  .StructFieldName_5 = "ExceptionFlags",
  .StructFieldTypeName_5 = "EXCEPTION_FLAGS",
  .StructFieldName_6 = "StopFlags",
  .StructFieldTypeName_6 = "UINT32",
  .StructFieldName_7 = "CompilerVersion",
  .StructFieldTypeName_7 = "UINT32",
  .StructFieldName_8 = "HighStackBottom",
  .StructFieldTypeName_8 = "UINTN",
  .StructFieldName_9 = "LowStackTop",
  .StructFieldTypeName_9 = "UINTN",
  .StructFieldName_10 = "StackRetAddr",
  .StructFieldTypeName_10 = "UINT64",
  .StructFieldName_11 = "StackMagicPtr",
  .StructFieldTypeName_11 = "UINTN*",
  .StructFieldName_12 = "ImageHandle",
  .StructFieldTypeName_12 = "EFI_HANDLE",
  .StructFieldName_13 = "SystemTable",
  .StructFieldTypeName_13 = "EFI_SYSTEM_TABLE*",
  .StructFieldName_14 = "LastAddrConverted",
  .StructFieldTypeName_14 = "UINTN",
  .StructFieldName_15 = "LastAddrConvertedValue",
  .StructFieldTypeName_15 = "UINTN",
  .StructFieldName_16 = "FramePtr",
  .StructFieldTypeName_16 = "void*",
  .StructFieldName_17 = "EntryPoint",
  .StructFieldTypeName_17 = "void*",
  .StructFieldName_18 = "ImageBase",
  .StructFieldTypeName_18 = "UINTN",
  .StructFieldName_19 = "StackPool",
  .StructFieldTypeName_19 = "void*",
  .StructFieldName_20 = "StackTop",
  .StructFieldTypeName_20 = "void*"
};


typedef struct _TYPE__VM_REGISTER_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__VM_REGISTER_ARRAY_8;

TYPE__VM_REGISTER_ARRAY_8 TypeInfo__VM_REGISTER_ARRAY_8 = {
  .TypeName = "VM_REGISTER[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(VM_REGISTER[8]),
  .ElementTypeName = "VM_REGISTER"
};


typedef struct _TYPE__VM_REGISTER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__VM_REGISTER;

TYPE__VM_REGISTER TypeInfo__VM_REGISTER = {
  .TypeName = "VM_REGISTER",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(VM_REGISTER),
  .BasicTypeName = "INT64"
};


typedef struct _TYPE__VMIP{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__VMIP;

TYPE__VMIP TypeInfo__VMIP = {
  .TypeName = "VMIP",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(VMIP),
  .TypedefName = "UINT8*"
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


typedef struct _TYPE__EXCEPTION_FLAGS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EXCEPTION_FLAGS;

TYPE__EXCEPTION_FLAGS TypeInfo__EXCEPTION_FLAGS = {
  .TypeName = "EXCEPTION_FLAGS",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EXCEPTION_FLAGS),
  .BasicTypeName = "UINT32"
};


typedef struct _TYPE__EFI_SYSTEM_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SYSTEM_TABLE_STAR;

TYPE__EFI_SYSTEM_TABLE_STAR TypeInfo__EFI_SYSTEM_TABLE_STAR = {
  .TypeName = "EFI_SYSTEM_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SYSTEM_TABLE*),
  .PointedType = "EFI_SYSTEM_TABLE"
};


typedef struct _TYPE__EFI_SYSTEM_TABLE{
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
} TYPE__EFI_SYSTEM_TABLE;

TYPE__EFI_SYSTEM_TABLE TypeInfo__EFI_SYSTEM_TABLE = {
  .TypeName = "EFI_SYSTEM_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SYSTEM_TABLE),
  .StructFieldNum = 13,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "FirmwareVendor",
  .StructFieldTypeName_2 = "CHAR16*",
  .StructFieldName_3 = "FirmwareRevision",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "ConsoleInHandle",
  .StructFieldTypeName_4 = "EFI_HANDLE",
  .StructFieldName_5 = "ConIn",
  .StructFieldTypeName_5 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .StructFieldName_6 = "ConsoleOutHandle",
  .StructFieldTypeName_6 = "EFI_HANDLE",
  .StructFieldName_7 = "ConOut",
  .StructFieldTypeName_7 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .StructFieldName_8 = "StandardErrorHandle",
  .StructFieldTypeName_8 = "EFI_HANDLE",
  .StructFieldName_9 = "StdErr",
  .StructFieldTypeName_9 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .StructFieldName_10 = "RuntimeServices",
  .StructFieldTypeName_10 = "EFI_RUNTIME_SERVICES*",
  .StructFieldName_11 = "BootServices",
  .StructFieldTypeName_11 = "EFI_BOOT_SERVICES*",
  .StructFieldName_12 = "NumberOfTableEntries",
  .StructFieldTypeName_12 = "UINTN",
  .StructFieldName_13 = "ConfigurationTable",
  .StructFieldTypeName_13 = "EFI_CONFIGURATION_TABLE*"
};


typedef struct _TYPE__EFI_TABLE_HEADER{
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
} TYPE__EFI_TABLE_HEADER;

TYPE__EFI_TABLE_HEADER TypeInfo__EFI_TABLE_HEADER = {
  .TypeName = "EFI_TABLE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TABLE_HEADER),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Signature",
  .StructFieldTypeName_1 = "UINT64",
  .StructFieldName_2 = "Revision",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "HeaderSize",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "CRC32",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "Reserved",
  .StructFieldTypeName_5 = "UINT32"
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


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_INPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_INPUT_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_INPUT_RESET",
  .StructFieldName_2 = "ReadKeyStroke",
  .StructFieldTypeName_2 = "EFI_INPUT_READ_KEY",
  .StructFieldName_3 = "WaitForKey",
  .StructFieldTypeName_3 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_INPUT_RESET{
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
} TYPE__EFI_INPUT_RESET;

TYPE__EFI_INPUT_RESET TypeInfo__EFI_INPUT_RESET = {
  .TypeName = "EFI_INPUT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
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


typedef struct _TYPE__EFI_INPUT_READ_KEY{
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
} TYPE__EFI_INPUT_READ_KEY;

TYPE__EFI_INPUT_READ_KEY TypeInfo__EFI_INPUT_READ_KEY = {
  .TypeName = "EFI_INPUT_READ_KEY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INPUT_READ_KEY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_INPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_INPUT_KEY*"
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


typedef struct _TYPE__EFI_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* TypedefName;
} TYPE__EFI_EVENT;

TYPE__EFI_EVENT TypeInfo__EFI_EVENT = {
  .TypeName = "EFI_EVENT",
  .TypeClass = TYPE_CLASS_ARRAY,
  .TypeSize = sizeof(EFI_EVENT),
  .TypedefName = "void*"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL),
  .StructFieldNum = 10,
  .StructFieldName_1 = "Reset",
  .StructFieldTypeName_1 = "EFI_TEXT_RESET",
  .StructFieldName_2 = "OutputString",
  .StructFieldTypeName_2 = "EFI_TEXT_STRING",
  .StructFieldName_3 = "TestString",
  .StructFieldTypeName_3 = "EFI_TEXT_TEST_STRING",
  .StructFieldName_4 = "QueryMode",
  .StructFieldTypeName_4 = "EFI_TEXT_QUERY_MODE",
  .StructFieldName_5 = "SetMode",
  .StructFieldTypeName_5 = "EFI_TEXT_SET_MODE",
  .StructFieldName_6 = "SetAttribute",
  .StructFieldTypeName_6 = "EFI_TEXT_SET_ATTRIBUTE",
  .StructFieldName_7 = "ClearScreen",
  .StructFieldTypeName_7 = "EFI_TEXT_CLEAR_SCREEN",
  .StructFieldName_8 = "SetCursorPosition",
  .StructFieldTypeName_8 = "EFI_TEXT_SET_CURSOR_POSITION",
  .StructFieldName_9 = "EnableCursor",
  .StructFieldTypeName_9 = "EFI_TEXT_ENABLE_CURSOR",
  .StructFieldName_10 = "Mode",
  .StructFieldTypeName_10 = "EFI_SIMPLE_TEXT_OUTPUT_MODE*"
};


typedef struct _TYPE__EFI_TEXT_RESET{
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
} TYPE__EFI_TEXT_RESET;

TYPE__EFI_TEXT_RESET TypeInfo__EFI_TEXT_RESET = {
  .TypeName = "EFI_TEXT_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_TEXT_STRING{
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
} TYPE__EFI_TEXT_STRING;

TYPE__EFI_TEXT_STRING TypeInfo__EFI_TEXT_STRING = {
  .TypeName = "EFI_TEXT_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_TEXT_TEST_STRING{
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
} TYPE__EFI_TEXT_TEST_STRING;

TYPE__EFI_TEXT_TEST_STRING TypeInfo__EFI_TEXT_TEST_STRING = {
  .TypeName = "EFI_TEXT_TEST_STRING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_TEST_STRING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*"
};


typedef struct _TYPE__EFI_TEXT_QUERY_MODE{
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
} TYPE__EFI_TEXT_QUERY_MODE;

TYPE__EFI_TEXT_QUERY_MODE TypeInfo__EFI_TEXT_QUERY_MODE = {
  .TypeName = "EFI_TEXT_QUERY_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_QUERY_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__EFI_TEXT_SET_MODE{
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
} TYPE__EFI_TEXT_SET_MODE;

TYPE__EFI_TEXT_SET_MODE TypeInfo__EFI_TEXT_SET_MODE = {
  .TypeName = "EFI_TEXT_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_SET_ATTRIBUTE{
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
} TYPE__EFI_TEXT_SET_ATTRIBUTE;

TYPE__EFI_TEXT_SET_ATTRIBUTE TypeInfo__EFI_TEXT_SET_ATTRIBUTE = {
  .TypeName = "EFI_TEXT_SET_ATTRIBUTE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_ATTRIBUTE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_CLEAR_SCREEN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_TEXT_CLEAR_SCREEN;

TYPE__EFI_TEXT_CLEAR_SCREEN TypeInfo__EFI_TEXT_CLEAR_SCREEN = {
  .TypeName = "EFI_TEXT_CLEAR_SCREEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_CLEAR_SCREEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*"
};


typedef struct _TYPE__EFI_TEXT_SET_CURSOR_POSITION{
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
} TYPE__EFI_TEXT_SET_CURSOR_POSITION;

TYPE__EFI_TEXT_SET_CURSOR_POSITION TypeInfo__EFI_TEXT_SET_CURSOR_POSITION = {
  .TypeName = "EFI_TEXT_SET_CURSOR_POSITION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_SET_CURSOR_POSITION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_TEXT_ENABLE_CURSOR{
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
} TYPE__EFI_TEXT_ENABLE_CURSOR;

TYPE__EFI_TEXT_ENABLE_CURSOR TypeInfo__EFI_TEXT_ENABLE_CURSOR = {
  .TypeName = "EFI_TEXT_ENABLE_CURSOR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_TEXT_ENABLE_CURSOR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE*),
  .PointedType = "EFI_SIMPLE_TEXT_OUTPUT_MODE"
};


typedef struct _TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE{
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
} TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE;

TYPE__EFI_SIMPLE_TEXT_OUTPUT_MODE TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE = {
  .TypeName = "EFI_SIMPLE_TEXT_OUTPUT_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_SIMPLE_TEXT_OUTPUT_MODE),
  .StructFieldNum = 6,
  .StructFieldName_1 = "MaxMode",
  .StructFieldTypeName_1 = "INT32",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "INT32",
  .StructFieldName_3 = "Attribute",
  .StructFieldTypeName_3 = "INT32",
  .StructFieldName_4 = "CursorColumn",
  .StructFieldTypeName_4 = "INT32",
  .StructFieldName_5 = "CursorRow",
  .StructFieldTypeName_5 = "INT32",
  .StructFieldName_6 = "CursorVisible",
  .StructFieldTypeName_6 = "BOOLEAN"
};


typedef struct _TYPE__INT32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT32;

TYPE__INT32 TypeInfo__INT32 = {
  .TypeName = "INT32",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT32),
  .BasicTypeName = "int"
};


typedef struct _TYPE__EFI_RUNTIME_SERVICES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_RUNTIME_SERVICES_STAR;

TYPE__EFI_RUNTIME_SERVICES_STAR TypeInfo__EFI_RUNTIME_SERVICES_STAR = {
  .TypeName = "EFI_RUNTIME_SERVICES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_RUNTIME_SERVICES*),
  .PointedType = "EFI_RUNTIME_SERVICES"
};


typedef struct _TYPE__EFI_RUNTIME_SERVICES{
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
} TYPE__EFI_RUNTIME_SERVICES;

TYPE__EFI_RUNTIME_SERVICES TypeInfo__EFI_RUNTIME_SERVICES = {
  .TypeName = "EFI_RUNTIME_SERVICES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_RUNTIME_SERVICES),
  .StructFieldNum = 15,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "GetTime",
  .StructFieldTypeName_2 = "EFI_GET_TIME",
  .StructFieldName_3 = "SetTime",
  .StructFieldTypeName_3 = "EFI_SET_TIME",
  .StructFieldName_4 = "GetWakeupTime",
  .StructFieldTypeName_4 = "EFI_GET_WAKEUP_TIME",
  .StructFieldName_5 = "SetWakeupTime",
  .StructFieldTypeName_5 = "EFI_SET_WAKEUP_TIME",
  .StructFieldName_6 = "SetVirtualAddressMap",
  .StructFieldTypeName_6 = "EFI_SET_VIRTUAL_ADDRESS_MAP",
  .StructFieldName_7 = "ConvertPointer",
  .StructFieldTypeName_7 = "EFI_CONVERT_POINTER",
  .StructFieldName_8 = "GetVariable",
  .StructFieldTypeName_8 = "EFI_GET_VARIABLE",
  .StructFieldName_9 = "GetNextVariableName",
  .StructFieldTypeName_9 = "EFI_GET_NEXT_VARIABLE_NAME",
  .StructFieldName_10 = "SetVariable",
  .StructFieldTypeName_10 = "EFI_SET_VARIABLE",
  .StructFieldName_11 = "GetNextHighMonotonicCount",
  .StructFieldTypeName_11 = "EFI_GET_NEXT_HIGH_MONO_COUNT",
  .StructFieldName_12 = "ResetSystem",
  .StructFieldTypeName_12 = "EFI_RESET_SYSTEM",
  .StructFieldName_13 = "UpdateCapsule",
  .StructFieldTypeName_13 = "EFI_UPDATE_CAPSULE",
  .StructFieldName_14 = "QueryCapsuleCapabilities",
  .StructFieldTypeName_14 = "EFI_QUERY_CAPSULE_CAPABILITIES",
  .StructFieldName_15 = "QueryVariableInfo",
  .StructFieldTypeName_15 = "EFI_QUERY_VARIABLE_INFO"
};


typedef struct _TYPE__EFI_GET_TIME{
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
} TYPE__EFI_GET_TIME;

TYPE__EFI_GET_TIME TypeInfo__EFI_GET_TIME = {
  .TypeName = "EFI_GET_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "EFI_TIME*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_TIME_CAPABILITIES*"
};


typedef struct _TYPE__EFI_TIME_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TIME_STAR;

TYPE__EFI_TIME_STAR TypeInfo__EFI_TIME_STAR = {
  .TypeName = "EFI_TIME*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TIME*),
  .PointedType = "EFI_TIME"
};


typedef struct _TYPE__EFI_TIME{
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
} TYPE__EFI_TIME;

TYPE__EFI_TIME TypeInfo__EFI_TIME = {
  .TypeName = "EFI_TIME",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TIME),
  .StructFieldNum = 11,
  .StructFieldName_1 = "Year",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Month",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Day",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Hour",
  .StructFieldTypeName_4 = "UINT8",
  .StructFieldName_5 = "Minute",
  .StructFieldTypeName_5 = "UINT8",
  .StructFieldName_6 = "Second",
  .StructFieldTypeName_6 = "UINT8",
  .StructFieldName_7 = "Pad1",
  .StructFieldTypeName_7 = "UINT8",
  .StructFieldName_8 = "Nanosecond",
  .StructFieldTypeName_8 = "UINT32",
  .StructFieldName_9 = "TimeZone",
  .StructFieldTypeName_9 = "INT16",
  .StructFieldName_10 = "Daylight",
  .StructFieldTypeName_10 = "UINT8",
  .StructFieldName_11 = "Pad2",
  .StructFieldTypeName_11 = "UINT8"
};


typedef struct _TYPE__INT16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT16;

TYPE__INT16 TypeInfo__INT16 = {
  .TypeName = "INT16",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT16),
  .BasicTypeName = "short"
};


typedef struct _TYPE__EFI_TIME_CAPABILITIES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_TIME_CAPABILITIES_STAR;

TYPE__EFI_TIME_CAPABILITIES_STAR TypeInfo__EFI_TIME_CAPABILITIES_STAR = {
  .TypeName = "EFI_TIME_CAPABILITIES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_TIME_CAPABILITIES*),
  .PointedType = "EFI_TIME_CAPABILITIES"
};


typedef struct _TYPE__EFI_TIME_CAPABILITIES{
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
} TYPE__EFI_TIME_CAPABILITIES;

TYPE__EFI_TIME_CAPABILITIES TypeInfo__EFI_TIME_CAPABILITIES = {
  .TypeName = "EFI_TIME_CAPABILITIES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_TIME_CAPABILITIES),
  .StructFieldNum = 3,
  .StructFieldName_1 = "Resolution",
  .StructFieldTypeName_1 = "UINT32",
  .StructFieldName_2 = "Accuracy",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "SetsToZero",
  .StructFieldTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__EFI_SET_TIME{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SET_TIME;

TYPE__EFI_SET_TIME TypeInfo__EFI_SET_TIME = {
  .TypeName = "EFI_SET_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TIME*"
};


typedef struct _TYPE__EFI_GET_WAKEUP_TIME{
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
} TYPE__EFI_GET_WAKEUP_TIME;

TYPE__EFI_GET_WAKEUP_TIME TypeInfo__EFI_GET_WAKEUP_TIME = {
  .TypeName = "EFI_GET_WAKEUP_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_WAKEUP_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "BOOLEAN*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "BOOLEAN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_TIME*"
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


typedef struct _TYPE__EFI_SET_WAKEUP_TIME{
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
} TYPE__EFI_SET_WAKEUP_TIME;

TYPE__EFI_SET_WAKEUP_TIME TypeInfo__EFI_SET_WAKEUP_TIME = {
  .TypeName = "EFI_SET_WAKEUP_TIME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_WAKEUP_TIME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BOOLEAN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TIME*"
};


typedef struct _TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP{
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
} TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP;

TYPE__EFI_SET_VIRTUAL_ADDRESS_MAP TypeInfo__EFI_SET_VIRTUAL_ADDRESS_MAP = {
  .TypeName = "EFI_SET_VIRTUAL_ADDRESS_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_VIRTUAL_ADDRESS_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_MEMORY_DESCRIPTOR*"
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


typedef struct _TYPE__EFI_CONVERT_POINTER{
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
} TYPE__EFI_CONVERT_POINTER;

TYPE__EFI_CONVERT_POINTER TypeInfo__EFI_CONVERT_POINTER = {
  .TypeName = "EFI_CONVERT_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONVERT_POINTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void**"
};


typedef struct _TYPE__EFI_GET_VARIABLE{
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
} TYPE__EFI_GET_VARIABLE;

TYPE__EFI_GET_VARIABLE TypeInfo__EFI_GET_VARIABLE = {
  .TypeName = "EFI_GET_VARIABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_VARIABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "void*"
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


typedef struct _TYPE__EFI_GET_NEXT_VARIABLE_NAME{
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
} TYPE__EFI_GET_NEXT_VARIABLE_NAME;

TYPE__EFI_GET_NEXT_VARIABLE_NAME TypeInfo__EFI_GET_NEXT_VARIABLE_NAME = {
  .TypeName = "EFI_GET_NEXT_VARIABLE_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_VARIABLE_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_GUID*"
};


typedef struct _TYPE__EFI_SET_VARIABLE{
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
} TYPE__EFI_SET_VARIABLE;

TYPE__EFI_SET_VARIABLE TypeInfo__EFI_SET_VARIABLE = {
  .TypeName = "EFI_SET_VARIABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_VARIABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "CHAR16*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT;

TYPE__EFI_GET_NEXT_HIGH_MONO_COUNT TypeInfo__EFI_GET_NEXT_HIGH_MONO_COUNT = {
  .TypeName = "EFI_GET_NEXT_HIGH_MONO_COUNT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_HIGH_MONO_COUNT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "UINT32*"
};


typedef struct _TYPE__EFI_RESET_SYSTEM{
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
} TYPE__EFI_RESET_SYSTEM;

TYPE__EFI_RESET_SYSTEM TypeInfo__EFI_RESET_SYSTEM = {
  .TypeName = "EFI_RESET_SYSTEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RESET_SYSTEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_RESET_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STATUS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_RESET_TYPE{
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
} TYPE__EFI_RESET_TYPE;

TYPE__EFI_RESET_TYPE TypeInfo__EFI_RESET_TYPE = {
  .TypeName = "EFI_RESET_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_RESET_TYPE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiResetCold",
  .EnumValue_1 = EfiResetCold,
  .EnumValueName_2 = "EfiResetWarm",
  .EnumValue_2 = EfiResetWarm,
  .EnumValueName_3 = "EfiResetShutdown",
  .EnumValue_3 = EfiResetShutdown,
  .EnumValueName_4 = "EfiResetPlatformSpecific",
  .EnumValue_4 = EfiResetPlatformSpecific
};


typedef struct _TYPE__EFI_UPDATE_CAPSULE{
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
} TYPE__EFI_UPDATE_CAPSULE;

TYPE__EFI_UPDATE_CAPSULE TypeInfo__EFI_UPDATE_CAPSULE = {
  .TypeName = "EFI_UPDATE_CAPSULE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UPDATE_CAPSULE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CAPSULE_HEADER**",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PHYSICAL_ADDRESS"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CAPSULE_HEADER_STAR_STAR;

TYPE__EFI_CAPSULE_HEADER_STAR_STAR TypeInfo__EFI_CAPSULE_HEADER_STAR_STAR = {
  .TypeName = "EFI_CAPSULE_HEADER**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER**),
  .PointedType = "EFI_CAPSULE_HEADER*"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CAPSULE_HEADER_STAR;

TYPE__EFI_CAPSULE_HEADER_STAR TypeInfo__EFI_CAPSULE_HEADER_STAR = {
  .TypeName = "EFI_CAPSULE_HEADER*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER*),
  .PointedType = "EFI_CAPSULE_HEADER"
};


typedef struct _TYPE__EFI_CAPSULE_HEADER{
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
} TYPE__EFI_CAPSULE_HEADER;

TYPE__EFI_CAPSULE_HEADER TypeInfo__EFI_CAPSULE_HEADER = {
  .TypeName = "EFI_CAPSULE_HEADER",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CAPSULE_HEADER),
  .StructFieldNum = 4,
  .StructFieldName_1 = "CapsuleGuid",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "HeaderSize",
  .StructFieldTypeName_2 = "UINT32",
  .StructFieldName_3 = "Flags",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "CapsuleImageSize",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_QUERY_CAPSULE_CAPABILITIES{
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
} TYPE__EFI_QUERY_CAPSULE_CAPABILITIES;

TYPE__EFI_QUERY_CAPSULE_CAPABILITIES TypeInfo__EFI_QUERY_CAPSULE_CAPABILITIES = {
  .TypeName = "EFI_QUERY_CAPSULE_CAPABILITIES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_QUERY_CAPSULE_CAPABILITIES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CAPSULE_HEADER**",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_RESET_TYPE*"
};


typedef struct _TYPE__EFI_RESET_TYPE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_RESET_TYPE_STAR;

TYPE__EFI_RESET_TYPE_STAR TypeInfo__EFI_RESET_TYPE_STAR = {
  .TypeName = "EFI_RESET_TYPE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_RESET_TYPE*),
  .PointedType = "EFI_RESET_TYPE"
};


typedef struct _TYPE__EFI_QUERY_VARIABLE_INFO{
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
} TYPE__EFI_QUERY_VARIABLE_INFO;

TYPE__EFI_QUERY_VARIABLE_INFO TypeInfo__EFI_QUERY_VARIABLE_INFO = {
  .TypeName = "EFI_QUERY_VARIABLE_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_QUERY_VARIABLE_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT64*"
};


typedef struct _TYPE__EFI_BOOT_SERVICES_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_BOOT_SERVICES_STAR;

TYPE__EFI_BOOT_SERVICES_STAR TypeInfo__EFI_BOOT_SERVICES_STAR = {
  .TypeName = "EFI_BOOT_SERVICES*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_BOOT_SERVICES*),
  .PointedType = "EFI_BOOT_SERVICES"
};


typedef struct _TYPE__EFI_BOOT_SERVICES{
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
} TYPE__EFI_BOOT_SERVICES;

TYPE__EFI_BOOT_SERVICES TypeInfo__EFI_BOOT_SERVICES = {
  .TypeName = "EFI_BOOT_SERVICES",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_BOOT_SERVICES),
  .StructFieldNum = 45,
  .StructFieldName_1 = "Hdr",
  .StructFieldTypeName_1 = "EFI_TABLE_HEADER",
  .StructFieldName_2 = "RaiseTPL",
  .StructFieldTypeName_2 = "EFI_RAISE_TPL",
  .StructFieldName_3 = "RestoreTPL",
  .StructFieldTypeName_3 = "EFI_RESTORE_TPL",
  .StructFieldName_4 = "AllocatePages",
  .StructFieldTypeName_4 = "EFI_ALLOCATE_PAGES",
  .StructFieldName_5 = "FreePages",
  .StructFieldTypeName_5 = "EFI_FREE_PAGES",
  .StructFieldName_6 = "GetMemoryMap",
  .StructFieldTypeName_6 = "EFI_GET_MEMORY_MAP",
  .StructFieldName_7 = "AllocatePool",
  .StructFieldTypeName_7 = "EFI_ALLOCATE_POOL",
  .StructFieldName_8 = "FreePool",
  .StructFieldTypeName_8 = "EFI_FREE_POOL",
  .StructFieldName_9 = "CreateEvent",
  .StructFieldTypeName_9 = "EFI_CREATE_EVENT",
  .StructFieldName_10 = "SetTimer",
  .StructFieldTypeName_10 = "EFI_SET_TIMER",
  .StructFieldName_11 = "WaitForEvent",
  .StructFieldTypeName_11 = "EFI_WAIT_FOR_EVENT",
  .StructFieldName_12 = "SignalEvent",
  .StructFieldTypeName_12 = "EFI_SIGNAL_EVENT",
  .StructFieldName_13 = "CloseEvent",
  .StructFieldTypeName_13 = "EFI_CLOSE_EVENT",
  .StructFieldName_14 = "CheckEvent",
  .StructFieldTypeName_14 = "EFI_CHECK_EVENT",
  .StructFieldName_15 = "InstallProtocolInterface",
  .StructFieldTypeName_15 = "EFI_INSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_16 = "ReinstallProtocolInterface",
  .StructFieldTypeName_16 = "EFI_REINSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_17 = "UninstallProtocolInterface",
  .StructFieldTypeName_17 = "EFI_UNINSTALL_PROTOCOL_INTERFACE",
  .StructFieldName_18 = "HandleProtocol",
  .StructFieldTypeName_18 = "EFI_HANDLE_PROTOCOL",
  .StructFieldName_19 = "Reserved",
  .StructFieldTypeName_19 = "void*",
  .StructFieldName_20 = "RegisterProtocolNotify",
  .StructFieldTypeName_20 = "EFI_REGISTER_PROTOCOL_NOTIFY",
  .StructFieldName_21 = "LocateHandle",
  .StructFieldTypeName_21 = "EFI_LOCATE_HANDLE",
  .StructFieldName_22 = "LocateDevicePath",
  .StructFieldTypeName_22 = "EFI_LOCATE_DEVICE_PATH",
  .StructFieldName_23 = "InstallConfigurationTable",
  .StructFieldTypeName_23 = "EFI_INSTALL_CONFIGURATION_TABLE",
  .StructFieldName_24 = "LoadImage",
  .StructFieldTypeName_24 = "EFI_IMAGE_LOAD",
  .StructFieldName_25 = "StartImage",
  .StructFieldTypeName_25 = "EFI_IMAGE_START",
  .StructFieldName_26 = "Exit",
  .StructFieldTypeName_26 = "EFI_EXIT",
  .StructFieldName_27 = "UnloadImage",
  .StructFieldTypeName_27 = "EFI_IMAGE_UNLOAD",
  .StructFieldName_28 = "ExitBootServices",
  .StructFieldTypeName_28 = "EFI_EXIT_BOOT_SERVICES",
  .StructFieldName_29 = "GetNextMonotonicCount",
  .StructFieldTypeName_29 = "EFI_GET_NEXT_MONOTONIC_COUNT",
  .StructFieldName_30 = "Stall",
  .StructFieldTypeName_30 = "EFI_STALL",
  .StructFieldName_31 = "SetWatchdogTimer",
  .StructFieldTypeName_31 = "EFI_SET_WATCHDOG_TIMER",
  .StructFieldName_32 = "ConnectController",
  .StructFieldTypeName_32 = "EFI_CONNECT_CONTROLLER",
  .StructFieldName_33 = "DisconnectController",
  .StructFieldTypeName_33 = "EFI_DISCONNECT_CONTROLLER",
  .StructFieldName_34 = "OpenProtocol",
  .StructFieldTypeName_34 = "EFI_OPEN_PROTOCOL",
  .StructFieldName_35 = "CloseProtocol",
  .StructFieldTypeName_35 = "EFI_CLOSE_PROTOCOL",
  .StructFieldName_36 = "OpenProtocolInformation",
  .StructFieldTypeName_36 = "EFI_OPEN_PROTOCOL_INFORMATION",
  .StructFieldName_37 = "ProtocolsPerHandle",
  .StructFieldTypeName_37 = "EFI_PROTOCOLS_PER_HANDLE",
  .StructFieldName_38 = "LocateHandleBuffer",
  .StructFieldTypeName_38 = "EFI_LOCATE_HANDLE_BUFFER",
  .StructFieldName_39 = "LocateProtocol",
  .StructFieldTypeName_39 = "EFI_LOCATE_PROTOCOL",
  .StructFieldName_40 = "InstallMultipleProtocolInterfaces",
  .StructFieldTypeName_40 = "EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .StructFieldName_41 = "UninstallMultipleProtocolInterfaces",
  .StructFieldTypeName_41 = "EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .StructFieldName_42 = "CalculateCrc32",
  .StructFieldTypeName_42 = "EFI_CALCULATE_CRC32",
  .StructFieldName_43 = "CopyMem",
  .StructFieldTypeName_43 = "EFI_COPY_MEM",
  .StructFieldName_44 = "SetMem",
  .StructFieldTypeName_44 = "EFI_SET_MEM",
  .StructFieldName_45 = "CreateEventEx",
  .StructFieldTypeName_45 = "EFI_CREATE_EVENT_EX"
};


typedef struct _TYPE__EFI_RAISE_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_RAISE_TPL;

TYPE__EFI_RAISE_TPL TypeInfo__EFI_RAISE_TPL = {
  .TypeName = "EFI_RAISE_TPL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RAISE_TPL),
  .ReturnType = "EFI_TPL",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TPL"
};


typedef struct _TYPE__EFI_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_TPL;

TYPE__EFI_TPL TypeInfo__EFI_TPL = {
  .TypeName = "EFI_TPL",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_TPL),
  .BasicTypeName = "UINTN"
};


typedef struct _TYPE__EFI_RESTORE_TPL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_RESTORE_TPL;

TYPE__EFI_RESTORE_TPL TypeInfo__EFI_RESTORE_TPL = {
  .TypeName = "EFI_RESTORE_TPL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_RESTORE_TPL),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_TPL"
};


typedef struct _TYPE__EFI_ALLOCATE_PAGES{
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
} TYPE__EFI_ALLOCATE_PAGES;

TYPE__EFI_ALLOCATE_PAGES TypeInfo__EFI_ALLOCATE_PAGES = {
  .TypeName = "EFI_ALLOCATE_PAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ALLOCATE_PAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_ALLOCATE_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MEMORY_TYPE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_PHYSICAL_ADDRESS*"
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


typedef struct _TYPE__EFI_FREE_PAGES{
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
} TYPE__EFI_FREE_PAGES;

TYPE__EFI_FREE_PAGES TypeInfo__EFI_FREE_PAGES = {
  .TypeName = "EFI_FREE_PAGES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FREE_PAGES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PHYSICAL_ADDRESS",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_GET_MEMORY_MAP{
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
} TYPE__EFI_GET_MEMORY_MAP;

TYPE__EFI_GET_MEMORY_MAP TypeInfo__EFI_GET_MEMORY_MAP = {
  .TypeName = "EFI_GET_MEMORY_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_MEMORY_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_MEMORY_DESCRIPTOR*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT32*"
};


typedef struct _TYPE__EFI_ALLOCATE_POOL{
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
} TYPE__EFI_ALLOCATE_POOL;

TYPE__EFI_ALLOCATE_POOL TypeInfo__EFI_ALLOCATE_POOL = {
  .TypeName = "EFI_ALLOCATE_POOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ALLOCATE_POOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_MEMORY_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_FREE_POOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_FREE_POOL;

TYPE__EFI_FREE_POOL TypeInfo__EFI_FREE_POOL = {
  .TypeName = "EFI_FREE_POOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_FREE_POOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*"
};


typedef struct _TYPE__EFI_CREATE_EVENT{
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
} TYPE__EFI_CREATE_EVENT;

TYPE__EFI_CREATE_EVENT TypeInfo__EFI_CREATE_EVENT = {
  .TypeName = "EFI_CREATE_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CREATE_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TPL",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT_NOTIFY",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_EVENT*"
};


typedef struct _TYPE__EFI_EVENT_NOTIFY{
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
} TYPE__EFI_EVENT_NOTIFY;

TYPE__EFI_EVENT_NOTIFY TypeInfo__EFI_EVENT_NOTIFY = {
  .TypeName = "EFI_EVENT_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EVENT_NOTIFY),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_EVENT_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_EVENT_STAR;

TYPE__EFI_EVENT_STAR TypeInfo__EFI_EVENT_STAR = {
  .TypeName = "EFI_EVENT*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_EVENT*),
  .PointedType = "EFI_EVENT"
};


typedef struct _TYPE__EFI_SET_TIMER{
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
} TYPE__EFI_SET_TIMER;

TYPE__EFI_SET_TIMER TypeInfo__EFI_SET_TIMER = {
  .TypeName = "EFI_SET_TIMER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_TIMER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TIMER_DELAY",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__EFI_TIMER_DELAY{
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
} TYPE__EFI_TIMER_DELAY;

TYPE__EFI_TIMER_DELAY TypeInfo__EFI_TIMER_DELAY = {
  .TypeName = "EFI_TIMER_DELAY",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_TIMER_DELAY),
  .EnumValueNum = 3,
  .EnumValueName_1 = "TimerCancel",
  .EnumValue_1 = TimerCancel,
  .EnumValueName_2 = "TimerPeriodic",
  .EnumValue_2 = TimerPeriodic,
  .EnumValueName_3 = "TimerRelative",
  .EnumValue_3 = TimerRelative
};


typedef struct _TYPE__EFI_WAIT_FOR_EVENT{
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
} TYPE__EFI_WAIT_FOR_EVENT;

TYPE__EFI_WAIT_FOR_EVENT TypeInfo__EFI_WAIT_FOR_EVENT = {
  .TypeName = "EFI_WAIT_FOR_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_WAIT_FOR_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_EVENT*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*"
};


typedef struct _TYPE__EFI_SIGNAL_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_SIGNAL_EVENT;

TYPE__EFI_SIGNAL_EVENT TypeInfo__EFI_SIGNAL_EVENT = {
  .TypeName = "EFI_SIGNAL_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SIGNAL_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_CLOSE_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CLOSE_EVENT;

TYPE__EFI_CLOSE_EVENT TypeInfo__EFI_CLOSE_EVENT = {
  .TypeName = "EFI_CLOSE_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CLOSE_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_CHECK_EVENT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_CHECK_EVENT;

TYPE__EFI_CHECK_EVENT TypeInfo__EFI_CHECK_EVENT = {
  .TypeName = "EFI_CHECK_EVENT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CHECK_EVENT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EVENT"
};


typedef struct _TYPE__EFI_INSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_INSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_INSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_INSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_INSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_INTERFACE_TYPE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
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


typedef struct _TYPE__EFI_INTERFACE_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
} TYPE__EFI_INTERFACE_TYPE;

TYPE__EFI_INTERFACE_TYPE TypeInfo__EFI_INTERFACE_TYPE = {
  .TypeName = "EFI_INTERFACE_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_INTERFACE_TYPE),
  .EnumValueNum = 1,
  .EnumValueName_1 = "EFI_NATIVE_INTERFACE",
  .EnumValue_1 = EFI_NATIVE_INTERFACE
};


typedef struct _TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_REINSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_REINSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_REINSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REINSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE{
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
} TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE;

TYPE__EFI_UNINSTALL_PROTOCOL_INTERFACE TypeInfo__EFI_UNINSTALL_PROTOCOL_INTERFACE = {
  .TypeName = "EFI_UNINSTALL_PROTOCOL_INTERFACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNINSTALL_PROTOCOL_INTERFACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_HANDLE_PROTOCOL{
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
} TYPE__EFI_HANDLE_PROTOCOL;

TYPE__EFI_HANDLE_PROTOCOL TypeInfo__EFI_HANDLE_PROTOCOL = {
  .TypeName = "EFI_HANDLE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_HANDLE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_REGISTER_PROTOCOL_NOTIFY{
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
} TYPE__EFI_REGISTER_PROTOCOL_NOTIFY;

TYPE__EFI_REGISTER_PROTOCOL_NOTIFY TypeInfo__EFI_REGISTER_PROTOCOL_NOTIFY = {
  .TypeName = "EFI_REGISTER_PROTOCOL_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_PROTOCOL_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_EVENT",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_LOCATE_HANDLE{
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
} TYPE__EFI_LOCATE_HANDLE;

TYPE__EFI_LOCATE_HANDLE TypeInfo__EFI_LOCATE_HANDLE = {
  .TypeName = "EFI_LOCATE_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOCATE_SEARCH_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_LOCATE_SEARCH_TYPE{
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
} TYPE__EFI_LOCATE_SEARCH_TYPE;

TYPE__EFI_LOCATE_SEARCH_TYPE TypeInfo__EFI_LOCATE_SEARCH_TYPE = {
  .TypeName = "EFI_LOCATE_SEARCH_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_LOCATE_SEARCH_TYPE),
  .EnumValueNum = 3,
  .EnumValueName_1 = "AllHandles",
  .EnumValue_1 = AllHandles,
  .EnumValueName_2 = "ByRegisterNotify",
  .EnumValue_2 = ByRegisterNotify,
  .EnumValueName_3 = "ByProtocol",
  .EnumValue_3 = ByProtocol
};


typedef struct _TYPE__EFI_LOCATE_DEVICE_PATH{
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
} TYPE__EFI_LOCATE_DEVICE_PATH;

TYPE__EFI_LOCATE_DEVICE_PATH TypeInfo__EFI_LOCATE_DEVICE_PATH = {
  .TypeName = "EFI_LOCATE_DEVICE_PATH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_DEVICE_PATH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_DEVICE_PATH_PROTOCOL**",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR;

TYPE__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR = {
  .TypeName = "EFI_DEVICE_PATH_PROTOCOL**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DEVICE_PATH_PROTOCOL**),
  .PointedType = "EFI_DEVICE_PATH_PROTOCOL*"
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


typedef struct _TYPE__EFI_INSTALL_CONFIGURATION_TABLE{
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
} TYPE__EFI_INSTALL_CONFIGURATION_TABLE;

TYPE__EFI_INSTALL_CONFIGURATION_TABLE TypeInfo__EFI_INSTALL_CONFIGURATION_TABLE = {
  .TypeName = "EFI_INSTALL_CONFIGURATION_TABLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_CONFIGURATION_TABLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_IMAGE_LOAD{
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
} TYPE__EFI_IMAGE_LOAD;

TYPE__EFI_IMAGE_LOAD TypeInfo__EFI_IMAGE_LOAD = {
  .TypeName = "EFI_IMAGE_LOAD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_LOAD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "BOOLEAN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_IMAGE_START{
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
} TYPE__EFI_IMAGE_START;

TYPE__EFI_IMAGE_START TypeInfo__EFI_IMAGE_START = {
  .TypeName = "EFI_IMAGE_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__CHAR16_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR16_STAR_STAR;

TYPE__CHAR16_STAR_STAR TypeInfo__CHAR16_STAR_STAR = {
  .TypeName = "CHAR16**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR16**),
  .PointedType = "CHAR16*"
};


typedef struct _TYPE__EFI_EXIT{
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
} TYPE__EFI_EXIT;

TYPE__EFI_EXIT TypeInfo__EFI_EXIT = {
  .TypeName = "EFI_EXIT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXIT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STATUS",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR16*"
};


typedef struct _TYPE__EFI_IMAGE_UNLOAD{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_IMAGE_UNLOAD;

TYPE__EFI_IMAGE_UNLOAD TypeInfo__EFI_IMAGE_UNLOAD = {
  .TypeName = "EFI_IMAGE_UNLOAD",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IMAGE_UNLOAD),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_EXIT_BOOT_SERVICES{
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
} TYPE__EFI_EXIT_BOOT_SERVICES;

TYPE__EFI_EXIT_BOOT_SERVICES TypeInfo__EFI_EXIT_BOOT_SERVICES = {
  .TypeName = "EFI_EXIT_BOOT_SERVICES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_EXIT_BOOT_SERVICES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_GET_NEXT_MONOTONIC_COUNT{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_GET_NEXT_MONOTONIC_COUNT;

TYPE__EFI_GET_NEXT_MONOTONIC_COUNT TypeInfo__EFI_GET_NEXT_MONOTONIC_COUNT = {
  .TypeName = "EFI_GET_NEXT_MONOTONIC_COUNT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_NEXT_MONOTONIC_COUNT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_OUT,
  .ParameterTypeName_1 = "UINT64*"
};


typedef struct _TYPE__EFI_STALL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_STALL;

TYPE__EFI_STALL TypeInfo__EFI_STALL = {
  .TypeName = "EFI_STALL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_STALL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
};


typedef struct _TYPE__EFI_SET_WATCHDOG_TIMER{
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
} TYPE__EFI_SET_WATCHDOG_TIMER;

TYPE__EFI_SET_WATCHDOG_TIMER TypeInfo__EFI_SET_WATCHDOG_TIMER = {
  .TypeName = "EFI_SET_WATCHDOG_TIMER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_WATCHDOG_TIMER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR16*"
};


typedef struct _TYPE__EFI_CONNECT_CONTROLLER{
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
} TYPE__EFI_CONNECT_CONTROLLER;

TYPE__EFI_CONNECT_CONTROLLER TypeInfo__EFI_CONNECT_CONTROLLER = {
  .TypeName = "EFI_CONNECT_CONTROLLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CONNECT_CONTROLLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "BOOLEAN"
};


typedef struct _TYPE__EFI_DISCONNECT_CONTROLLER{
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
} TYPE__EFI_DISCONNECT_CONTROLLER;

TYPE__EFI_DISCONNECT_CONTROLLER TypeInfo__EFI_DISCONNECT_CONTROLLER = {
  .TypeName = "EFI_DISCONNECT_CONTROLLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DISCONNECT_CONTROLLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL{
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
} TYPE__EFI_OPEN_PROTOCOL;

TYPE__EFI_OPEN_PROTOCOL TypeInfo__EFI_OPEN_PROTOCOL = {
  .TypeName = "EFI_OPEN_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_HANDLE",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT32"
};


typedef struct _TYPE__EFI_CLOSE_PROTOCOL{
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
} TYPE__EFI_CLOSE_PROTOCOL;

TYPE__EFI_CLOSE_PROTOCOL TypeInfo__EFI_CLOSE_PROTOCOL = {
  .TypeName = "EFI_CLOSE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CLOSE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION{
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
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY**),
  .PointedType = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY*),
  .PointedType = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY"
};


typedef struct _TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY{
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
} TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY;

TYPE__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY = {
  .TypeName = "EFI_OPEN_PROTOCOL_INFORMATION_ENTRY",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_OPEN_PROTOCOL_INFORMATION_ENTRY),
  .StructFieldNum = 4,
  .StructFieldName_1 = "AgentHandle",
  .StructFieldTypeName_1 = "EFI_HANDLE",
  .StructFieldName_2 = "ControllerHandle",
  .StructFieldTypeName_2 = "EFI_HANDLE",
  .StructFieldName_3 = "Attributes",
  .StructFieldTypeName_3 = "UINT32",
  .StructFieldName_4 = "OpenCount",
  .StructFieldTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_PROTOCOLS_PER_HANDLE{
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
} TYPE__EFI_PROTOCOLS_PER_HANDLE;

TYPE__EFI_PROTOCOLS_PER_HANDLE TypeInfo__EFI_PROTOCOLS_PER_HANDLE = {
  .TypeName = "EFI_PROTOCOLS_PER_HANDLE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PROTOCOLS_PER_HANDLE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_GUID***",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINTN*"
};


typedef struct _TYPE__EFI_GUID_STAR_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR_STAR_STAR;

TYPE__EFI_GUID_STAR_STAR_STAR TypeInfo__EFI_GUID_STAR_STAR_STAR = {
  .TypeName = "EFI_GUID***",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID***),
  .PointedType = "EFI_GUID**"
};


typedef struct _TYPE__EFI_GUID_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_GUID_STAR_STAR;

TYPE__EFI_GUID_STAR_STAR TypeInfo__EFI_GUID_STAR_STAR = {
  .TypeName = "EFI_GUID**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_GUID**),
  .PointedType = "EFI_GUID*"
};


typedef struct _TYPE__EFI_LOCATE_HANDLE_BUFFER{
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
} TYPE__EFI_LOCATE_HANDLE_BUFFER;

TYPE__EFI_LOCATE_HANDLE_BUFFER TypeInfo__EFI_LOCATE_HANDLE_BUFFER = {
  .TypeName = "EFI_LOCATE_HANDLE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_HANDLE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LOCATE_SEARCH_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_GUID*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_HANDLE**"
};


typedef struct _TYPE__EFI_HANDLE_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_HANDLE_STAR_STAR;

TYPE__EFI_HANDLE_STAR_STAR TypeInfo__EFI_HANDLE_STAR_STAR = {
  .TypeName = "EFI_HANDLE**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_HANDLE**),
  .PointedType = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_LOCATE_PROTOCOL{
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
} TYPE__EFI_LOCATE_PROTOCOL;

TYPE__EFI_LOCATE_PROTOCOL TypeInfo__EFI_LOCATE_PROTOCOL = {
  .TypeName = "EFI_LOCATE_PROTOCOL",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LOCATE_PROTOCOL),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES;

TYPE__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES TypeInfo__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES = {
  .TypeName = "EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = TRUE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE*"
};


typedef struct _TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES;

TYPE__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES TypeInfo__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES = {
  .TypeName = "EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = TRUE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_CALCULATE_CRC32{
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
} TYPE__EFI_CALCULATE_CRC32;

TYPE__EFI_CALCULATE_CRC32 TypeInfo__EFI_CALCULATE_CRC32 = {
  .TypeName = "EFI_CALCULATE_CRC32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CALCULATE_CRC32),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT32*"
};


typedef struct _TYPE__EFI_COPY_MEM{
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
} TYPE__EFI_COPY_MEM;

TYPE__EFI_COPY_MEM TypeInfo__EFI_COPY_MEM = {
  .TypeName = "EFI_COPY_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COPY_MEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN"
};


typedef struct _TYPE__EFI_SET_MEM{
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
} TYPE__EFI_SET_MEM;

TYPE__EFI_SET_MEM TypeInfo__EFI_SET_MEM = {
  .TypeName = "EFI_SET_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_SET_MEM),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_CREATE_EVENT_EX{
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
} TYPE__EFI_CREATE_EVENT_EX;

TYPE__EFI_CREATE_EVENT_EX TypeInfo__EFI_CREATE_EVENT_EX = {
  .TypeName = "EFI_CREATE_EVENT_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CREATE_EVENT_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINT32",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_TPL",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_EVENT_NOTIFY",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_GUID*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "EFI_EVENT*"
};


typedef struct _TYPE__EFI_CONFIGURATION_TABLE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CONFIGURATION_TABLE_STAR;

TYPE__EFI_CONFIGURATION_TABLE_STAR TypeInfo__EFI_CONFIGURATION_TABLE_STAR = {
  .TypeName = "EFI_CONFIGURATION_TABLE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CONFIGURATION_TABLE*),
  .PointedType = "EFI_CONFIGURATION_TABLE"
};


typedef struct _TYPE__EFI_CONFIGURATION_TABLE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_CONFIGURATION_TABLE;

TYPE__EFI_CONFIGURATION_TABLE TypeInfo__EFI_CONFIGURATION_TABLE = {
  .TypeName = "EFI_CONFIGURATION_TABLE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CONFIGURATION_TABLE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "VendorGuid",
  .StructFieldTypeName_1 = "EFI_GUID",
  .StructFieldName_2 = "VendorTable",
  .StructFieldTypeName_2 = "void*"
};


typedef struct _TYPE__EBC_VM_TEST_ASM{
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
} TYPE__EBC_VM_TEST_ASM;

TYPE__EBC_VM_TEST_ASM TypeInfo__EBC_VM_TEST_ASM = {
  .TypeName = "EBC_VM_TEST_ASM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EBC_VM_TEST_ASM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_VM_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "INT8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*"
};


typedef struct _TYPE__INT8_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__INT8_STAR;

TYPE__INT8_STAR TypeInfo__INT8_STAR = {
  .TypeName = "INT8*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(INT8*),
  .PointedType = "INT8"
};


typedef struct _TYPE__INT8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__INT8;

TYPE__INT8 TypeInfo__INT8 = {
  .TypeName = "INT8",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(INT8),
  .BasicTypeName = "signedchar"
};


typedef struct _TYPE__EBC_VM_TEST_DASM{
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
} TYPE__EBC_VM_TEST_DASM;

TYPE__EBC_VM_TEST_DASM TypeInfo__EBC_VM_TEST_DASM = {
  .TypeName = "EBC_VM_TEST_DASM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EBC_VM_TEST_DASM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_EBC_VM_TEST_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "INT8*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*"
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


typedef struct _TYPE__gEfiEbcProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiEbcProtocolGuid;

TYPE__gEfiEbcProtocolGuid TypeInfo__gEfiEbcProtocolGuid = {
  .TypeName = "gEfiEbcProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiEbcProtocolGuid,
  .InterfaceStructName = "EFI_EBC_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  &TypeInfo__gEfiDebugSupportProtocolGuid,
  &TypeInfo__gEfiEbcVmTestProtocolGuid,
  &TypeInfo__gEfiEbcProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  &TypeInfo__gEfiEbcProtocolGuid,
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiEbcProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__EFI_EBC_PROTOCOL,
  &TypeInfo__EFI_EBC_CREATE_THUNK,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_EBC_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_EBC_UNLOAD_IMAGE,
  &TypeInfo__EFI_EBC_REGISTER_ICACHE_FLUSH,
  &TypeInfo__EBC_ICACHE_FLUSH,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__EFI_EBC_GET_VERSION,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__gEfiDebugSupportProtocolGuid,
  &TypeInfo__EFI_DEBUG_SUPPORT_PROTOCOL,
  &TypeInfo__EFI_INSTRUCTION_SET_ARCHITECTURE,
  &TypeInfo__EFI_GET_MAXIMUM_PROCESSOR_INDEX,
  &TypeInfo__EFI_DEBUG_SUPPORT_PROTOCOL_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_REGISTER_PERIODIC_CALLBACK,
  &TypeInfo__EFI_PERIODIC_CALLBACK,
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
  &TypeInfo__EFI_REGISTER_EXCEPTION_CALLBACK,
  &TypeInfo__EFI_EXCEPTION_CALLBACK,
  &TypeInfo__EFI_EXCEPTION_TYPE,
  &TypeInfo__INTN,
  &TypeInfo__INT64,
  &TypeInfo__EFI_INVALIDATE_INSTRUCTION_CACHE,
  &TypeInfo__gEfiEbcVmTestProtocolGuid,
  &TypeInfo__EFI_EBC_VM_TEST_PROTOCOL,
  &TypeInfo__EBC_VM_TEST_EXECUTE,
  &TypeInfo__EFI_EBC_VM_TEST_PROTOCOL_STAR,
  &TypeInfo__VM_CONTEXT_STAR,
  &TypeInfo__VM_CONTEXT,
  &TypeInfo__VM_REGISTER_ARRAY_8,
  &TypeInfo__VM_REGISTER,
  &TypeInfo__VMIP,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EXCEPTION_FLAGS,
  &TypeInfo__EFI_SYSTEM_TABLE_STAR,
  &TypeInfo__EFI_SYSTEM_TABLE,
  &TypeInfo__EFI_TABLE_HEADER,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_INPUT_PROTOCOL,
  &TypeInfo__EFI_INPUT_RESET,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_INPUT_READ_KEY,
  &TypeInfo__EFI_INPUT_KEY_STAR,
  &TypeInfo__EFI_INPUT_KEY,
  &TypeInfo__EFI_EVENT,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL,
  &TypeInfo__EFI_TEXT_RESET,
  &TypeInfo__EFI_TEXT_STRING,
  &TypeInfo__EFI_TEXT_TEST_STRING,
  &TypeInfo__EFI_TEXT_QUERY_MODE,
  &TypeInfo__EFI_TEXT_SET_MODE,
  &TypeInfo__EFI_TEXT_SET_ATTRIBUTE,
  &TypeInfo__EFI_TEXT_CLEAR_SCREEN,
  &TypeInfo__EFI_TEXT_SET_CURSOR_POSITION,
  &TypeInfo__EFI_TEXT_ENABLE_CURSOR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE_STAR,
  &TypeInfo__EFI_SIMPLE_TEXT_OUTPUT_MODE,
  &TypeInfo__INT32,
  &TypeInfo__EFI_RUNTIME_SERVICES_STAR,
  &TypeInfo__EFI_RUNTIME_SERVICES,
  &TypeInfo__EFI_GET_TIME,
  &TypeInfo__EFI_TIME_STAR,
  &TypeInfo__EFI_TIME,
  &TypeInfo__INT16,
  &TypeInfo__EFI_TIME_CAPABILITIES_STAR,
  &TypeInfo__EFI_TIME_CAPABILITIES,
  &TypeInfo__EFI_SET_TIME,
  &TypeInfo__EFI_GET_WAKEUP_TIME,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__EFI_SET_WAKEUP_TIME,
  &TypeInfo__EFI_SET_VIRTUAL_ADDRESS_MAP,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR_STAR,
  &TypeInfo__EFI_MEMORY_DESCRIPTOR,
  &TypeInfo__EFI_VIRTUAL_ADDRESS,
  &TypeInfo__EFI_CONVERT_POINTER,
  &TypeInfo__EFI_GET_VARIABLE,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__EFI_GET_NEXT_VARIABLE_NAME,
  &TypeInfo__EFI_SET_VARIABLE,
  &TypeInfo__EFI_GET_NEXT_HIGH_MONO_COUNT,
  &TypeInfo__EFI_RESET_SYSTEM,
  &TypeInfo__EFI_RESET_TYPE,
  &TypeInfo__EFI_UPDATE_CAPSULE,
  &TypeInfo__EFI_CAPSULE_HEADER_STAR_STAR,
  &TypeInfo__EFI_CAPSULE_HEADER_STAR,
  &TypeInfo__EFI_CAPSULE_HEADER,
  &TypeInfo__EFI_QUERY_CAPSULE_CAPABILITIES,
  &TypeInfo__EFI_RESET_TYPE_STAR,
  &TypeInfo__EFI_QUERY_VARIABLE_INFO,
  &TypeInfo__EFI_BOOT_SERVICES_STAR,
  &TypeInfo__EFI_BOOT_SERVICES,
  &TypeInfo__EFI_RAISE_TPL,
  &TypeInfo__EFI_TPL,
  &TypeInfo__EFI_RESTORE_TPL,
  &TypeInfo__EFI_ALLOCATE_PAGES,
  &TypeInfo__EFI_ALLOCATE_TYPE,
  &TypeInfo__EFI_MEMORY_TYPE,
  &TypeInfo__EFI_PHYSICAL_ADDRESS_STAR,
  &TypeInfo__EFI_FREE_PAGES,
  &TypeInfo__EFI_GET_MEMORY_MAP,
  &TypeInfo__EFI_ALLOCATE_POOL,
  &TypeInfo__EFI_FREE_POOL,
  &TypeInfo__EFI_CREATE_EVENT,
  &TypeInfo__EFI_EVENT_NOTIFY,
  &TypeInfo__EFI_EVENT_STAR,
  &TypeInfo__EFI_SET_TIMER,
  &TypeInfo__EFI_TIMER_DELAY,
  &TypeInfo__EFI_WAIT_FOR_EVENT,
  &TypeInfo__EFI_SIGNAL_EVENT,
  &TypeInfo__EFI_CLOSE_EVENT,
  &TypeInfo__EFI_CHECK_EVENT,
  &TypeInfo__EFI_INSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_INTERFACE_TYPE,
  &TypeInfo__EFI_REINSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_UNINSTALL_PROTOCOL_INTERFACE,
  &TypeInfo__EFI_HANDLE_PROTOCOL,
  &TypeInfo__EFI_REGISTER_PROTOCOL_NOTIFY,
  &TypeInfo__EFI_LOCATE_HANDLE,
  &TypeInfo__EFI_LOCATE_SEARCH_TYPE,
  &TypeInfo__EFI_LOCATE_DEVICE_PATH,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_INSTALL_CONFIGURATION_TABLE,
  &TypeInfo__EFI_IMAGE_LOAD,
  &TypeInfo__EFI_IMAGE_START,
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__EFI_EXIT,
  &TypeInfo__EFI_IMAGE_UNLOAD,
  &TypeInfo__EFI_EXIT_BOOT_SERVICES,
  &TypeInfo__EFI_GET_NEXT_MONOTONIC_COUNT,
  &TypeInfo__EFI_STALL,
  &TypeInfo__EFI_SET_WATCHDOG_TIMER,
  &TypeInfo__EFI_CONNECT_CONTROLLER,
  &TypeInfo__EFI_DISCONNECT_CONTROLLER,
  &TypeInfo__EFI_OPEN_PROTOCOL,
  &TypeInfo__EFI_CLOSE_PROTOCOL,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR_STAR,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY_STAR,
  &TypeInfo__EFI_OPEN_PROTOCOL_INFORMATION_ENTRY,
  &TypeInfo__EFI_PROTOCOLS_PER_HANDLE,
  &TypeInfo__EFI_GUID_STAR_STAR_STAR,
  &TypeInfo__EFI_GUID_STAR_STAR,
  &TypeInfo__EFI_LOCATE_HANDLE_BUFFER,
  &TypeInfo__EFI_HANDLE_STAR_STAR,
  &TypeInfo__EFI_LOCATE_PROTOCOL,
  &TypeInfo__EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES,
  &TypeInfo__EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES,
  &TypeInfo__EFI_CALCULATE_CRC32,
  &TypeInfo__EFI_COPY_MEM,
  &TypeInfo__EFI_SET_MEM,
  &TypeInfo__EFI_CREATE_EVENT_EX,
  &TypeInfo__EFI_CONFIGURATION_TABLE_STAR,
  &TypeInfo__EFI_CONFIGURATION_TABLE,
  &TypeInfo__EBC_VM_TEST_ASM,
  &TypeInfo__INT8_STAR,
  &TypeInfo__INT8,
  &TypeInfo__EBC_VM_TEST_DASM,
  NULL
};