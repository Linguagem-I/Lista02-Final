#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float nota1, float nota2, float nota3)
{
  float media;
  media = (nota1 + nota2 + nota3) / 3;
  return media;
}

char verificaSituacao(float media)
{
  char situacao;

  if (media >= 7){
    situacao = 'A';
  } else if (media < 5){
    situacao = 'R';
  } else {
    situacao = 'E';
  }

  return situacao;
}

int main()
{
  float nota1, nota2, nota3;

  printf("\nDIGITE A NOTA 1\n");
  scanf("%f", &nota1);

  printf("\nDIGITE A NOTA 2\n");
  scanf("%f", &nota2);

  printf("\nDIGITE A NOTA 3\n\n");
  scanf("%f", &nota3);

  switch (verificaSituacao(calculaMedia(nota1, nota2, nota3))) {
    case 'A': printf("O ALUNO ESTA APROVADO\n"); break;
    case 'E': printf("O ALUNO ESTA EM EXAME\n"); break;
    case 'R': printf("O ALUNO REPROVOU\n"); break;
  }

  return 0;
}
