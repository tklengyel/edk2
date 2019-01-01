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

typedef struct _TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid;

TYPE__gEfiPciHostBridgeResourceAllocationProtocolGuid TypeInfo__gEfiPciHostBridgeResourceAllocationProtocolGuid = {
  .TypeName = "gEfiPciHostBridgeResourceAllocationProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciHostBridgeResourceAllocationProtocolGuid,
  .InterfaceStructName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "NotifyPhase",
  .StructFieldTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE",
  .StructFieldName_2 = "GetNextRootBridge",
  .StructFieldTypeName_2 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE",
  .StructFieldName_3 = "GetAllocAttributes",
  .StructFieldTypeName_3 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES",
  .StructFieldName_4 = "StartBusEnumeration",
  .StructFieldTypeName_4 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION",
  .StructFieldName_5 = "SetBusNumbers",
  .StructFieldTypeName_5 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS",
  .StructFieldName_6 = "SubmitResources",
  .StructFieldTypeName_6 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES",
  .StructFieldName_7 = "GetProposedResources",
  .StructFieldTypeName_7 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES",
  .StructFieldName_8 = "PreprocessController",
  .StructFieldTypeName_8 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE"
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


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_STAR;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_STAR TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_STAR = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*),
  .PointedType = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE),
  .EnumValueNum = 10,
  .EnumValueName_1 = "EfiPciHostBridgeBeginEnumeration",
  .EnumValue_1 = EfiPciHostBridgeBeginEnumeration,
  .EnumValueName_2 = "EfiPciHostBridgeBeginBusAllocation",
  .EnumValue_2 = EfiPciHostBridgeBeginBusAllocation,
  .EnumValueName_3 = "EfiPciHostBridgeEndBusAllocation",
  .EnumValue_3 = EfiPciHostBridgeEndBusAllocation,
  .EnumValueName_4 = "EfiPciHostBridgeBeginResourceAllocation",
  .EnumValue_4 = EfiPciHostBridgeBeginResourceAllocation,
  .EnumValueName_5 = "EfiPciHostBridgeAllocateResources",
  .EnumValue_5 = EfiPciHostBridgeAllocateResources,
  .EnumValueName_6 = "EfiPciHostBridgeSetResources",
  .EnumValue_6 = EfiPciHostBridgeSetResources,
  .EnumValueName_7 = "EfiPciHostBridgeFreeResources",
  .EnumValue_7 = EfiPciHostBridgeFreeResources,
  .EnumValueName_8 = "EfiPciHostBridgeEndResourceAllocation",
  .EnumValue_8 = EfiPciHostBridgeEndResourceAllocation,
  .EnumValueName_9 = "EfiPciHostBridgeEndEnumeration",
  .EnumValue_9 = EfiPciHostBridgeEndEnumeration,
  .EnumValueName_10 = "EfiMaxPciHostBridgeEnumerationPhase",
  .EnumValue_10 = EfiMaxPciHostBridgeEnumerationPhase
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE*"
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


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*"
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


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
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


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "void**"
};


typedef struct _TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER{
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
} TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER;

TYPE__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER = {
  .TypeName = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS),
  .StructFieldNum = 5,
  .StructFieldName_1 = "Register",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Function",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Device",
  .StructFieldTypeName_3 = "UINT8",
  .StructFieldName_4 = "Bus",
  .StructFieldTypeName_4 = "UINT8",
  .StructFieldName_5 = "ExtendedRegister",
  .StructFieldTypeName_5 = "UINT32"
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


typedef struct _TYPE__EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
  const CHAR8* EnumValueName_2;
  const UINTN EnumValue_2;
} TYPE__EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE;

