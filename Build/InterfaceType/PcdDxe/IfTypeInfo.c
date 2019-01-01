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


typedef struct _TYPE__PCD_PROTOCOL{
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
} TYPE__PCD_PROTOCOL;

TYPE__PCD_PROTOCOL TypeInfo__PCD_PROTOCOL = {
  .TypeName = "PCD_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(PCD_PROTOCOL),
  .StructFieldNum = 31,
  .StructFieldName_1 = "SetSku",
  .StructFieldTypeName_1 = "PCD_PROTOCOL_SET_SKU",
  .StructFieldName_2 = "Get8",
  .StructFieldTypeName_2 = "PCD_PROTOCOL_GET8",
  .StructFieldName_3 = "Get16",
  .StructFieldTypeName_3 = "PCD_PROTOCOL_GET16",
  .StructFieldName_4 = "Get32",
  .StructFieldTypeName_4 = "PCD_PROTOCOL_GET32",
  .StructFieldName_5 = "Get64",
  .StructFieldTypeName_5 = "PCD_PROTOCOL_GET64",
  .StructFieldName_6 = "GetPtr",
  .StructFieldTypeName_6 = "PCD_PROTOCOL_GET_POINTER",
  .StructFieldName_7 = "GetBool",
  .StructFieldTypeName_7 = "PCD_PROTOCOL_GET_BOOLEAN",
  .StructFieldName_8 = "GetSize",
  .StructFieldTypeName_8 = "PCD_PROTOCOL_GET_SIZE",
  .StructFieldName_9 = "Get8Ex",
  .StructFieldTypeName_9 = "PCD_PROTOCOL_GET_EX_8",
  .StructFieldName_10 = "Get16Ex",
  .StructFieldTypeName_10 = "PCD_PROTOCOL_GET_EX_16",
  .StructFieldName_11 = "Get32Ex",
  .StructFieldTypeName_11 = "PCD_PROTOCOL_GET_EX_32",
  .StructFieldName_12 = "Get64Ex",
  .StructFieldTypeName_12 = "PCD_PROTOCOL_GET_EX_64",
  .StructFieldName_13 = "GetPtrEx",
  .StructFieldTypeName_13 = "PCD_PROTOCOL_GET_EX_POINTER",
  .StructFieldName_14 = "GetBoolEx",
  .StructFieldTypeName_14 = "PCD_PROTOCOL_GET_EX_BOOLEAN",
  .StructFieldName_15 = "GetSizeEx",
  .StructFieldTypeName_15 = "PCD_PROTOCOL_GET_EX_SIZE",
  .StructFieldName_16 = "Set8",
  .StructFieldTypeName_16 = "PCD_PROTOCOL_SET8",
  .StructFieldName_17 = "Set16",
  .StructFieldTypeName_17 = "PCD_PROTOCOL_SET16",
  .StructFieldName_18 = "Set32",
  .StructFieldTypeName_18 = "PCD_PROTOCOL_SET32",
  .StructFieldName_19 = "Set64",
  .StructFieldTypeName_19 = "PCD_PROTOCOL_SET64",
  .StructFieldName_20 = "SetPtr",
  .StructFieldTypeName_20 = "PCD_PROTOCOL_SET_POINTER",
  .StructFieldName_21 = "SetBool",
  .StructFieldTypeName_21 = "PCD_PROTOCOL_SET_BOOLEAN",
  .StructFieldName_22 = "Set8Ex",
  .StructFieldTypeName_22 = "PCD_PROTOCOL_SET_EX_8",
  .StructFieldName_23 = "Set16Ex",
  .StructFieldTypeName_23 = "PCD_PROTOCOL_SET_EX_16",
  .StructFieldName_24 = "Set32Ex",
  .StructFieldTypeName_24 = "PCD_PROTOCOL_SET_EX_32",
  .StructFieldName_25 = "Set64Ex",
  .StructFieldTypeName_25 = "PCD_PROTOCOL_SET_EX_64",
  .StructFieldName_26 = "SetPtrEx",
  .StructFieldTypeName_26 = "PCD_PROTOCOL_SET_EX_POINTER",
  .StructFieldName_27 = "SetBoolEx",
  .StructFieldTypeName_27 = "PCD_PROTOCOL_SET_EX_BOOLEAN",
  .StructFieldName_28 = "CallbackOnSet",
  .StructFieldTypeName_28 = "PCD_PROTOCOL_CALLBACK_ONSET",
  .StructFieldName_29 = "CancelCallback",
  .StructFieldTypeName_29 = "PCD_PROTOCOL_CANCEL_CALLBACK",
  .StructFieldName_30 = "GetNextToken",
  .StructFieldTypeName_30 = "PCD_PROTOCOL_GET_NEXT_TOKEN",
  .StructFieldName_31 = "GetNextTokenSpace",
  .StructFieldTypeName_31 = "PCD_PROTOCOL_GET_NEXT_TOKENSPACE"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_SKU{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_SET_SKU;

TYPE__PCD_PROTOCOL_SET_SKU TypeInfo__PCD_PROTOCOL_SET_SKU = {
  .TypeName = "PCD_PROTOCOL_SET_SKU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_SKU),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET8;

TYPE__PCD_PROTOCOL_GET8 TypeInfo__PCD_PROTOCOL_GET8 = {
  .TypeName = "PCD_PROTOCOL_GET8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET8),
  .ReturnType = "UINT8",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET16;

TYPE__PCD_PROTOCOL_GET16 TypeInfo__PCD_PROTOCOL_GET16 = {
  .TypeName = "PCD_PROTOCOL_GET16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET16),
  .ReturnType = "UINT16",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET32{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET32;

TYPE__PCD_PROTOCOL_GET32 TypeInfo__PCD_PROTOCOL_GET32 = {
  .TypeName = "PCD_PROTOCOL_GET32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET32),
  .ReturnType = "UINT32",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET64{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET64;

TYPE__PCD_PROTOCOL_GET64 TypeInfo__PCD_PROTOCOL_GET64 = {
  .TypeName = "PCD_PROTOCOL_GET64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET64),
  .ReturnType = "UINT64",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_POINTER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET_POINTER;

TYPE__PCD_PROTOCOL_GET_POINTER TypeInfo__PCD_PROTOCOL_GET_POINTER = {
  .TypeName = "PCD_PROTOCOL_GET_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_POINTER),
  .ReturnType = "void*",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET_BOOLEAN{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET_BOOLEAN;

TYPE__PCD_PROTOCOL_GET_BOOLEAN TypeInfo__PCD_PROTOCOL_GET_BOOLEAN = {
  .TypeName = "PCD_PROTOCOL_GET_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_BOOLEAN),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET_SIZE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET_SIZE;

TYPE__PCD_PROTOCOL_GET_SIZE TypeInfo__PCD_PROTOCOL_GET_SIZE = {
  .TypeName = "PCD_PROTOCOL_GET_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_SIZE),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_8{
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
} TYPE__PCD_PROTOCOL_GET_EX_8;

TYPE__PCD_PROTOCOL_GET_EX_8 TypeInfo__PCD_PROTOCOL_GET_EX_8 = {
  .TypeName = "PCD_PROTOCOL_GET_EX_8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_8),
  .ReturnType = "UINT8",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
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


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_16{
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
} TYPE__PCD_PROTOCOL_GET_EX_16;

TYPE__PCD_PROTOCOL_GET_EX_16 TypeInfo__PCD_PROTOCOL_GET_EX_16 = {
  .TypeName = "PCD_PROTOCOL_GET_EX_16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_16),
  .ReturnType = "UINT16",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_32{
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
} TYPE__PCD_PROTOCOL_GET_EX_32;

TYPE__PCD_PROTOCOL_GET_EX_32 TypeInfo__PCD_PROTOCOL_GET_EX_32 = {
  .TypeName = "PCD_PROTOCOL_GET_EX_32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_32),
  .ReturnType = "UINT32",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_64{
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
} TYPE__PCD_PROTOCOL_GET_EX_64;

TYPE__PCD_PROTOCOL_GET_EX_64 TypeInfo__PCD_PROTOCOL_GET_EX_64 = {
  .TypeName = "PCD_PROTOCOL_GET_EX_64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_64),
  .ReturnType = "UINT64",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_POINTER{
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
} TYPE__PCD_PROTOCOL_GET_EX_POINTER;

TYPE__PCD_PROTOCOL_GET_EX_POINTER TypeInfo__PCD_PROTOCOL_GET_EX_POINTER = {
  .TypeName = "PCD_PROTOCOL_GET_EX_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_POINTER),
  .ReturnType = "void*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_BOOLEAN{
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
} TYPE__PCD_PROTOCOL_GET_EX_BOOLEAN;

TYPE__PCD_PROTOCOL_GET_EX_BOOLEAN TypeInfo__PCD_PROTOCOL_GET_EX_BOOLEAN = {
  .TypeName = "PCD_PROTOCOL_GET_EX_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_BOOLEAN),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_EX_SIZE{
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
} TYPE__PCD_PROTOCOL_GET_EX_SIZE;

TYPE__PCD_PROTOCOL_GET_EX_SIZE TypeInfo__PCD_PROTOCOL_GET_EX_SIZE = {
  .TypeName = "PCD_PROTOCOL_GET_EX_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_EX_SIZE),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_SET8{
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
} TYPE__PCD_PROTOCOL_SET8;

TYPE__PCD_PROTOCOL_SET8 TypeInfo__PCD_PROTOCOL_SET8 = {
  .TypeName = "PCD_PROTOCOL_SET8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET8),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8"
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


typedef struct _TYPE__PCD_PROTOCOL_SET16{
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
} TYPE__PCD_PROTOCOL_SET16;

TYPE__PCD_PROTOCOL_SET16 TypeInfo__PCD_PROTOCOL_SET16 = {
  .TypeName = "PCD_PROTOCOL_SET16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET16),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16"
};


typedef struct _TYPE__PCD_PROTOCOL_SET32{
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
} TYPE__PCD_PROTOCOL_SET32;

TYPE__PCD_PROTOCOL_SET32 TypeInfo__PCD_PROTOCOL_SET32 = {
  .TypeName = "PCD_PROTOCOL_SET32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET32),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT32"
};


typedef struct _TYPE__PCD_PROTOCOL_SET64{
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
} TYPE__PCD_PROTOCOL_SET64;

TYPE__PCD_PROTOCOL_SET64 TypeInfo__PCD_PROTOCOL_SET64 = {
  .TypeName = "PCD_PROTOCOL_SET64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET64),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_POINTER{
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
} TYPE__PCD_PROTOCOL_SET_POINTER;

TYPE__PCD_PROTOCOL_SET_POINTER TypeInfo__PCD_PROTOCOL_SET_POINTER = {
  .TypeName = "PCD_PROTOCOL_SET_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_POINTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
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


typedef struct _TYPE__PCD_PROTOCOL_SET_BOOLEAN{
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
} TYPE__PCD_PROTOCOL_SET_BOOLEAN;

TYPE__PCD_PROTOCOL_SET_BOOLEAN TypeInfo__PCD_PROTOCOL_SET_BOOLEAN = {
  .TypeName = "PCD_PROTOCOL_SET_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_BOOLEAN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "BOOLEAN"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_8{
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
} TYPE__PCD_PROTOCOL_SET_EX_8;

TYPE__PCD_PROTOCOL_SET_EX_8 TypeInfo__PCD_PROTOCOL_SET_EX_8 = {
  .TypeName = "PCD_PROTOCOL_SET_EX_8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_8),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_16{
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
} TYPE__PCD_PROTOCOL_SET_EX_16;

TYPE__PCD_PROTOCOL_SET_EX_16 TypeInfo__PCD_PROTOCOL_SET_EX_16 = {
  .TypeName = "PCD_PROTOCOL_SET_EX_16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_16),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_32{
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
} TYPE__PCD_PROTOCOL_SET_EX_32;

TYPE__PCD_PROTOCOL_SET_EX_32 TypeInfo__PCD_PROTOCOL_SET_EX_32 = {
  .TypeName = "PCD_PROTOCOL_SET_EX_32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_32),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_64{
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
} TYPE__PCD_PROTOCOL_SET_EX_64;

TYPE__PCD_PROTOCOL_SET_EX_64 TypeInfo__PCD_PROTOCOL_SET_EX_64 = {
  .TypeName = "PCD_PROTOCOL_SET_EX_64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_64),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_POINTER{
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
} TYPE__PCD_PROTOCOL_SET_EX_POINTER;

TYPE__PCD_PROTOCOL_SET_EX_POINTER TypeInfo__PCD_PROTOCOL_SET_EX_POINTER = {
  .TypeName = "PCD_PROTOCOL_SET_EX_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_POINTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__PCD_PROTOCOL_SET_EX_BOOLEAN{
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
} TYPE__PCD_PROTOCOL_SET_EX_BOOLEAN;

TYPE__PCD_PROTOCOL_SET_EX_BOOLEAN TypeInfo__PCD_PROTOCOL_SET_EX_BOOLEAN = {
  .TypeName = "PCD_PROTOCOL_SET_EX_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_SET_EX_BOOLEAN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__PCD_PROTOCOL_CALLBACK_ONSET{
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
} TYPE__PCD_PROTOCOL_CALLBACK_ONSET;

TYPE__PCD_PROTOCOL_CALLBACK_ONSET TypeInfo__PCD_PROTOCOL_CALLBACK_ONSET = {
  .TypeName = "PCD_PROTOCOL_CALLBACK_ONSET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_CALLBACK_ONSET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "PCD_PROTOCOL_CALLBACK"
};


typedef struct _TYPE__PCD_PROTOCOL_CALLBACK{
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
} TYPE__PCD_PROTOCOL_CALLBACK;

TYPE__PCD_PROTOCOL_CALLBACK TypeInfo__PCD_PROTOCOL_CALLBACK = {
  .TypeName = "PCD_PROTOCOL_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_CALLBACK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__PCD_PROTOCOL_CANCEL_CALLBACK{
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
} TYPE__PCD_PROTOCOL_CANCEL_CALLBACK;

TYPE__PCD_PROTOCOL_CANCEL_CALLBACK TypeInfo__PCD_PROTOCOL_CANCEL_CALLBACK = {
  .TypeName = "PCD_PROTOCOL_CANCEL_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_CANCEL_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "PCD_PROTOCOL_CALLBACK"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_NEXT_TOKEN{
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
} TYPE__PCD_PROTOCOL_GET_NEXT_TOKEN;

TYPE__PCD_PROTOCOL_GET_NEXT_TOKEN TypeInfo__PCD_PROTOCOL_GET_NEXT_TOKEN = {
  .TypeName = "PCD_PROTOCOL_GET_NEXT_TOKEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_NEXT_TOKEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*"
};


typedef struct _TYPE__PCD_PROTOCOL_GET_NEXT_TOKENSPACE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__PCD_PROTOCOL_GET_NEXT_TOKENSPACE;

TYPE__PCD_PROTOCOL_GET_NEXT_TOKENSPACE TypeInfo__PCD_PROTOCOL_GET_NEXT_TOKENSPACE = {
  .TypeName = "PCD_PROTOCOL_GET_NEXT_TOKENSPACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(PCD_PROTOCOL_GET_NEXT_TOKENSPACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID**"
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


typedef struct _TYPE__gEfiPcdProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPcdProtocolGuid;

TYPE__gEfiPcdProtocolGuid TypeInfo__gEfiPcdProtocolGuid = {
  .TypeName = "gEfiPcdProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPcdProtocolGuid,
  .InterfaceStructName = "EFI_PCD_PROTOCOL"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL{
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
} TYPE__EFI_PCD_PROTOCOL;

TYPE__EFI_PCD_PROTOCOL TypeInfo__EFI_PCD_PROTOCOL = {
  .TypeName = "EFI_PCD_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL),
  .StructFieldNum = 18,
  .StructFieldName_1 = "SetSku",
  .StructFieldTypeName_1 = "EFI_PCD_PROTOCOL_SET_SKU",
  .StructFieldName_2 = "Get8",
  .StructFieldTypeName_2 = "EFI_PCD_PROTOCOL_GET_8",
  .StructFieldName_3 = "Get16",
  .StructFieldTypeName_3 = "EFI_PCD_PROTOCOL_GET_16",
  .StructFieldName_4 = "Get32",
  .StructFieldTypeName_4 = "EFI_PCD_PROTOCOL_GET_32",
  .StructFieldName_5 = "Get64",
  .StructFieldTypeName_5 = "EFI_PCD_PROTOCOL_GET_64",
  .StructFieldName_6 = "GetPtr",
  .StructFieldTypeName_6 = "EFI_PCD_PROTOCOL_GET_POINTER",
  .StructFieldName_7 = "GetBool",
  .StructFieldTypeName_7 = "EFI_PCD_PROTOCOL_GET_BOOLEAN",
  .StructFieldName_8 = "GetSize",
  .StructFieldTypeName_8 = "EFI_PCD_PROTOCOL_GET_SIZE",
  .StructFieldName_9 = "Set8",
  .StructFieldTypeName_9 = "EFI_PCD_PROTOCOL_SET_8",
  .StructFieldName_10 = "Set16",
  .StructFieldTypeName_10 = "EFI_PCD_PROTOCOL_SET_16",
  .StructFieldName_11 = "Set32",
  .StructFieldTypeName_11 = "EFI_PCD_PROTOCOL_SET_32",
  .StructFieldName_12 = "Set64",
  .StructFieldTypeName_12 = "EFI_PCD_PROTOCOL_SET_64",
  .StructFieldName_13 = "SetPtr",
  .StructFieldTypeName_13 = "EFI_PCD_PROTOCOL_SET_POINTER",
  .StructFieldName_14 = "SetBool",
  .StructFieldTypeName_14 = "EFI_PCD_PROTOCOL_SET_BOOLEAN",
  .StructFieldName_15 = "CallbackOnSet",
  .StructFieldTypeName_15 = "EFI_PCD_PROTOCOL_CALLBACK_ON_SET",
  .StructFieldName_16 = "CancelCallback",
  .StructFieldTypeName_16 = "EFI_PCD_PROTOCOL_CANCEL_CALLBACK",
  .StructFieldName_17 = "GetNextToken",
  .StructFieldTypeName_17 = "EFI_PCD_PROTOCOL_GET_NEXT_TOKEN",
  .StructFieldName_18 = "GetNextTokenSpace",
  .StructFieldTypeName_18 = "EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_SKU{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PCD_PROTOCOL_SET_SKU;

TYPE__EFI_PCD_PROTOCOL_SET_SKU TypeInfo__EFI_PCD_PROTOCOL_SET_SKU = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_SKU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_SKU),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_8{
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
} TYPE__EFI_PCD_PROTOCOL_GET_8;

TYPE__EFI_PCD_PROTOCOL_GET_8 TypeInfo__EFI_PCD_PROTOCOL_GET_8 = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_8),
  .ReturnType = "UINT8",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_16{
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
} TYPE__EFI_PCD_PROTOCOL_GET_16;

TYPE__EFI_PCD_PROTOCOL_GET_16 TypeInfo__EFI_PCD_PROTOCOL_GET_16 = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_16),
  .ReturnType = "UINT16",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_32{
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
} TYPE__EFI_PCD_PROTOCOL_GET_32;

TYPE__EFI_PCD_PROTOCOL_GET_32 TypeInfo__EFI_PCD_PROTOCOL_GET_32 = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_32),
  .ReturnType = "UINT32",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_64{
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
} TYPE__EFI_PCD_PROTOCOL_GET_64;

TYPE__EFI_PCD_PROTOCOL_GET_64 TypeInfo__EFI_PCD_PROTOCOL_GET_64 = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_64),
  .ReturnType = "UINT64",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_POINTER{
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
} TYPE__EFI_PCD_PROTOCOL_GET_POINTER;

TYPE__EFI_PCD_PROTOCOL_GET_POINTER TypeInfo__EFI_PCD_PROTOCOL_GET_POINTER = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_POINTER),
  .ReturnType = "void*",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_BOOLEAN{
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
} TYPE__EFI_PCD_PROTOCOL_GET_BOOLEAN;

TYPE__EFI_PCD_PROTOCOL_GET_BOOLEAN TypeInfo__EFI_PCD_PROTOCOL_GET_BOOLEAN = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_BOOLEAN),
  .ReturnType = "BOOLEAN",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_SIZE{
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
} TYPE__EFI_PCD_PROTOCOL_GET_SIZE;

TYPE__EFI_PCD_PROTOCOL_GET_SIZE TypeInfo__EFI_PCD_PROTOCOL_GET_SIZE = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_SIZE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_SIZE),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_8{
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
} TYPE__EFI_PCD_PROTOCOL_SET_8;

TYPE__EFI_PCD_PROTOCOL_SET_8 TypeInfo__EFI_PCD_PROTOCOL_SET_8 = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_8",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_8),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_16{
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
} TYPE__EFI_PCD_PROTOCOL_SET_16;

TYPE__EFI_PCD_PROTOCOL_SET_16 TypeInfo__EFI_PCD_PROTOCOL_SET_16 = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_16",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_16),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT16"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_32{
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
} TYPE__EFI_PCD_PROTOCOL_SET_32;

TYPE__EFI_PCD_PROTOCOL_SET_32 TypeInfo__EFI_PCD_PROTOCOL_SET_32 = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_32",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_32),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_64{
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
} TYPE__EFI_PCD_PROTOCOL_SET_64;

TYPE__EFI_PCD_PROTOCOL_SET_64 TypeInfo__EFI_PCD_PROTOCOL_SET_64 = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_64",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_64),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_POINTER{
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
} TYPE__EFI_PCD_PROTOCOL_SET_POINTER;

TYPE__EFI_PCD_PROTOCOL_SET_POINTER TypeInfo__EFI_PCD_PROTOCOL_SET_POINTER = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_POINTER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_POINTER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "void*"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_SET_BOOLEAN{
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
} TYPE__EFI_PCD_PROTOCOL_SET_BOOLEAN;

TYPE__EFI_PCD_PROTOCOL_SET_BOOLEAN TypeInfo__EFI_PCD_PROTOCOL_SET_BOOLEAN = {
  .TypeName = "EFI_PCD_PROTOCOL_SET_BOOLEAN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_SET_BOOLEAN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "BOOLEAN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_CALLBACK_ON_SET{
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
} TYPE__EFI_PCD_PROTOCOL_CALLBACK_ON_SET;

TYPE__EFI_PCD_PROTOCOL_CALLBACK_ON_SET TypeInfo__EFI_PCD_PROTOCOL_CALLBACK_ON_SET = {
  .TypeName = "EFI_PCD_PROTOCOL_CALLBACK_ON_SET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_CALLBACK_ON_SET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PCD_PROTOCOL_CALLBACK"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_CALLBACK{
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
} TYPE__EFI_PCD_PROTOCOL_CALLBACK;

TYPE__EFI_PCD_PROTOCOL_CALLBACK TypeInfo__EFI_PCD_PROTOCOL_CALLBACK = {
  .TypeName = "EFI_PCD_PROTOCOL_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_CALLBACK),
  .ReturnType = "void",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_CANCEL_CALLBACK{
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
} TYPE__EFI_PCD_PROTOCOL_CANCEL_CALLBACK;

TYPE__EFI_PCD_PROTOCOL_CANCEL_CALLBACK TypeInfo__EFI_PCD_PROTOCOL_CANCEL_CALLBACK = {
  .TypeName = "EFI_PCD_PROTOCOL_CANCEL_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_CANCEL_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PCD_PROTOCOL_CALLBACK"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN{
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
} TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN;

TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN TypeInfo__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_NEXT_TOKEN",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_NEXT_TOKEN),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN*"
};


typedef struct _TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE;

TYPE__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE TypeInfo__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE = {
  .TypeName = "EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID**"
};


typedef struct _TYPE__gGetPcdInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gGetPcdInfoProtocolGuid;

TYPE__gGetPcdInfoProtocolGuid TypeInfo__gGetPcdInfoProtocolGuid = {
  .TypeName = "gGetPcdInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gGetPcdInfoProtocolGuid,
  .InterfaceStructName = "GET_PCD_INFO_PROTOCOL"
};


typedef struct _TYPE__GET_PCD_INFO_PROTOCOL{
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
} TYPE__GET_PCD_INFO_PROTOCOL;

TYPE__GET_PCD_INFO_PROTOCOL TypeInfo__GET_PCD_INFO_PROTOCOL = {
  .TypeName = "GET_PCD_INFO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(GET_PCD_INFO_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetInfo",
  .StructFieldTypeName_1 = "GET_PCD_INFO_PROTOCOL_GET_INFO",
  .StructFieldName_2 = "GetInfoEx",
  .StructFieldTypeName_2 = "GET_PCD_INFO_PROTOCOL_GET_INFO_EX",
  .StructFieldName_3 = "GetSku",
  .StructFieldTypeName_3 = "GET_PCD_INFO_PROTOCOL_GET_SKU"
};


typedef struct _TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO{
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
} TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO;

TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO TypeInfo__GET_PCD_INFO_PROTOCOL_GET_INFO = {
  .TypeName = "GET_PCD_INFO_PROTOCOL_GET_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(GET_PCD_INFO_PROTOCOL_GET_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "UINTN",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_PCD_INFO*"
};


typedef struct _TYPE__EFI_PCD_INFO_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PCD_INFO_STAR;

TYPE__EFI_PCD_INFO_STAR TypeInfo__EFI_PCD_INFO_STAR = {
  .TypeName = "EFI_PCD_INFO*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PCD_INFO*),
  .PointedType = "EFI_PCD_INFO"
};


typedef struct _TYPE__EFI_PCD_INFO{
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
} TYPE__EFI_PCD_INFO;

TYPE__EFI_PCD_INFO TypeInfo__EFI_PCD_INFO = {
  .TypeName = "EFI_PCD_INFO",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCD_INFO),
  .StructFieldNum = 3,
  .StructFieldName_1 = "PcdType",
  .StructFieldTypeName_1 = "EFI_PCD_TYPE",
  .StructFieldName_2 = "PcdSize",
  .StructFieldTypeName_2 = "UINTN",
  .StructFieldName_3 = "PcdName",
  .StructFieldTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__EFI_PCD_TYPE{
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
} TYPE__EFI_PCD_TYPE;

TYPE__EFI_PCD_TYPE TypeInfo__EFI_PCD_TYPE = {
  .TypeName = "EFI_PCD_TYPE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCD_TYPE),
  .EnumValueNum = 6,
  .EnumValueName_1 = "EFI_PCD_TYPE_8",
  .EnumValue_1 = EFI_PCD_TYPE_8,
  .EnumValueName_2 = "EFI_PCD_TYPE_16",
  .EnumValue_2 = EFI_PCD_TYPE_16,
  .EnumValueName_3 = "EFI_PCD_TYPE_32",
  .EnumValue_3 = EFI_PCD_TYPE_32,
  .EnumValueName_4 = "EFI_PCD_TYPE_64",
  .EnumValue_4 = EFI_PCD_TYPE_64,
  .EnumValueName_5 = "EFI_PCD_TYPE_BOOL",
  .EnumValue_5 = EFI_PCD_TYPE_BOOL,
  .EnumValueName_6 = "EFI_PCD_TYPE_PTR",
  .EnumValue_6 = EFI_PCD_TYPE_PTR
};


typedef struct _TYPE__CHAR8_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__CHAR8_STAR;

TYPE__CHAR8_STAR TypeInfo__CHAR8_STAR = {
  .TypeName = "CHAR8*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(CHAR8*),
  .PointedType = "CHAR8"
};


typedef struct _TYPE__CHAR8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__CHAR8;

TYPE__CHAR8 TypeInfo__CHAR8 = {
  .TypeName = "CHAR8",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(CHAR8),
  .BasicTypeName = "char"
};


typedef struct _TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO_EX{
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
} TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO_EX;

TYPE__GET_PCD_INFO_PROTOCOL_GET_INFO_EX TypeInfo__GET_PCD_INFO_PROTOCOL_GET_INFO_EX = {
  .TypeName = "GET_PCD_INFO_PROTOCOL_GET_INFO_EX",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(GET_PCD_INFO_PROTOCOL_GET_INFO_EX),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_PCD_INFO*"
};


typedef struct _TYPE__GET_PCD_INFO_PROTOCOL_GET_SKU{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__GET_PCD_INFO_PROTOCOL_GET_SKU;

TYPE__GET_PCD_INFO_PROTOCOL_GET_SKU TypeInfo__GET_PCD_INFO_PROTOCOL_GET_SKU = {
  .TypeName = "GET_PCD_INFO_PROTOCOL_GET_SKU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(GET_PCD_INFO_PROTOCOL_GET_SKU),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
};


typedef struct _TYPE__gEfiGetPcdInfoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiGetPcdInfoProtocolGuid;

TYPE__gEfiGetPcdInfoProtocolGuid TypeInfo__gEfiGetPcdInfoProtocolGuid = {
  .TypeName = "gEfiGetPcdInfoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiGetPcdInfoProtocolGuid,
  .InterfaceStructName = "EFI_GET_PCD_INFO_PROTOCOL"
};


typedef struct _TYPE__EFI_GET_PCD_INFO_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_GET_PCD_INFO_PROTOCOL;

TYPE__EFI_GET_PCD_INFO_PROTOCOL TypeInfo__EFI_GET_PCD_INFO_PROTOCOL = {
  .TypeName = "EFI_GET_PCD_INFO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_GET_PCD_INFO_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "GetInfo",
  .StructFieldTypeName_1 = "EFI_GET_PCD_INFO_PROTOCOL_GET_INFO",
  .StructFieldName_2 = "GetSku",
  .StructFieldTypeName_2 = "EFI_GET_PCD_INFO_PROTOCOL_GET_SKU"
};


typedef struct _TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_INFO{
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
} TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_INFO;

TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_INFO TypeInfo__EFI_GET_PCD_INFO_PROTOCOL_GET_INFO = {
  .TypeName = "EFI_GET_PCD_INFO_PROTOCOL_GET_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_PCD_INFO_PROTOCOL_GET_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_GUID*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_PCD_INFO*"
};


typedef struct _TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_SKU{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
} TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_SKU;

TYPE__EFI_GET_PCD_INFO_PROTOCOL_GET_SKU TypeInfo__EFI_GET_PCD_INFO_PROTOCOL_GET_SKU = {
  .TypeName = "EFI_GET_PCD_INFO_PROTOCOL_GET_SKU",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_GET_PCD_INFO_PROTOCOL_GET_SKU),
  .ReturnType = "UINTN",
  .HasVarArg = FALSE,
  .ParameterNum = 0
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

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEdkiiVariableLockProtocolGuid,
  NULL
};
void *TypeInfoList_ReinstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_HandleProtocol[] = {
  &TypeInfo__gEfiLoadedImageProtocolGuid,
  &TypeInfo__gEfiFirmwareVolume2ProtocolGuid,
  NULL
};
void *TypeInfoList_InstallMultipleProtocolInterfaces[] = {
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__gEfiPcdProtocolGuid,
  &TypeInfo__gGetPcdInfoProtocolGuid,
  &TypeInfo__gEfiGetPcdInfoProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__PCD_PROTOCOL,
  &TypeInfo__PCD_PROTOCOL_SET_SKU,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__PCD_PROTOCOL_GET8,
  &TypeInfo__UINT8,
  &TypeInfo__PCD_PROTOCOL_GET16,
  &TypeInfo__UINT16,
  &TypeInfo__PCD_PROTOCOL_GET32,
  &TypeInfo__UINT32,
  &TypeInfo__PCD_PROTOCOL_GET64,
  &TypeInfo__PCD_PROTOCOL_GET_POINTER,
  &TypeInfo__void_STAR,
  &TypeInfo__PCD_PROTOCOL_GET_BOOLEAN,
  &TypeInfo__BOOLEAN,
  &TypeInfo__PCD_PROTOCOL_GET_SIZE,
  &TypeInfo__PCD_PROTOCOL_GET_EX_8,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__PCD_PROTOCOL_GET_EX_16,
  &TypeInfo__PCD_PROTOCOL_GET_EX_32,
  &TypeInfo__PCD_PROTOCOL_GET_EX_64,
  &TypeInfo__PCD_PROTOCOL_GET_EX_POINTER,
  &TypeInfo__PCD_PROTOCOL_GET_EX_BOOLEAN,
  &TypeInfo__PCD_PROTOCOL_GET_EX_SIZE,
  &TypeInfo__PCD_PROTOCOL_SET8,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__PCD_PROTOCOL_SET16,
  &TypeInfo__PCD_PROTOCOL_SET32,
  &TypeInfo__PCD_PROTOCOL_SET64,
  &TypeInfo__PCD_PROTOCOL_SET_POINTER,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__PCD_PROTOCOL_SET_BOOLEAN,
  &TypeInfo__PCD_PROTOCOL_SET_EX_8,
  &TypeInfo__PCD_PROTOCOL_SET_EX_16,
  &TypeInfo__PCD_PROTOCOL_SET_EX_32,
  &TypeInfo__PCD_PROTOCOL_SET_EX_64,
  &TypeInfo__PCD_PROTOCOL_SET_EX_POINTER,
  &TypeInfo__PCD_PROTOCOL_SET_EX_BOOLEAN,
  &TypeInfo__PCD_PROTOCOL_CALLBACK_ONSET,
  &TypeInfo__PCD_PROTOCOL_CALLBACK,
  &TypeInfo__PCD_PROTOCOL_CANCEL_CALLBACK,
  &TypeInfo__PCD_PROTOCOL_GET_NEXT_TOKEN,
  &TypeInfo__PCD_PROTOCOL_GET_NEXT_TOKENSPACE,
  &TypeInfo__EFI_GUID_STAR_STAR,
  &TypeInfo__gEfiPcdProtocolGuid,
  &TypeInfo__EFI_PCD_PROTOCOL,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_SKU,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_8,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_16,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_32,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_64,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_POINTER,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_BOOLEAN,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_SIZE,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_8,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_16,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_32,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_64,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_POINTER,
  &TypeInfo__EFI_PCD_PROTOCOL_SET_BOOLEAN,
  &TypeInfo__EFI_PCD_PROTOCOL_CALLBACK_ON_SET,
  &TypeInfo__EFI_PCD_PROTOCOL_CALLBACK,
  &TypeInfo__EFI_PCD_PROTOCOL_CANCEL_CALLBACK,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN,
  &TypeInfo__EFI_PCD_PROTOCOL_GET_NEXT_TOKEN_SPACE,
  &TypeInfo__gGetPcdInfoProtocolGuid,
  &TypeInfo__GET_PCD_INFO_PROTOCOL,
  &TypeInfo__GET_PCD_INFO_PROTOCOL_GET_INFO,
  &TypeInfo__EFI_PCD_INFO_STAR,
  &TypeInfo__EFI_PCD_INFO,
  &TypeInfo__EFI_PCD_TYPE,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__GET_PCD_INFO_PROTOCOL_GET_INFO_EX,
  &TypeInfo__GET_PCD_INFO_PROTOCOL_GET_SKU,
  &TypeInfo__gEfiGetPcdInfoProtocolGuid,
  &TypeInfo__EFI_GET_PCD_INFO_PROTOCOL,
  &TypeInfo__EFI_GET_PCD_INFO_PROTOCOL_GET_INFO,
  &TypeInfo__EFI_GET_PCD_INFO_PROTOCOL_GET_SKU,
  NULL
};