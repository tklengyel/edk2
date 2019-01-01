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

typedef struct _TYPE__gEfiUsb2HcProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiUsb2HcProtocolGuid;

TYPE__gEfiUsb2HcProtocolGuid TypeInfo__gEfiUsb2HcProtocolGuid = {
  .TypeName = "gEfiUsb2HcProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiUsb2HcProtocolGuid,
  .InterfaceStructName = "EFI_USB2_HC_PROTOCOL"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL{
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
} TYPE__EFI_USB2_HC_PROTOCOL;

TYPE__EFI_USB2_HC_PROTOCOL TypeInfo__EFI_USB2_HC_PROTOCOL = {
  .TypeName = "EFI_USB2_HC_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL),
  .StructFieldNum = 15,
  .StructFieldName_1 = "GetCapability",
  .StructFieldTypeName_1 = "EFI_USB2_HC_PROTOCOL_GET_CAPABILITY",
  .StructFieldName_2 = "Reset",
  .StructFieldTypeName_2 = "EFI_USB2_HC_PROTOCOL_RESET",
  .StructFieldName_3 = "GetState",
  .StructFieldTypeName_3 = "EFI_USB2_HC_PROTOCOL_GET_STATE",
  .StructFieldName_4 = "SetState",
  .StructFieldTypeName_4 = "EFI_USB2_HC_PROTOCOL_SET_STATE",
  .StructFieldName_5 = "ControlTransfer",
  .StructFieldTypeName_5 = "EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER",
  .StructFieldName_6 = "BulkTransfer",
  .StructFieldTypeName_6 = "EFI_USB2_HC_PROTOCOL_BULK_TRANSFER",
  .StructFieldName_7 = "AsyncInterruptTransfer",
  .StructFieldTypeName_7 = "EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER",
  .StructFieldName_8 = "SyncInterruptTransfer",
  .StructFieldTypeName_8 = "EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER",
  .StructFieldName_9 = "IsochronousTransfer",
  .StructFieldTypeName_9 = "EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER",
  .StructFieldName_10 = "AsyncIsochronousTransfer",
  .StructFieldTypeName_10 = "EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER",
  .StructFieldName_11 = "GetRootHubPortStatus",
  .StructFieldTypeName_11 = "EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS",
  .StructFieldName_12 = "SetRootHubPortFeature",
  .StructFieldTypeName_12 = "EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE",
  .StructFieldName_13 = "ClearRootHubPortFeature",
  .StructFieldTypeName_13 = "EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE",
  .StructFieldName_14 = "MajorRevision",
  .StructFieldTypeName_14 = "UINT16",
  .StructFieldName_15 = "MinorRevision",
  .StructFieldTypeName_15 = "UINT16"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_GET_CAPABILITY{
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
} TYPE__EFI_USB2_HC_PROTOCOL_GET_CAPABILITY;

TYPE__EFI_USB2_HC_PROTOCOL_GET_CAPABILITY TypeInfo__EFI_USB2_HC_PROTOCOL_GET_CAPABILITY = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_GET_CAPABILITY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_GET_CAPABILITY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "UINT8*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "UINT8*",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "UINT8*"
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


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_USB2_HC_PROTOCOL_STAR;

TYPE__EFI_USB2_HC_PROTOCOL_STAR TypeInfo__EFI_USB2_HC_PROTOCOL_STAR = {
  .TypeName = "EFI_USB2_HC_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL*),
  .PointedType = "EFI_USB2_HC_PROTOCOL"
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


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_RESET{
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
} TYPE__EFI_USB2_HC_PROTOCOL_RESET;

TYPE__EFI_USB2_HC_PROTOCOL_RESET TypeInfo__EFI_USB2_HC_PROTOCOL_RESET = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_RESET",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_RESET),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT16"
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


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_GET_STATE{
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
} TYPE__EFI_USB2_HC_PROTOCOL_GET_STATE;

TYPE__EFI_USB2_HC_PROTOCOL_GET_STATE TypeInfo__EFI_USB2_HC_PROTOCOL_GET_STATE = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_GET_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_GET_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_OUT,
  .ParameterTypeName_2 = "EFI_USB_HC_STATE*"
};


typedef struct _TYPE__EFI_USB_HC_STATE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_USB_HC_STATE_STAR;

TYPE__EFI_USB_HC_STATE_STAR TypeInfo__EFI_USB_HC_STATE_STAR = {
  .TypeName = "EFI_USB_HC_STATE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_USB_HC_STATE*),
  .PointedType = "EFI_USB_HC_STATE"
};


typedef struct _TYPE__EFI_USB_HC_STATE{
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
} TYPE__EFI_USB_HC_STATE;

TYPE__EFI_USB_HC_STATE TypeInfo__EFI_USB_HC_STATE = {
  .TypeName = "EFI_USB_HC_STATE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_USB_HC_STATE),
  .EnumValueNum = 4,
  .EnumValueName_1 = "EfiUsbHcStateHalt",
  .EnumValue_1 = EfiUsbHcStateHalt,
  .EnumValueName_2 = "EfiUsbHcStateOperational",
  .EnumValue_2 = EfiUsbHcStateOperational,
  .EnumValueName_3 = "EfiUsbHcStateSuspend",
  .EnumValue_3 = EfiUsbHcStateSuspend,
  .EnumValueName_4 = "EfiUsbHcStateMaximum",
  .EnumValue_4 = EfiUsbHcStateMaximum
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_SET_STATE{
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
} TYPE__EFI_USB2_HC_PROTOCOL_SET_STATE;

TYPE__EFI_USB2_HC_PROTOCOL_SET_STATE TypeInfo__EFI_USB2_HC_PROTOCOL_SET_STATE = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_SET_STATE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_SET_STATE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_USB_HC_STATE"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
} TYPE__EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 11,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_USB_DEVICE_REQUEST*",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "EFI_USB_DATA_DIRECTION",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void*",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_11 = IO_OUT,
  .ParameterTypeName_11 = "UINT32*"
};


typedef struct _TYPE__EFI_USB_DEVICE_REQUEST_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_USB_DEVICE_REQUEST_STAR;

TYPE__EFI_USB_DEVICE_REQUEST_STAR TypeInfo__EFI_USB_DEVICE_REQUEST_STAR = {
  .TypeName = "EFI_USB_DEVICE_REQUEST*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_USB_DEVICE_REQUEST*),
  .PointedType = "EFI_USB_DEVICE_REQUEST"
};


typedef struct _TYPE__EFI_USB_DEVICE_REQUEST{
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
} TYPE__EFI_USB_DEVICE_REQUEST;

TYPE__EFI_USB_DEVICE_REQUEST TypeInfo__EFI_USB_DEVICE_REQUEST = {
  .TypeName = "EFI_USB_DEVICE_REQUEST",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_USB_DEVICE_REQUEST),
  .StructFieldNum = 5,
  .StructFieldName_1 = "RequestType",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "Request",
  .StructFieldTypeName_2 = "UINT8",
  .StructFieldName_3 = "Value",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "Index",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "Length",
  .StructFieldTypeName_5 = "UINT16"
};


