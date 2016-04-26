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

  scanf(" %d", &decisao);

  for (i=0; decisao != 0; i++){
    scanf("%[^\n]", str);

    printf("%s\n", reverseStr(str));

    __fpurge(stdin);
    scanf(" %d", &decisao);
  }

  return 0;
}
