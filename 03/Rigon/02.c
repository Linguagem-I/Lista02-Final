/*
Escreva uma função para converter um caractere para maiúscula. Se o caractere
dado representar uma letra minúscula, devemos ter como valor de retorno a letra
maiúscula correspondente. Se o caractere dado não for uma letra minúscula,
devemos ter como valor de retorno o mesmo caractere, sem alteração. O
protótipo desta função pode ser dado por: char maiuscula(char c);
*/

#include <stdio.h>
#include <string.h>

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper(*p);
      p++;
  }
  return str;
}

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower(*p);
      p++;
  }
  return str;
}

char maiuscula(char c); // prototipo da funcao

int main(){
  char c;
  maiuscula(c);


  return 0;
}

char maiuscula(char c){
  fgets(&c,2,stdin);

  if ( (c >= 65 && c <= 90) ){
    printf(strlwr(&c));   //Converts to uppercase and displays it.
    printf("\n");
  }
  else
    printf("%c\n", c);
}
