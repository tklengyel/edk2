#include <Uefi.h>
#include "AutoGen.h"
#include "UsbBus.h"
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiDriverEntryPoint.h>
//local macro
//type declaration
BOOLEAN
EFIAPI
MatchUsbClass (
  IN USB_CLASS_DEVICE_PATH *UsbClassDevicePathPtr,
  IN USB_INTERFACE *UsbIf
  );

BOOLEAN
EFIAPI
SearchUsbDPInList (
  IN EFI_DEVICE_PATH_PROTOCOL *UsbDP,
  IN LIST_ENTRY *UsbIoDPList
  );

BOOLEAN
MatchUsbWwid (
  IN USB_WWID_DEVICE_PATH *UsbWWIDDevicePathPtr,
  IN USB_INTERFACE *UsbIf
  );

EFI_DEVICE_PATH_PROTOCOL *
EFIAPI
GetUsbDPFromFullDP (
  IN EFI_DEVICE_PATH_PROTOCOL *DevicePath
  );

EFI_STATUS
EFIAPI
AddUsbDPToList (
  IN EFI_DEVICE_PATH_PROTOCOL *UsbDP,
  IN LIST_ENTRY *UsbIoDPList
  );

EFI_STATUS
EFIAPI
UsbBusComponentNameGetControllerName (
  IN EFI_COMPONENT_NAME_PROTOCOL *This,
  IN EFI_HANDLE ControllerHandle,
  IN EFI_HANDLE ChildHandle OPTIONAL,
  IN CHAR8 *Language,
  OUT CHAR16 **ControllerName
  );

EFI_STATUS
EFIAPI
UsbBusComponentNameGetDriverName (
  IN EFI_COMPONENT_NAME_PROTOCOL *This,
  IN CHAR8 *Language,
  OUT CHAR16 **DriverName
  );

EFI_STATUS
EFIAPI
UsbOnHubInterrupt (
  IN VOID *Data,
  IN UINTN DataLength,
  IN VOID *Context,
  IN UINT32 Result
  );

EFI_STATUS
UsbBuildLangTable (
  IN USB_DEVICE *UsbDev
  );

EFI_STATUS
UsbConnectDriver (
  IN USB_INTERFACE *UsbIf
  );

EFI_STATUS
UsbCtrlGetDesc (
  IN USB_DEVICE *UsbDev,
  IN UINTN DescType,
  IN UINTN DescIndex,
  IN UINT16 LangId,
  OUT VOID *Buf,
  IN UINTN Length
  );

EFI_STATUS
UsbDisconnectDriver (
  IN USB_INTERFACE *UsbIf
  );

EFI_STATUS
UsbEnumerateNewDev (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  IN BOOLEAN ResetIsNeeded
  );

EFI_STATUS
UsbEnumeratePort (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port
  );

EFI_STATUS
UsbFreeInterface (
  IN USB_INTERFACE *UsbIf
  );

EFI_STATUS
UsbGetDevDesc (
  IN USB_DEVICE *UsbDev
  );

EFI_STATUS
UsbHubClearPortFeature (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  IN EFI_USB_PORT_FEATURE Feature
  );

EFI_STATUS
UsbHubCtrlClearHubFeature (
  IN USB_DEVICE *HubDev,
  IN UINT16 Feature
  );

EFI_STATUS
UsbHubCtrlClearPortFeature (
  IN USB_DEVICE *HubDev,
  IN UINT8 Port,
  IN UINT16 Feature
  );

EFI_STATUS
UsbHubCtrlGetHubDesc (
  IN USB_DEVICE *HubDev,
  OUT VOID *Buf,
  IN UINTN Len
  );

EFI_STATUS
UsbHubCtrlGetHubStatus (
  IN USB_DEVICE *HubDev,
  OUT UINT32 *State
  );

EFI_STATUS
UsbHubCtrlGetPortStatus (
  IN USB_DEVICE *HubDev,
  IN UINT8 Port,
  OUT VOID *State
  );

EFI_STATUS
UsbHubCtrlResetTT (
  IN USB_DEVICE *HubDev,
  IN UINT8 Port
  );

EFI_STATUS
UsbHubCtrlSetHubDepth (
  IN USB_DEVICE *HubDev,
  IN UINT16 Depth
  );

EFI_STATUS
UsbHubCtrlSetHubFeature (
  IN USB_DEVICE *HubDev,
  IN UINT8 Feature
  );

EFI_STATUS
UsbHubCtrlSetPortFeature (
  IN USB_DEVICE *HubDev,
  IN UINT8 Port,
  IN UINT8 Feature
  );

EFI_STATUS
UsbHubGetPortStatus (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  OUT EFI_USB_PORT_STATUS *PortState
  );

EFI_STATUS
UsbHubInit (
  IN USB_INTERFACE *HubIf
  );

EFI_STATUS
UsbHubReadDesc (
  IN USB_DEVICE *HubDev,
  OUT EFI_USB_HUB_DESCRIPTOR *HubDesc
  );

EFI_STATUS
UsbHubRelease (
  IN USB_INTERFACE *HubIf
  );

EFI_STATUS
UsbHubResetPort (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port
  );

EFI_STATUS
UsbHubSetPortFeature (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  IN EFI_USB_PORT_FEATURE Feature
  );

EFI_STATUS
UsbRootHubClearPortFeature (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  IN EFI_USB_PORT_FEATURE Feature
  );

EFI_STATUS
UsbRootHubGetPortStatus (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  OUT EFI_USB_PORT_STATUS *PortState
  );

EFI_STATUS
UsbRootHubInit (
  IN USB_INTERFACE *HubIf
  );

EFI_STATUS
UsbRootHubRelease (
  IN USB_INTERFACE *HubIf
  );

EFI_STATUS
UsbRootHubResetPort (
  IN USB_INTERFACE *RootIf,
  IN UINT8 Port
  );

EFI_STATUS
UsbRootHubSetPortFeature (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port,
  IN EFI_USB_PORT_FEATURE Feature
  );

EFI_USB_CONFIG_DESCRIPTOR *
UsbGetOneConfig (
  IN USB_DEVICE *UsbDev,
  IN UINT8 Index
  );

USB_CONFIG_DESC *
UsbParseConfigDesc (
  IN UINT8 *DescBuf,
  IN UINTN Len
  );

USB_DEVICE *
UsbCreateDevice (
  IN USB_INTERFACE *ParentIf,
  IN UINT8 ParentPort
  );

USB_DEVICE *
UsbFindChild (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port
  );

USB_INTERFACE *
UsbCreateInterface (
  IN USB_DEVICE *Device,
  IN USB_INTERFACE_DESC *IfDesc
  );

USB_INTERFACE_SETTING *
UsbParseInterfaceDesc (
  IN UINT8 *DescBuf,
  IN UINTN Len,
  OUT UINTN *Consumed
  );

VOID
UsbFreeConfigDesc (
  IN USB_CONFIG_DESC *Config
  );

VOID
UsbFreeDevice (
  IN USB_DEVICE *Device
  );

VOID
UsbFreeInterfaceDesc (
  IN USB_INTERFACE_SETTING *Setting
  );

VOID
UsbHubClearPortChange (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port
  );

VOID
UsbRootHubClearPortChange (
  IN USB_INTERFACE *HubIf,
  IN UINT8 Port
  );

VOID *
UsbCreateDesc (
  IN UINT8 *DescBuf,
  IN UINTN Len,
  IN UINT8 Type,
  OUT UINTN *Consumed
  );

