#include <stdio.h>
#include <stdlib.h>
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

int main()
{
  //COLETA DADOS ATE O USUARIO DIGITAR '0'
  char **nomes = (char **) malloc(sizeof(char *)), *maiorN, *menorN;
  float *salarios = (float *) malloc(sizeof(float)), maiorS, menorS, media = 0;
  int decisao = 1, i, k, tamanho = 0;

  for(i=0; decisao == 1; i++){
    printf("\nDigite o nome completo do Funcionario: ");
    nomes[i] = (char *) malloc(sizeof(char));
    scanf(" %s", nomes[i]);
    tamanho = tamanho + strlen(nomes[i]);
    nomes = (char **) realloc(nomes, sizeof(char *) * tamanho);

    printf("\nDigite o Salario do Funcionario: ");
    salarios = (float *) realloc(salarios, sizeof(float) * (i + 1));
    scanf("%f", &salarios[i]);

    printf("\nDigite 1 para cadastrar mais um funcionario ou 0 para parar o progroama\n");
    scanf("%d", &decisao);
  }

  //VERIFICA MAIOR E MENOR SALARIO COM O RESPECTIVO NOME DO FUNCIONARIO
  menorS = salarios[0];
  maiorS = salarios[0];
  menorN = nomes[0];
  maiorN = nomes[0];

  for (k=1; k < i; k++) {
    if (salarios[k] > maiorS){
      maiorS = salarios[k];
      maiorN = nomes[k];
    } else {
      menorS = salarios[k];
      menorN = nomes[k];
    }
  }

  //FAZ MEDIA DOS SALARIOS
  for (k=0; k < i; k++) {
    media = media + salarios[k];
  }

  media = media / i;

  //PRINTA OS RESULTADOS NA TELA
  printf("%s   R$%0.2f\n", strupr(maiorN), maiorS);
  printf("%s   R$%0.2f\n", strlwr(menorN), menorS);
  printf("Media: %0.2f\n", media);

  return 0;
}
