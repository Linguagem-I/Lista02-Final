/* Faça um programa que solicite ao usuário uma string de até 200 caracteres.
Depois o programa deve ler uma string pequena (ex: nomes, frutas, etc...) e
verificar se ela se encontra no vetor de caracteres. Se encontrar indicar a posição
inicial. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  int i, j, locali, localf, tamanho;
  printf("Hello, World!\n");
  char string[201];
  char busca[20];
  char *pointi, *pointf;

  printf("Entre com uma string de ate 200 caracteres\n");
  fgets(string,201,stdin);
  printf("Expressao a ser buscada:\n");
  fgets(busca,20,stdin);

    if( strstr(string,busca)){
      printf("substring localizada\n");
      pointi = strstr(string,busca);
      printf("%s\n", pointi);

      for(i=0;i < strlen(string);i++){
        if ( string[i] == *pointi){
          printf("Posição no vetor/string %d\n", i+1);
          break;
        }
      }
    }
    else
      printf("nao localizada!\n");

  return 0;

}
