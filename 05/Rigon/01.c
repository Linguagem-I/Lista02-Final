/* 1. Desenvolva um programa em C que leia um conjunto X com N elementos reais e
que calcule a diferença entre o maior e o menor elemento existente, além de
indicar as posições em que eles ocorrem. */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int N, i, posma, posme;
  float dif = 0.0, maior, menor;
  printf("Digite a quantidade de elementos a serem calculados\n");
  scanf("%d", &N);
  float X[N];

  for(i=0;i < N;i++){
    scanf("%f", &X[i]);

    if ( i == 0){
      maior = X[i];
      menor = X[i];
    }

    if ( X[i] > maior){
      maior = X[i];
      posma = i;
    }

    if ( X[i] < menor){
      menor = X[i];
      posme = i;
    }
  }

  dif = maior - menor;
  printf("Maior %.2f \tposicao %d\n", maior, posma);
  printf("Menor %.2f \tposicao %d\n", menor, posme);
  printf("Diferenca: %.2f \n", dif);

  return 0;
}
