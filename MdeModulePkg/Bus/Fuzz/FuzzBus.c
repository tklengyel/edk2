/** @file

  Fuzz Bus Driver manage the virtual FuzzBus PCI adapter to control the
  Data-flow routes fuzzy testing.
  See spec in qemu\docs\specs\edu.txt

Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/
#include "FuzzBus.h"

STATIC FUZZ_BUS_PROTOCOL mFuzzBusProtocolTemplate = {
  0,                                    // Revision
  0,                                    // SubSystemDeviceId
  // VirtioPciGetDeviceFeatures,           // GetDeviceFeatures
  // VirtioPciSetGuestFeatures,            // SetGuestFeatures
  // VirtioPciSetQueueAddress,             // SetQueueAddress
  // VirtioPciSetQueueSel,                 // SetQueueSel
  // VirtioPciSetQueueNotify,              // SetQueueNotify
  // VirtioPciSetQueueAlignment,           // SetQueueAlignment
  // VirtioPciSetPageSize,                 // SetPageSize
  // VirtioPciGetQueueSize,                // GetQueueNumMax
  // VirtioPciSetQueueSize,                // SetQueueNum
  // VirtioPciGetDeviceStatus,             // GetDeviceStatus
  // VirtioPciSetDeviceStatus,             // SetDeviceStatus
  // VirtioPciDeviceWrite,                 // WriteDevice
  // VirtioPciDeviceRead,                  // ReadDevice
  // VirtioPciAllocateSharedPages,         // AllocateSharedPages
  // VirtioPciFreeSharedPages,             // FreeSharedPages
  // VirtioPciMapSharedBuffer,             // MapSharedBuffer
  // VirtioPciUnmapSharedBuffer,           // UnmapSharedBuffer
};

//
// Pointer to the CPU Architectural Protocol instance
//
EFI_CPU_ARCH_PROTOCOL     *mCpu;

//
// Pointer to the Legacy 8259 Protocol instance
//
EFI_LEGACY_8259_PROTOCOL  *mLegacy8259;
FUZZ_BUS_PRIVATE_DATA     *mFuzzBusDevice;
UINT32                    mVector;
UINT8                     mMasterBaseVector;
UINT8                     mSlaveBaseVector;


VOID
EFIAPI
FuzzBusInterruptHandler (
  IN EFI_EXCEPTION_TYPE   InterruptType,
  IN EFI_SYSTEM_CONTEXT   SystemContext
  )
{
  EFI_TPL OriginalTPL;
  UINT32                IntValue;
  EFI_STATUS            Status;

  OriginalTPL = gBS->RaiseTPL (TPL_HIGH_LEVEL);
  mLegacy8259->EndOfInterrupt (mLegacy8259, FUZZ_BUS_IRQ);
  DEBUG((DEBUG_ERROR, "Interrupt with IRQ %d is handled\n", FUZZ_BUS_IRQ));
  gBS->RestoreTPL (OriginalTPL);
  
  DEBUG((DEBUG_ERROR, "going to clear the interrrupt\n"));
  IntValue = 0x1;
  Status = mFuzzBusDevice->PciIo->Mem.Write (
                        mFuzzBusDevice->PciIo,
                        EfiPciIoWidthUint32,
                        EFI_EDU_BAR_INDEX,
                        0x64, //0x64 (WO) : interrupt acknowledge register
                        1,
                        &IntValue
                        );
  ASSERT_EFI_ERROR (Status);
}

BOOLEAN
EFIAPI
CheckRegisteredVector (
  IN  UINT32                Vector
  )
{
  return FALSE;
}

/**


**/
STATIC
EFI_STATUS
EFIAPI
FuzzBusDeviceInit (
  IN OUT FUZZ_BUS_PRIVATE_DATA *PrivateData
  )
{
  EFI_STATUS            Status;
  EFI_PCI_IO_PROTOCOL   *PciIo;
  PCI_TYPE00            Pci;
  UINT8                 IntLine;
  UINT8                 IntPin;
  UINT32                Vector;
  UINT32                IntValue;

  ASSERT (PrivateData != NULL);
  PciIo = PrivateData->PciIo;
  ASSERT (PciIo != NULL);
  ASSERT (PciIo->Pci.Read != NULL);

  Status = PciIo->Pci.Read (
                        PciIo,
                        EfiPciIoWidthUint32,
                        PCI_VENDOR_ID_OFFSET,
                        sizeof (Pci) / sizeof (UINT32),
                        &Pci
                        );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  PrivateData->FuzzBus.Revision = 0x01;
  PrivateData->FuzzBus.SubSystemDeviceId = Pci.Device.SubsystemID;

  IntLine = Pci.Device.InterruptLine;
  DEBUG((DEBUG_ERROR, "Interrupt line=0x%x\n", IntLine));
  IntPin = Pci.Device.InterruptPin; 
  DEBUG((DEBUG_ERROR, "Interrupt Pin=0x%x\n", IntPin));

  DEBUG((DEBUG_ERROR, "Hardcode Interrupt IRQ=%d\n", FUZZ_BUS_IRQ));
  Vector = 0;
  Status = mLegacy8259->GetVector (mLegacy8259, FUZZ_BUS_IRQ, (UINT8 *) &Vector);
  ASSERT_EFI_ERROR (Status);
  DEBUG((DEBUG_ERROR, "Interrupt Vector=0x%x\n", Vector));
  PrivateData->IntVector = Vector;
  Status = mCpu->RegisterInterruptHandler (mCpu, Vector, FuzzBusInterruptHandler);
  ASSERT_EFI_ERROR (Status);
  Status = mLegacy8259->EnableIrq (mLegacy8259, FUZZ_BUS_IRQ, FALSE);
  ASSERT_EFI_ERROR (Status);
  //
  //IRQ 2 is PIC Cascade input, always enable it to let slave 8259 works
  //see figure 1 and table 1 in C:\Steven\Spec\IOAPIC\msg-signaled-interrupts-paper.pdf
  //
  Status = mLegacy8259->EnableIrq (mLegacy8259, 2, FALSE);
  ASSERT_EFI_ERROR (Status);

  for (int i=0; i<5; i++){
    DEBUG((DEBUG_ERROR, "going to trigger the Fuzz Bus interrrupt 5 times as test\n"));
    IntValue = 0x1;
    Status = PciIo->Mem.Write (
                          PciIo,
                          EfiPciIoWidthUint32,
                          EFI_EDU_BAR_INDEX,
                          0x60, //0x60 (WO) : interrupt raise register
                          1,
                          &IntValue
                          );
    ASSERT_EFI_ERROR (Status);
  }


  //
  // Copy protocol template
  //
  CopyMem (
    &PrivateData->FuzzBus,
    &mFuzzBusProtocolTemplate,
    sizeof (FUZZ_BUS_PROTOCOL)
    );

  return EFI_SUCCESS;
}

