#include <stdio.h>
#include <stdlib.h>

int main(){
  static int mat[]={4, 5, 6};
  int i, *ptr;
  ptr = mat;
  for (i=0; i<3; i++)
    printf("%d ", *ptr++);
  printf("\n");
  return 0;
}