typedef struct _TYPE__EFI_USB_DATA_DIRECTION{
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
} TYPE__EFI_USB_DATA_DIRECTION;

TYPE__EFI_USB_DATA_DIRECTION TypeInfo__EFI_USB_DATA_DIRECTION = {
  .TypeName = "EFI_USB_DATA_DIRECTION",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_USB_DATA_DIRECTION),
  .EnumValueNum = 3,
  .EnumValueName_1 = "EfiUsbDataIn",
  .EnumValue_1 = EfiUsbDataIn,
  .EnumValueName_2 = "EfiUsbDataOut",
  .EnumValue_2 = EfiUsbDataOut,
  .EnumValueName_3 = "EfiUsbNoData",
  .EnumValue_3 = EfiUsbNoData
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


typedef struct _TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR_STAR;

TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR_STAR TypeInfo__EFI_USB2_HC_TRANSACTION_TRANSLATOR_STAR = {
  .TypeName = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_USB2_HC_TRANSACTION_TRANSLATOR*),
  .PointedType = "EFI_USB2_HC_TRANSACTION_TRANSLATOR"
};


typedef struct _TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR;

TYPE__EFI_USB2_HC_TRANSACTION_TRANSLATOR TypeInfo__EFI_USB2_HC_TRANSACTION_TRANSLATOR = {
  .TypeName = "EFI_USB2_HC_TRANSACTION_TRANSLATOR",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_USB2_HC_TRANSACTION_TRANSLATOR),
  .StructFieldNum = 2,
  .StructFieldName_1 = "TranslatorHubAddress",
  .StructFieldTypeName_1 = "UINT8",
  .StructFieldName_2 = "TranslatorPortNumber",
  .StructFieldTypeName_2 = "UINT8"
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


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_BULK_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
  const UINTN ParameterInOut_12;
  const CHAR8* ParameterTypeName_12;
} TYPE__EFI_USB2_HC_PROTOCOL_BULK_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_BULK_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_BULK_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_BULK_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_BULK_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 12,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT8",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void**",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINT8*",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "UINTN",
  .ParameterInOut_11 = IO_IN,
  .ParameterTypeName_11 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_12 = IO_OUT,
  .ParameterTypeName_12 = "UINT32*"
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


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
  const UINTN ParameterInOut_12;
  const CHAR8* ParameterTypeName_12;
} TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 12,
  .ParameterInOut_1 = IO_NULL,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_NULL,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_NULL,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_NULL,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_NULL,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_NULL,
  .ParameterTypeName_6 = "BOOLEAN",
  .ParameterInOut_7 = IO_NULL,
  .ParameterTypeName_7 = "UINT8*",
  .ParameterInOut_8 = IO_NULL,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_NULL,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_NULL,
  .ParameterTypeName_10 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_11 = IO_NULL,
  .ParameterTypeName_11 = "EFI_ASYNC_USB_TRANSFER_CALLBACK",
  .ParameterInOut_12 = IO_NULL,
  .ParameterTypeName_12 = "void*"
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


