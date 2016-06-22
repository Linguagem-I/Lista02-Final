/* 2. Desenvolva uma função que retorne qual linha de uma matriz bidimensional de 5x5
possui a maior soma dos valores.
*/

#include <stdio.h>
#include <stdlib.h>

void maiorSomaLinha(int **matriz);

int main() {
  int i, j;
  int **matriz = (int**)malloc(5 * sizeof(int *));
  for(i = 0; i < 5; i++){
    matriz[i] = (int*) malloc(5 * sizeof(int));
    for(j = 0; j < 5; j++)
        matriz[i][j] = i;
  }
  maiorSomaLinha(matriz);
  return 0;
}

void maiorSomaLinha(int **matriz) {
  int maior = 0, temp = 0;
  int i, j;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      temp += matriz[i][j];
    if(temp > maior)
      maior = i;
  }

  for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      printf(" %2d ", matriz[i][j]);
    printf("\n");
  }
  printf("Linha com a maior soma de valores: %d\n", maior);
}
