/* Crie dois vetores com o “nome” e o “salário” de 5 vendedores de uma loja de
calçados. A seguir efetue vendas, informando o código (índice do vetor do
vendedor), e guarde em um terceiro vetor chamado “vendas”. Ao final calcule o
total de vendas de cada vendedor e a sua comissão, mostrando o salário final de
cada vendedor, tendo como base que cada vendedor recebe R$ 20 reais por
calçado vendido.  */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(){
  int vendedor[5][5], salario[5], vendas[5];
  int i, j, codigo, venda = 0, vendidos;

  // inicializar o vetor de vendas com 0
  for(i=0;i<5;i++)
    vendas[i] = 0;

  printf("Informe o nome e o salario dos vendedores\n");
  for(i=0;i<5;i++){
    scanf("%s", &vendedor[i]);
    scanf("%d", &salario[i]);
    printf("Adicionado!\n\n");
  }

  printf("Cadastro de vendas, para parar o cadastro digite 0 no codigo do vendedor\n");

  while ( venda == 0){
    printf("Nova venda, insira o codigo do vendedor\n");
    scanf("%d", &codigo);
    if ( codigo == 0)
      break;
    if ( codigo >= 1 && codigo <=5){
      printf("Vendedor escolhido: %d\n", codigo);
      printf("%s\n", vendedor[codigo-1]);
    } else {
      printf("Vendedor invalido\n");
      break;
    }
    printf("Quantidade de vendas?\n");
    scanf("%d", &vendidos);
    vendas[codigo-1] = vendidos;
    printf("Vendedor %s total de vendas %d salário atualizado %d\n", vendedor[codigo-1], (vendas[codigo-1]*20), (salario[codigo-1] + (vendas[codigo-1] * 20)));
  }

  for(i=0;i<5;i++){
    salario[i] += vendas[i] * 20;
  }

  printf("\nRelatorio final de vendas:\n");
  for(i=0;i<5;i++){
    printf("Vendedor: %10s, vendas: %4d, salario atualizado: %6d\n", vendedor[i], vendas[i], salario[i]);
  }

  return 0;
}
