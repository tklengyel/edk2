/** @file
  Copyright (c) 2023, Corvin Köhne <corvink@FreeBSD.org>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Protocol/AcpiTable.h>

/**
  Searches and returns the address of the ACPI Root System Description Pointer (RSDP) in system memory.

  @param  StartAddress        Start address of search range.
  @param  EndAddress          End address of search range.
  @param  RsdpPtr             Return pointer to RSDP.

  @retval EFI_SUCCESS         RSDP successfully found.
  @retval EFI_NOT_FOUND       Couldn't find RSDP.
  @retval EFI_ABORTED         Invalid RSDP found.
**/
EFI_STATUS
EFIAPI
GetAcpiRsdpFromMemory (
  IN UINT64                                         StartAddress,
  IN UINT64                                         EndAddress,
  OUT EFI_ACPI_2_0_ROOT_SYSTEM_DESCRIPTION_POINTER  **RsdpPtr
  );

/**
  Get Acpi tables from the RSDP structure. And installs ACPI tables
  into the RSDT/XSDT using InstallAcpiTable. Some signature of the installed
  ACPI tables are: FACP, APIC, HPET, WAET, SSDT, FACS, DSDT.

  @param  AcpiProtocol           Protocol instance pointer.

  @return EFI_SUCCESS            The table was successfully inserted.
  @return EFI_INVALID_PARAMETER  Either AcpiTableBuffer is NULL, TableHandle is
                                 NULL, or AcpiTableBufferSize and the size
                                 field embedded in the ACPI table pointed to
                                 by AcpiTableBuffer are not in sync.
  @return EFI_OUT_OF_RESOURCES   Insufficient resources exist to complete the
request.

**/
EFI_STATUS
EFIAPI
InstallAcpiTablesFromRsdp (
  IN EFI_ACPI_TABLE_PROTOCOL                       *AcpiProtocol,
  IN EFI_ACPI_2_0_ROOT_SYSTEM_DESCRIPTION_POINTER  *Rsdp
  );
