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


typedef struct _TYPE__EFI_LEGACY_8259_PROTOCOL{
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
} TYPE__EFI_LEGACY_8259_PROTOCOL;

TYPE__EFI_LEGACY_8259_PROTOCOL TypeInfo__EFI_LEGACY_8259_PROTOCOL = {
  .TypeName = "EFI_LEGACY_8259_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_LEGACY_8259_PROTOCOL),
  .StructFieldNum = 9,
  .StructFieldName_1 = "SetVectorBase",
  .StructFieldTypeName_1 = "EFI_LEGACY_8259_SET_VECTOR_BASE",
  .StructFieldName_2 = "GetMask",
  .StructFieldTypeName_2 = "EFI_LEGACY_8259_GET_MASK",
  .StructFieldName_3 = "SetMask",
  .StructFieldTypeName_3 = "EFI_LEGACY_8259_SET_MASK",
  .StructFieldName_4 = "SetMode",
  .StructFieldTypeName_4 = "EFI_LEGACY_8259_SET_MODE",
  .StructFieldName_5 = "GetVector",
  .StructFieldTypeName_5 = "EFI_LEGACY_8259_GET_VECTOR",
  .StructFieldName_6 = "EnableIrq",
  .StructFieldTypeName_6 = "EFI_LEGACY_8259_ENABLE_IRQ",
  .StructFieldName_7 = "DisableIrq",
  .StructFieldTypeName_7 = "EFI_LEGACY_8259_DISABLE_IRQ",
  .StructFieldName_8 = "GetInterruptLine",
  .StructFieldTypeName_8 = "EFI_LEGACY_8259_GET_INTERRUPT_LINE",
  .StructFieldName_9 = "EndOfInterrupt",
  .StructFieldTypeName_9 = "EFI_LEGACY_8259_END_OF_INTERRUPT"
};


typedef struct _TYPE__EFI_LEGACY_8259_SET_VECTOR_BASE{
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
} TYPE__EFI_LEGACY_8259_SET_VECTOR_BASE;

