#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inversao();

int main(){
  inversao();


  return 0;
}

void inversao(){
  char palavra[100];
  int i, tam;
  do{
    printf("Digite uma palavra ou se quiser parar digite 0\n");
    gets(palavra);
    tam=strlen(palavra);

    for(i=tam;i>=0;i--){
      printf("%c", palavra[i]);
      }
      printf("\n");
  }while(strcmp(palavra, "0")!=0);
}
