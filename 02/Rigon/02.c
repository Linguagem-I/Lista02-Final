/*
2. O departamento que controla o índice de poluição do meio ambiente mantém 3
grupos de indústrias que são altamente poluentes do meio ambiente. O índice de
poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º
grupo são intimadas a suspenderem suas atividades, se o índice cresce para 0,4 as do 1º
e 2º grupo são intimadas a suspenderem suas atividades e se o índice atingir 0,5 todos os
3 grupos devem ser notificados a paralisarem suas atividades. Escrever um algoritmo
que lê o índice de poluição medido e emite a notificação adequada aos diferentes grupos
de empresas

compilado com gcc4.6 ou clang transforma "float main" em "int main"
              gcc 5 aceita normalmente

*/

#include <stdio.h>
#include <stdlib.h>

float indPol;
float indice;

float indicePoluicao(){
  scanf("%f", &indPol);
  return indPol;
}

float analisePoluicao(float indice){

  if ( indice < 0.25 ) {
    printf("Indice de poluicao aceitavel\n");}
  else if ( (indice >= 0.25) && (indice < 0.4) ){
    printf("Empresas do primeiro grupo devem suspender as suas atividades\n");
  }
  else if ( indice >= 0.4 && indice <= 0.5 ){
    printf("Empresas do primeiro e segundo grupo devem suspender as suas atividades\n");
  }
  else if ( indice > 0.5 ){
    printf("Todas as empresas devem suspender as suas atividades\n");
  }
  return indice;
}

int main(){
  indice = indicePoluicao();
  analisePoluicao(indice);
  return 0;

}
