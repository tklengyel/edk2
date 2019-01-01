/** @file
  Utility functions used by the Dp application.

  Copyright (c) 2009 - 2018, Intel Corporation. All rights reserved.
  (C) Copyright 2015-2016 Hewlett Packard Enterprise Development LP<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/PeCoffGetEntryPointLib.h>
#include <Library/PrintLib.h>
#include <Library/HiiLib.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/HandleParsingLib.h>

#include <Pi/PiFirmwareFile.h>
#include <Library/DxeServicesLib.h>

#include <Protocol/LoadedImage.h>
#include <Protocol/DriverBinding.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/DevicePath.h>


#define DP_GAUGE_STRING_LENGTH   36
CHAR16            mGaugeString[DP_GAUGE_STRING_LENGTH + 1];
EFI_HANDLE        mDpHiiHandle;

#define SHELL_FREE_NON_NULL(Pointer)  \
  do {                                \
    if ((Pointer) != NULL) {          \
      FreePool((Pointer));            \
      (Pointer) = NULL;               \
    }                                 \
  } while(FALSE)

/** 
  Get the file name portion of the Pdb File Name.
  
  The portion of the Pdb File Name between the last backslash and
  either a following period or the end of the string is converted
  to Unicode and copied into UnicodeBuffer.  The name is truncated,
  if necessary, to ensure that UnicodeBuffer is not overrun.
  
  @param[in]  PdbFileName     Pdb file name.
  @param[out] UnicodeBuffer   The resultant Unicode File Name.
  
**/
VOID
DpGetShortPdbFileName (
  IN  CHAR8     *PdbFileName,
  OUT CHAR16    *UnicodeBuffer
  )
{
  UINTN IndexA;     // Current work location within an ASCII string.
  UINTN IndexU;     // Current work location within a Unicode string.
  UINTN StartIndex;
  UINTN EndIndex;

  ZeroMem (UnicodeBuffer, (DP_GAUGE_STRING_LENGTH + 1) * sizeof (CHAR16));

  if (PdbFileName == NULL) {
    StrnCpyS (UnicodeBuffer, DP_GAUGE_STRING_LENGTH + 1, L" ", 1);
  } else {
    StartIndex = 0;
    for (EndIndex = 0; PdbFileName[EndIndex] != 0; EndIndex++)
      ;
    for (IndexA = 0; PdbFileName[IndexA] != 0; IndexA++) {
      if ((PdbFileName[IndexA] == '\\') || (PdbFileName[IndexA] == '/')) {
        StartIndex = IndexA + 1;
      }

      if (PdbFileName[IndexA] == '.') {
        EndIndex = IndexA;
      }
    }

    IndexU = 0;
    for (IndexA = StartIndex; IndexA < EndIndex; IndexA++) {
      UnicodeBuffer[IndexU] = (CHAR16) PdbFileName[IndexA];
      IndexU++;
      if (IndexU >= DP_GAUGE_STRING_LENGTH) {
        UnicodeBuffer[DP_GAUGE_STRING_LENGTH] = 0;
        break;
      }
    }
  }
}

