/*
3. Qual será a saída do programa abaixo supondo que i ocupa o endereço 2000 na
memória? */
#include <stdio.h>

int main(void){
  int i = 5, *p;
  p = &i;
  printf("%u %d %d %d %d\n", p, *p+2, **&p, 3**p, **&p+4);
  return 0;
}

// %u - p      = endereco na memoria da variavel i
// %d - *p+2   = valor de i + 2
// %d - **&p   = valor de i
// %d - 3**p   = valor de i * 3
// %d - **&p+4 = valor de i + 4

// SAIDA = 2000 7 5 15 9
