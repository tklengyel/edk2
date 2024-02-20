#include <stdio.h>

typedef struct {
  int  Header;
  int  global_array[11];
  int  Tail;
} TABLE;

TABLE Table;

int main(int argc, char **argv) {
  int Num;
  
  Num = 11;
  // redzones is only rounded up to bound of the structure outermost
  // which cause miss structure innermost field buffer overflow here
  Table.global_array[Num] = 0x87654321; 
  printf("Table.global_array[%d]=0x%x\n", Num, Table.global_array[Num]);  
  return Table.global_array[Num];

}
