#include <stdio.h>
#include <stdlib.h>

int global_array[100] = {0};

int main(int argc, char **argv) {
  int *ptr = 0;
  int Index = 0;
  int Index2 = 0;
  
  if (argc < 2){
    printf("argc=0x%x\n", argc);
    printf("please input a index number\n");
    return 0;
  }
  
  Index = atoi (argv[1]); // very hard to analyse external lib (e.g. atoi), how to translate it to a constrain in symbolic execute?
  ptr = global_array;
  Index2 = Index*2;
  ptr[Index2] = 0x12345678;

  printf("ptr[%d]=0x%x\n", Index2, ptr[Index2]);
  return ptr[Index];
}
