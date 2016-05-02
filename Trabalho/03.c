#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char marca[100], modelo[100], continua = 0;
  int ano, porcentagem;
  float valor, sdesconto;

  do{
    printf("Insira a Marca, Modelo, Ano e Valor do Carro\n");
    scanf(" %[^\n]", &marca);
    scanf(" %[^\n]", &modelo);

    scanf("%d\n", &ano);
    scanf("%f\n", &valor);
	flush(stdin);
    porcentagem = desconto(ano);
    sdesconto = aplicaDesconto(porcentagem, valor);
    printf("Marca: %s Modelo: %s Porcentagem de desconto: %d%% Valor Final: R$%0.2f \n", marca, modelo, porcentagem, sdesconto);
    scanf("Quer continuar calculando o desconto? ");
    scanf("%c\n", &continua);
    flush(stdin);
  }while ( continua != 'N' && continua != 'n');

  return 0;
}

int desconto(int ano){
  int porcentagem;
  if (ano>2000){
    porcentagem = 7;
  }
  else{
    porcentagem = 12;
  }
  return porcentagem;
}

float aplicaDesconto(float porcentagem, float valor){
  float ajuda, vdesconto;
  ajuda = (valor * porcentagem) / 100;
  vdesconto = valor - ajuda;

  return vdesconto;
}
