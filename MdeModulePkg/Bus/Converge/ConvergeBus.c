/** @file

  Converge Bus Driver manage the virtual Converge Bus PCI adapter to control the
  Data-flow reconnecting and routing in Converge testing.
  See spec in qemu\docs\specs\edu.txt

Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/
#include "ConvergeBus.h"

STATIC CONVERGE_BUS_PROTOCOL mConvergeBusProtocolTemplate = {
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
CONVERGE_BUS_PRIVATE_DATA     *mConvergeBusDevice;
UINT32                    mVector;
UINT8                     mMasterBaseVector;
UINT8                     mSlaveBaseVector;


VOID
EFIAPI
ConvergeBusInterruptHandler (
  IN EFI_EXCEPTION_TYPE   InterruptType,
  IN EFI_SYSTEM_CONTEXT   SystemContext
  )
{
  EFI_TPL OriginalTPL;
  UINT32                IntValue;
  EFI_STATUS            Status;

  OriginalTPL = gBS->RaiseTPL (TPL_HIGH_LEVEL);
  mLegacy8259->EndOfInterrupt (mLegacy8259, CONVERGE_BUS_IRQ);
  DEBUG((DEBUG_ERROR, "Interrupt with IRQ %d is handled\n", CONVERGE_BUS_IRQ));
  gBS->RestoreTPL (OriginalTPL);
  
  DEBUG((DEBUG_ERROR, "going to clear the interrrupt\n"));
  IntValue = 0x1;
  Status = mConvergeBusDevice->PciIo->Mem.Write (
                        mConvergeBusDevice->PciIo,
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
ConvergeBusDeviceInit (
  IN OUT CONVERGE_BUS_PRIVATE_DATA *PrivateData
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

  PrivateData->ConvergeBus.Revision = 0x01;
  PrivateData->ConvergeBus.SubSystemDeviceId = Pci.Device.SubsystemID;

  IntLine = Pci.Device.InterruptLine;
  DEBUG((DEBUG_ERROR, "Interrupt line=0x%x\n", IntLine));
  IntPin = Pci.Device.InterruptPin; 
  DEBUG((DEBUG_ERROR, "Interrupt Pin=0x%x\n", IntPin));

  DEBUG((DEBUG_ERROR, "Hardcode Interrupt IRQ=%d\n", CONVERGE_BUS_IRQ));
  Vector = 0;
  Status = mLegacy8259->GetVector (mLegacy8259, CONVERGE_BUS_IRQ, (UINT8 *) &Vector);
  ASSERT_EFI_ERROR (Status);
  DEBUG((DEBUG_ERROR, "Interrupt Vector=0x%x\n", Vector));
  PrivateData->IntVector = Vector;
  Status = mCpu->RegisterInterruptHandler (mCpu, Vector, ConvergeBusInterruptHandler);
  ASSERT_EFI_ERROR (Status);
  Status = mLegacy8259->EnableIrq (mLegacy8259, CONVERGE_BUS_IRQ, FALSE);
  ASSERT_EFI_ERROR (Status);
  //
  //IRQ 2 is PIC Cascade input, always enable it to let slave 8259 works
  //see figure 1 and table 1 in C:\Steven\Spec\IOAPIC\msg-signaled-interrupts-paper.pdf
  //
  Status = mLegacy8259->EnableIrq (mLegacy8259, 2, FALSE);
  ASSERT_EFI_ERROR (Status);

  for (int i=0; i<5; i++){
    DEBUG((DEBUG_ERROR, "going to trigger the Converge Bus interrrupt 5 times as test\n"));
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
    &PrivateData->ConvergeBus,
    &mConvergeBusProtocolTemplate,
    sizeof (CONVERGE_BUS_PROTOCOL)
    );

  return EFI_SUCCESS;
}

STATIC
EFI_STATUS
EFIAPI
ConvergeBusDeviceUninit (
  IN OUT CONVERGE_BUS_PRIVATE_DATA *Device
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
GetConvergeBusAdaptorHandle(
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

/**
  Check whether the controller is a supported USB mass storage.

  @param  This                   The USB mass storage driver binding protocol.
  @param  Controller             The controller handle to check.
  @param  RemainingDevicePath    The remaining device path.

  @retval EFI_SUCCESS            The driver supports this controller.
  @retval other                  This device isn't supported.

**/
EFI_STATUS
EFIAPI
ConvergeBusAdaptorDriverBindingSupported (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   Controller,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath
  )
{
//  return GetConvergeBusAdaptorHandle(Controller);
  EFI_STATUS          Status;
  EFI_PCI_IO_PROTOCOL *PciIo;
  PCI_TYPE00          Pci;

  //
  // Attempt to open the device with the PciIo set of interfaces. On success,
  // the protocol is "instantiated" for the PCI device. Covers duplicate open
  // attempts (EFI_ALREADY_STARTED).
  //
  Status = gBS->OpenProtocol (
                  Controller,               // candidate device
                  &gEfiPciIoProtocolGuid,     // for generic PCI access
                  (VOID **)&PciIo,            // handle to instantiate
                  This->DriverBindingHandle,  // requestor driver identity
                  Controller,               // ControllerHandle, according to
                                              // the UEFI Driver Model
                  EFI_OPEN_PROTOCOL_BY_DRIVER // get exclusive PciIo access to
                                              // the device; to be released
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

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
    // Converge Bus Adaptor PCI Discovery
    //
    if ((Pci.Hdr.VendorId == PCI_VENDOR_ID_QEMU) &&
        (Pci.Hdr.DeviceId == 0x11E8)) {
      Status = EFI_SUCCESS;
    } else {
      Status = EFI_UNSUPPORTED;
    }
  }

  //
  // We needed PCI IO access only transitorily, to see whether we support the
  // device or not.
  //
  gBS->CloseProtocol (Controller, &gEfiPciIoProtocolGuid,
         This->DriverBindingHandle, Controller);

  return Status;
}

