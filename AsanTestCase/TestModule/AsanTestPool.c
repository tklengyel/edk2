/** @file
 Asan Test Module

Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include <Uefi.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
/**
  Entrypoint of Test Module.

  This function is the entrypoint of Test Module. 

  @param  ImageHandle       The firmware allocated handle for the EFI image.
  @param  SystemTable       A pointer to the EFI System Table.

  @retval EFI_SUCCESS       The entry point is executed successfully.

**/

  
VOID
SerialOutput(
  IN  CONST CHAR8      *String
  );
  
char data;
  
EFI_STATUS
EFIAPI
AsanTestPoolEntryPoint (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
  int Num;
  int *heap_array;
  int *heap_array2;
  VOID *BufferPtr;
  int BufferSize;


  Num = 11;
  heap_array = AllocateZeroPool (sizeof (int) * 11);  
  SerialOutput ("Access heap_array 1\n");
  heap_array[Num] = 0x12345678; // heap buffer overflow, Num should <= 10
  SerialOutput ("Access heap_array 2\n");
  heap_array[Num -1] = 0x12345678; 
  SerialOutput ("Access heap_array 3\n");
  *((char *)heap_array - 1) = 0x12; 
  FreePool(heap_array);

  SerialOutput ("Access heap_array 4\n");
  heap_array[0] = 0x12345678; // heap buffer use after free
  SerialOutput ("Access heap_array 5\n");
  heap_array[Num] = 0x12345678; 
  SerialOutput ("Access heap_array 6\n");
  *((char *)heap_array - 1) = 0x12; 

  BufferSize = 0x100000;
  BufferPtr = AllocateZeroPool (BufferSize);
  SerialOutput ("buffer overflow left read\n");
  data = *(char *)(BufferPtr - 1);
  SerialOutput ("buffer overflow left write\n");
  *(char *)(BufferPtr - 1) = 0x11; // heap buffer overflow
  SerialOutput ("Check every byte of the buffer\n");
  for (int Offset = 0; Offset < BufferSize; Offset++){
    *(char *)(BufferPtr + Offset) = 0xFF;
  }
  SerialOutput ("buffer overflow right read\n");
  data = *(char *)(BufferPtr + BufferSize); // heap buffer overflow
  SerialOutput ("buffer overflow right write\n");
  *(char *)(BufferPtr + BufferSize) = 0x12; // heap buffer overflow
  FreePool(BufferPtr);

  SerialOutput ("Access heap_array 4\n");
  heap_array[0] = 0x12345678; // heap buffer use after free
  SerialOutput ("Access heap_array 5\n");
  heap_array[Num] = 0x12345678; 
  SerialOutput ("Access heap_array 6\n");
  *((char *)heap_array - 1) = 0x12; 
  
  heap_array = AllocateZeroPool (sizeof (int) * 11);
  heap_array2 = ReallocatePool(sizeof (int) * 11, sizeof (int) * 10, heap_array);
  SerialOutput ("Access heap_array 7\n");
  heap_array2[0] = 0x12345678; // heap buffer overflow, Num should <= 10
  SerialOutput ("Access heap_array 8\n");
  heap_array2[10] = 0x12345678; 
  SerialOutput ("Access heap_array 9\n");
  *((char *)heap_array2 - 1) = 0x12; 
  FreePool(heap_array2);

  for (int i = 1; i <= 10; i++){
    heap_array = AllocateZeroPool (sizeof (int) * i);
    
    SerialOutput ("Loop test access heap_array 10\n");
    heap_array[i] = 0x12345678; 
    SerialOutput ("Loop test access heap_array 11\n");
    heap_array[i -1] = 0x12345678; 
    SerialOutput ("Loop test access heap_array 12\n");
    *((char *)heap_array - 1) = 0x12; 
    
    FreePool(heap_array);
  }
  
  return EFI_SUCCESS;
}