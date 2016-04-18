#include <stdio.h>
#include <stdlib.h>

int verificacaoAnoBissexto(int ano)
{
  int bissexto;

  if (ano % 400 == 0) {
		bissexto = 1;
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = 1;
	}
	else {
		bissexto = 0;
	}

  return bissexto;
}

int main()
{
	int ano;

	printf("Digite o ano: ");

	scanf("%d", &ano);

	if (verificacaoAnoBissexto(ano) == 1) {
		printf("O ANO EH BISSEXTO!\n\n");
	} else {
		printf("O ANO NAO EH BISSEXTO!\n\n");
	}

  return 0;
}
