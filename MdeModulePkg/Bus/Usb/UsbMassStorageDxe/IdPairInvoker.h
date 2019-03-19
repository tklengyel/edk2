/**

**/
#ifndef _ID_PAIR_INVOKER_H_
#define _ID_PAIR_INVOKER_H_

EFI_STATUS
UsbCbi_IdPairTrace (
  IN  EFI_USB_IO_PROTOCOL   *UsbIo,
  OUT USB_CBI_PROTOCOL      **Trace       OPTIONAL
  );

EFI_STATUS
UsbCbiSendCommand_Invoker (
  IN UINT8                  *Cmd,
  IN UINT8                  CmdLen
  );

EFI_STATUS
UsbCbiDataTransfer_Invoker (
  IN EFI_USB_DATA_DIRECTION   DataDir,
  IN OUT UINT8                *Data,
  IN OUT UINTN                *TransLen
  );

EFI_STATUS
UsbCbiGetStatus_Invoker (
  OUT USB_CBI_STATUS          *Result
  );


#endif