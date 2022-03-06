#include <stdio.h>
#include <malloc.h> 

typedef struct {
  int  Header;
  int  *global_array;
  int  Tail;
} TABLE;

TABLE Table;

int main(int argc, char **argv) {
  int Num;
  
  Table.global_array = (int*)malloc(sizeof(int)*11); 
  Num = 11;
  Table.global_array[Num] = 0x87654321; // structure field buffer overflow, Num should <= 10
  printf("Table.global_array[%d]=0x%x\n", Num, Table.global_array[Num]);  
  return Table.global_array[Num];

}