STATIC
EFI_STATUS
EFIAPI
FuzzBusDeviceUninit (
  IN OUT FUZZ_BUS_PRIVATE_DATA *Device
  )
{

  return EFI_SUCCESS;
}

/**

  Uninitialize the internals of a virtio-pci device that has been successfully
  set up with VirtioPciInit().

  @param[in, out]  Dev  The device to clean up.

**/

EFI_STATUS
GetFuzzBusAdaptorHandle(
  OUT  EFI_HANDLE    *AdaptorHandle
  )
/*++

Routine Description:

  
Arguments:
  
  
Returns:
  EFI_SUCCESS
  EFI_NOT_FOUND
--*/
{
  EFI_STATUS                            Status;
  EFI_HANDLE                            *HandleArray;
  UINTN                                 HandleArrayCount;
  UINTN                                 Index;
  EFI_PCI_IO_PROTOCOL                   *PciIo;
  BOOLEAN                               Found;
  PCI_TYPE00                            Pci;

  if(AdaptorHandle == NULL){
    return EFI_INVALID_PARAMETER;
  }
  
  Found = FALSE;
  //
  // Find the usb host controller 
  //   
  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEfiPciIoProtocolGuid,
                  NULL,
                  &HandleArrayCount,
                  &HandleArray
                  );
  if (!EFI_ERROR (Status)) {
    for (Index = 0; Index < HandleArrayCount; Index++) {
      Status = gBS->HandleProtocol (
                      HandleArray[Index],
                      &gEfiPciIoProtocolGuid,
                      (VOID **)&PciIo
                      );
      if (!EFI_ERROR (Status)) {
        //
        // Read entire PCI configuration header for more extensive check ahead.
        //
        Status = PciIo->Pci.Read (
                              PciIo,                        // (protocol, device)
                                                            // handle
                              EfiPciIoWidthUint32,          // access width & copy
                                                            // mode
                              0,                            // Offset
                              sizeof Pci / sizeof (UINT32), // Count
                              &Pci                          // target buffer
                              );

        if (Status == EFI_SUCCESS) {
          //
          // Edu device, see its HW definition in qemu\hw\misc\edu.c
          //
          if ((Pci.Hdr.VendorId == PCI_VENDOR_ID_QEMU) &&
              (Pci.Hdr.DeviceId == 0x11E8)) {
            Found = TRUE;
            *AdaptorHandle = HandleArray[Index];
            break;
          } 
        }
      }
    }
  } else {
    return EFI_NOT_FOUND;
  }
  gBS->FreePool (HandleArray);
  if (Found){
    return EFI_SUCCESS;
  }else{
    return EFI_NOT_FOUND;
  }

}