typedef struct _TYPE__EFI_ASYNC_USB_TRANSFER_CALLBACK{
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
} TYPE__EFI_ASYNC_USB_TRANSFER_CALLBACK;

TYPE__EFI_ASYNC_USB_TRANSFER_CALLBACK TypeInfo__EFI_ASYNC_USB_TRANSFER_CALLBACK = {
  .TypeName = "EFI_ASYNC_USB_TRANSFER_CALLBACK",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_ASYNC_USB_TRANSFER_CALLBACK),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "void*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINTN",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "void*",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT32"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
} TYPE__EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 11,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "void*",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "UINTN*",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINT8*",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "UINTN",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_11 = IO_OUT,
  .ParameterTypeName_11 = "UINT32*"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
} TYPE__EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 10,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT8",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void**",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_10 = IO_OUT,
  .ParameterTypeName_10 = "UINT32*"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER{
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
  const UINTN ParameterInOut_8;
  const CHAR8* ParameterTypeName_8;
  const UINTN ParameterInOut_9;
  const CHAR8* ParameterTypeName_9;
  const UINTN ParameterInOut_10;
  const CHAR8* ParameterTypeName_10;
  const UINTN ParameterInOut_11;
  const CHAR8* ParameterTypeName_11;
} TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER;

TYPE__EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER TypeInfo__EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 11,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINT8",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "UINTN",
  .ParameterInOut_6 = IO_IN,
  .ParameterTypeName_6 = "UINT8",
  .ParameterInOut_7 = IO_IN,
  .ParameterTypeName_7 = "void**",
  .ParameterInOut_8 = IO_IN,
  .ParameterTypeName_8 = "UINTN",
  .ParameterInOut_9 = IO_IN,
  .ParameterTypeName_9 = "EFI_USB2_HC_TRANSACTION_TRANSLATOR*",
  .ParameterInOut_10 = IO_IN,
  .ParameterTypeName_10 = "EFI_ASYNC_USB_TRANSFER_CALLBACK",
  .ParameterInOut_11 = IO_IN,
  .ParameterTypeName_11 = "void*"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS{
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
} TYPE__EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS;

TYPE__EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS TypeInfo__EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "EFI_USB_PORT_STATUS*"
};


typedef struct _TYPE__EFI_USB_PORT_STATUS_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_USB_PORT_STATUS_STAR;

