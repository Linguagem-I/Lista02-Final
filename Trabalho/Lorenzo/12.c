#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseStr(char* r)
{
    char temp;
    int count, larg;

    larg = strlen(r) - 1;

    for(count=0; count < (larg / 2); count++){
      temp = r[larg - count];
      r[larg - count] = r[count];
      r[count] = temp;
    }

    return r;
}

int main()
{
  int decisao, i;
  char *str = (char *) malloc(sizeof(char));

  printf("Digite 1 para ler uma string e reverter ela ou 0 para terminar o programa\n");
  scanf(" %d", &decisao);

  for (i=0; decisao == 1; i++){
    printf("Digite a string que deseja ler: ");
    scanf("%s", str);

    printf("\nString revertida = %s\n", reverseStr(str));

    printf("\nDigite 1 para ler uma string e reverter ela ou 0 para terminar o programa\n");
    __fpurge(stdin);
    scanf(" %d", &decisao);
  }

  return 0;
}