TYPE__EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE TypeInfo__EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE = {
  .TypeName = "EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE),
  .EnumValueNum = 2,
  .EnumValueName_1 = "EfiPciBeforeChildBusEnumeration",
  .EnumValue_1 = EfiPciBeforeChildBusEnumeration,
  .EnumValueName_2 = "EfiPciBeforeResourceCollection",
  .EnumValue_2 = EfiPciBeforeResourceCollection
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


typedef struct _TYPE__gEfiPciRootBridgeIoProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiPciRootBridgeIoProtocolGuid;

TYPE__gEfiPciRootBridgeIoProtocolGuid TypeInfo__gEfiPciRootBridgeIoProtocolGuid = {
  .TypeName = "gEfiPciRootBridgeIoProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiPciRootBridgeIoProtocolGuid,
  .InterfaceStructName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL),
  .StructFieldNum = 16,
  .StructFieldName_1 = "ParentHandle",
  .StructFieldTypeName_1 = "EFI_HANDLE",
  .StructFieldName_2 = "PollMem",
  .StructFieldTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM",
  .StructFieldName_3 = "PollIo",
  .StructFieldTypeName_3 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM",
  .StructFieldName_4 = "Mem",
  .StructFieldTypeName_4 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS",
  .StructFieldName_5 = "Io",
  .StructFieldTypeName_5 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS",
  .StructFieldName_6 = "Pci",
  .StructFieldTypeName_6 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS",
  .StructFieldName_7 = "CopyMem",
  .StructFieldTypeName_7 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM",
  .StructFieldName_8 = "Map",
  .StructFieldTypeName_8 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP",
  .StructFieldName_9 = "Unmap",
  .StructFieldTypeName_9 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP",
  .StructFieldName_10 = "AllocateBuffer",
  .StructFieldTypeName_10 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER",
  .StructFieldName_11 = "FreeBuffer",
  .StructFieldTypeName_11 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER",
  .StructFieldName_12 = "Flush",
  .StructFieldTypeName_12 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH",
  .StructFieldName_13 = "GetAttributes",
  .StructFieldTypeName_13 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES",
  .StructFieldName_14 = "SetAttributes",
  .StructFieldTypeName_14 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES",
  .StructFieldName_15 = "Configuration",
  .StructFieldTypeName_15 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION",
  .StructFieldName_16 = "SegmentNumber",
  .StructFieldTypeName_16 = "UINT32"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM{
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
  const UINTN ParameterInOut_7;
  const CHAR8* ParameterTypeName_7;
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 7,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINT64",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT64",
  .ParameterInOut_7 = IO_OUT,
  .ParameterTypeName_7 = "UINT64*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_STAR;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_STAR TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_STAR = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*),
  .PointedType = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH),
  .EnumValueNum = 13,
  .EnumValueName_1 = "EfiPciWidthUint8",
  .EnumValue_1 = EfiPciWidthUint8,
  .EnumValueName_2 = "EfiPciWidthUint16",
  .EnumValue_2 = EfiPciWidthUint16,
  .EnumValueName_3 = "EfiPciWidthUint32",
  .EnumValue_3 = EfiPciWidthUint32,
  .EnumValueName_4 = "EfiPciWidthUint64",
  .EnumValue_4 = EfiPciWidthUint64,
  .EnumValueName_5 = "EfiPciWidthFifoUint8",
  .EnumValue_5 = EfiPciWidthFifoUint8,
  .EnumValueName_6 = "EfiPciWidthFifoUint16",
  .EnumValue_6 = EfiPciWidthFifoUint16,
  .EnumValueName_7 = "EfiPciWidthFifoUint32",
  .EnumValue_7 = EfiPciWidthFifoUint32,
  .EnumValueName_8 = "EfiPciWidthFifoUint64",
  .EnumValue_8 = EfiPciWidthFifoUint64,
  .EnumValueName_9 = "EfiPciWidthFillUint8",
  .EnumValue_9 = EfiPciWidthFillUint8,
  .EnumValueName_10 = "EfiPciWidthFillUint16",
  .EnumValue_10 = EfiPciWidthFillUint16,
  .EnumValueName_11 = "EfiPciWidthFillUint32",
  .EnumValue_11 = EfiPciWidthFillUint32,
  .EnumValueName_12 = "EfiPciWidthFillUint64",
  .EnumValue_12 = EfiPciWidthFillUint64,
  .EnumValueName_13 = "EfiPciWidthMaximum",
  .EnumValue_13 = EfiPciWidthMaximum
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Read",
  .StructFieldTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM",
  .StructFieldName_2 = "Write",
  .StructFieldTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "EFI_PHYSICAL_ADDRESS*",
  .ParameterInOut_6 = IO_OUT,
  .ParameterTypeName_6 = "void**"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION),
  .EnumValueNum = 7,
  .EnumValueName_1 = "EfiPciOperationBusMasterRead",
  .EnumValue_1 = EfiPciOperationBusMasterRead,
  .EnumValueName_2 = "EfiPciOperationBusMasterWrite",
  .EnumValue_2 = EfiPciOperationBusMasterWrite,
  .EnumValueName_3 = "EfiPciOperationBusMasterCommonBuffer",
  .EnumValue_3 = EfiPciOperationBusMasterCommonBuffer,
  .EnumValueName_4 = "EfiPciOperationBusMasterRead64",
  .EnumValue_4 = EfiPciOperationBusMasterRead64,
  .EnumValueName_5 = "EfiPciOperationBusMasterWrite64",
  .EnumValue_5 = EfiPciOperationBusMasterWrite64,
  .EnumValueName_6 = "EfiPciOperationBusMasterCommonBuffer64",
  .EnumValue_6 = EfiPciOperationBusMasterCommonBuffer64,
  .EnumValueName_7 = "EfiPciOperationMaximum",
  .EnumValue_7 = EfiPciOperationMaximum
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


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "void*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 6,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
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


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 1,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT64*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT64*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT64",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT64*"
};


typedef struct _TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION{
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
} TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION;

TYPE__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION = {
  .TypeName = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "void**"
};


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


typedef struct _TYPE__gEfiCpuIo2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiCpuIo2ProtocolGuid;

TYPE__gEfiCpuIo2ProtocolGuid TypeInfo__gEfiCpuIo2ProtocolGuid = {
  .TypeName = "gEfiCpuIo2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiCpuIo2ProtocolGuid,
  .InterfaceStructName = "EFI_CPU_IO2_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEdkiiIoMmuProtocolGuid,
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__gEfiCpuIo2ProtocolGuid,
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
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__gEfiPciHostBridgeResourceAllocationProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiPciHostBridgeResourceAllocationProtocolGuid,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_NOTIFY_PHASE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_STAR,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PHASE,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_NEXT_ROOT_BRIDGE,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_ATTRIBUTES,
  &TypeInfo__UINT64_STAR,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_START_BUS_ENUMERATION,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SET_BUS_NUMBERS,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_SUBMIT_RESOURCES,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GET_PROPOSED_RESOURCES,
  &TypeInfo__EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_PREPROCESS_CONTROLLER,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS,
  &TypeInfo__UINT8,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE,
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__gEfiPciRootBridgeIoProtocolGuid,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_POLL_IO_MEM,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_STAR,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_IO_MEM,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_COPY_MEM,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_MAP,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS_STAR,
  &TypeInfo__EFI_PHYSICAL_ADDRESS,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_UNMAP,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ALLOCATE_BUFFER,
  &TypeInfo__EFI_ALLOCATE_TYPE,
  &TypeInfo__EFI_MEMORY_TYPE,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FREE_BUFFER,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_FLUSH,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GET_ATTRIBUTES,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_SET_ATTRIBUTES,
  &TypeInfo__EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_CONFIGURATION,
  NULL
};