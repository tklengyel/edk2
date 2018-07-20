/** @file
  GUID for Fuzz Buss protocol

  Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __FUZZ_BUS_PROTOCOL_H__
#define __FUZZ_BUS_PROTOCOL_H__

#define FUZZ_BUS_PROTOCOL_GUID \
          { 0x826a4dde, 0xeee6, 0x462c, { 0xa1, 0xfc, 0xb8, 0x48, 0x79, 0x64, 0x4f, 0x62 }};

///
/// The FUZZ_BUS_PROTOCOL provides ...
///
typedef struct _FUZZ_BUS_PROTOCOL{
  UINT32                      Revision;
  UINT16                      SubSystemDeviceId;

}FUZZ_BUS_PROTOCOL;

extern EFI_GUID gFuzzBusProtocolGuid;

#endif
