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


CHAR8 NumStr[19];

VOID
SerialOutput(
  IN  CONST CHAR8      *String
  );

VOID
Num2Str64bit(
  IN  UINT64 Number,
  IN  CHAR8* NumStr
  );

void
StackTest (
  void
  )
{
  int Num;
  int stack_array[11];
  SerialOutput ("StackTest begin \n");
  SerialOutput ("StackTest Return IP address is ");
  Num2Str64bit ((unsigned long)__builtin_return_address(0),NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
  Num2Str64bit ((unsigned long)__builtin_return_address(1),NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
  Num2Str64bit ((unsigned long)__builtin_return_address(2),NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
  Num2Str64bit ((unsigned long)__builtin_return_address(3),NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
  Num = 11;
  stack_array[Num] = 0x12;
  stack_array[Num-1] = stack_array[Num];
  SerialOutput ("StackTest done \n");
}

void
GlobalTest (
  void
  )
{
  int Num;
  SerialOutput ("GlobalTest begin \n");
  Num = 11;
  global_array[Num] = 0x21; // global buffer overflow, Num should <= 10
  SerialOutput ("GlobalTest done \n");
}


EFI_STATUS
EFIAPI
TestModuleDxeEntryPoint (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
  char a1[2];
  char a2[3];
  SerialOutput ("CopyMem Test begin \n");
  //heap_array = AllocateZeroPool (sizeof (int) * 2048);
  //if (!heap_array)
        //return;
  //SetMem ((void *)heap_array, 2048, 0xFF);
  //SerialOutput ("Access heap_array 1\n");
  //heap_array[1] = 0x12345678; // heap buffer overflow, Num should <= 10
  a1[0] = 'a';
  a1[1] = 'b';
  a2[0] = 'c';
  a2[1] = 'd';
  a2[2] = 'e';
  a1[2] = 'f';
  a2[3] = 'g';
  CopyMem(a1, a2, 3);
  CopyMem(a2, a1, 3);
  SetMem(a1, 10, 0xFF);
  SetMem(a2, 10, 0xFF);
  //FreePool(heap_array);
  SerialOutput ("CopyMem Test done \n");
  
  return EFI_SUCCESS;
}

//scan-build -o ~/ClangReport -enable-checker alpha.security.ArrayBound -enable-checker alpha.security.ArrayBoundV2 -enable-checker alpha.security.MallocOverflow "gcc" -g -fshort-wchar -fno-strict-aliasing -Wall -Werror -Wno-array-bounds -ffunction-sections -fdata-sections -include AutoGen.h -fno-common -DSTRING_ARRAY_NAME=TestModuleDxeStrings -m64 -fno-stack-protector "-DEFIAPI=__attribute__((ms_abi))" -Os -maccumulate-outgoing-args -mno-red-zone -Wno-address -mcmodel=small -fpie -fno-asynchronous-unwind-tables -Wno-address -fno-builtin -fsanitize=address --param asan-stack=1 --param asan-globals=1 --param asan-instrumentation-with-call-threshold=0 -O0 -fno-builtin -mno-mmx -mno-sse -c -o /home/jshi19/edk2-fork/Build/OvmfX64/DEBUG_GCC49/X64/AsanTestCase/TestModule/TestModule/OUTPUT/./TestModule.obj -I/home/jshi19/edk2-fork/AsanTestCase/TestModule -I/home/jshi19/edk2-fork/Build/OvmfX64/DEBUG_GCC49/X64/AsanTestCase/TestModule/TestModule/DEBUG -I/home/jshi19/edk2-fork/MdePkg -I/home/jshi19/edk2-fork/MdePkg/Include -I/home/jshi19/edk2-fork/MdePkg/Include/X64 -I/home/jshi19/edk2-fork/MdeModulePkg -I/home/jshi19/edk2-fork/MdeModulePkg/Include /home/jshi19/edk2-fork/AsanTestCase/TestModule/TestModule.c


