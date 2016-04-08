/*
4. Dado uma base n, n>1, calcule recursivamente o valor de n^x. O usuário
deve entrar com o valor de n e x. Exemplo: potencia(3,2) deve retornar
9.*/

#include <stdio.h>

int potencia(int base, int expoente){
  if(expoente == 0)
    return 1;
  else
    return (base * potencia(base, expoente-1));
}
int main(){
  int base, expoente, resultado;
  scanf("%d %d", &base, &expoente);
  resultado = potencia(base,expoente);
  printf("%d elevado a %d = %d\n", base, expoente, resultado);
  return 0;
}
