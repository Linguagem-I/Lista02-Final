/* Escreva um programa que leia uma cadeia de caracteres qualquer é determine se
a palavra lida representa um palíndromo ou não (exemplo de palavras
palíndromas: ovo, natan, sos, arara, etc.). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, j, tam, palindromo;
  char palavra[21];

  fgets(palavra,21,stdin);
  tam = strlen(palavra) - 1;

  for(i=0,j=(tam-1);i < (tam/2);i++,j--){
    if ( palavra[i] == palavra[j])
      palindromo++;
  }

  if (palindromo == (tam/2))
    printf("Palindromo\n");
  else
    printf("nao eh um palindromo\n");

  return 0;
}
