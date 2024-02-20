/** @file
 Asan Test Module

Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
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
//
// These symbols are provided in the GCC linker script.
//
//extern void (*__preinit_array_start []) (int, char **, char **);
//extern void (*__preinit_array_end []) (int, char **, char **);
 extern void (*__init_array_start []) (int, char **, char **);
 extern void (*__init_array_end []) (int, char **, char **);
// extern void (*__fini_array_start []) (void);
// extern void (*__fini_array_end []) (void); 
/**
  Entrypoint of Test Module.

  This function is the entrypoint of Test Module. 

  @param  ImageHandle       The firmware allocated handle for the EFI image.
  @param  SystemTable       A pointer to the EFI System Table.

  @retval EFI_SUCCESS       The entry point is executed successfully.

**/
#pragma pack(1)
typedef struct{
  const char *filename;
  int line_no;
  char Char;
  int column_no;
}TestStructure;

char global_array[11]={0};
short global_array2[11]={0};
int global_array3[11]={0};

TestStructure global_structure[11];
#pragma pack()

  
VOID
SerialOutput(
  IN  CONST CHAR8      *String
  );
  
volatile int *p = 0;

EFI_STATUS
EFIAPI
SmmTestModuleEntryPoint (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
  int stack_array[11];
  int Num;
  int *heap_array;
  int *heap_array2;
  char *CharPtr;
  short *ShortPtr;
  int *IntPtr;
  VOID *HeapBase, *BeginPtr, *EndPtr;
  //VOID *HeapBase1, *HeapBase2, *HeapBase3, *HeapBase4, *HeapBase5, *HeapBase6, *HeapBase7, *HeapBase8, *HeapBase9, *HeapBase10;

  
  // int size = __preinit_array_end - __preinit_array_start;
  // DEBUG ((EFI_D_ERROR, "AsanTest: preinit function pointers size = 0x%x\n", size));

  // for (int i = 0; i < size; i++){
    // (*__preinit_array_start [i]) (0, 0, 0);
  // }

  // int size = __init_array_end - __init_array_start;
  // DEBUG ((EFI_D_ERROR, "AsanTest: preinit function pointers size = 0x%x\n", size));

  // for (int i = 0; i < size; i++){
    // (*__init_array_start [i]) (0, 0, 0);
  // }

  //
  // Test the whether asan skip MMIO access.
  // Assume system memory and its shadow memory as below:
  // LowerMemorySize = 0x20000000
  // AsanShadowMemoryStart = 0x4000000
  // AsanShadowMemorySize = 0x4000000
  SetMem ((void *)(0x4000000+0x4000000), 0x100, 0xFF);
  SerialOutput ("access MMIO 1\n");
  IntPtr = (int *)(0x20000000 - 1);
  *IntPtr = 1;
  SerialOutput ("access MMIO 2\n");
  IntPtr = (int *)0x20000000;
  *IntPtr = 2;
  SerialOutput ("access MMIO 3\n");
  IntPtr = (int *)(0x20000000 + 1);
  *IntPtr = 3;

  Num = 9;
  SerialOutput ("Num = 9\n");
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  global_array2[Num] = 0x4321; // global buffer overflow, Num should <= 10
  global_array3[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  global_structure[Num].line_no = 0x87654321; // global buffer overflow, Num should <= 10
  Num = 10; // clang static analysers (e.g. alpha.security.ArrayBound) can detect the constant value easily
  SerialOutput ("Num = 10\n");
  //Num = (int)(UINTN)ImageHandle; // clang static analysers can not detect it when the value is from input
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  global_array2[Num] = 0x4321; // global buffer overflow, Num should <= 10
  global_array3[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  global_structure[Num].line_no = 0x87654321; // global buffer overflow, Num should <= 10
  Num = 11;
  SerialOutput ("Num = 11\n");
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  global_array2[Num] = 0x4321; // global buffer overflow, Num should <= 10
  global_array3[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  global_structure[Num].line_no = 0x87654321; // global buffer overflow, Num should <= 10
  Num = 12;
  SerialOutput ("Num = 12\n");
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  global_array2[Num] = 0x4321; // global buffer overflow, Num should <= 10
  global_array3[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  global_structure[Num].line_no = 0x87654321; // global buffer overflow, Num should <= 10
  Num = 13;
  SerialOutput ("Num = 13\n");
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  global_array2[Num] = 0x4321; // global buffer overflow, Num should <= 10
  global_array3[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  global_structure[Num].line_no = 0x87654321; // global buffer overflow, Num should <= 10

  SerialOutput ("CharPtr = -1\n");
  CharPtr = &global_array[0];
  *(char *)((UINTN)CharPtr - sizeof(global_array[0])) = 0x21; 
  
  SerialOutput ("ShortPtr = -1\n");
  ShortPtr = &global_array2[0];
  *(short *)((UINTN)ShortPtr - sizeof(global_array2[0])) = 0x4321; 
  
  SerialOutput ("IntPtr = -1\n");
  IntPtr = &global_array3[0];
  *(int *)((UINTN)IntPtr - sizeof(global_array3[0])) = 0x87654321; 
  
  SerialOutput ("Access stack_array 1\n");
  stack_array[Num] = 0x12345678; // stack buffer overflow, Num should <= 10  
  
  Num = 11;
  SerialOutput ("Access stack_array 2\n");
  stack_array[Num] = 0x12345678;
  stack_array[Num-1] = stack_array[Num];
  
  heap_array = AllocateZeroPool (sizeof (int) * 11);  
  SerialOutput ("Access heap_array 1\n");
  heap_array[Num] = 0x12345678; // heap buffer overflow, Num should <= 10
  SerialOutput ("Access heap_array 2\n");
  heap_array[Num -1] = 0x12345678; 
  SerialOutput ("Access heap_array 3\n");
  *((char *)heap_array - 1) = 0x12; 
  
  FreePool(heap_array);
  SerialOutput ("Access heap_array 4\n");
  heap_array[0] = 0x12345678; // Use-after-free
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
  
  
  SerialOutput ("Access heap page\n");
  HeapBase = AllocatePages(11);
  EndPtr = HeapBase + EFI_PAGES_TO_SIZE(11) - 1;
  SerialOutput ("Access heap 1\n");
  *(char *)EndPtr = 0x12;
  SerialOutput ("Access heap 2\n");
  *(char *)(EndPtr + 1) = 0x12;
  SerialOutput ("Access heap 3\n");
  *(char *)(EndPtr + 2) = 0x12;
  SerialOutput ("Access heap 4\n");
  *(char *)HeapBase = 0x12;
  SerialOutput ("Access heap 5\n");
  *(char *)(HeapBase -1) = 0x12;
  
  SerialOutput ("Free heap page test 1\n");
  BeginPtr = HeapBase;
  EndPtr = HeapBase + EFI_PAGES_TO_SIZE(11) - 1;
  
  for (int i = 0; i < 11; i++){
   
    FreePages(HeapBase + EFI_PAGES_TO_SIZE(i), 1);
    
    SerialOutput ("Loop test access heap page 6\n");
    *(char *)(BeginPtr -1) = 0x12;
    SerialOutput ("Loop test access heap page 7\n");
    *(char *)(BeginPtr) = 0x12;
    SerialOutput ("Loop test access heap page 8\n");
    *(char *)(EndPtr) = 0x12;
    SerialOutput ("Loop test access heap page 9\n");
    *(char *)(EndPtr + 1) = 0x12;
    
    SerialOutput ("Loop test access heap page 10\n");
    *(char *)(HeapBase + EFI_PAGES_TO_SIZE(i)) = 0x12; //current Asan implementation will not protect clipped page
  }
  
  SerialOutput ("Free heap page test 2\n");
  HeapBase = AllocatePages(11);
  for (int i = 0; i < 11/2; i++){
   
    FreePages(HeapBase + EFI_PAGES_TO_SIZE(i*2 + 1), 1);
    
    BeginPtr = HeapBase + EFI_PAGES_TO_SIZE(i*2);
    EndPtr = BeginPtr + EFI_PAGES_TO_SIZE(1) - 1;
    SerialOutput ("Loop test access heap page 11\n");
    *(char *)(BeginPtr -1) = 0x12;
    SerialOutput ("Loop test access heap page 12\n");
    *(char *)(BeginPtr) = 0x12;
    SerialOutput ("Loop test access heap page 13\n");
    *(char *)(EndPtr) = 0x12;
    SerialOutput ("Loop test access heap page 14\n");
    *(char *)(EndPtr + 1) = 0x12;
  }
  
  
  SerialOutput ("Test address-use-after-scope\n");
  {
    int x = 0;
    p = &x;
  }
  *p = 5;
  
  return EFI_SUCCESS;
}

//scan-build -o ~/ClangReport -enable-checker alpha.security.ArrayBound -enable-checker alpha.security.ArrayBoundV2 -enable-checker alpha.security.MallocOverflow "gcc" -g -fshort-wchar -fno-strict-aliasing -Wall -Werror -Wno-array-bounds -ffunction-sections -fdata-sections -include AutoGen.h -fno-common -DSTRING_ARRAY_NAME=TestModuleDxeStrings -m64 -fno-stack-protector "-DEFIAPI=__attribute__((ms_abi))" -Os -maccumulate-outgoing-args -mno-red-zone -Wno-address -mcmodel=small -fpie -fno-asynchronous-unwind-tables -Wno-address -fno-builtin -fsanitize=address --param asan-stack=1 --param asan-globals=1 --param asan-instrumentation-with-call-threshold=0 -O0 -fno-builtin -mno-mmx -mno-sse -c -o /home/jshi19/edk2-fork/Build/OvmfX64/DEBUG_GCC49/X64/AsanTestCase/TestModule/TestModule/OUTPUT/./TestModule.obj -I/home/jshi19/edk2-fork/AsanTestCase/TestModule -I/home/jshi19/edk2-fork/Build/OvmfX64/DEBUG_GCC49/X64/AsanTestCase/TestModule/TestModule/DEBUG -I/home/jshi19/edk2-fork/MdePkg -I/home/jshi19/edk2-fork/MdePkg/Include -I/home/jshi19/edk2-fork/MdePkg/Include/X64 -I/home/jshi19/edk2-fork/MdeModulePkg -I/home/jshi19/edk2-fork/MdeModulePkg/Include /home/jshi19/edk2-fork/AsanTestCase/TestModule/TestModule.c


