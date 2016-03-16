/*
4. Faça um algoritmo com uma função, que receba um valor que foi depositado e exiba
o valor com rendimento da poupança após um ano. Considere fixo o juro do rendimento
da poupança em 0,65% ao mês.
*/

#include <stdio.h>
#include <stdlib.h>

float valorDeposito(){
  float depositado;
  printf("Insira o valor a ser depositado:\n");
  scanf("%f", &depositado);
  printf("Valor depositado foi: %.2f\n", depositado);
  return depositado;
}

float rendimento(float aux){
  int i = 0;
  float taxa = 0.65, juros;

  for(i=0;i<12;i++){
    juros = (aux * taxa) / 100; // calculo da porcentagem
    aux += juros;
  }
  printf("Total apos um ano de aplicacao = R$%.2f\n", aux);
  return 0;
}

int main(){
  float aux;
  aux = valorDeposito();
  rendimento(aux);

}