TYPE__EFI_USB_PORT_STATUS_STAR TypeInfo__EFI_USB_PORT_STATUS_STAR = {
  .TypeName = "EFI_USB_PORT_STATUS*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_USB_PORT_STATUS*),
  .PointedType = "EFI_USB_PORT_STATUS"
};


typedef struct _TYPE__EFI_USB_PORT_STATUS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_USB_PORT_STATUS;

TYPE__EFI_USB_PORT_STATUS TypeInfo__EFI_USB_PORT_STATUS = {
  .TypeName = "EFI_USB_PORT_STATUS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_USB_PORT_STATUS),
  .StructFieldNum = 2,
  .StructFieldName_1 = "PortStatus",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "PortChangeStatus",
  .StructFieldTypeName_2 = "UINT16"
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE{
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
} TYPE__EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE;

TYPE__EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE TypeInfo__EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_USB_PORT_FEATURE"
};


typedef struct _TYPE__EFI_USB_PORT_FEATURE{
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
} TYPE__EFI_USB_PORT_FEATURE;

TYPE__EFI_USB_PORT_FEATURE TypeInfo__EFI_USB_PORT_FEATURE = {
  .TypeName = "EFI_USB_PORT_FEATURE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_USB_PORT_FEATURE),
  .EnumValueNum = 10,
  .EnumValueName_1 = "EfiUsbPortEnable",
  .EnumValue_1 = EfiUsbPortEnable,
  .EnumValueName_2 = "EfiUsbPortSuspend",
  .EnumValue_2 = EfiUsbPortSuspend,
  .EnumValueName_3 = "EfiUsbPortReset",
  .EnumValue_3 = EfiUsbPortReset,
  .EnumValueName_4 = "EfiUsbPortPower",
  .EnumValue_4 = EfiUsbPortPower,
  .EnumValueName_5 = "EfiUsbPortOwner",
  .EnumValue_5 = EfiUsbPortOwner,
  .EnumValueName_6 = "EfiUsbPortConnectChange",
  .EnumValue_6 = EfiUsbPortConnectChange,
  .EnumValueName_7 = "EfiUsbPortEnableChange",
  .EnumValue_7 = EfiUsbPortEnableChange,
  .EnumValueName_8 = "EfiUsbPortSuspendChange",
  .EnumValue_8 = EfiUsbPortSuspendChange,
  .EnumValueName_9 = "EfiUsbPortOverCurrentChange",
  .EnumValue_9 = EfiUsbPortOverCurrentChange,
  .EnumValueName_10 = "EfiUsbPortResetChange",
  .EnumValue_10 = EfiUsbPortResetChange
};


typedef struct _TYPE__EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE{
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
} TYPE__EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE;

TYPE__EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE TypeInfo__EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE = {
  .TypeName = "EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_USB2_HC_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_USB_PORT_FEATURE"
};


typedef struct _TYPE__gEfiDriverBindingProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDriverBindingProtocolGuid;

