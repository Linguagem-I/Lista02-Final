#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#define limpar "cls"
#endif

#ifdef __linux__
#define limpar "clear"
#endif

int main(int argc, char const *argv[]) {

  char **nomes = (char **) malloc(sizeof(char *));
  float salarios[5];
  int i, vendas[5], loop = 1, vendedor, qtdVendas, tamanho;

  system(limpar);

  printf("******CADASTRE 5 FUNCIONARIOS******\n");

  for (i = 0; i < 5; i++) {
    printf("\nInsira o nome do Funcionario %d: ", i + 1);
    nomes[i] = (char *) malloc(sizeof(char));
    scanf(" %s", nomes[i]);
    tamanho = tamanho + strlen(nomes[i]);
    nomes = (char **) realloc(nomes, sizeof(char *) * tamanho);

    printf("\nInsira o salario do Funcionario %d: " , i + 1);
    scanf(" %f", &salarios[i]);

    vendas[i] = 0;
  }

  system(limpar);

  do {

    printf("\n********PROGRAMA DE VENDAS********\n");
    printf("\n*PARA REALIZAR UMA VENDA DIGITE 1*\n");
    printf("*PARA REALIZAR UMA VENDA DIGITE 0*\n\n");

    scanf("%d", &loop);

    if (loop == 0)
      break;

    printf("\nINFORME O CODIGO DO VENDEDOR: ");
    scanf("%d", &vendedor);

    printf("\nDIGITE A QUANTIDADE DE VENDAS: ");
    scanf("%d", &qtdVendas);
    vendas[vendedor] += qtdVendas;

    system(limpar);

  } while(loop == 1);

  for (i = 0; i < 5; i++) {
    salarios[i] += vendas[i] * 20;
  }

  system(limpar);
  printf("\n********RELATORIO DE VENDAS********\n");

  for (i = 0; i < 5; i++) {
    printf("\nFuncionario %d: %s\n", i + 1, nomes[i]);
    printf("Qtd de Vendas: %d\n", vendas[i]);
    printf("Salario: R$ %.2f\n", salarios[i]);
  }

  return 0;
}
