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

typedef struct _TYPE__gEfiResetArchProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiResetArchProtocolGuid;

TYPE__gEfiResetArchProtocolGuid TypeInfo__gEfiResetArchProtocolGuid = {
  .TypeName = "gEfiResetArchProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiResetArchProtocolGuid,
  .InterfaceStructName = "EFI_GUID"
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


typedef struct _TYPE__gEdkiiPlatformSpecificResetFilterProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiPlatformSpecificResetFilterProtocolGuid;

TYPE__gEdkiiPlatformSpecificResetFilterProtocolGuid TypeInfo__gEdkiiPlatformSpecificResetFilterProtocolGuid = {
  .TypeName = "gEdkiiPlatformSpecificResetFilterProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiPlatformSpecificResetFilterProtocolGuid,
  .InterfaceStructName = "EFI_RESET_NOTIFICATION_PROTOCOL"
};


typedef struct _TYPE__EFI_RESET_NOTIFICATION_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_RESET_NOTIFICATION_PROTOCOL;

TYPE__EFI_RESET_NOTIFICATION_PROTOCOL TypeInfo__EFI_RESET_NOTIFICATION_PROTOCOL = {
  .TypeName = "EFI_RESET_NOTIFICATION_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_RESET_NOTIFICATION_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "RegisterResetNotify",
  .StructFieldTypeName_1 = "EFI_REGISTER_RESET_NOTIFY",
  .StructFieldName_2 = "UnregisterResetNotify",
  .StructFieldTypeName_2 = "EFI_UNREGISTER_RESET_NOTIFY"
};


typedef struct _TYPE__EFI_REGISTER_RESET_NOTIFY{
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
} TYPE__EFI_REGISTER_RESET_NOTIFY;

TYPE__EFI_REGISTER_RESET_NOTIFY TypeInfo__EFI_REGISTER_RESET_NOTIFY = {
  .TypeName = "EFI_REGISTER_RESET_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REGISTER_RESET_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_RESET_NOTIFICATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_RESET_SYSTEM"
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


typedef struct _TYPE__EFI_RESET_NOTIFICATION_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_RESET_NOTIFICATION_PROTOCOL_STAR;

TYPE__EFI_RESET_NOTIFICATION_PROTOCOL_STAR TypeInfo__EFI_RESET_NOTIFICATION_PROTOCOL_STAR = {
  .TypeName = "EFI_RESET_NOTIFICATION_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_RESET_NOTIFICATION_PROTOCOL*),
  .PointedType = "EFI_RESET_NOTIFICATION_PROTOCOL"
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


typedef struct _TYPE__EFI_UNREGISTER_RESET_NOTIFY{
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
} TYPE__EFI_UNREGISTER_RESET_NOTIFY;

TYPE__EFI_UNREGISTER_RESET_NOTIFY TypeInfo__EFI_UNREGISTER_RESET_NOTIFY = {
  .TypeName = "EFI_UNREGISTER_RESET_NOTIFY",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_UNREGISTER_RESET_NOTIFY),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 2,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_RESET_NOTIFICATION_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_RESET_SYSTEM"
};


typedef struct _TYPE__gEdkiiPlatformSpecificResetHandlerProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEdkiiPlatformSpecificResetHandlerProtocolGuid;

TYPE__gEdkiiPlatformSpecificResetHandlerProtocolGuid TypeInfo__gEdkiiPlatformSpecificResetHandlerProtocolGuid = {
  .TypeName = "gEdkiiPlatformSpecificResetHandlerProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEdkiiPlatformSpecificResetHandlerProtocolGuid,
  .InterfaceStructName = "EFI_RESET_NOTIFICATION_PROTOCOL"
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
  &TypeInfo__gEfiResetArchProtocolGuid,
  &TypeInfo__gEdkiiPlatformSpecificResetFilterProtocolGuid,
  &TypeInfo__gEdkiiPlatformSpecificResetHandlerProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiResetArchProtocolGuid,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT32,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT8,
  &TypeInfo__gEdkiiPlatformSpecificResetFilterProtocolGuid,
  &TypeInfo__EFI_RESET_NOTIFICATION_PROTOCOL,
  &TypeInfo__EFI_REGISTER_RESET_NOTIFY,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_RESET_NOTIFICATION_PROTOCOL_STAR,
  &TypeInfo__EFI_RESET_SYSTEM,
  &TypeInfo__EFI_RESET_TYPE,
  &TypeInfo__void_STAR,
  &TypeInfo__EFI_UNREGISTER_RESET_NOTIFY,
  &TypeInfo__gEdkiiPlatformSpecificResetHandlerProtocolGuid,
  NULL
};