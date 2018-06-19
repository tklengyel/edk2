/** @file
    A uefi lib fuzzer (ULibfuzzer) executor which do the fuzz testing against
    all functions in a Uefi library according to functions' type info.

    Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
    This program and the accompanying materials
    are licensed and made available under the terms and conditions of the BSD License
    which accompanies this distribution. The full text of the license may be found at
    http://opensource.org/licenses/bsd-license.

    THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
    WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/
#include  <Uefi.h>
#include  <Library/UefiLib.h>
#include  <Library/DebugLib.h>
#include  <Library/ShellCEntryLib.h>
#include  <Library/UefiBootServicesTableLib.h>
#include  <Library/UefiRuntimeServicesTableLib.h>
#include  <Library/BaseMemoryLib.h>
#include  <Library/BaseLib.h>
#include  <Library/PrintLib.h>
#include  <Library/MemoryAllocationLib.h>
#include  <Library/DevicePathLib.h>
#include  <Library/ShellLib.h>
#include  <Library/RngLib.h>
#include  <Protocol/LoadedImage.h>
#include  <Protocol/DriverBinding.h>
#include  <Protocol/ComponentName2.h>
#include  <Protocol/DevicePath.h>


//
// (EFIAPI *EFI_HII_STRING_ID_TO_IMAGE) function has 12 Args!
//
typedef
UINTN
(EFIAPI* UEFI_CALL)(
  IN  UINTN   Arg0,
  IN  UINTN   Arg1,
  IN  UINTN   Arg2,
  IN  UINTN   Arg3,
  IN  UINTN   Arg4,
  IN  UINTN   Arg5,
  IN  UINTN   Arg6,
  IN  UINTN   Arg7,
  IN  UINTN   Arg8,
  IN  UINTN   Arg9,
  IN  UINTN   Arg10,
  IN  UINTN   Arg11
);

#define TYPE_INFO_NODE_SIGNATURE SIGNATURE_32 ('T', 'I', 'N', 'D')
typedef struct {
  UINTN                     Signature;
  LIST_ENTRY                Link;

  TYPE_INFO_HEADER          *TypeInfoHdr;
} TYPE_INFO_NODE;
#define TYPE_INFO_NODE_FROM_LINK(a) CR (a, TYPE_INFO_NODE, Link, TYPE_INFO_NODE_SIGNATURE)

#define FUNCTION_TYPE_MAP_NODE_SIGNATURE SIGNATURE_32 ('F', 'T', 'I', 'N')
typedef struct {
  UINTN                     Signature;
  LIST_ENTRY                Link;
  void                      *FunctionAddress;
  TYPE__EFI_FUNCTION_HEADER *FunctionTypeInfoHdr;
} FUNCTION_TYPE_MAP_NODE;
#define FUNCTION_TYPE_MAP_NODE_FROM_LINK(a) CR (a, FUNCTION_TYPE_MAP_NODE, Link, FUNCTION_TYPE_MAP_NODE_SIGNATURE)


#define ALLOCATED_BUFFER_NODE_SIGNATURE SIGNATURE_32 ('A', 'B', 'N', 'D')

typedef struct {
  UINTN                     Signature;
  LIST_ENTRY                Link;

  VOID                      *BufferAddress;
} ALLOCATED_BUFFER_NODE;

#define ALLOCATED_BUFFER_NODE_FROM_LINK(a) CR (a, ALLOCATED_BUFFER_NODE, Link, ALLOCATED_BUFFER_NODE_SIGNATURE)

typedef struct {
  UINT32            Field1;
  UINTN             Field2;
} STRUCTURE_ALIGNMENT;

#define STRUCTURE_DEFAULT_ALIGNMENT (UINTN)((UINTN)&((STRUCTURE_ALIGNMENT *) 0)->Field2 - (UINTN)&((STRUCTURE_ALIGNMENT *) 0)->Field1)