/** 
  Get a human readable name for an image handle.
  The following methods will be tried orderly:
    1. Image PDB
    2. ComponentName2 protocol
    3. FFS UI section
    4. Image GUID
    5. Image DevicePath
    6. Unknown Driver Name

  @param[in]    Handle

  @post   The resulting Unicode name string is stored in the
          mGaugeString global array.

**/
VOID
DpGetNameFromHandle (
  IN EFI_HANDLE   Handle
  )
{
  EFI_STATUS                   Status;
  EFI_LOADED_IMAGE_PROTOCOL    *Image;
  CHAR8                        *PdbFileName;
  EFI_DRIVER_BINDING_PROTOCOL  *DriverBinding;
  EFI_STRING                   StringPtr;
  EFI_DEVICE_PATH_PROTOCOL     *LoadedImageDevicePath;
  EFI_DEVICE_PATH_PROTOCOL     *DevicePath;
  EFI_GUID                     *NameGuid;
  CHAR16                       *NameString;
  UINTN                        StringSize;
  CHAR8                        *PlatformLanguage;
  CHAR8                        *BestLanguage;
  EFI_COMPONENT_NAME2_PROTOCOL *ComponentName2;

  Image = NULL;
  LoadedImageDevicePath = NULL;
  DevicePath = NULL;

  //
  // Method 1: Get the name string from image PDB
  //
  Status = gBS->HandleProtocol (
                  Handle,
                  &gEfiLoadedImageProtocolGuid,
                  (VOID **) &Image
                  );

  if (EFI_ERROR (Status)) {
    Status = gBS->OpenProtocol (
                    Handle,
                    &gEfiDriverBindingProtocolGuid,
                    (VOID **) &DriverBinding,
                    NULL,
                    NULL,
                    EFI_OPEN_PROTOCOL_GET_PROTOCOL
                    );
    if (!EFI_ERROR (Status)) {
      Status = gBS->HandleProtocol (
                      DriverBinding->ImageHandle,
                      &gEfiLoadedImageProtocolGuid,
                      (VOID **) &Image
                      );
    }
  }

  if (!EFI_ERROR (Status)) {
    PdbFileName = PeCoffLoaderGetPdbPointer (Image->ImageBase);

    if (PdbFileName != NULL) {
      DpGetShortPdbFileName (PdbFileName, mGaugeString);
      return;
    }
  }

  //
  // Method 2: Get the name string from ComponentName2 protocol
  //
  Status = gBS->HandleProtocol (
                  Handle,
                  &gEfiComponentName2ProtocolGuid,
                  (VOID **) &ComponentName2
                  );
  if (!EFI_ERROR (Status)) {
    //
    // Firstly use platform language setting, secondly use driver's first supported language.
    //
    GetVariable2 (L"PlatformLang", &gEfiGlobalVariableGuid, (VOID**)&PlatformLanguage, NULL);
    BestLanguage = GetBestLanguage(
                     ComponentName2->SupportedLanguages,
                     FALSE,
                     (PlatformLanguage != NULL) ? PlatformLanguage : "",
                     ComponentName2->SupportedLanguages,
                     NULL
                     );
    SHELL_FREE_NON_NULL (PlatformLanguage);

    Status = ComponentName2->GetDriverName (
                               ComponentName2,
                               BestLanguage != NULL ? BestLanguage : "en-US",
                               &StringPtr
                               );
    if (!EFI_ERROR (Status)) {
      SHELL_FREE_NON_NULL (BestLanguage);
      StrnCpyS (mGaugeString, DP_GAUGE_STRING_LENGTH + 1, StringPtr, DP_GAUGE_STRING_LENGTH);
      mGaugeString[DP_GAUGE_STRING_LENGTH] = 0;
      return;
    }
  }

  Status = gBS->HandleProtocol (
                  Handle,
                  &gEfiLoadedImageDevicePathProtocolGuid,
                  (VOID **) &LoadedImageDevicePath
                  );
  if (!EFI_ERROR (Status) && (LoadedImageDevicePath != NULL)) {
    DevicePath = LoadedImageDevicePath;
  } else if (Image != NULL) {
    DevicePath = Image->FilePath;
  }

  if (DevicePath != NULL) {
    //
    // Try to get image GUID from image DevicePath
    //
    NameGuid = NULL;
    while (!IsDevicePathEndType (DevicePath)) {
      NameGuid = EfiGetNameGuidFromFwVolDevicePathNode ((MEDIA_FW_VOL_FILEPATH_DEVICE_PATH *) DevicePath);
      if (NameGuid != NULL) {
        break;
      }
      DevicePath = NextDevicePathNode (DevicePath);
    }

    if (NameGuid != NULL) {
      //
      // Try to get the image's FFS UI section by image GUID
      //
      NameString = NULL;
      StringSize = 0;
      Status = GetSectionFromAnyFv (
                NameGuid,
                EFI_SECTION_USER_INTERFACE,
                0,
                (VOID **) &NameString,
                &StringSize
                );

      if (!EFI_ERROR (Status)) {
        //
        // Method 3. Get the name string from FFS UI section
        //
        StrnCpyS (mGaugeString, DP_GAUGE_STRING_LENGTH + 1, NameString, DP_GAUGE_STRING_LENGTH);
        mGaugeString[DP_GAUGE_STRING_LENGTH] = 0;
        FreePool (NameString);
      } else {
        //
        // Method 4: Get the name string from image GUID
        //
        UnicodeSPrint (mGaugeString, sizeof (mGaugeString), L"%g", NameGuid);
      }
      return;
    } else {
      //
      // Method 5: Get the name string from image DevicePath
      //
      NameString = ConvertDevicePathToText (DevicePath, TRUE, FALSE);
      if (NameString != NULL) {
        StrnCpyS (mGaugeString, DP_GAUGE_STRING_LENGTH + 1, NameString, DP_GAUGE_STRING_LENGTH);
        mGaugeString[DP_GAUGE_STRING_LENGTH] = 0;
        FreePool (NameString);
        return;
      }
    }
  }

  //
  // Method 6: Unknown Driver Name
  //
  StringPtr = L"Unknown driver name";
  StrnCpyS (mGaugeString, DP_GAUGE_STRING_LENGTH + 1, StringPtr, DP_GAUGE_STRING_LENGTH);
}
