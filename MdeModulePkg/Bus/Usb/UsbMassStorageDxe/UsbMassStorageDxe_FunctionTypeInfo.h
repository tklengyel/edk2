#include <Uefi.h>
#include "AutoGen.h"
#include "UsbMass.h"
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiDriverEntryPoint.h>
//local macro
//type declaration
EFI_STATUS
UsbBootExecCmd (
  IN USB_MASS_DEVICE *UsbMass,
  IN VOID *Cmd,
  IN UINT8 CmdLen,
  IN EFI_USB_DATA_DIRECTION DataDir,
  IN VOID *Data,
  IN UINT32 DataLen,
  IN UINT32 Timeout
  );

EFI_STATUS
UsbBootExecCmdWithRetry (
  IN USB_MASS_DEVICE *UsbMass,
  IN VOID *Cmd,
  IN UINT8 CmdLen,
  IN EFI_USB_DATA_DIRECTION DataDir,
  IN VOID *Data,
  IN UINT32 DataLen,
  IN UINT32 Timeout
  );

EFI_STATUS
UsbBootInquiry (
  IN USB_MASS_DEVICE *UsbMass
  );

EFI_STATUS
UsbBootReadCapacity (
  IN USB_MASS_DEVICE *UsbMass
  );

EFI_STATUS
UsbBootReadCapacity16 (
  IN USB_MASS_DEVICE *UsbMass
  );

EFI_STATUS
UsbBootRequestSense (
  IN USB_MASS_DEVICE *UsbMass
  );

EFI_STATUS
UsbBotDataTransfer (
  IN USB_BOT_PROTOCOL *UsbBot,
  IN EFI_USB_DATA_DIRECTION DataDir,
  IN OUT UINT8 *Data,
  IN OUT UINTN *TransLen,
  IN UINT32 Timeout
  );

EFI_STATUS
UsbBotGetStatus (
  IN USB_BOT_PROTOCOL *UsbBot,
  IN UINT32 TransLen,
  OUT UINT8 *CmdStatus
  );

EFI_STATUS
UsbBotSendCommand (
  IN USB_BOT_PROTOCOL *UsbBot,
  IN UINT8 *Cmd,
  IN UINT8 CmdLen,
  IN EFI_USB_DATA_DIRECTION DataDir,
  IN UINT32 TransLen,
  IN UINT8 Lun
  );

EFI_STATUS
UsbCbiDataTransfer (
  IN USB_CBI_PROTOCOL *UsbCbi,
  IN EFI_USB_DATA_DIRECTION DataDir,
  IN OUT UINT8 *Data,
  IN OUT UINTN *TransLen,
  IN UINT32 Timeout
  );

EFI_STATUS
UsbCbiGetStatus (
  IN USB_CBI_PROTOCOL *UsbCbi,
  IN UINT32 Timeout,
  OUT USB_CBI_STATUS *Result
  );

EFI_STATUS
UsbCbiSendCommand (
  IN USB_CBI_PROTOCOL *UsbCbi,
  IN UINT8 *Cmd,
  IN UINT8 CmdLen,
  IN UINT32 Timeout
  );

EFI_STATUS
UsbMassInitMedia (
  IN USB_MASS_DEVICE *UsbMass
  );

EFI_STATUS
UsbMassInitMultiLun (
  IN EFI_DRIVER_BINDING_PROTOCOL *This,
  IN EFI_HANDLE Controller,
  IN USB_MASS_TRANSPORT *Transport,
  IN VOID *Context,
  IN EFI_DEVICE_PATH_PROTOCOL *DevicePath,
  IN UINT8 MaxLun
  );

EFI_STATUS
UsbMassInitNonLun (
  IN EFI_DRIVER_BINDING_PROTOCOL *This,
  IN EFI_HANDLE Controller,
  IN USB_MASS_TRANSPORT *Transport,
  IN VOID *Context
  );

EFI_STATUS
UsbMassInitTransport (
  IN EFI_DRIVER_BINDING_PROTOCOL *This,
  IN EFI_HANDLE Controller,
  OUT USB_MASS_TRANSPORT **Transport,
  OUT VOID **Context,
  OUT UINT8 *MaxLun
  );

EFI_STATUS
UsbScsiModeSense (
  IN USB_MASS_DEVICE *UsbMass
  );

