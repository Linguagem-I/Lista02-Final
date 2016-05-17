#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int x[10], y[10], i;

  printf("Insira 10 valores para prencher o vetor:\n");

  for (i = 0; i < 10; i++) {
    scanf("%d", &x[i]);
    y[9 - i] = x[i];
  }

  printf("\n\nVetor X\n");

  for (i = 0; i < 10; i++) {
    printf("| %d |", x[i]);
  }

  printf("\n\nVetor Y\n");

  for (i = 0; i < 10; i++) {
    printf("| %d |", y[i]);
  }

}
