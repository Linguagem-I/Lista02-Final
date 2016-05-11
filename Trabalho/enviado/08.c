#include <stdio.h>
#include <stdlib.h>

int vitorias, empates, derrotas, total;

int leJogosCasa()
{
  printf("\nDIGITE AS VITORIAS JOGANDO EM CASA\n");
  scanf("%d", &vitorias);

  printf("\nDIGITE OS EMPATES JOGANDO EM CASA\n");
  scanf("%d", &empates);

  derrotas = 19 - (vitorias + empates);

  if (vitorias + empates + derrotas == 19){
    return 1;
  }

  return 0;
}

int leJogosFora()
{
  printf("\nDIGITE AS VITORIAS JOGANDO FORA DE CASA\n");
  scanf("%d", &vitorias);

  printf("\nDIGITE OS EMPATES JOGANDO FORA DE CASA\n");
  scanf("%d", &empates);

  derrotas = 19 - (vitorias + empates);

  if (vitorias + empates + derrotas == 19){
    return 1;
  }

  return 0;
}

int calulaPontos(int vitorias, int empates)
{
  return (vitorias * 3) + empates;
}

float aproveitamento(int pontos, int jogos)
{
  return (pontos * 100) / (jogos * 3);
}

int main()
{
  int pontos;

  float casa, fora, aproveitamentoTotal;

  if (leJogosCasa() == 1){
    pontos = calulaPontos(vitorias, empates);
    casa = aproveitamento(pontos, 19);
  } else {
    printf("VALORES INCORRETOS, O NUMERO DE JOGOS ULTRAPASSOU O LIMITE\n");
    return 0;
  }

  if (leJogosFora() == 1){
    total = pontos;
    pontos = calulaPontos(vitorias, empates);
    fora = aproveitamento(pontos, 19);
    total = total + pontos;
    aproveitamentoTotal = aproveitamento(total, 38);

  } else {
    printf("VALORES INCORRETOS, O NUMERO DE JOGOS ULTRAPASSOU O LIMITE\n");
    return 0;
  }

  printf("QUATIDADE DE PONTOS OBITDA PELO TIME = %d\n", pontos);
  printf("PERCENTUAL DE APROVEITAMENTO DO TIME EM CASA = %0.2f\n", casa);
  printf("PERCENTUAL DE APROVEITAMENTO DO TIME FORA DE CASA = %0.2f\n", fora);
  printf("PERCENTUAL DE APROVEITAMENTO TOTAL DO TIME = %0.2f\n", aproveitamentoTotal);

  return 0;
}
