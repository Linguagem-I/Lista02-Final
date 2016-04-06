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

/*

N1  N2
6   3
6   2
6   1

6   6
12  6
18  6
24


*/
