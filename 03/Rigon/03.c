/*
Escreva um programa para ler uma frase e um caractere. Sempre que o caractere
lido aparecer na frase ele deve ser substituído por asterisco. Por exemplo se os
valores fornecidos fossem para a frase: o dia esta nublado, e para o caractere: a,
o programa deverá fornecer o seguinte resultado: o di* est* nubl*do. Altere
também para trocar todas as letras E por número 3, por exemplo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, tam;
  char caractere[2];
  char frase[201];

  printf("Insira a frase:\n");
  fgets(frase,201,stdin);
  printf("Insira o caracter a ser modificado:\n");
  fgets(caractere,2,stdin);

  tam = strlen(frase) - 1;

  for(i=0;i<tam;i++){
    if ( frase[i] == caractere[0]){
      frase[i] = '*';
    }
    if ( frase[i] == 'e'){
      frase[i] = '3';
    }
  }

  printf("%s\n", frase);
  return 0;
}
