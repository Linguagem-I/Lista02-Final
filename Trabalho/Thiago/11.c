#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void somanumero();

int main(){

  somanumero();

  return 0;
}

void somanumero(){
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
}
