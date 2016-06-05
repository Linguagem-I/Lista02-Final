/*
2. Fazer uma função usando ponteiros que receba um vetor com 10 elementos
inteiros e verifique quais são os valores que são múltiplos de 2. Armazene estes
valores em outro vetor usando a notação binária. O programa não deve usar
variáveis globais e deve imprimir o vetor original e o vetor com os valores
encontrados e convertidos para binário. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recebe();
int decimal_binario(int *n);

int main(){
  int i, vetor[10] = { 0 };
  printf("Insira 10 valores:\n");
  for(i=0;i<10;i++){
    printf("Valor %d: \n", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("VETOR ORIGINAL:\n");
  for(i=0;i<10;i++){
    printf("Valor: %d ", vetor[i]);
  }
  printf("\n");
  recebe(&vetor);
  return 0;
}

void recebe(int *vetor){
  int i, j, *par, retorno;
  par = malloc(sizeof(int));

  for(i=0,j=0;i<10;i++){
    if(vetor[i] % 2 == 0){
      retorno = decimal_binario(&vetor[i]);
      par[j] = retorno;
      j++;
    }
  }

  printf("\nVETOR DOS BINARIOS:\n");
  for(i=0;i<j;i++){
    printf("Valor: %d ", par[i]);
  }
  printf("\n\n");
}

int decimal_binario(int *n){
    int numero;
    numero = *n;
    int rem, i=1, binario=0;
    while (numero != 0){
        rem = numero % 2;
        numero /= 2;
        binario += rem*i;
        i*=10;
    }
    return binario;
}