TYPE__EFI_LEGACY_8259_SET_VECTOR_BASE TypeInfo__EFI_LEGACY_8259_SET_VECTOR_BASE = {
  .TypeName = "EFI_LEGACY_8259_SET_VECTOR_BASE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_SET_VECTOR_BASE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
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


typedef struct _TYPE__EFI_LEGACY_8259_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_LEGACY_8259_PROTOCOL_STAR;

TYPE__EFI_LEGACY_8259_PROTOCOL_STAR TypeInfo__EFI_LEGACY_8259_PROTOCOL_STAR = {
  .TypeName = "EFI_LEGACY_8259_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_LEGACY_8259_PROTOCOL*),
  .PointedType = "EFI_LEGACY_8259_PROTOCOL"
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


typedef struct _TYPE__EFI_LEGACY_8259_GET_MASK{
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
} TYPE__EFI_LEGACY_8259_GET_MASK;

TYPE__EFI_LEGACY_8259_GET_MASK TypeInfo__EFI_LEGACY_8259_GET_MASK = {
  .TypeName = "EFI_LEGACY_8259_GET_MASK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_GET_MASK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT16*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT16*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "UINT16*"
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


typedef struct _TYPE__EFI_LEGACY_8259_SET_MASK{
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
} TYPE__EFI_LEGACY_8259_SET_MASK;

TYPE__EFI_LEGACY_8259_SET_MASK TypeInfo__EFI_LEGACY_8259_SET_MASK = {
  .TypeName = "EFI_LEGACY_8259_SET_MASK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_SET_MASK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT16*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT16*"
};


typedef struct _TYPE__EFI_LEGACY_8259_SET_MODE{
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
} TYPE__EFI_LEGACY_8259_SET_MODE;

TYPE__EFI_LEGACY_8259_SET_MODE TypeInfo__EFI_LEGACY_8259_SET_MODE = {
  .TypeName = "EFI_LEGACY_8259_SET_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_SET_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_8259_MODE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT16*"
};


typedef struct _TYPE__EFI_8259_MODE{
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
} TYPE__EFI_8259_MODE;

TYPE__EFI_8259_MODE TypeInfo__EFI_8259_MODE = {
  .TypeName = "EFI_8259_MODE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_8259_MODE),
  .EnumValueNum = 3,
  .EnumValueName_1 = "Efi8259LegacyMode",
  .EnumValue_1 = Efi8259LegacyMode,
  .EnumValueName_2 = "Efi8259ProtectedMode",
  .EnumValue_2 = Efi8259ProtectedMode,
  .EnumValueName_3 = "Efi8259MaxMode",
  .EnumValue_3 = Efi8259MaxMode
};


typedef struct _TYPE__EFI_LEGACY_8259_GET_VECTOR{
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
} TYPE__EFI_LEGACY_8259_GET_VECTOR;

TYPE__EFI_LEGACY_8259_GET_VECTOR TypeInfo__EFI_LEGACY_8259_GET_VECTOR = {
  .TypeName = "EFI_LEGACY_8259_GET_VECTOR",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_GET_VECTOR),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_8259_IRQ",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT8*"
};


typedef struct _TYPE__EFI_8259_IRQ{
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
  const CHAR8* EnumValueName_17;
  const UINTN EnumValue_17;
} TYPE__EFI_8259_IRQ;

TYPE__EFI_8259_IRQ TypeInfo__EFI_8259_IRQ = {
  .TypeName = "EFI_8259_IRQ",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_8259_IRQ),
  .EnumValueNum = 17,
  .EnumValueName_1 = "Efi8259Irq0",
  .EnumValue_1 = Efi8259Irq0,
  .EnumValueName_2 = "Efi8259Irq1",
  .EnumValue_2 = Efi8259Irq1,
  .EnumValueName_3 = "Efi8259Irq2",
  .EnumValue_3 = Efi8259Irq2,
  .EnumValueName_4 = "Efi8259Irq3",
  .EnumValue_4 = Efi8259Irq3,
  .EnumValueName_5 = "Efi8259Irq4",
  .EnumValue_5 = Efi8259Irq4,
  .EnumValueName_6 = "Efi8259Irq5",
  .EnumValue_6 = Efi8259Irq5,
  .EnumValueName_7 = "Efi8259Irq6",
  .EnumValue_7 = Efi8259Irq6,
  .EnumValueName_8 = "Efi8259Irq7",
  .EnumValue_8 = Efi8259Irq7,
  .EnumValueName_9 = "Efi8259Irq8",
  .EnumValue_9 = Efi8259Irq8,
  .EnumValueName_10 = "Efi8259Irq9",
  .EnumValue_10 = Efi8259Irq9,
  .EnumValueName_11 = "Efi8259Irq10",
  .EnumValue_11 = Efi8259Irq10,
  .EnumValueName_12 = "Efi8259Irq11",
  .EnumValue_12 = Efi8259Irq11,
  .EnumValueName_13 = "Efi8259Irq12",
  .EnumValue_13 = Efi8259Irq12,
  .EnumValueName_14 = "Efi8259Irq13",
  .EnumValue_14 = Efi8259Irq13,
  .EnumValueName_15 = "Efi8259Irq14",
  .EnumValue_15 = Efi8259Irq14,
  .EnumValueName_16 = "Efi8259Irq15",
  .EnumValue_16 = Efi8259Irq15,
  .EnumValueName_17 = "Efi8259IrqMax",
  .EnumValue_17 = Efi8259IrqMax
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


typedef struct _TYPE__EFI_LEGACY_8259_ENABLE_IRQ{
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
} TYPE__EFI_LEGACY_8259_ENABLE_IRQ;

TYPE__EFI_LEGACY_8259_ENABLE_IRQ TypeInfo__EFI_LEGACY_8259_ENABLE_IRQ = {
  .TypeName = "EFI_LEGACY_8259_ENABLE_IRQ",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_ENABLE_IRQ),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_8259_IRQ",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
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


typedef struct _TYPE__EFI_LEGACY_8259_DISABLE_IRQ{
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
} TYPE__EFI_LEGACY_8259_DISABLE_IRQ;

TYPE__EFI_LEGACY_8259_DISABLE_IRQ TypeInfo__EFI_LEGACY_8259_DISABLE_IRQ = {
  .TypeName = "EFI_LEGACY_8259_DISABLE_IRQ",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_DISABLE_IRQ),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_8259_IRQ"
};


typedef struct _TYPE__EFI_LEGACY_8259_GET_INTERRUPT_LINE{
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
} TYPE__EFI_LEGACY_8259_GET_INTERRUPT_LINE;

TYPE__EFI_LEGACY_8259_GET_INTERRUPT_LINE TypeInfo__EFI_LEGACY_8259_GET_INTERRUPT_LINE = {
  .TypeName = "EFI_LEGACY_8259_GET_INTERRUPT_LINE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_GET_INTERRUPT_LINE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT8*"
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


typedef struct _TYPE__EFI_LEGACY_8259_END_OF_INTERRUPT{
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
} TYPE__EFI_LEGACY_8259_END_OF_INTERRUPT;

TYPE__EFI_LEGACY_8259_END_OF_INTERRUPT TypeInfo__EFI_LEGACY_8259_END_OF_INTERRUPT = {
  .TypeName = "EFI_LEGACY_8259_END_OF_INTERRUPT",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_LEGACY_8259_END_OF_INTERRUPT),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_LEGACY_8259_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_8259_IRQ"
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
  &TypeInfo__gEfiLegacy8259ProtocolGuid,
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiLegacy8259ProtocolGuid,
  &TypeInfo__EFI_LEGACY_8259_PROTOCOL,
  &TypeInfo__EFI_LEGACY_8259_SET_VECTOR_BASE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_LEGACY_8259_PROTOCOL_STAR,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_LEGACY_8259_GET_MASK,
  &TypeInfo__UINT16_STAR,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_LEGACY_8259_SET_MASK,
  &TypeInfo__EFI_LEGACY_8259_SET_MODE,
  &TypeInfo__EFI_8259_MODE,
  &TypeInfo__EFI_LEGACY_8259_GET_VECTOR,
  &TypeInfo__EFI_8259_IRQ,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_LEGACY_8259_ENABLE_IRQ,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_LEGACY_8259_DISABLE_IRQ,
  &TypeInfo__EFI_LEGACY_8259_GET_INTERRUPT_LINE,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_LEGACY_8259_END_OF_INTERRUPT,
  NULL
};