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

typedef struct _TYPE__gEfiIdeControllerInitProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiIdeControllerInitProtocolGuid;

TYPE__gEfiIdeControllerInitProtocolGuid TypeInfo__gEfiIdeControllerInitProtocolGuid = {
  .TypeName = "gEfiIdeControllerInitProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiIdeControllerInitProtocolGuid,
  .InterfaceStructName = "EFI_IDE_CONTROLLER_INIT_PROTOCOL"
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL{
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
} TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL;

TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL TypeInfo__EFI_IDE_CONTROLLER_INIT_PROTOCOL = {
  .TypeName = "EFI_IDE_CONTROLLER_INIT_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_INIT_PROTOCOL),
  .StructFieldNum = 8,
  .StructFieldName_1 = "GetChannelInfo",
  .StructFieldTypeName_1 = "EFI_IDE_CONTROLLER_GET_CHANNEL_INFO",
  .StructFieldName_2 = "NotifyPhase",
  .StructFieldTypeName_2 = "EFI_IDE_CONTROLLER_NOTIFY_PHASE",
  .StructFieldName_3 = "SubmitData",
  .StructFieldTypeName_3 = "EFI_IDE_CONTROLLER_SUBMIT_DATA",
  .StructFieldName_4 = "DisqualifyMode",
  .StructFieldTypeName_4 = "EFI_IDE_CONTROLLER_DISQUALIFY_MODE",
  .StructFieldName_5 = "CalculateMode",
  .StructFieldTypeName_5 = "EFI_IDE_CONTROLLER_CALCULATE_MODE",
  .StructFieldName_6 = "SetTiming",
  .StructFieldTypeName_6 = "EFI_IDE_CONTROLLER_SET_TIMING",
  .StructFieldName_7 = "EnumAll",
  .StructFieldTypeName_7 = "BOOLEAN",
  .StructFieldName_8 = "ChannelCount",
  .StructFieldTypeName_8 = "UINT8"
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_GET_CHANNEL_INFO{
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
} TYPE__EFI_IDE_CONTROLLER_GET_CHANNEL_INFO;

TYPE__EFI_IDE_CONTROLLER_GET_CHANNEL_INFO TypeInfo__EFI_IDE_CONTROLLER_GET_CHANNEL_INFO = {
  .TypeName = "EFI_IDE_CONTROLLER_GET_CHANNEL_INFO",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_GET_CHANNEL_INFO),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_OUT,
  .ParameterTypeName_3 = "BOOLEAN*",
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


typedef struct _TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL_STAR;

TYPE__EFI_IDE_CONTROLLER_INIT_PROTOCOL_STAR TypeInfo__EFI_IDE_CONTROLLER_INIT_PROTOCOL_STAR = {
  .TypeName = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_INIT_PROTOCOL*),
  .PointedType = "EFI_IDE_CONTROLLER_INIT_PROTOCOL"
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


typedef struct _TYPE__EFI_IDE_CONTROLLER_NOTIFY_PHASE{
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
} TYPE__EFI_IDE_CONTROLLER_NOTIFY_PHASE;

TYPE__EFI_IDE_CONTROLLER_NOTIFY_PHASE TypeInfo__EFI_IDE_CONTROLLER_NOTIFY_PHASE = {
  .TypeName = "EFI_IDE_CONTROLLER_NOTIFY_PHASE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_NOTIFY_PHASE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 3,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_IDE_CONTROLLER_ENUM_PHASE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8"
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_ENUM_PHASE{
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
} TYPE__EFI_IDE_CONTROLLER_ENUM_PHASE;

TYPE__EFI_IDE_CONTROLLER_ENUM_PHASE TypeInfo__EFI_IDE_CONTROLLER_ENUM_PHASE = {
  .TypeName = "EFI_IDE_CONTROLLER_ENUM_PHASE",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_ENUM_PHASE),
  .EnumValueNum = 8,
  .EnumValueName_1 = "EfiIdeBeforeChannelEnumeration",
  .EnumValue_1 = EfiIdeBeforeChannelEnumeration,
  .EnumValueName_2 = "EfiIdeAfterChannelEnumeration",
  .EnumValue_2 = EfiIdeAfterChannelEnumeration,
  .EnumValueName_3 = "EfiIdeBeforeChannelReset",
  .EnumValue_3 = EfiIdeBeforeChannelReset,
  .EnumValueName_4 = "EfiIdeAfterChannelReset",
  .EnumValue_4 = EfiIdeAfterChannelReset,
  .EnumValueName_5 = "EfiIdeBusBeforeDevicePresenceDetection",
  .EnumValue_5 = EfiIdeBusBeforeDevicePresenceDetection,
  .EnumValueName_6 = "EfiIdeBusAfterDevicePresenceDetection",
  .EnumValue_6 = EfiIdeBusAfterDevicePresenceDetection,
  .EnumValueName_7 = "EfiIdeResetMode",
  .EnumValue_7 = EfiIdeResetMode,
  .EnumValueName_8 = "EfiIdeBusPhaseMaximum",
  .EnumValue_8 = EfiIdeBusPhaseMaximum
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_SUBMIT_DATA{
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
} TYPE__EFI_IDE_CONTROLLER_SUBMIT_DATA;

TYPE__EFI_IDE_CONTROLLER_SUBMIT_DATA TypeInfo__EFI_IDE_CONTROLLER_SUBMIT_DATA = {
  .TypeName = "EFI_IDE_CONTROLLER_SUBMIT_DATA",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_SUBMIT_DATA),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_IDENTIFY_DATA*"
};


typedef struct _TYPE__EFI_IDENTIFY_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_IDENTIFY_DATA_STAR;

TYPE__EFI_IDENTIFY_DATA_STAR TypeInfo__EFI_IDENTIFY_DATA_STAR = {
  .TypeName = "EFI_IDENTIFY_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_IDENTIFY_DATA*),
  .PointedType = "EFI_IDENTIFY_DATA"
};


typedef struct _TYPE__EFI_IDENTIFY_DATA{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_IDENTIFY_DATA;

TYPE__EFI_IDENTIFY_DATA TypeInfo__EFI_IDENTIFY_DATA = {
  .TypeName = "EFI_IDENTIFY_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_IDENTIFY_DATA),
  .StructFieldNum = 2,
  .StructFieldName_1 = "AtaData",
  .StructFieldTypeName_1 = "EFI_ATA_IDENTIFY_DATA",
  .StructFieldName_2 = "AtapiData",
  .StructFieldTypeName_2 = "EFI_ATAPI_IDENTIFY_DATA"
};


typedef struct _TYPE__EFI_ATA_IDENTIFY_DATA{
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
} TYPE__EFI_ATA_IDENTIFY_DATA;

TYPE__EFI_ATA_IDENTIFY_DATA TypeInfo__EFI_ATA_IDENTIFY_DATA = {
  .TypeName = "EFI_ATA_IDENTIFY_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ATA_IDENTIFY_DATA),
  .StructFieldNum = 101,
  .StructFieldName_1 = "config",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "obsolete_1",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "specific_config",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "obsolete_3",
  .StructFieldTypeName_4 = "UINT16",
  .StructFieldName_5 = "retired_4_5",
  .StructFieldTypeName_5 = "UINT16[2]",
  .StructFieldName_6 = "obsolete_6",
  .StructFieldTypeName_6 = "UINT16",
  .StructFieldName_7 = "cfa_reserved_7_8",
  .StructFieldTypeName_7 = "UINT16[2]",
  .StructFieldName_8 = "retired_9",
  .StructFieldTypeName_8 = "UINT16",
  .StructFieldName_9 = "SerialNo",
  .StructFieldTypeName_9 = "CHAR8[20]",
  .StructFieldName_10 = "retired_20_21",
  .StructFieldTypeName_10 = "UINT16[2]",
  .StructFieldName_11 = "obsolete_22",
  .StructFieldTypeName_11 = "UINT16",
  .StructFieldName_12 = "FirmwareVer",
  .StructFieldTypeName_12 = "CHAR8[8]",
  .StructFieldName_13 = "ModelName",
  .StructFieldTypeName_13 = "CHAR8[40]",
  .StructFieldName_14 = "multi_sector_cmd_max_sct_cnt",
  .StructFieldTypeName_14 = "UINT16",
  .StructFieldName_15 = "trusted_computing_support",
  .StructFieldTypeName_15 = "UINT16",
  .StructFieldName_16 = "capabilities_49",
  .StructFieldTypeName_16 = "UINT16",
  .StructFieldName_17 = "capabilities_50",
  .StructFieldTypeName_17 = "UINT16",
  .StructFieldName_18 = "obsolete_51_52",
  .StructFieldTypeName_18 = "UINT16[2]",
  .StructFieldName_19 = "field_validity",
  .StructFieldTypeName_19 = "UINT16",
  .StructFieldName_20 = "obsolete_54_58",
  .StructFieldTypeName_20 = "UINT16[5]",
  .StructFieldName_21 = "multi_sector_setting",
  .StructFieldTypeName_21 = "UINT16",
  .StructFieldName_22 = "user_addressable_sectors_lo",
  .StructFieldTypeName_22 = "UINT16",
  .StructFieldName_23 = "user_addressable_sectors_hi",
  .StructFieldTypeName_23 = "UINT16",
  .StructFieldName_24 = "obsolete_62",
  .StructFieldTypeName_24 = "UINT16",
  .StructFieldName_25 = "multi_word_dma_mode",
  .StructFieldTypeName_25 = "UINT16",
  .StructFieldName_26 = "advanced_pio_modes",
  .StructFieldTypeName_26 = "UINT16",
  .StructFieldName_27 = "min_multi_word_dma_cycle_time",
  .StructFieldTypeName_27 = "UINT16",
  .StructFieldName_28 = "rec_multi_word_dma_cycle_time",
  .StructFieldTypeName_28 = "UINT16",
  .StructFieldName_29 = "min_pio_cycle_time_without_flow_control",
  .StructFieldTypeName_29 = "UINT16",
  .StructFieldName_30 = "min_pio_cycle_time_with_flow_control",
  .StructFieldTypeName_30 = "UINT16",
  .StructFieldName_31 = "additional_supported",
  .StructFieldTypeName_31 = "UINT16",
  .StructFieldName_32 = "reserved_70",
  .StructFieldTypeName_32 = "UINT16",
  .StructFieldName_33 = "reserved_71_74",
  .StructFieldTypeName_33 = "UINT16[4]",
  .StructFieldName_34 = "queue_depth",
  .StructFieldTypeName_34 = "UINT16",
  .StructFieldName_35 = "serial_ata_capabilities",
  .StructFieldTypeName_35 = "UINT16",
  .StructFieldName_36 = "reserved_77",
  .StructFieldTypeName_36 = "UINT16",
  .StructFieldName_37 = "serial_ata_features_supported",
  .StructFieldTypeName_37 = "UINT16",
  .StructFieldName_38 = "serial_ata_features_enabled",
  .StructFieldTypeName_38 = "UINT16",
  .StructFieldName_39 = "major_version_no",
  .StructFieldTypeName_39 = "UINT16",
  .StructFieldName_40 = "minor_version_no",
  .StructFieldTypeName_40 = "UINT16",
  .StructFieldName_41 = "command_set_supported_82",
  .StructFieldTypeName_41 = "UINT16",
  .StructFieldName_42 = "command_set_supported_83",
  .StructFieldTypeName_42 = "UINT16",
  .StructFieldName_43 = "command_set_feature_extn",
  .StructFieldTypeName_43 = "UINT16",
  .StructFieldName_44 = "command_set_feature_enb_85",
  .StructFieldTypeName_44 = "UINT16",
  .StructFieldName_45 = "command_set_feature_enb_86",
  .StructFieldTypeName_45 = "UINT16",
  .StructFieldName_46 = "command_set_feature_default",
  .StructFieldTypeName_46 = "UINT16",
  .StructFieldName_47 = "ultra_dma_mode",
  .StructFieldTypeName_47 = "UINT16",
  .StructFieldName_48 = "time_for_security_erase_unit",
  .StructFieldTypeName_48 = "UINT16",
  .StructFieldName_49 = "time_for_enhanced_security_erase_unit",
  .StructFieldTypeName_49 = "UINT16",
  .StructFieldName_50 = "advanced_power_management_level",
  .StructFieldTypeName_50 = "UINT16",
  .StructFieldName_51 = "master_password_identifier",
  .StructFieldTypeName_51 = "UINT16",
  .StructFieldName_52 = "hardware_configuration_test_result",
  .StructFieldTypeName_52 = "UINT16",
  .StructFieldName_53 = "obsolete_94",
  .StructFieldTypeName_53 = "UINT16",
  .StructFieldName_54 = "stream_minimum_request_size",
  .StructFieldTypeName_54 = "UINT16",
  .StructFieldName_55 = "streaming_transfer_time_for_dma",
  .StructFieldTypeName_55 = "UINT16",
  .StructFieldName_56 = "streaming_access_latency_for_dma_and_pio",
  .StructFieldTypeName_56 = "UINT16",
  .StructFieldName_57 = "streaming_performance_granularity",
  .StructFieldTypeName_57 = "UINT16[2]",
  .StructFieldName_58 = "maximum_lba_for_48bit_addressing",
  .StructFieldTypeName_58 = "UINT16[4]",
  .StructFieldName_59 = "streaming_transfer_time_for_pio",
  .StructFieldTypeName_59 = "UINT16",
  .StructFieldName_60 = "max_no_of_512byte_blocks_per_data_set_cmd",
  .StructFieldTypeName_60 = "UINT16",
  .StructFieldName_61 = "phy_logic_sector_support",
  .StructFieldTypeName_61 = "UINT16",
  .StructFieldName_62 = "interseek_delay_for_iso7779",
  .StructFieldTypeName_62 = "UINT16",
  .StructFieldName_63 = "world_wide_name",
  .StructFieldTypeName_63 = "UINT16[4]",
  .StructFieldName_64 = "reserved_for_128bit_wwn_112_115",
  .StructFieldTypeName_64 = "UINT16[4]",
  .StructFieldName_65 = "reserved_for_technical_report",
  .StructFieldTypeName_65 = "UINT16",
  .StructFieldName_66 = "logic_sector_size_lo",
  .StructFieldTypeName_66 = "UINT16",
  .StructFieldName_67 = "logic_sector_size_hi",
  .StructFieldTypeName_67 = "UINT16",
  .StructFieldName_68 = "features_and_command_sets_supported_ext",
  .StructFieldTypeName_68 = "UINT16",
  .StructFieldName_69 = "features_and_command_sets_enabled_ext",
  .StructFieldTypeName_69 = "UINT16",
  .StructFieldName_70 = "reserved_121_126",
  .StructFieldTypeName_70 = "UINT16[6]",
  .StructFieldName_71 = "obsolete_127",
  .StructFieldTypeName_71 = "UINT16",
  .StructFieldName_72 = "security_status",
  .StructFieldTypeName_72 = "UINT16",
  .StructFieldName_73 = "vendor_specific_129_159",
  .StructFieldTypeName_73 = "UINT16[31]",
  .StructFieldName_74 = "cfa_power_mode",
  .StructFieldTypeName_74 = "UINT16",
  .StructFieldName_75 = "reserved_for_compactflash_161_167",
  .StructFieldTypeName_75 = "UINT16[7]",
  .StructFieldName_76 = "device_nominal_form_factor",
  .StructFieldTypeName_76 = "UINT16",
  .StructFieldName_77 = "is_data_set_cmd_supported",
  .StructFieldTypeName_77 = "UINT16",
  .StructFieldName_78 = "additional_product_identifier",
  .StructFieldTypeName_78 = "CHAR8[8]",
  .StructFieldName_79 = "reserved_174_175",
  .StructFieldTypeName_79 = "UINT16[2]",
  .StructFieldName_80 = "media_serial_number",
  .StructFieldTypeName_80 = "CHAR8[60]",
  .StructFieldName_81 = "sct_command_transport",
  .StructFieldTypeName_81 = "UINT16",
  .StructFieldName_82 = "reserved_207_208",
  .StructFieldTypeName_82 = "UINT16[2]",
  .StructFieldName_83 = "alignment_logic_in_phy_blocks",
  .StructFieldTypeName_83 = "UINT16",
  .StructFieldName_84 = "write_read_verify_sector_count_mode3",
  .StructFieldTypeName_84 = "UINT16[2]",
  .StructFieldName_85 = "verify_sector_count_mode2",
  .StructFieldTypeName_85 = "UINT16[2]",
  .StructFieldName_86 = "nv_cache_capabilities",
  .StructFieldTypeName_86 = "UINT16",
  .StructFieldName_87 = "nv_cache_size_in_logical_block_lsw",
  .StructFieldTypeName_87 = "UINT16",
  .StructFieldName_88 = "nv_cache_size_in_logical_block_msw",
  .StructFieldTypeName_88 = "UINT16",
  .StructFieldName_89 = "nominal_media_rotation_rate",
  .StructFieldTypeName_89 = "UINT16",
  .StructFieldName_90 = "reserved_218",
  .StructFieldTypeName_90 = "UINT16",
  .StructFieldName_91 = "nv_cache_options",
  .StructFieldTypeName_91 = "UINT16",
  .StructFieldName_92 = "write_read_verify_mode",
  .StructFieldTypeName_92 = "UINT16",
  .StructFieldName_93 = "reserved_221",
  .StructFieldTypeName_93 = "UINT16",
  .StructFieldName_94 = "transport_major_revision_number",
  .StructFieldTypeName_94 = "UINT16",
  .StructFieldName_95 = "transport_minor_revision_number",
  .StructFieldTypeName_95 = "UINT16",
  .StructFieldName_96 = "reserved_224_229",
  .StructFieldTypeName_96 = "UINT16[6]",
  .StructFieldName_97 = "extended_no_of_addressable_sectors",
  .StructFieldTypeName_97 = "UINT64",
  .StructFieldName_98 = "min_number_per_download_microcode_mode3",
  .StructFieldTypeName_98 = "UINT16",
  .StructFieldName_99 = "max_number_per_download_microcode_mode3",
  .StructFieldTypeName_99 = "UINT16",
  .StructFieldName_100 = "reserved_236_254",
  .StructFieldTypeName_100 = "UINT16[19]",
  .StructFieldName_101 = "integrity_word",
  .StructFieldTypeName_101 = "UINT16"
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


typedef struct _TYPE__UINT16_ARRAY_2{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_2;

TYPE__UINT16_ARRAY_2 TypeInfo__UINT16_ARRAY_2 = {
  .TypeName = "UINT16[2]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[2]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__CHAR8_ARRAY_20{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_20;

TYPE__CHAR8_ARRAY_20 TypeInfo__CHAR8_ARRAY_20 = {
  .TypeName = "CHAR8[20]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[20]),
  .ElementTypeName = "CHAR8"
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


typedef struct _TYPE__CHAR8_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_8;

TYPE__CHAR8_ARRAY_8 TypeInfo__CHAR8_ARRAY_8 = {
  .TypeName = "CHAR8[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[8]),
  .ElementTypeName = "CHAR8"
};


typedef struct _TYPE__CHAR8_ARRAY_40{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_40;

TYPE__CHAR8_ARRAY_40 TypeInfo__CHAR8_ARRAY_40 = {
  .TypeName = "CHAR8[40]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[40]),
  .ElementTypeName = "CHAR8"
};


typedef struct _TYPE__UINT16_ARRAY_5{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_5;

TYPE__UINT16_ARRAY_5 TypeInfo__UINT16_ARRAY_5 = {
  .TypeName = "UINT16[5]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[5]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_4{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_4;

TYPE__UINT16_ARRAY_4 TypeInfo__UINT16_ARRAY_4 = {
  .TypeName = "UINT16[4]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[4]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_6{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_6;

TYPE__UINT16_ARRAY_6 TypeInfo__UINT16_ARRAY_6 = {
  .TypeName = "UINT16[6]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[6]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_31{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_31;

TYPE__UINT16_ARRAY_31 TypeInfo__UINT16_ARRAY_31 = {
  .TypeName = "UINT16[31]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[31]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_7{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_7;

TYPE__UINT16_ARRAY_7 TypeInfo__UINT16_ARRAY_7 = {
  .TypeName = "UINT16[7]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[7]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__CHAR8_ARRAY_60{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__CHAR8_ARRAY_60;

TYPE__CHAR8_ARRAY_60 TypeInfo__CHAR8_ARRAY_60 = {
  .TypeName = "CHAR8[60]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(CHAR8[60]),
  .ElementTypeName = "CHAR8"
};


typedef struct _TYPE__UINT16_ARRAY_19{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_19;

TYPE__UINT16_ARRAY_19 TypeInfo__UINT16_ARRAY_19 = {
  .TypeName = "UINT16[19]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[19]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__EFI_ATAPI_IDENTIFY_DATA{
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
} TYPE__EFI_ATAPI_IDENTIFY_DATA;

TYPE__EFI_ATAPI_IDENTIFY_DATA TypeInfo__EFI_ATAPI_IDENTIFY_DATA = {
  .TypeName = "EFI_ATAPI_IDENTIFY_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ATAPI_IDENTIFY_DATA),
  .StructFieldNum = 62,
  .StructFieldName_1 = "config",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "reserved_1",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "specific_config",
  .StructFieldTypeName_3 = "UINT16",
  .StructFieldName_4 = "reserved_3_9",
  .StructFieldTypeName_4 = "UINT16[7]",
  .StructFieldName_5 = "SerialNo",
  .StructFieldTypeName_5 = "CHAR8[20]",
  .StructFieldName_6 = "reserved_20_22",
  .StructFieldTypeName_6 = "UINT16[3]",
  .StructFieldName_7 = "FirmwareVer",
  .StructFieldTypeName_7 = "CHAR8[8]",
  .StructFieldName_8 = "ModelName",
  .StructFieldTypeName_8 = "CHAR8[40]",
  .StructFieldName_9 = "reserved_47_48",
  .StructFieldTypeName_9 = "UINT16[2]",
  .StructFieldName_10 = "capabilities_49",
  .StructFieldTypeName_10 = "UINT16",
  .StructFieldName_11 = "capabilities_50",
  .StructFieldTypeName_11 = "UINT16",
  .StructFieldName_12 = "obsolete_51",
  .StructFieldTypeName_12 = "UINT16",
  .StructFieldName_13 = "reserved_52",
  .StructFieldTypeName_13 = "UINT16",
  .StructFieldName_14 = "field_validity",
  .StructFieldTypeName_14 = "UINT16",
  .StructFieldName_15 = "reserved_54_61",
  .StructFieldTypeName_15 = "UINT16[8]",
  .StructFieldName_16 = "dma_dir",
  .StructFieldTypeName_16 = "UINT16",
  .StructFieldName_17 = "multi_word_dma_mode",
  .StructFieldTypeName_17 = "UINT16",
  .StructFieldName_18 = "advanced_pio_modes",
  .StructFieldTypeName_18 = "UINT16",
  .StructFieldName_19 = "min_multi_word_dma_cycle_time",
  .StructFieldTypeName_19 = "UINT16",
  .StructFieldName_20 = "rec_multi_word_dma_cycle_time",
  .StructFieldTypeName_20 = "UINT16",
  .StructFieldName_21 = "min_pio_cycle_time_without_flow_control",
  .StructFieldTypeName_21 = "UINT16",
  .StructFieldName_22 = "min_pio_cycle_time_with_flow_control",
  .StructFieldTypeName_22 = "UINT16",
  .StructFieldName_23 = "reserved_69_70",
  .StructFieldTypeName_23 = "UINT16[2]",
  .StructFieldName_24 = "obsolete_71_72",
  .StructFieldTypeName_24 = "UINT16[2]",
  .StructFieldName_25 = "reserved_73_74",
  .StructFieldTypeName_25 = "UINT16[2]",
  .StructFieldName_26 = "obsolete_75",
  .StructFieldTypeName_26 = "UINT16",
  .StructFieldName_27 = "serial_ata_capabilities",
  .StructFieldTypeName_27 = "UINT16",
  .StructFieldName_28 = "reserved_77",
  .StructFieldTypeName_28 = "UINT16",
  .StructFieldName_29 = "serial_ata_features_supported",
  .StructFieldTypeName_29 = "UINT16",
  .StructFieldName_30 = "serial_ata_features_enabled",
  .StructFieldTypeName_30 = "UINT16",
  .StructFieldName_31 = "major_version_no",
  .StructFieldTypeName_31 = "UINT16",
  .StructFieldName_32 = "minor_version_no",
  .StructFieldTypeName_32 = "UINT16",
  .StructFieldName_33 = "cmd_set_support_82",
  .StructFieldTypeName_33 = "UINT16",
  .StructFieldName_34 = "cmd_set_support_83",
  .StructFieldTypeName_34 = "UINT16",
  .StructFieldName_35 = "cmd_feature_support",
  .StructFieldTypeName_35 = "UINT16",
  .StructFieldName_36 = "cmd_feature_enable_85",
  .StructFieldTypeName_36 = "UINT16",
  .StructFieldName_37 = "cmd_feature_enable_86",
  .StructFieldTypeName_37 = "UINT16",
  .StructFieldName_38 = "cmd_feature_default",
  .StructFieldTypeName_38 = "UINT16",
  .StructFieldName_39 = "ultra_dma_select",
  .StructFieldTypeName_39 = "UINT16",
  .StructFieldName_40 = "time_required_for_sec_erase",
  .StructFieldTypeName_40 = "UINT16",
  .StructFieldName_41 = "time_required_for_enhanced_sec_erase",
  .StructFieldTypeName_41 = "UINT16",
  .StructFieldName_42 = "advanced_power_management_level",
  .StructFieldTypeName_42 = "UINT16",
  .StructFieldName_43 = "master_pwd_revison_code",
  .StructFieldTypeName_43 = "UINT16",
  .StructFieldName_44 = "hardware_reset_result",
  .StructFieldTypeName_44 = "UINT16",
  .StructFieldName_45 = "obsolete_94",
  .StructFieldTypeName_45 = "UINT16",
  .StructFieldName_46 = "reserved_95_107",
  .StructFieldTypeName_46 = "UINT16[13]",
  .StructFieldName_47 = "world_wide_name",
  .StructFieldTypeName_47 = "UINT16[4]",
  .StructFieldName_48 = "reserved_for_128bit_wwn_112_115",
  .StructFieldTypeName_48 = "UINT16[4]",
  .StructFieldName_49 = "reserved_116_118",
  .StructFieldTypeName_49 = "UINT16[3]",
  .StructFieldName_50 = "command_and_feature_sets_supported",
  .StructFieldTypeName_50 = "UINT16",
  .StructFieldName_51 = "command_and_feature_sets_supported_enabled",
  .StructFieldTypeName_51 = "UINT16",
  .StructFieldName_52 = "reserved_121_124",
  .StructFieldTypeName_52 = "UINT16[4]",
  .StructFieldName_53 = "atapi_byte_count_0_behavior",
  .StructFieldTypeName_53 = "UINT16",
  .StructFieldName_54 = "obsolete_126_127",
  .StructFieldTypeName_54 = "UINT16[2]",
  .StructFieldName_55 = "security_status",
  .StructFieldTypeName_55 = "UINT16",
  .StructFieldName_56 = "reserved_129_159",
  .StructFieldTypeName_56 = "UINT16[31]",
  .StructFieldName_57 = "cfa_reserved_160_175",
  .StructFieldTypeName_57 = "UINT16[16]",
  .StructFieldName_58 = "reserved_176_221",
  .StructFieldTypeName_58 = "UINT16[46]",
  .StructFieldName_59 = "transport_major_version",
  .StructFieldTypeName_59 = "UINT16",
  .StructFieldName_60 = "transport_minor_version",
  .StructFieldTypeName_60 = "UINT16",
  .StructFieldName_61 = "reserved_224_254",
  .StructFieldTypeName_61 = "UINT16[31]",
  .StructFieldName_62 = "integrity_word",
  .StructFieldTypeName_62 = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_3{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_3;

TYPE__UINT16_ARRAY_3 TypeInfo__UINT16_ARRAY_3 = {
  .TypeName = "UINT16[3]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[3]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_8{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_8;

TYPE__UINT16_ARRAY_8 TypeInfo__UINT16_ARRAY_8 = {
  .TypeName = "UINT16[8]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[8]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_13{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_13;

TYPE__UINT16_ARRAY_13 TypeInfo__UINT16_ARRAY_13 = {
  .TypeName = "UINT16[13]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[13]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_16{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_16;

TYPE__UINT16_ARRAY_16 TypeInfo__UINT16_ARRAY_16 = {
  .TypeName = "UINT16[16]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[16]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__UINT16_ARRAY_46{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__UINT16_ARRAY_46;

TYPE__UINT16_ARRAY_46 TypeInfo__UINT16_ARRAY_46 = {
  .TypeName = "UINT16[46]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(UINT16[46]),
  .ElementTypeName = "UINT16"
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_DISQUALIFY_MODE{
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
} TYPE__EFI_IDE_CONTROLLER_DISQUALIFY_MODE;

TYPE__EFI_IDE_CONTROLLER_DISQUALIFY_MODE TypeInfo__EFI_IDE_CONTROLLER_DISQUALIFY_MODE = {
  .TypeName = "EFI_IDE_CONTROLLER_DISQUALIFY_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_DISQUALIFY_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_ATA_COLLECTIVE_MODE*"
};


typedef struct _TYPE__EFI_ATA_COLLECTIVE_MODE_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ATA_COLLECTIVE_MODE_STAR;

TYPE__EFI_ATA_COLLECTIVE_MODE_STAR TypeInfo__EFI_ATA_COLLECTIVE_MODE_STAR = {
  .TypeName = "EFI_ATA_COLLECTIVE_MODE*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ATA_COLLECTIVE_MODE*),
  .PointedType = "EFI_ATA_COLLECTIVE_MODE"
};


typedef struct _TYPE__EFI_ATA_COLLECTIVE_MODE{
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
} TYPE__EFI_ATA_COLLECTIVE_MODE;

TYPE__EFI_ATA_COLLECTIVE_MODE TypeInfo__EFI_ATA_COLLECTIVE_MODE = {
  .TypeName = "EFI_ATA_COLLECTIVE_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ATA_COLLECTIVE_MODE),
  .StructFieldNum = 6,
  .StructFieldName_1 = "PioMode",
  .StructFieldTypeName_1 = "EFI_ATA_MODE",
  .StructFieldName_2 = "SingleWordDmaMode",
  .StructFieldTypeName_2 = "EFI_ATA_MODE",
  .StructFieldName_3 = "MultiWordDmaMode",
  .StructFieldTypeName_3 = "EFI_ATA_MODE",
  .StructFieldName_4 = "UdmaMode",
  .StructFieldTypeName_4 = "EFI_ATA_MODE",
  .StructFieldName_5 = "ExtModeCount",
  .StructFieldTypeName_5 = "UINT32",
  .StructFieldName_6 = "ExtMode",
  .StructFieldTypeName_6 = "EFI_ATA_EXTENDED_MODE[1]"
};


typedef struct _TYPE__EFI_ATA_MODE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_ATA_MODE;

TYPE__EFI_ATA_MODE TypeInfo__EFI_ATA_MODE = {
  .TypeName = "EFI_ATA_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ATA_MODE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Valid",
  .StructFieldTypeName_1 = "BOOLEAN",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "UINT32"
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


typedef struct _TYPE__EFI_ATA_EXTENDED_MODE_ARRAY_1{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ElementTypeName;
} TYPE__EFI_ATA_EXTENDED_MODE_ARRAY_1;

TYPE__EFI_ATA_EXTENDED_MODE_ARRAY_1 TypeInfo__EFI_ATA_EXTENDED_MODE_ARRAY_1 = {
  .TypeName = "EFI_ATA_EXTENDED_MODE[1]",
  .TypeClass = TYPE_CLASS_TYPEDEF,
  .TypeSize = sizeof(EFI_ATA_EXTENDED_MODE[1]),
  .ElementTypeName = "EFI_ATA_EXTENDED_MODE"
};


typedef struct _TYPE__EFI_ATA_EXTENDED_MODE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_ATA_EXTENDED_MODE;

TYPE__EFI_ATA_EXTENDED_MODE TypeInfo__EFI_ATA_EXTENDED_MODE = {
  .TypeName = "EFI_ATA_EXTENDED_MODE",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_ATA_EXTENDED_MODE),
  .StructFieldNum = 2,
  .StructFieldName_1 = "TransferProtocol",
  .StructFieldTypeName_1 = "EFI_ATA_EXT_TRANSFER_PROTOCOL",
  .StructFieldName_2 = "Mode",
  .StructFieldTypeName_2 = "UINT32"
};


typedef struct _TYPE__EFI_ATA_EXT_TRANSFER_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN EnumValueNum;
  const CHAR8* EnumValueName_1;
  const UINTN EnumValue_1;
} TYPE__EFI_ATA_EXT_TRANSFER_PROTOCOL;

TYPE__EFI_ATA_EXT_TRANSFER_PROTOCOL TypeInfo__EFI_ATA_EXT_TRANSFER_PROTOCOL = {
  .TypeName = "EFI_ATA_EXT_TRANSFER_PROTOCOL",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_ATA_EXT_TRANSFER_PROTOCOL),
  .EnumValueNum = 1,
  .EnumValueName_1 = "EfiAtaSataTransferProtocol",
  .EnumValue_1 = EfiAtaSataTransferProtocol
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_CALCULATE_MODE{
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
} TYPE__EFI_IDE_CONTROLLER_CALCULATE_MODE;

TYPE__EFI_IDE_CONTROLLER_CALCULATE_MODE TypeInfo__EFI_IDE_CONTROLLER_CALCULATE_MODE = {
  .TypeName = "EFI_IDE_CONTROLLER_CALCULATE_MODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_CALCULATE_MODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_OUT,
  .ParameterTypeName_4 = "EFI_ATA_COLLECTIVE_MODE**"
};


typedef struct _TYPE__EFI_ATA_COLLECTIVE_MODE_STAR_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_ATA_COLLECTIVE_MODE_STAR_STAR;

TYPE__EFI_ATA_COLLECTIVE_MODE_STAR_STAR TypeInfo__EFI_ATA_COLLECTIVE_MODE_STAR_STAR = {
  .TypeName = "EFI_ATA_COLLECTIVE_MODE**",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_ATA_COLLECTIVE_MODE**),
  .PointedType = "EFI_ATA_COLLECTIVE_MODE*"
};


typedef struct _TYPE__EFI_IDE_CONTROLLER_SET_TIMING{
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
} TYPE__EFI_IDE_CONTROLLER_SET_TIMING;

TYPE__EFI_IDE_CONTROLLER_SET_TIMING TypeInfo__EFI_IDE_CONTROLLER_SET_TIMING = {
  .TypeName = "EFI_IDE_CONTROLLER_SET_TIMING",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_IDE_CONTROLLER_SET_TIMING),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 4,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_IDE_CONTROLLER_INIT_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "UINT8",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT8",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_ATA_COLLECTIVE_MODE*"
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
  &TypeInfo__gEfiIdeControllerInitProtocolGuid,
  &TypeInfo__gEfiPciIoProtocolGuid,
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
  &TypeInfo__gEfiIdeControllerInitProtocolGuid,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__gEfiComponentName2ProtocolGuid,
  &TypeInfo__gEfiComponentNameProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiIdeControllerInitProtocolGuid,
  &TypeInfo__EFI_IDE_CONTROLLER_INIT_PROTOCOL,
  &TypeInfo__EFI_IDE_CONTROLLER_GET_CHANNEL_INFO,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_IDE_CONTROLLER_INIT_PROTOCOL_STAR,
  &TypeInfo__UINT8,
  &TypeInfo__BOOLEAN_STAR,
  &TypeInfo__BOOLEAN,
  &TypeInfo__UINT8_STAR,
  &TypeInfo__EFI_IDE_CONTROLLER_NOTIFY_PHASE,
  &TypeInfo__EFI_IDE_CONTROLLER_ENUM_PHASE,
  &TypeInfo__EFI_IDE_CONTROLLER_SUBMIT_DATA,
  &TypeInfo__EFI_IDENTIFY_DATA_STAR,
  &TypeInfo__EFI_IDENTIFY_DATA,
  &TypeInfo__EFI_ATA_IDENTIFY_DATA,
  &TypeInfo__UINT16,
  &TypeInfo__UINT16_ARRAY_2,
  &TypeInfo__CHAR8_ARRAY_20,
  &TypeInfo__CHAR8,
  &TypeInfo__CHAR8_ARRAY_8,
  &TypeInfo__CHAR8_ARRAY_40,
  &TypeInfo__UINT16_ARRAY_5,
  &TypeInfo__UINT16_ARRAY_4,
  &TypeInfo__UINT16_ARRAY_6,
  &TypeInfo__UINT16_ARRAY_31,
  &TypeInfo__UINT16_ARRAY_7,
  &TypeInfo__CHAR8_ARRAY_60,
  &TypeInfo__UINT16_ARRAY_19,
  &TypeInfo__EFI_ATAPI_IDENTIFY_DATA,
  &TypeInfo__UINT16_ARRAY_3,
  &TypeInfo__UINT16_ARRAY_8,
  &TypeInfo__UINT16_ARRAY_13,
  &TypeInfo__UINT16_ARRAY_16,
  &TypeInfo__UINT16_ARRAY_46,
  &TypeInfo__EFI_IDE_CONTROLLER_DISQUALIFY_MODE,
  &TypeInfo__EFI_ATA_COLLECTIVE_MODE_STAR,
  &TypeInfo__EFI_ATA_COLLECTIVE_MODE,
  &TypeInfo__EFI_ATA_MODE,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_ATA_EXTENDED_MODE_ARRAY_1,
  &TypeInfo__EFI_ATA_EXTENDED_MODE,
  &TypeInfo__EFI_ATA_EXT_TRANSFER_PROTOCOL,
  &TypeInfo__EFI_IDE_CONTROLLER_CALCULATE_MODE,
  &TypeInfo__EFI_ATA_COLLECTIVE_MODE_STAR_STAR,
  &TypeInfo__EFI_IDE_CONTROLLER_SET_TIMING,
  &TypeInfo__gEfiDriverBindingProtocolGuid,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL,
  &TypeInfo__EFI_DRIVER_BINDING_SUPPORTED,
  &TypeInfo__EFI_DRIVER_BINDING_PROTOCOL_STAR,
  &TypeInfo__EFI_HANDLE,
  &TypeInfo__void_STAR,
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