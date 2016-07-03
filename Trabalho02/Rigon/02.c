/* 2. Desenvolva uma função que retorne qual linha de uma matriz bidimensional de 5x5
possui a maior soma dos valores.
*/

#include <stdio.h>
#include <stdlib.h>

void maiorSomaLinha(int **matriz);

int main() {
  int i, j, k;
  int **matriz = (int**)malloc(5 * sizeof(int *));
  for(i = 0, k= 5; i < 5; i++, k--){
    matriz[i] = (int*) malloc(5 * sizeof(int));
    for(j = 0; j < 5; j++)
        matriz[i][j] = k;
  }
  maiorSomaLinha(matriz);
  return 0;
}

void maiorSomaLinha(int **matriz) {
  int maior = 0, temp = 0, tempanterior = 0;
  int i, j;
  for(i=0;i<5;i++){
    for(j=0, temp = 0;j<5;j++){
      temp += matriz[i][j];
    }
    if(temp > tempanterior){
      maior = i;
      tempanterior = temp;
    }
  }

  for(i=0;i<5;i++){
    for(j=0;j<5;j++)
      printf(" %2d ", matriz[i][j]);
    printf("\n");
  }
  printf("Linha com a maior soma de valores: %d\n", maior);
}
