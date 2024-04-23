/** @file
  SetMem() and SetMemN() implementation.

  The following BaseMemoryLib instances contain the same copy of this file:

    BaseMemoryLib
    BaseMemoryLibMmx
    BaseMemoryLibSse2
    BaseMemoryLibRepStr
    BaseMemoryLibOptDxe
    BaseMemoryLibOptPei
    PeiMemoryLib
    UefiMemoryLib

  Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "MemLibInternals.h"

/**
  Fills a target buffer with a byte value, and returns the target buffer.

  This function fills Length bytes of Buffer with Value, and returns Buffer.

  If Length is greater than (MAX_ADDRESS - Buffer + 1), then ASSERT().

  @param  Buffer    The memory to set.
  @param  Length    The number of bytes to set.
  @param  Value     The value with which to fill Length bytes of Buffer.

  @return Buffer.

**/
VOID *
EFIAPI
SetMem (
  OUT VOID  *Buffer,
  IN UINTN  Length,
  IN UINT8  Value
  )
{
  if (Length == 0) {
    return Buffer;
  }

  ASSERT ((Length - 1) <= (MAX_ADDRESS - (UINTN)Buffer));

  // CHAR8 NumStr[19];
  // SerialOut("Stack: \n");
  // NumStr64bit((UINT64)__builtin_return_address(0), NumStr);
  // SerialOut(NumStr);
  // SerialOut("\n");
  // NumStr64bit((UINT64)__builtin_return_address(1), NumStr);
  // SerialOut(NumStr);
  // SerialOut("\n");
  // NumStr64bit((UINT64)__builtin_return_address(2), NumStr);
  // SerialOut(NumStr);
  // SerialOut("\n");

  return AsanInternalMemSetMem (Buffer, Length, Value, __FILE__, __LINE__);
}

/**
  Fills a target buffer with a value that is size UINTN, and returns the target buffer.

  This function fills Length bytes of Buffer with the UINTN sized value specified by
  Value, and returns Buffer. Value is repeated every sizeof(UINTN) bytes for Length
  bytes of Buffer.

  If Length > 0 and Buffer is NULL, then ASSERT().
  If Length is greater than (MAX_ADDRESS - Buffer + 1), then ASSERT().
  If Buffer is not aligned on a UINTN boundary, then ASSERT().
  If Length is not aligned on a UINTN boundary, then ASSERT().

  @param  Buffer  The pointer to the target buffer to fill.
  @param  Length  The number of bytes in Buffer to fill.
  @param  Value   The value with which to fill Length bytes of Buffer.

  @return Buffer.

**/
VOID *
EFIAPI
SetMemN (
  OUT VOID  *Buffer,
  IN UINTN  Length,
  IN UINTN  Value
  )
{
  if (sizeof (UINTN) == sizeof (UINT64)) {
    return SetMem64 (Buffer, Length, (UINT64)Value);
  } else {
    return SetMem32 (Buffer, Length, (UINT32)Value);
  }
}
