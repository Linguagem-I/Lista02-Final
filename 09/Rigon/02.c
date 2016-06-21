/*
2. Usando Structs, escrever um programa que cadastre o nome, a altura, o peso, o
cpf e sexo de algumas pessoas. Com os dados cadastrados, em seguida localizar
uma pessoa através do seu CPF e imprimir o seu IMC.
Pseudocódigo da Estrutura
REGISTRO Pessoa
nome, sexo: TEXTO
peso, altura, cpf: NUMÉRICO
FIM_REGISTRO
*/

// IMC = peso / altura ao quadrado

#include "stdio.h"
#include "stdlib.h"

struct pessoa {
  char nome[50];
  char sexo[10];
  float peso;
  float altura;
  int cpf;
};

typedef struct pessoa Pessoa ;

void IMC(Pessoa *c, int localizada) ;

int main(){
  int i, n, conferecpf = 0, buscacpf, localizada;
  printf("Digite a quantidade de pessoas:\n");
  scanf("%d", &n);
  struct pessoa pessoa[n];
  int *c = &pessoa;

  for(i=0;i<n;i++){
    printf("Digite o nome da pessoa:\n");
    scanf(" %[^\n]", pessoa[i].nome);
    printf("Digite o sexo da pessoa:\n");
    scanf("%s", &pessoa[i].sexo);
    printf("Digite o peso da pessoa:\n");
    scanf("%f", &pessoa[i].peso);
    printf("Digite a altura da pessoa:\n");
    scanf("%f", &pessoa[i].altura);
    printf("Digite o CPF da pessoa:\n");
    scanf("%d", &pessoa[i].cpf);
  }

  printf("\n");
  printf("Digite um CPF para localizar uma pessoa: \n");
  scanf("%d", &buscacpf);
  for(i=0;i<11;i++){
    if(buscacpf == pessoa[i].cpf){
      printf("CPF DE: %s\n", pessoa[i].nome);
      localizada = i;
    }
  }
  IMC(c, localizada);
  return 0;
}

void IMC(Pessoa *c, localizada){
  float calc;
  calc = c[localizada].peso / (c[localizada].altura * c[localizada].altura);
  printf("Pessoa: %s, IMC: %.2f\n", c[localizada].nome, calc);
}
