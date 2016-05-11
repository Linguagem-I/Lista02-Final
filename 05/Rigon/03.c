/* Escreva um programa que leia via e imprima na tela um vetor X de 10
elementos. O programa deve imprimir um vetor Y obtido pela inversão da
ordem de 10 elementos de X.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i = 0, j = 0;
  float X[10], Y[10];

  for(i=0;i<10;i++)
    scanf("%f", &X[i]);

  for(i=0,j=9;i < 10;i++,j--)
    Y[j] = X[i];

  for(i=0;i<=10;i++)
    printf("%d: %.2f\n", i, Y[i]);

  return 0;
}
