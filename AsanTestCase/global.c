#include <stdio.h>
/*
///
/// Data structure that precedes all of the standard EFI table types.
///
typedef struct {
  ///
  /// A 64-bit signature that identifies the type of table that follows.
  /// Unique signatures have been generated for the EFI System Table,
  /// the EFI Boot Services Table, and the EFI Runtime Services Table.
  ///
  UINT64  Signature;
  ///
  /// The revision of the EFI Specification to which this table
  /// conforms. The upper 16 bits of this field contain the major
  /// revision value, and the lower 16 bits contain the minor revision
  /// value. The minor revision values are limited to the range of 00..99.
  ///
  UINT32  Revision;
  ///
  /// The size, in bytes, of the entire table including the EFI_TABLE_HEADER.
  ///
  UINT32  HeaderSize;
  ///
  /// The 32-bit CRC for the entire table. This value is computed by
  /// setting this field to 0, and computing the 32-bit CRC for HeaderSize bytes.
  ///
  UINT32  CRC32;
  ///
  /// Reserved field that must be set to 0.
  ///
  UINT32  Reserved;
} EFI_TABLE_HEADER;
*/
int global_array[11]={0};

int main(int argc, char **argv) {
  int Num;
  
  Num = 11;
  global_array[Num] = 0x87654321; // global buffer overflow, Num should <= 10
  printf("global_array[%d]=0x%x\n", Num, global_array[Num]);  
  return global_array[Num];

}