TYPE__gEfiDriverBindingProtocolGuid TypeInfo__gEfiDriverBindingProtocolGuid = {
  .TypeName = "gEfiDriverBindingProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDriverBindingProtocolGuid,
  .InterfaceStructName = "EFI_DRIVER_BINDING_PROTOCOL"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_PROTOCOL{
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
} TYPE__EFI_DRIVER_BINDING_PROTOCOL;

TYPE__EFI_DRIVER_BINDING_PROTOCOL TypeInfo__EFI_DRIVER_BINDING_PROTOCOL = {
  .TypeName = "EFI_DRIVER_BINDING_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_PROTOCOL),
  .StructFieldNum = 6,
  .StructFieldName_1 = "Supported",
  .StructFieldTypeName_1 = "EFI_DRIVER_BINDING_SUPPORTED",
  .StructFieldName_2 = "Start",
  .StructFieldTypeName_2 = "EFI_DRIVER_BINDING_START",
  .StructFieldName_3 = "Stop",
  .StructFieldTypeName_3 = "EFI_DRIVER_BINDING_STOP",
  .StructFieldName_4 = "Version",
  .StructFieldTypeName_4 = "UINT32",
  .StructFieldName_5 = "ImageHandle",
  .StructFieldTypeName_5 = "EFI_HANDLE",
  .StructFieldName_6 = "DriverBindingHandle",
  .StructFieldTypeName_6 = "EFI_HANDLE"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_SUPPORTED{
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
} TYPE__EFI_DRIVER_BINDING_SUPPORTED;

TYPE__EFI_DRIVER_BINDING_SUPPORTED TypeInfo__EFI_DRIVER_BINDING_SUPPORTED = {
  .TypeName = "EFI_DRIVER_BINDING_SUPPORTED",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_SUPPORTED),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR;

TYPE__EFI_DRIVER_BINDING_PROTOCOL_STAR TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR = {
  .TypeName = "EFI_DRIVER_BINDING_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_PROTOCOL*),
  .PointedType = "EFI_DRIVER_BINDING_PROTOCOL"
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


typedef struct _TYPE__EFI_DRIVER_BINDING_START{
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
} TYPE__EFI_DRIVER_BINDING_START;

TYPE__EFI_DRIVER_BINDING_START TypeInfo__EFI_DRIVER_BINDING_START = {
  .TypeName = "EFI_DRIVER_BINDING_START",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_START),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_DEVICE_PATH_PROTOCOL*"
};


typedef struct _TYPE__EFI_DRIVER_BINDING_STOP{
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
} TYPE__EFI_DRIVER_BINDING_STOP;

TYPE__EFI_DRIVER_BINDING_STOP TypeInfo__EFI_DRIVER_BINDING_STOP = {
  .TypeName = "EFI_DRIVER_BINDING_STOP",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_DRIVER_BINDING_STOP),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_DRIVER_BINDING_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINTN",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_HANDLE*"
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


typedef struct _TYPE__gEfiComponentName2ProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiComponentName2ProtocolGuid;

TYPE__gEfiComponentName2ProtocolGuid TypeInfo__gEfiComponentName2ProtocolGuid = {
  .TypeName = "gEfiComponentName2ProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiComponentName2ProtocolGuid,
  .InterfaceStructName = "EFI_COMPONENT_NAME2_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_PROTOCOL{
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
} TYPE__EFI_COMPONENT_NAME2_PROTOCOL;

TYPE__EFI_COMPONENT_NAME2_PROTOCOL TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL = {
  .TypeName = "EFI_COMPONENT_NAME2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetDriverName",
  .StructFieldTypeName_1 = "EFI_COMPONENT_NAME2_GET_DRIVER_NAME",
  .StructFieldName_2 = "GetControllerName",
  .StructFieldTypeName_2 = "EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME",
  .StructFieldName_3 = "SupportedLanguages",
  .StructFieldTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME{
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
} TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME;

TYPE__EFI_COMPONENT_NAME2_GET_DRIVER_NAME TypeInfo__EFI_COMPONENT_NAME2_GET_DRIVER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME2_GET_DRIVER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_GET_DRIVER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR;

TYPE__EFI_COMPONENT_NAME2_PROTOCOL_STAR TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL_STAR = {
  .TypeName = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_PROTOCOL*),
  .PointedType = "EFI_COMPONENT_NAME2_PROTOCOL"
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


typedef struct _TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME{
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
} TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME;

TYPE__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "CHAR16**"
};


typedef struct _TYPE__gEfiComponentNameProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiComponentNameProtocolGuid;

TYPE__gEfiComponentNameProtocolGuid TypeInfo__gEfiComponentNameProtocolGuid = {
  .TypeName = "gEfiComponentNameProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiComponentNameProtocolGuid,
  .InterfaceStructName = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_PROTOCOL{
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
} TYPE__EFI_COMPONENT_NAME_PROTOCOL;

TYPE__EFI_COMPONENT_NAME_PROTOCOL TypeInfo__EFI_COMPONENT_NAME_PROTOCOL = {
  .TypeName = "EFI_COMPONENT_NAME_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_PROTOCOL),
  .StructFieldNum = 3,
  .StructFieldName_1 = "GetDriverName",
  .StructFieldTypeName_1 = "EFI_COMPONENT_NAME_GET_DRIVER_NAME",
  .StructFieldName_2 = "GetControllerName",
  .StructFieldTypeName_2 = "EFI_COMPONENT_NAME_GET_CONTROLLER_NAME",
  .StructFieldName_3 = "SupportedLanguages",
  .StructFieldTypeName_3 = "CHAR8*"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME{
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
} TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME;

TYPE__EFI_COMPONENT_NAME_GET_DRIVER_NAME TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME_GET_DRIVER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_GET_DRIVER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "CHAR8*",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "CHAR16**"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR;

TYPE__EFI_COMPONENT_NAME_PROTOCOL_STAR TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR = {
  .TypeName = "EFI_COMPONENT_NAME_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_PROTOCOL*),
  .PointedType = "EFI_COMPONENT_NAME_PROTOCOL"
};


typedef struct _TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME{
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
} TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME;

TYPE__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME = {
  .TypeName = "EFI_COMPONENT_NAME_GET_CONTROLLER_NAME",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_COMPONENT_NAME_GET_CONTROLLER_NAME),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_COMPONENT_NAME_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_HANDLE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "EFI_HANDLE",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "CHAR8*",
  .ParameterInOut_5 = IO_OUT,
  .ParameterTypeName_5 = "CHAR16**"
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

void *TypeInfoList_OpenProtocol[] = {
  &TypeInfo__gEfiDevicePathProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
  &TypeInfo__gEfiUsb2HcProtocolGuid,
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
  &TypeInfo__gEfiUsb2HcProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiUsb2HcProtocolGuid,
  &TypeInfo__EFI_USB2_HC_PROTOCOL,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_GET_CAPABILITY,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_STAR,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_RESET,
  &TypeInfo__UINT16,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_GET_STATE,
  &TypeInfo__EFI_USB_HC_STATE_STAR,
  &TypeInfo__EFI_USB_HC_STATE,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_SET_STATE,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_CONTROL_TRANSFER,
  &TypeInfo__EFI_USB_DEVICE_REQUEST_STAR,
  &TypeInfo__EFI_USB_DEVICE_REQUEST,
  &TypeInfo__EFI_USB_DATA_DIRECTION,
  &TypeInfo__void_STAR,
  &TypeInfo__UINTN_STAR,
  &TypeInfo__EFI_USB2_HC_TRANSACTION_TRANSLATOR_STAR,
  &TypeInfo__EFI_USB2_HC_TRANSACTION_TRANSLATOR,
  &TypeInfo__UINT32_STAR,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_BULK_TRANSFER,
  &TypeInfo__void_STAR_STAR,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_ASYNC_INTERRUPT_TRANSFER,
  &TypeInfo__BOOLEAN,
  &TypeInfo__EFI_ASYNC_USB_TRANSFER_CALLBACK,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_SYNC_INTERRUPT_TRANSFER,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_ISOCHRONOUS_TRANSFER,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_ASYNC_ISOCHRONOUS_TRANSFER,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_GET_ROOTHUB_PORT_STATUS,
  &TypeInfo__EFI_USB_PORT_STATUS_STAR,
  &TypeInfo__EFI_USB_PORT_STATUS,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_SET_ROOTHUB_PORT_FEATURE,
  &TypeInfo__EFI_USB_PORT_FEATURE,
  &TypeInfo__EFI_USB2_HC_PROTOCOL_CLEAR_ROOTHUB_PORT_FEATURE,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL_STAR,
  &TypeInfo__EFI_DEVICE_PATH_PROTOCOL,
  &TypeInfo__UINT8_ARRAY_2,
  &TypeInfo__EFI_DRIVER_BINDING_START,
  &TypeInfo__EFI_DRIVER_BINDING_STOP,
  &TypeInfo__EFI_HANDLE_STAR,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME2_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME2_PROTOCOL_STAR,
  &TypeInfo__CHAR8_STAR,
  &TypeInfo__CHAR8,
  &TypeInfo__CHAR16_STAR_STAR,
  &TypeInfo__CHAR16_STAR,
  &TypeInfo__CHAR16,
  &TypeInfo__EFI_COMPONENT_NAME2_GET_CONTROLLER_NAME,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL,
  &TypeInfo__EFI_COMPONENT_NAME_GET_DRIVER_NAME,
  &TypeInfo__EFI_COMPONENT_NAME_PROTOCOL_STAR,
  &TypeInfo__EFI_COMPONENT_NAME_GET_CONTROLLER_NAME,
  NULL
};