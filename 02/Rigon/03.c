/*
3. Escrever um algoritmo que lê um valor em reais e calcula qual o menor número
possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto.
Escrever o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int valor;
int resto;
int cem = 0, cinq = 0, dez = 0, cinco = 0, um = 0;

int lerValor(){
  scanf("%d", &valor);
  printf("Valor inserido: %d\n", valor);
  return valor;
}

int notas100(){
  if ( valor >= 100 ){
    cem = valor / 100;
    resto = valor % 100;
  }
  else {
    resto = valor;
  }
  return cem;
}

int notas50(){
  if ( resto >= 50 ){
    cinq = resto / 50;
    resto = resto % 50;
  }
  return cinq;
}

int notas10(){
  if ( resto >= 10 ){
    dez = resto / 10;
    resto = resto % 10;
  }
  return dez;
}

int notas5(){
  if ( resto >= 5 ){
    cinco = resto / 5;
    resto = resto % 5;
  }
  return cinco;
}

int notas1(){
  if ( resto >= 1 ){
    um = resto / 1;
    resto = resto % 1;
  }
  return um;
}

int main(){
  int n100, n50, n10, n5, n1;
  lerValor();
  n100 = notas100();
  n50 = notas50();
  n10 = notas10();
  n5 = notas5();
  n1 = notas1();
  printf("Quantidade de notas necessarias:\n100 = %d\n50 = %d\n10 = %d\n5 = %d\n1 = %d \n", n100, n50, n10, n5, n1);
}