/**
  Starts the USB mass storage device with this driver.

  This function consumes USB I/O Portocol, intializes USB mass storage device,
  installs Block I/O Protocol, and submits Asynchronous Interrupt
  Transfer to manage the USB mass storage device.

  @param  This                  The USB mass storage driver binding protocol.
  @param  Controller            The USB mass storage device to start on
  @param  RemainingDevicePath   The remaining device path.

  @retval EFI_SUCCESS           This driver supports this device.
  @retval EFI_UNSUPPORTED       This driver does not support this device.
  @retval EFI_DEVICE_ERROR      This driver cannot be started due to device Error.
  @retval EFI_OUT_OF_RESOURCES  Can't allocate memory resources.
  @retval EFI_ALREADY_STARTED   This driver has been started.

**/
EFI_STATUS
EFIAPI
ConvergeBusAdaptorDriverBindingStart (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   Controller,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath
  )
{
  EFI_STATUS                    Status;
  UINT32                        Num_usb_storage_dev;
  UINT32                        Buffer[5];
  UINT64                        Tmp;
  //
  // Init the global interrupt vector, and assume there is only one Converge Bus Adaptor
  // in the systme
  //
  mVector = 0;

  mConvergeBusDevice = (CONVERGE_BUS_PRIVATE_DATA *) AllocateZeroPool (sizeof(CONVERGE_BUS_PRIVATE_DATA));
  if (mConvergeBusDevice == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  Status = gBS->OpenProtocol (
                    Controller,
                    &gEfiPciIoProtocolGuid,
                    (VOID **)&mConvergeBusDevice->PciIo,
                    This->DriverBindingHandle,
                    Controller,
                    EFI_OPEN_PROTOCOL_BY_DRIVER
                    );
  if (EFI_ERROR (Status)) {
    goto FreeConvergeBusDevice;
  }

  //
  //
  //
  Status = mConvergeBusDevice->PciIo->Attributes (
                                    mConvergeBusDevice->PciIo,
                                    EfiPciIoAttributeOperationGet,
                                    0,
                                    &mConvergeBusDevice->OriginalPciAttributes
                                    );
  if (EFI_ERROR (Status)) {
    goto ClosePciIo;
  }

  Status = mConvergeBusDevice->PciIo->Attributes (
                            mConvergeBusDevice->PciIo,
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
  Status = ConvergeBusDeviceInit (mConvergeBusDevice);
  if (EFI_ERROR (Status)) {
    goto RestorePciAttributes;
  }

  //
  // Setup complete, attempt to export the driver's interface.
  //
  mConvergeBusDevice->Signature = CONVERGE_BUS_PRIVATE_DATA_SIGNATURE;
  Status = gBS->InstallProtocolInterface (
                  &Controller,
                  &gConvergeBusProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  &mConvergeBusDevice->ConvergeBus
                  );
  if (EFI_ERROR (Status)) {
    goto UninitDev;
  }

  Status = mConvergeBusDevice->PciIo->Mem.Read (
                        mConvergeBusDevice->PciIo,    // (protocol, device) handle
                        EfiPciIoWidthUint64,          // access width & copy mode
                        EFI_EDU_BAR_INDEX,
                        0x100,                        // Offset
                        1, // Count
                        &Tmp          // target buffer
                        );
  Num_usb_storage_dev = (UINT32)Tmp;
  DEBUG((DEBUG_ERROR, "Read Num_usb_storage_dev= %d\n", Num_usb_storage_dev));


  //
  // Demo code for how to change guest buffer in host device model
  //
  // Add below code in edu_mmio_write() of qemu-fork\hw\misc\edu_converge.c, which
  // is to immediately write the first 4 bytes of guest buffer whose address
  // specified in 0x100.
  //
  // case 0x100: // Guest output buffer address
      // edu->GuestOutputBufferAddress = val;
      // printf("GuestOutputBufferAddress = %ld\n", val);
      // tmp[0] = 0x12345678;
      // pci_dma_write(PCI_DEVICE(edu), edu->GuestOutputBufferAddress, tmp, 4);
      // break;

  ZeroMem(Buffer, sizeof(Buffer));
  Buffer[0] = 0xffffffff;
  DEBUG((DEBUG_ERROR, "Before write offset 0x100, Buffer[0]= 0x%x\n", Buffer[0]));
  DEBUG((DEBUG_ERROR, "Before write offset 0x100, Buffer buffer address = 0x%x\n", Buffer));
  Tmp = (UINT64)Buffer;
  Status = mConvergeBusDevice->PciIo->Mem.Write (
                        mConvergeBusDevice->PciIo,
                        EfiPciIoWidthUint64,
                        EFI_EDU_BAR_INDEX,
                        0x100, //
                        1,
                        &Tmp
                        );
  DEBUG((DEBUG_ERROR, "After write offset 0x100, Buffer[0]= 0x%x\n", Buffer[0]));

  return EFI_SUCCESS;

UninitDev:
  ConvergeBusDeviceUninit (mConvergeBusDevice);

RestorePciAttributes:
  mConvergeBusDevice->PciIo->Attributes (
                          mConvergeBusDevice->PciIo,
                          EfiPciIoAttributeOperationSet,
                          mConvergeBusDevice->OriginalPciAttributes,
                          NULL
                          );

ClosePciIo:
  gBS->CloseProtocol (
          Controller,
          &gEfiPciIoProtocolGuid,
          This->DriverBindingHandle,
          Controller
          );

FreeConvergeBusDevice:
  FreePool (mConvergeBusDevice);

  return Status;
}


/**
  Stop controlling the device.

  @param  This                   The USB mass storage driver binding
  @param  Controller             The device controller controlled by the driver.
  @param  NumberOfChildren       The number of children of this device
  @param  ChildHandleBuffer      The buffer of children handle.

  @retval EFI_SUCCESS            The driver stopped from controlling the device.
  @retval EFI_DEVICE_ERROR       The device could not be stopped due to a device error.
  @retval EFI_UNSUPPORTED        Block I/O Protocol is not installed on Controller.
  @retval Others                 Failed to stop the driver

**/
EFI_STATUS
EFIAPI
ConvergeBusAdaptorDriverBindingStop (
  IN  EFI_DRIVER_BINDING_PROTOCOL *This,
  IN  EFI_HANDLE                  Controller,
  IN  UINTN                       NumberOfChildren,
  IN  EFI_HANDLE                  *ChildHandleBuffer
  )
{
  EFI_STATUS                    Status;
  CONVERGE_BUS_PROTOCOL         *ConvergeBusProtocol;
  CONVERGE_BUS_PRIVATE_DATA     *ConvergeBusDevice;

  Status = gBS->OpenProtocol (
                  Controller,                  // candidate device
                  &gConvergeBusProtocolGuid,    // retrieve the VirtIo iface
                  (VOID **)&ConvergeBusProtocol,        // target pointer
                  This->DriverBindingHandle,     // requestor driver identity
                  Controller,                  // requesting lookup for dev.
                  EFI_OPEN_PROTOCOL_GET_PROTOCOL // lookup only, no ref. added
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ConvergeBusDevice = CONVERGE_BUS_PRIVATE_DATA_FROM_CONVERGE_BUSS (ConvergeBusProtocol);

  //
  // Handle Stop() requests for in-use driver instances gracefully.
  //
  Status = gBS->UninstallProtocolInterface (Controller,
                  &gConvergeBusProtocolGuid, &ConvergeBusDevice->ConvergeBus);
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ConvergeBusDevice->PciIo->Attributes (ConvergeBusDevice->PciIo, EfiPciIoAttributeOperationSet,
                ConvergeBusDevice->OriginalPciAttributes, NULL);

  Status = gBS->CloseProtocol (Controller, &gEfiPciIoProtocolGuid,
         This->DriverBindingHandle, Controller);

  FreePool (ConvergeBusDevice);
  mConvergeBusDevice = NULL;

  return Status;
}


//
// USB Keyboard Driver Global Variables
//
EFI_DRIVER_BINDING_PROTOCOL gConvergeBusAdaptorDriverBinding = {
  ConvergeBusAdaptorDriverBindingSupported,
  ConvergeBusAdaptorDriverBindingStart,
  ConvergeBusAdaptorDriverBindingStop,
  0xa,
  NULL,
  NULL
};

//
// Entry point of this driver.
//
EFI_STATUS
EFIAPI
ConvergeBusAdaptorEntryPoint (
  IN EFI_HANDLE       ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable
  )
{
  EFI_STATUS                    Status;

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

  Status = EfiLibInstallDriverBindingComponentName2 (
             ImageHandle,
             SystemTable,
             &gConvergeBusAdaptorDriverBinding,
             ImageHandle,
             &gConvergeBusComponentName,
             &gConvergeBusComponentName2
             );
  ASSERT_EFI_ERROR (Status);
  return EFI_SUCCESS;
}
