/* 2. Uma matriz M pode ser transposta em uma matriz N onde o número de
linhas/colunas da primeira passa a ser o número de colunas/linhas da segunda.
Escreva um programa em C que leia uma matriz M (o usuário deve definir
fornecer a quantidade de linhas e a quantidade de colunas que não deverão
exceder 20 linhas e 20 colunas).
- calcule a transposta N da matriz M
- imprima a transposta calculada */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int linhas, colunas, i, j;
  int **matriz, **matrizT;

  printf("Digite o número de linhas e colunas: \n");
  scanf("%d %d", &linhas, &colunas);
  matriz = (int **) malloc( linhas * sizeof( int *) );
  matrizT = (int **) malloc( colunas * sizeof( int *) );

  for(i=0;i<linhas;i++)
    matriz[i]= (int *) malloc( colunas * sizeof( int ) );

  for(i=0;i<colunas;i++)
    matrizT[i]= (int *) malloc( linhas * sizeof( int ) );

  for(i=0;i<linhas;i++)
    for(j=0;j<colunas;j++)
      matriz[i][j] = i;

  for(i=0;i<linhas;i++)
    for(j=0;j<colunas;j++)
      matrizT[j][i] = matriz[i][j];

  printf("ORIGINAL\n");
  for(i=0;i<linhas;i++){
    for(j=0;j<colunas;j++)
      printf("%3d ", matriz[i][j]);
    printf("\n");
  }

  printf("TRANSPOSTA\n");
  for(i=0;i<colunas;i++){
    for(j=0;j<linhas;j++)
      printf("%3d ", matrizT[i][j]);
    printf("\n");
  }

  //
  // for(i=0; i<linhas; i++)
  // free(matriz[i]);
  // free(matriz);

  return 0;
}
