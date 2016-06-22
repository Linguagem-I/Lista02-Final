/* Desenvolva um programa em C que inicialize uma matriz conforme a tabela abaixo,
e em seguida efetue os respectivos cálculos.

1 0 -1 -2
2 1 0 -1
3 2 1 0
4 3 2 1

a) A média de todos os valores.
b) O somatório dos valores maiores que zero menos os valores menores que zero.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, k, total = 0, mazero = 0, mezero = 0, somatorio = 0, matriz[4][4];

  for(i=0;i<4;i++)
    for(j=0,k=i+1;j<4;j++,k--){
      matriz[i][j] = k;
      total += matriz[i][j];
      if(matriz[i][j] > 0)
        mazero += matriz[i][j];
      else
        if (matriz[i][j] < 0)
          mezero += matriz[i][j];
    }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++)
      printf(" %2d ", matriz[i][j]);
    printf("\n");
  }
  somatorio = (mazero - (mezero * -1));
  printf("Media de todos os valores: %d\n", total/16);
  printf("Somatorio: %d\n", somatorio);
  return 0;
}
