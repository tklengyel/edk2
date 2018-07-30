#include <stdio.h>

int global_array1[11]={0};
int global_array2[11]={0};

int main(int argc, char **argv) {
  int Num;
  
  // Too aggressive buffer overflow can cross the red-zoom 
  // between array1 and array2, which cause false negative
  Num = 200;
  global_array1[Num] = 0x87654321; 
  printf("global_array1[%d]=0x%x\n", Num, global_array1[Num]);  
  return global_array1[Num];

}
