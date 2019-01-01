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


typedef struct _TYPE__EFI_STATUS_CODE_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_STATUS_CODE_PROTOCOL;

TYPE__EFI_STATUS_CODE_PROTOCOL TypeInfo__EFI_STATUS_CODE_PROTOCOL = {
  .TypeName = "EFI_STATUS_CODE_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_STATUS_CODE_PROTOCOL),
  .StructFieldNum = 1,
  .StructFieldName_1 = "ReportStatusCode",
  .StructFieldTypeName_1 = "EFI_REPORT_STATUS_CODE"
};


typedef struct _TYPE__EFI_REPORT_STATUS_CODE{
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
} TYPE__EFI_REPORT_STATUS_CODE;

TYPE__EFI_REPORT_STATUS_CODE TypeInfo__EFI_REPORT_STATUS_CODE = {
  .TypeName = "EFI_REPORT_STATUS_CODE",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_REPORT_STATUS_CODE),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_STATUS_CODE_TYPE",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_STATUS_CODE_VALUE",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT32",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "EFI_GUID*",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "EFI_STATUS_CODE_DATA*"
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


typedef struct _TYPE__EFI_STATUS_CODE_TYPE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_STATUS_CODE_TYPE;

TYPE__EFI_STATUS_CODE_TYPE TypeInfo__EFI_STATUS_CODE_TYPE = {
  .TypeName = "EFI_STATUS_CODE_TYPE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_STATUS_CODE_TYPE),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_STATUS_CODE_VALUE{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* BasicTypeName;
} TYPE__EFI_STATUS_CODE_VALUE;

TYPE__EFI_STATUS_CODE_VALUE TypeInfo__EFI_STATUS_CODE_VALUE = {
  .TypeName = "EFI_STATUS_CODE_VALUE",
  .TypeClass = TYPE_CLASS_BASIC,
  .TypeSize = sizeof(EFI_STATUS_CODE_VALUE),
  .BasicTypeName = "UINT32"
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


typedef struct _TYPE__EFI_STATUS_CODE_DATA_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_STATUS_CODE_DATA_STAR;

TYPE__EFI_STATUS_CODE_DATA_STAR TypeInfo__EFI_STATUS_CODE_DATA_STAR = {
  .TypeName = "EFI_STATUS_CODE_DATA*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_STATUS_CODE_DATA*),
  .PointedType = "EFI_STATUS_CODE_DATA"
};


typedef struct _TYPE__EFI_STATUS_CODE_DATA{
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
} TYPE__EFI_STATUS_CODE_DATA;

TYPE__EFI_STATUS_CODE_DATA TypeInfo__EFI_STATUS_CODE_DATA = {
  .TypeName = "EFI_STATUS_CODE_DATA",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_STATUS_CODE_DATA),
  .StructFieldNum = 3,
  .StructFieldName_1 = "HeaderSize",
  .StructFieldTypeName_1 = "UINT16",
  .StructFieldName_2 = "Size",
  .StructFieldTypeName_2 = "UINT16",
  .StructFieldName_3 = "Type",
  .StructFieldTypeName_3 = "EFI_GUID"
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


typedef struct _TYPE__gEfiDataHubProtocolGuid{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__gEfiDataHubProtocolGuid;

TYPE__gEfiDataHubProtocolGuid TypeInfo__gEfiDataHubProtocolGuid = {
  .TypeName = "gEfiDataHubProtocolGuid",
  .TypeClass = TYPE_CLASS_PROTOCOL,
  .TypeSize = sizeof(GUID),
  .ProtocolGuid = &gEfiDataHubProtocolGuid,
  .InterfaceStructName = "EFI_DATA_HUB_PROTOCOL"
};

void *TypeInfoList_OpenProtocol[] = {
  NULL
};
void *TypeInfoList_InstallProtocolInterface[] = {
  NULL
};
void *TypeInfoList_LocateProtocol[] = {
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  &TypeInfo__gPcdProtocolGuid,
  &TypeInfo__gEfiDataHubProtocolGuid,
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
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiStatusCodeRuntimeProtocolGuid,
  &TypeInfo__EFI_STATUS_CODE_PROTOCOL,
  &TypeInfo__EFI_REPORT_STATUS_CODE,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_STATUS_CODE_TYPE,
  &TypeInfo__UINT32,
  &TypeInfo__EFI_STATUS_CODE_VALUE,
  &TypeInfo__EFI_GUID_STAR,
  &TypeInfo__EFI_GUID,
  &TypeInfo__UINT16,
  &TypeInfo__UINT8_ARRAY_8,
  &TypeInfo__UINT8,
  &TypeInfo__EFI_STATUS_CODE_DATA_STAR,
  &TypeInfo__EFI_STATUS_CODE_DATA,
  NULL
};