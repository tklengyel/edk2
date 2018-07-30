#include <stdio.h>
#include <malloc.h> 

typedef struct {
  int  Header;
  int  global_array[11];
//  int  Tail;
} TABLE;

int main(int argc, char **argv) { 
  TABLE *Heap;
  int Num;

  
  Heap = (TABLE *)malloc(sizeof(TABLE)); 
  
  Num = 11;
  Heap->global_array[Num] = 0x4321; // heap buffer overflow
  printf("Heap->global_array[%d]=0x%x\n", Num, Heap->global_array[Num]);  
  
  free(Heap);
  return Num;
}
