/** @file
  The compiler instrumentation routines for AddressSanitizer(ASan).

  Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/


#include <Uefi.h>
#include <Library/GcdaCovLib.h>
#include <Library/HobLib.h>
#include <Library/MemoryAllocationLib.h>

VOID
SerialOutput(
  IN  CONST CHAR8      *String
  );

VOID
SerialOutput2(
  IN  CONST CHAR8      *String
  );

VOID
Num2Str8bit(
  IN  UINT8 Number,
  IN  CHAR8* NumStr
  );

VOID
Num2Str16bit(
  IN  UINT16 Number,
  IN  CHAR8* NumStr
  );

VOID
Num2Str64bit(
  IN  UINT64 Number,
  IN  CHAR8* NumStr
  );



typedef void (*fn_ptr)();

typedef void* dynamic_object_id;
// The address of this variable identifies a given dynamic object.
static dynamic_object_id current_id;
#define CURRENT_ID (&current_id)

struct fn_node {
  dynamic_object_id id;
  fn_ptr fn;
  struct fn_node* next;
};

struct fn_list {
  struct fn_node *head, *tail;
};

/*
 * A list of functions to write out the data, shared between all dynamic objects.
 */
struct fn_list writeout_fn_list;

/*
 *  A list of flush functions that our __gcov_flush() function should call, shared between all dynamic objects.
 */
struct fn_list flush_fn_list;

static void fn_list_insert(struct fn_list* list, fn_ptr fn) {
  struct fn_node* new_node = AllocateZeroPool(sizeof(struct fn_node));
  new_node->fn = fn;
  new_node->next = NULL;
  new_node->id = CURRENT_ID;

  if (!list->head) {
    list->head = list->tail = new_node;
  } else {
    list->tail->next = new_node;
    list->tail = new_node;
  }
}

static void fn_list_remove(struct fn_list* list) {
  struct fn_node* curr = list->head;
  struct fn_node* prev = NULL;
  struct fn_node* next = NULL;

  while (curr) {
    next = curr->next;

    if (curr->id == CURRENT_ID) {
      if (curr == list->head) {
        list->head = next;
      }

      if (curr == list->tail) {
        list->tail = prev;
      }

      if (prev) {
        prev->next = next;
      }

      FreePool(curr);
    } else {
      prev = curr;
    }

    curr = next;
  }
}



