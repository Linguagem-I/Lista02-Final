/* 4. Usando estruturas, escrever um programa que cadastre vários produtos. Em seguida,
imprima uma lista com o código, nome e quantidade de cada produto. Por último,
consulte o preço de um produto através de seu código.
*/

#include "stdio.h"
#include "stdlib.h"

struct produtos {
  int codigo;
  char nome[15];
  int qtd;
  float preco;
};

typedef struct produtos Produtos;

int main(){
  int i, n, codigo;
  printf("Digite a quantidade de produtos a serem cadastrados:\n");
  scanf("%d", &n);
  Produtos produtos[n];

  for(i=0;i<n;i++){
    printf("Insira o codigo do produto:\n");
    scanf("%d", &produtos[i].codigo);
    printf("Insira o nome do produto:\n");
    scanf(" %[^\n]", produtos[i].nome);
    printf("Insira a quantidade do produto:\n");
    scanf("%d", &produtos[i].qtd);
    printf("Insira o valor do produto:\n");
    scanf("%f", &produtos[i].preco);
  }

  printf("\nLISTA DOS PRODUTOS CADASTRADOS: \n");
  for(i=0;i<n;i++){
    printf("Codigo: %d\n", produtos[i].codigo);
    printf("Nome: %s\n", produtos[i].nome);
    printf("Quantidade: %d\n", produtos[i].qtd);
    printf("\n");
  }

  printf("Digite um codigo para localizar um produto: \n");
  scanf("%d", &codigo);
  for(i=0;i<n;i++){
    if(codigo == produtos[i].codigo){
      printf("CODIGO DO PRODUTO: %s\n", produtos[i].nome);
      printf("VALOR DO PRODUTO: %.2f\n", produtos[i].preco);
    } else {
      printf("Nao localizado!\n");
    }
  }

  return 0;
}
