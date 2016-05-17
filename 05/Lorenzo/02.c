#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int tamTurma, i, j;

  printf("\nDigite o tamanho da Turma: ");
  scanf("%d", &tamTurma);

  float notas[tamTurma], somaNotas = 0.0, media, maiorNota, menorNota, min = 0.0, max = 3.0;

  printf("\nDigite a nota dos usuarios: \n");

  for (i = 0; i < tamTurma; i++) {
    scanf(" %f", &notas[i]);
    somaNotas += notas[i];

    if (i == 0){
      maiorNota = notas[i];
      menorNota = notas[i];
    } else {
      if (notas[i] > maiorNota){
        maiorNota = notas[i];
      } else if (notas[i] < menorNota){
        menorNota = notas[i];
      }
    }
  }

  media = somaNotas / tamTurma;

  printf("\nResultado da avaliacao da TURMA A\n");
  printf("\nMenor nota: %.2f\n", menorNota);
  printf("Maior nota: %.2f\n", maiorNota);
  printf("Media: %.2f\n\n", media);

  for (i = 0; i < 8; i++) {
    printf("%.2f~ %.2f: ", min, max);

    for (j = 0; j < tamTurma; j++){
      if (notas[j] >= min && notas[j] <= max){
        printf("*");
      }
    }

    printf("\n");

    if (i == 0){
      min += 3.1;
    } else {
      min += 1.0;
    }

    max += 1.0;
  }

  return 0;
}
