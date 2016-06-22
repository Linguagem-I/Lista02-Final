/* 3. Escreva um programa que leia uma matriz 5x5 de inteiros menores que 255. A seguir
cada célula da matriz deve ser convertida para o seu respectivo caractere da tabela
ASCII. Verifique a necessidade de criar outra matriz. Use ponteiros. Imprima na tela as
duas matrizes.
*/

#include <stdio.h>
#include <stdlib.h>

void decChar(int **matriz);

int main() {
  int i, j, valor = 0;
  int **matriz = (int**)malloc(5 * sizeof(int *));
  for(i = 0; i < 5; i++){
    matriz[i] = (int*) malloc(5 * sizeof(int));
    for(j = 0; j < 5; j++,valor++)
      matriz[i][j] = valor;
  }
  decChar(matriz);
  return 0;
}

void decChar(int **matriz){
  int i, j;

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%2d ", matriz[i][j]);
    }
  printf("\n");
  }

  int **convertida = (int**)malloc(5 * sizeof(int *));
  for(i = 0; i < 5; i++){
    convertida[i] = (int*) malloc(5 * sizeof(int));
    for(j = 0; j < 5; j++)
      convertida[i][j] = matriz[i][j]+32;
  }

  printf("\nConvertida\n");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%2c ", convertida[i][j]);
    }
  printf("\n");
  }
}
