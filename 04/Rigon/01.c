/* 1. Escreva uma função recursiva para multiplicação de dois números
naturais, através de somas sucessivas (Ex.: 6 * 4 = 4+4+4+4+4+4).
*/

#include "stdio.h"

int soma(n1, n2){

  if ( n2 == 1 ){
    return n1;
  }
  else {
    n2--;
    return n1 + soma(n1, n2);
  }
}

int main(){
  int n1, n2, res;
  scanf("%d", &n1);
  scanf("%d", &n2);
  res = soma(n1, n2);
  printf("Resposta: %d\n", res);

  return 0;
}
