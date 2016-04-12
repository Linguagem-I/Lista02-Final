#include "stdlib.h"
#include "stdio.h"

int lerNumeros();
int imprimeResultados();

int i, x[5], y[5], quociente, resto;

int main(){
  lerNumeros();
  imprimeResultados();
  return 0;
}

int lerNumeros(){
  printf("Digite 05 pares de numeros inteiros\n");
  for(i=0;i<5;i++){
    scanf("%d %d", &x[i], &y[i]);
  }
}

int imprimeResultados(){
  printf("Imprimindo os resultados\n");
  for(i=0;i<5;i++){
    quociente = x[i] / y[i];
    printf("Quociente da operação no par %d: %d\n", i+1, quociente);
    resto = x[i] % y[i];
    printf("Resto da operação no par %d: %d\n\n\n", i+1, resto);
  }
}
