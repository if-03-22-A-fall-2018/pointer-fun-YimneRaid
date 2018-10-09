#include "stdio.h"

int print (int* pointer, int value){
  printf("Got an integer value %d and an address to an integer with value %d.\n",value,*pointer );
}
int change_integers(int* pointer, int value){
  *pointer= 55;
  value=44;
}
int main(int argc, char const *argv[]) {
  int value;
  int* pointer;
  printf("Type a value: ");
  scanf("%d", &value);
  printf("Type a pointer: ");
  scanf("%d", pointer );
  print(pointer,value);
  change_integers(pointer,value);
  print(pointer,value);
  return 0;
}
