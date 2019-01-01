/** @file
  GUID for interface type info protocol

  Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __TYPE_INFO_GUID_H__
#define __TYPE_INFO_GUID_H__

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
  IO_IN_OUT
} IO_CLASS;

typedef struct _TYPE__EFI_PROTOCOL{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const GUID* ProtocolGuid;
  const CHAR8* InterfaceStructName;
} TYPE__EFI_PROTOCOL;

typedef struct _TYPE__EFI_PROTOCOL_INTERFACE_STRUCT_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const UINTN StructFieldNum;
  const CHAR8* StructFieldName_1;
  const CHAR8* StructFieldTypeName_1;
} TYPE__EFI_PROTOCOL_INTERFACE_STRUCT_HEADER;

typedef struct _TYPE__EFI_FUNCTION_HEADER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* ReturnType;
  const BOOLEAN HasVarArg;
  const UINTN ParameterNum;
  const UINTN ParameterInOut_1;
  const CHAR8* ParameterTypeName_1;
} TYPE__EFI_FUNCTION_HEADER;

#define STATUS_DONE   "DONE"
#define STATUS_FAIL   "FAIL"
#define STATUS_ALL_FUNCTION   "ALLFUNC"

#define LOG_FUNCTION_SIGNATURE SIGNATURE_32 ('F', 'L', 'O', 'G')

typedef struct _LOG__EFI_PROTOCOL_FUNCTION{
  UINTN Signature;
  CHAR8 ImageName[0x40];
  CHAR8 ImageGuidStr[0x40];
  CHAR8 ProtocolName[0x40];
  CHAR8 ProtocolGuidStr[0x40];
  CHAR8 FunctionName[0x40];
  CHAR8 StatusStr[0x08];
} LOG__EFI_PROTOCOL_FUNCTION;


typedef struct _TYPE__POINTER{
  const CHAR8* TypeName;
  const UINTN TypeClass;
  const UINTN TypeSize;
  const CHAR8* PointedType;
} TYPE__POINTER;


typedef struct _TYPE_INFO_HEADER{
  const CHAR8*  TypeName;
  const UINTN   TypeClass;
  const UINTN   TypeSize;
} TYPE_INFO_HEADER;

#define INTERFACE_TYPE_INFO_GUID \
          { 0x56d307ee, 0xa115, 0x4e8c, { 0x8a, 0xf8, 0xff, 0xfe, 0xc4, 0xd4, 0xa9, 0x77 } };

extern EFI_GUID gInterfaceTypeInfoProtocolGuid;

#endif
