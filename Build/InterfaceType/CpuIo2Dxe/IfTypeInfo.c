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


typedef struct _TYPE__EFI_CPU_IO2_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_CPU_IO2_PROTOCOL;

TYPE__EFI_CPU_IO2_PROTOCOL TypeInfo__EFI_CPU_IO2_PROTOCOL = {
  .TypeName = "EFI_CPU_IO2_PROTOCOL",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CPU_IO2_PROTOCOL),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Mem",
  .StructFieldTypeName_1 = "EFI_CPU_IO_PROTOCOL_ACCESS",
  .StructFieldName_2 = "Io",
  .StructFieldTypeName_2 = "EFI_CPU_IO_PROTOCOL_ACCESS"
};


typedef struct _TYPE__EFI_CPU_IO_PROTOCOL_ACCESS{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
  const CHAR8* StructFieldName_2;
  const CHAR8* StructFieldTypeName_2;
} TYPE__EFI_CPU_IO_PROTOCOL_ACCESS;

TYPE__EFI_CPU_IO_PROTOCOL_ACCESS TypeInfo__EFI_CPU_IO_PROTOCOL_ACCESS = {
  .TypeName = "EFI_CPU_IO_PROTOCOL_ACCESS",
  .TypeClass = TYPE_CLASS_STRUCTURE,
  .TypeSize = sizeof(EFI_CPU_IO_PROTOCOL_ACCESS),
  .StructFieldNum = 2,
  .StructFieldName_1 = "Read",
  .StructFieldTypeName_1 = "EFI_CPU_IO_PROTOCOL_IO_MEM",
  .StructFieldName_2 = "Write",
  .StructFieldTypeName_2 = "EFI_CPU_IO_PROTOCOL_IO_MEM"
};


typedef struct _TYPE__EFI_CPU_IO_PROTOCOL_IO_MEM{
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
} TYPE__EFI_CPU_IO_PROTOCOL_IO_MEM;

TYPE__EFI_CPU_IO_PROTOCOL_IO_MEM TypeInfo__EFI_CPU_IO_PROTOCOL_IO_MEM = {
  .TypeName = "EFI_CPU_IO_PROTOCOL_IO_MEM",
  .TypeClass = TYPE_CLASS_FUNCTION,
  .TypeSize = sizeof(EFI_CPU_IO_PROTOCOL_IO_MEM),
  .ReturnType = "EFI_STATUS",
  .HasVarArg = FALSE,
  .ParameterNum = 5,
  .ParameterInOut_1 = IO_IN,
  .ParameterTypeName_1 = "EFI_CPU_IO2_PROTOCOL*",
  .ParameterInOut_2 = IO_IN,
  .ParameterTypeName_2 = "EFI_CPU_IO_PROTOCOL_WIDTH",
  .ParameterInOut_3 = IO_IN,
  .ParameterTypeName_3 = "UINT64",
  .ParameterInOut_4 = IO_IN,
  .ParameterTypeName_4 = "UINTN",
  .ParameterInOut_5 = IO_IN,
  .ParameterTypeName_5 = "void*"
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


typedef struct _TYPE__EFI_CPU_IO2_PROTOCOL_STAR{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__EFI_CPU_IO2_PROTOCOL_STAR;

TYPE__EFI_CPU_IO2_PROTOCOL_STAR TypeInfo__EFI_CPU_IO2_PROTOCOL_STAR = {
  .TypeName = "EFI_CPU_IO2_PROTOCOL*",
  .TypeClass = TYPE_CLASS_POINTER,
  .TypeSize = sizeof(EFI_CPU_IO2_PROTOCOL*),
  .PointedType = "EFI_CPU_IO2_PROTOCOL"
};


typedef struct _TYPE__EFI_CPU_IO_PROTOCOL_WIDTH{
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
} TYPE__EFI_CPU_IO_PROTOCOL_WIDTH;

TYPE__EFI_CPU_IO_PROTOCOL_WIDTH TypeInfo__EFI_CPU_IO_PROTOCOL_WIDTH = {
  .TypeName = "EFI_CPU_IO_PROTOCOL_WIDTH",
  .TypeClass = TYPE_CLASS_ENUM,
  .TypeSize = sizeof(EFI_CPU_IO_PROTOCOL_WIDTH),
  .EnumValueNum = 13,
  .EnumValueName_1 = "EfiCpuIoWidthUint8",
  .EnumValue_1 = EfiCpuIoWidthUint8,
  .EnumValueName_2 = "EfiCpuIoWidthUint16",
  .EnumValue_2 = EfiCpuIoWidthUint16,
  .EnumValueName_3 = "EfiCpuIoWidthUint32",
  .EnumValue_3 = EfiCpuIoWidthUint32,
  .EnumValueName_4 = "EfiCpuIoWidthUint64",
  .EnumValue_4 = EfiCpuIoWidthUint64,
  .EnumValueName_5 = "EfiCpuIoWidthFifoUint8",
  .EnumValue_5 = EfiCpuIoWidthFifoUint8,
  .EnumValueName_6 = "EfiCpuIoWidthFifoUint16",
  .EnumValue_6 = EfiCpuIoWidthFifoUint16,
  .EnumValueName_7 = "EfiCpuIoWidthFifoUint32",
  .EnumValue_7 = EfiCpuIoWidthFifoUint32,
  .EnumValueName_8 = "EfiCpuIoWidthFifoUint64",
  .EnumValue_8 = EfiCpuIoWidthFifoUint64,
  .EnumValueName_9 = "EfiCpuIoWidthFillUint8",
  .EnumValue_9 = EfiCpuIoWidthFillUint8,
  .EnumValueName_10 = "EfiCpuIoWidthFillUint16",
  .EnumValue_10 = EfiCpuIoWidthFillUint16,
  .EnumValueName_11 = "EfiCpuIoWidthFillUint32",
  .EnumValue_11 = EfiCpuIoWidthFillUint32,
  .EnumValueName_12 = "EfiCpuIoWidthFillUint64",
  .EnumValue_12 = EfiCpuIoWidthFillUint64,
  .EnumValueName_13 = "EfiCpuIoWidthMaximum",
  .EnumValue_13 = EfiCpuIoWidthMaximum
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
  &TypeInfo__gEfiCpuIo2ProtocolGuid,
  NULL
};


void *TypeInfoList[] = {
  &TypeInfo__gEfiCpuIo2ProtocolGuid,
  &TypeInfo__EFI_CPU_IO2_PROTOCOL,
  &TypeInfo__EFI_CPU_IO_PROTOCOL_ACCESS,
  &TypeInfo__EFI_CPU_IO_PROTOCOL_IO_MEM,
  &TypeInfo__EFI_STATUS,
  &TypeInfo__RETURN_STATUS,
  &TypeInfo__UINTN,
  &TypeInfo__UINT64,
  &TypeInfo__EFI_CPU_IO2_PROTOCOL_STAR,
  &TypeInfo__EFI_CPU_IO_PROTOCOL_WIDTH,
  &TypeInfo__void_STAR,
  NULL
};