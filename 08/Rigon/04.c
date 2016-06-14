/*  Desenvolver um algoritmo que crie dinamicamente duas matrizes de n x n, leia
os seus elementos e imprima uma matriz de soma entre seus elementos. Faça
uma função que receba as matrizes A e B e realize esta soma. */

#include <stdio.h>
#include <stdlib.h>

void somaMatrizes(**M1, **M2, **SOMA, *n);

int main() {
  int i, j, n;
  printf("Digite o tamanho das matrizes\n");
  scanf("%d", &n);

  int **M1 = (int**)malloc(n * sizeof(int *));
  int **M2 = (int**)malloc(n * sizeof(int *));
  int **SOMA = (int**)malloc(n * sizeof(int *));


  for(i = 0; i < n; i++){ //Percorre as linhas do Vetor de Ponteiros
    M1[i] = (int*) malloc(n * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
    for(j = 0; j < n; j++){ //Percorre o Vetor de Inteiros atual.
        M1[i][j] = 2+i; //Inicializa com 0  .
    }
  }

  for(i = 0; i < n; i++){ //Percorre as linhas do Vetor de Ponteiros
    M2[i] = (int*) malloc(n * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
    for(j = 0; j < n; j++){ //Percorre o Vetor de Inteiros atual.
      M2[i][j] = 1+j; //Inicializa com 0.
    }
  }

  for(i = 0; i < n; i++){ //Percorre as linhas do Vetor de Ponteiros
    SOMA[i] = (int*) malloc(n * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
    for(j = 0; j < n; j++){ //Percorre o Vetor de Inteiros atual.
      SOMA[i][j] = 0; //Inicializa com 0.
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ", M1[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ", M2[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ", SOMA[i][j]);
    }
    printf("\n");
  }

  somaMatrizes(M1, M2, SOMA, &n);
  return 0;
}

void somaMatrizes(**M1, **M2, **SOMA, *n){
  int c = *n;
  printf("%d   \n", c);
  int i, j;
  for(i=0;i<c;i++){
    for(j=0;j<c;j++){
      SOMA[i][j] = M1[i][j] + M2[i][j];
    }
  }

  for(i=0;i<c;i++){
    for(j=0;j<c;j++){
      printf("%d ", SOMA[i][j]);
    }
    printf("\n");
  }
}
