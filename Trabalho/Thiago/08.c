#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float aproveitamentoC(int pontosC);
float aproveitamentoFC(int pontosFC);
int quantidadetotalPontos(int pontosC, int pontosFC);
float aproveitamentototal(float apc, float apfc);

int main(){
    int vitC, empC, derC, soma, pontosC=0;
    int vitFC, empFC, derFC, somaF, pontosFC=0;
    int totalpontos;
    float apc, apfc, apt;
  do{
    printf("Entre com o resultado dos jogos em casa(vitorias, empates, derrotas) \n");
    scanf("%d %d %d", &vitC, &empC, &derC);
    soma = vitC + empC + derC;
      if (soma<19){
        printf("Numero invalido, tente novamente");
      }
    }while(soma!=19);
    pontosC=(vitC*3)+(empC*1);
    apc=aproveitamentoC(pontosC);


    do{
      printf("Entre com o resultado dos jogos fora de casa(vitorias, empates, derrotas) \n");
      scanf("%d %d %d", &vitFC, &empFC, &derFC);
      somaF = vitFC + empFC + derFC;
      if (somaF<19){
        printf("Numero invalido, tente novamente");
      }
    }while(somaF!=19);
    pontosFC=(vitFC*3)+(derC*3);
    apfc=aproveitamentoFC(pontosFC);

    totalpontos=quantidadetotalPontos(pontosC, pontosFC);
    apt=aproveitamentototal(apc,apfc);

    printf("Total de pontos do time: %d, Aproveitamento em casa %f, Aproveitamento fora de casa %f, Aproveitamento total %f \n", totalpontos, apc, apfc, apt);

  return 0;
}

float aproveitamentoC(int pontosC){
    float aproveitamentocasa;
    aproveitamentocasa=(pontosC*100)/57;
    return aproveitamentocasa;
}

float aproveitamentoFC(int pontosFC){
    float aproveitamentofc;
    aproveitamentofc=(pontosFC*100)/57;
    return aproveitamentofc;
}

int quantidadetotalPontos(int pontosC, int pontosFC){
  int quantidadetotal;
  quantidadetotal=pontosC+pontosFC;
  return quantidadetotal;
}

float aproveitamentototal(float apc, float apfc){
  float aproveitamentototal=(apc+apfc)/2;
  return aproveitamentototal;
}
