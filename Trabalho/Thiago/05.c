#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bissexto();
int lerAno();

int main(){
  int ano;
  ano = lerAno();
  bissexto(ano);

  return 0;
}


int lerAno(int n){
  int a;
  scanf("%d", &a);
  return a;
}


void bissexto(int ano){
  if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
    printf("O ano eh bissexto");
  }
  else{
    printf("O ano nao eh bissexto");
  }
}
