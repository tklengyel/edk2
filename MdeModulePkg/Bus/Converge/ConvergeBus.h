/** @file

    Converge Bus Driver Binding Protocol.

Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef _CONVERGE_BUS_H_
#define _CONVERGE_BUS_H_


#include <IndustryStandard/Pci.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Protocol/ComponentName.h>
#include <Protocol/DriverBinding.h>
#include <Protocol/PciIo.h>
#include <Protocol/Cpu.h>
#include <Protocol/Legacy8259.h>
#include <Protocol/ConvergeBusProtocol.h>

extern EFI_COMPONENT_NAME_PROTOCOL   gConvergeBusComponentName;
extern EFI_COMPONENT_NAME2_PROTOCOL  gConvergeBusComponentName2;

#define PCI_VENDOR_ID_QEMU               0x1234

#define CONVERGE_BUS_PRIVATE_DATA_SIGNATURE   SIGNATURE_32 ('F', 'B', 'P', 'D')

typedef struct {
  UINT32                  Signature;
  CONVERGE_BUS_PROTOCOL   ConvergeBus;
  EFI_PCI_IO_PROTOCOL     *PciIo;
  UINT32                  IntVector;
  UINT64                  OriginalPciAttributes;
} CONVERGE_BUS_PRIVATE_DATA;

#define CONVERGE_BUS_PRIVATE_DATA_FROM_CONVERGE_BUSS(a) \
    CR (a, CONVERGE_BUS_PRIVATE_DATA, ConvergeBus, CONVERGE_BUS_PRIVATE_DATA_SIGNATURE)

#define EFI_EDU_BAR_INDEX                     0x0

// Converge Bus Adaptor IRQ is 11 on q35, and 10 on 440BX 
#define CONVERGE_BUS_IRQ   11

#endif

