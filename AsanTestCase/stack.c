#include <stdio.h>

int main(int argc, char **argv) { 
  int Num;
  int stack_array[11];
  
  Num = 11;
  stack_array[Num] = 0x1234; // stack buffer overflow
  printf("stack_array[%d]=0x%x\n", Num, stack_array[Num]); 
  return stack_array[Num];
}

