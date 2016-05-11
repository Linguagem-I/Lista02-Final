/* 2. Monte um programa onde o usuário entra com o valor das diversas notas
alcançadas por uma turma de alunos. O programa inicia perguntando o tamanho
da turma e parte para a entrada de dados. A seguir, o programa deve ser capaz de
exibir um histograma na tela, além de outras informações, conforme é mostrado
à seguir. Cada estrela é a quantidade de alunos em cada faixa de notas*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int tamturma, i, j;
  float media = 0.0, total = 0.0, maior, menor;

  printf("Tamanho da turma?\n");
  scanf("%d", &tamturma);
  float notas[tamturma];

  for(i=0;i<tamturma;i++){
    scanf("%f", &notas[i]);
    if ( i == 0){
      maior = notas[i];
      menor = notas[i];
    }
    if ( notas[i] > maior)
      maior = notas[i];

    if ( notas[i] < menor )
      menor = notas[i];

    total+= notas[i];
  }

  media = total / tamturma;

  printf("Resultado da avaliacao da TURMA A\n");
  printf("%15s %.1f\n", "Menor nota:", menor);
  printf("%15s %.1f\n", "Maior nota:", maior);
  printf("Media da turma: %.1f\n", media);

  printf("Histograma das notas:\n");
  printf("%11s", "0.0 ~ 3.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] <= 3.0)
      printf("*");
  }
  printf("\n");

  printf("%11s", "3.1 ~ 4.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 3.0 && notas[i] <= 4.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "4.1 ~ 5.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 4 && notas[i] <= 5.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "5.1 ~ 6.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 5 && notas[i] <= 6.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "6.1 ~ 7.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 6 && notas[i] <= 7.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "7.1 ~ 8.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 7 && notas[i] <= 8.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "8.1 ~ 9.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 8 && notas[i] <= 9.0)
      printf("*");
  }
    printf("\n");

  printf("%11s", "9.1 ~ 10.0:");
  for(i=0;i<tamturma;i++){
    if (notas[i] > 9 && notas[i] <= 10.0)
      printf("*");
  }
    printf("\n");

  return 0;
}
