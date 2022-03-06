#include <stdio.h>
#include <malloc.h> 

int main(int argc, char **argv) { 
  int *heap_array, Num, PrintValue;

  
  heap_array = (int*)malloc(sizeof(int)*11); 
  
  Num = 11;
  heap_array[Num] = 0x4321; // heap buffer overflow
  printf("heap_array[%d]=0x%x\n", Num, heap_array[Num]);  
  
  free(heap_array);
  return heap_array[Num];
}
