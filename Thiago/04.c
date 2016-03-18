/*  Faça um programa que apresente a saída ilustrada abaixo, perguntando ao usuário um
número máximo (no exemplo abaixo, 9). Este número deve ser sempre ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, i, aux = 0, aux2 = 1, meio, conti = 1, contf, spc = 0;
  printf("Insira o número maximo:\n");
  scanf("%d", &n);
  contf = n; // numero final para impressao em cada linha
  meio = (n/2) + 1; // até onde imprime os números na piramide
  if ( n % 2 != 0){

    while ( aux != meio) {
      for(i=conti;i<=contf;i++) // faz a impressao das linhas de numeros
        printf("%d", i);
      aux++;
      conti++;
      contf--;
      printf("\n"); // passa para a nova linha
      for(spc=aux2;spc>0;spc--) // faz a impressao do espaco antes dos numeros
        printf(" ");
      aux2++;
    }
  }
  else {
      printf("O numero deve ser impar\n");
    }
}
