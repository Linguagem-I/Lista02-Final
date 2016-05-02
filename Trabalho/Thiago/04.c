#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int somanumero();

int main(){
  int x;
  x=somanumero();

  return 0;
}

int somanumero(){
  int i, n, soma = 0;
  for(i=0;i<8;i++){
    scanf("%d", &n);
    if (n % 2 == 0)
    {
      soma += n;
    } else{
      n *= 2;
      soma += n;
    }
  }
  printf("%d\n", soma);
  return soma;
}
