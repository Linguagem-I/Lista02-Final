
#include <stdio.h>
#include <stdlib.h>

char c;
char letra(char c); // prototipo da funcao

int main() {
  letra(c);
  return 0;
}

char letra(char c){

    scanf("%c", &c);
    if ( (c >= 65 && c <= 90) || (c >= 95 && c <= 122) )
      printf("Eh uma letra\n");
    else
      printf("Nao eh letra\n");
}