void
EFIAPI
llvm_gcda_summary_info(
  )
{
  CHAR8 NumStr[19];
  SerialOutput ("llvm_gcda_summary_info is called,fn address =");
  Num2Str64bit ((UINT64)llvm_gcda_summary_info, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
}

void
EFIAPI
llvm_gcda_emit_arcs(
  UINT32 num_counters,
  UINT64 *counters
  ) 
{
  CHAR8 NumStr[19];
  SerialOutput ("llvm_gcda_emit_arcs is called,fn address =");
  Num2Str64bit ((UINT64)llvm_gcda_emit_arcs, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
}

void
EFIAPI
llvm_gcda_emit_function(
  UINT32 ident,
  const char *function_name,
  UINT32 func_checksum, 
  UINT8 use_extra_checksum,
  UINT32 cfg_checksum
  ) 
{
  CHAR8 NumStr[19];
  SerialOutput ("llvm_gcda_emit_function is called,fn address =");
  Num2Str64bit ((UINT64)llvm_gcda_emit_function, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
}

void
EFIAPI
llvm_gcda_start_file(
  const char *orig_filename, 
  const char version[4],
  UINT32 checksum
  ) 
{
  CHAR8 NumStr[19];
  SerialOutput ("llvm_gcda_start_file is called,fn address =");
  Num2Str64bit ((UINT64)llvm_gcda_start_file, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  SerialOutput ("llvm_gcda_start_file orig_filename =");
  SerialOutput (orig_filename);
  SerialOutput ("\n");
}

void
EFIAPI
llvm_gcda_end_file(
  )
{
  CHAR8 NumStr[19];
  SerialOutput ("llvm_gcda_end_file is called,fn address =");
  Num2Str64bit ((UINT64)llvm_gcda_end_file, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");
}



EFIAPI
void llvm_register_writeout_function(fn_ptr fn) {
  fn_list_insert(&writeout_fn_list, fn);
}

EFIAPI
void llvm_writeout_files(void) {
  CHAR8 NumStr[19];
  struct fn_node *curr = writeout_fn_list.head;

  while (curr) {
    if (curr->id == CURRENT_ID) {
      SerialOutput ("llvm_writeout_files is called,curr->fn =");
      Num2Str64bit ((UINT64)curr->fn, NumStr);
      SerialOutput (NumStr);
      SerialOutput ("\n");
      curr->fn();
    }
    curr = curr->next;
  }
}


EFIAPI
void llvm_delete_writeout_function_list(void) {
  fn_list_remove(&writeout_fn_list);
}

EFIAPI
void llvm_register_flush_function(fn_ptr fn) {
  fn_list_insert(&flush_fn_list, fn);
}

void __gcov_flush() {
  struct fn_node* curr = flush_fn_list.head;

  while (curr) {
    curr->fn();
    curr = curr->next;
  }
}

EFIAPI
void llvm_delete_flush_function_list(void) {
  fn_list_remove(&flush_fn_list);
}

void
__llvm_gcov_init()
{
  SerialOutput ("__llvm_gcov_init is called!\n");
}

void
EFIAPI
llvm_gcov_init(fn_ptr wfn, fn_ptr ffn)
{
  CHAR8 NumStr[19];
  static int DumpFunctionAddress = 0;

  if(DumpFunctionAddress == 0){
    DumpFunctionAddress =1;

    SerialOutput ("llvm_gcda_summary_info is called,fn address =");
    Num2Str64bit ((UINT64)llvm_gcda_summary_info, NumStr);
    SerialOutput (NumStr);
    SerialOutput ("\n");

    SerialOutput ("llvm_gcda_emit_arcs is called,fn address =");
    Num2Str64bit ((UINT64)llvm_gcda_emit_arcs, NumStr);
    SerialOutput (NumStr);
    SerialOutput ("\n");

    SerialOutput ("llvm_gcda_emit_function is called,fn address =");
    Num2Str64bit ((UINT64)llvm_gcda_emit_function, NumStr);
    SerialOutput (NumStr);
    SerialOutput ("\n");

    SerialOutput ("llvm_gcda_start_file is called,fn address =");
    Num2Str64bit ((UINT64)llvm_gcda_start_file, NumStr);
    SerialOutput (NumStr);
    SerialOutput ("\n");
    
    SerialOutput ("llvm_gcda_end_file is called,fn address =");
    Num2Str64bit ((UINT64)llvm_gcda_end_file, NumStr);
    SerialOutput (NumStr);
    SerialOutput ("\n");
  }

  SerialOutput ("llvm_gcov_init is called, ");
  SerialOutput ("wfn= ");
  Num2Str64bit ((UINT64)wfn, NumStr);
  SerialOutput (NumStr);
  SerialOutput (" and ");
  SerialOutput ("ffn= ");
  Num2Str64bit ((UINT64)ffn, NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  if (wfn){
    llvm_register_writeout_function(wfn);
  }

  if (ffn){
    llvm_register_flush_function(ffn);
  }


}

void __sanitizer_cov_trace_pc(void)
{

}


//
// These symbols are provided in the GCC linker script.
//
extern void (*__preinit_array_start []) (int, char **, char **);
extern void (*__preinit_array_end []) (int, char **, char **);
extern void (*__init_array_start []) (int, char **, char **);
extern void (*__init_array_end []) (int, char **, char **);
extern void (*__fini_array_start []) (void);
extern void (*__fini_array_end []) (void);
extern void (*__ctors_start []) (void);
extern void (*__ctors_end []) (void);
extern void (*__dtors_start []) (void);
extern void (*__dtors_end []) (void);

RETURN_STATUS
EFIAPI
SetupGcdaBuffer (
  VOID
  )
{

  return RETURN_SUCCESS;
}


RETURN_STATUS
EFIAPI
GcdaCovLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS                    Status;
  CHAR8                         NumStr[19];
  int                           size;
  SerialOutput ("GcdaCovLibConstructor begin\n");

  Status = SetupGcdaBuffer();
  if (EFI_ERROR(Status)){
    return RETURN_SUCCESS;//Status;
  }
  writeout_fn_list.head = NULL;
  writeout_fn_list.tail = NULL;
  flush_fn_list.head = NULL;
  flush_fn_list.tail = NULL;

  size = __preinit_array_end - __preinit_array_start;
  SerialOutput ("GcdaCovLibConstructor: preinit function pointers size = ");
  Num2Str64bit ( size , NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  for (int i = 0; i < size; i++){
    (*__preinit_array_start [i]) (0, 0, 0);
  }

  size = __init_array_end - __init_array_start;
  SerialOutput ("GcdaCovLibConstructor: init function pointers size = ");
  Num2Str64bit ( size , NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  for (int i = 0; i < size; i++){
    (*__init_array_start [i]) (0, 0, 0);
  }

  size = __ctors_end - __ctors_start;
  SerialOutput ("GcdaCovLibConstructor: ctors function pointers size = ");
  Num2Str64bit ( size , NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  for (int i = 0; i < size; i++){
    (*__ctors_start [i]) ();
  }

  SerialOutput ("GcdaCovLibConstructor done\n");
  return RETURN_SUCCESS;
}

EFI_STATUS
EFIAPI
GcdaCovLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  CHAR8                         NumStr[19];
  int                           size;

  SerialOutput ("GcdaCovLibDestructor begin\n");
  size = __fini_array_start - __fini_array_start;
  SerialOutput ("GcdaCovLibDestructor: fini function pointers size = ");
  Num2Str64bit ( size , NumStr);
  SerialOutput (NumStr);
  SerialOutput ("\n");

  for (int i = 0; i < size; i++){
    (*__fini_array_start [i]) ();
  }

  llvm_writeout_files();

  SerialOutput ("GcdaCovLibDestructor done\n");
  return RETURN_SUCCESS;
}