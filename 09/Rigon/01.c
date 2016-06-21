/*
1. Usando Structs, escrever um programa que cadastre o nome, a matrícula e duas
notas de vários alunos. Em seguida imprima a matrícula, o nome e a média de
cada um deles.
Pseudocódigo da estrutura:
REGISTRO Aluno
matricula: NUMÉRICO
nome: TEXTO
nota1, nota2: NUMÉRICO
FIM_REGISTRO
*/

#include "stdio.h"
#include "stdlib.h"
// #define MAX 5

struct cadastro {
  char nome[50];
  int matr;
  int nota1;
  int nota2;
  int media;
};

// typedef struct cadastro Aluno;

int main(){
  struct cadastro aluno;
  int i, n;
  printf("Digite a quantidade de alunos:\n");
  scanf("%d", &n);
  struct cadastro tab[n];

  for(i=0;i<n;i++){
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", tab[i].nome);
    printf("Digite o numero da matricula do aluno:\n");
    scanf("%d", &tab[i].matr);
    printf("Digite a nota 01 do aluno:\n");
    scanf("%d", &tab[i].nota1);
    printf("Digite a nota 02 do aluno:\n");
    scanf("%d", &tab[i].nota2);
    tab[i].media = (tab[i].nota1 + tab[i].nota2) / 2;
  }

  printf("\n");
  for(i=0;i<n;i++){
    printf("Nome: %s\n", tab[i].nome);
    printf("Matricula: %d\n", tab[i].matr);
    printf("Media: %d\n", tab[i].media);
  }
  return 0;
}