//
// Entry point of this driver.
//
EFI_STATUS
EFIAPI
FuzzBusAdaptorEntryPoint (
  IN EFI_HANDLE       ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable
  )
{
  EFI_STATUS                    Status;
  EFI_HANDLE                    DeviceHandle;
  //
  // Find the CPU architectural protocol.
  //
  Status = gBS->LocateProtocol (&gEfiCpuArchProtocolGuid, NULL, (VOID **) &mCpu);
  ASSERT_EFI_ERROR (Status);
  //
  // Find the Legacy8259 protocol.
  //
  Status = gBS->LocateProtocol (&gEfiLegacy8259ProtocolGuid, NULL, (VOID **) &mLegacy8259);
  ASSERT_EFI_ERROR (Status);
  
  Status = GetFuzzBusAdaptorHandle(&DeviceHandle);
  if (EFI_ERROR (Status)){
    return Status;
  }
  //
  // Init the global interrupt vector, and assume there is only one Fuzz Bus Adaptor
  // in the systme
  //
  mVector = 0;

  mFuzzBusDevice = (FUZZ_BUS_PRIVATE_DATA *) AllocateZeroPool (sizeof *mFuzzBusDevice);
  if (mFuzzBusDevice == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  Status = gBS->OpenProtocol (
                    DeviceHandle,
                    &gEfiPciIoProtocolGuid,
                    (VOID **)&mFuzzBusDevice->PciIo,
                    ImageHandle,
                    DeviceHandle,
                    EFI_OPEN_PROTOCOL_BY_DRIVER
                    );
  if (EFI_ERROR (Status)) {
    goto FreeFuzzBusDevice;
  }

  //
  //
  //
  Status = mFuzzBusDevice->PciIo->Attributes (
                                    mFuzzBusDevice->PciIo,
                                    EfiPciIoAttributeOperationGet,
                                    0,
                                    &mFuzzBusDevice->OriginalPciAttributes
                                    );
  if (EFI_ERROR (Status)) {
    goto ClosePciIo;
  }

  Status = mFuzzBusDevice->PciIo->Attributes (
                            mFuzzBusDevice->PciIo,
                            EfiPciIoAttributeOperationEnable,
                            (EFI_PCI_IO_ATTRIBUTE_IO |
                             EFI_PCI_IO_ATTRIBUTE_BUS_MASTER),
                            NULL
                            );
  if (EFI_ERROR (Status)) {
    goto ClosePciIo;
  }

  //
  // PCI IO access granted, configure protocol instance
  //
  Status = FuzzBusDeviceInit (mFuzzBusDevice);
  if (EFI_ERROR (Status)) {
    goto RestorePciAttributes;
  }

  //
  // Setup complete, attempt to export the driver's interface.
  //
  mFuzzBusDevice->Signature = FUZZ_BUS_PRIVATE_DATA_SIGNATURE;
  Status = gBS->InstallProtocolInterface (
                  &DeviceHandle,
                  &gFuzzBusProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  &mFuzzBusDevice->FuzzBus
                  );
  if (EFI_ERROR (Status)) {
    goto UninitDev;
  }

  return EFI_SUCCESS;

UninitDev:
  FuzzBusDeviceUninit (mFuzzBusDevice);

RestorePciAttributes:
  mFuzzBusDevice->PciIo->Attributes (
                          mFuzzBusDevice->PciIo,
                          EfiPciIoAttributeOperationSet,
                          mFuzzBusDevice->OriginalPciAttributes,
                          NULL
                          );

ClosePciIo:
  gBS->CloseProtocol (
          DeviceHandle,
          &gEfiPciIoProtocolGuid,
          ImageHandle,
          DeviceHandle
          );

FreeFuzzBusDevice:
  FreePool (mFuzzBusDevice);

  return Status;
}
