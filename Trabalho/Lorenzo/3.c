#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculaPorcentagemDesconto(int ano)
{
	int porcentagemDesconto;

	if (ano <= 2000){
		porcentagemDesconto = 12;
	} else if (ano > 2000) {
		porcentagemDesconto = 7;
	}

	return porcentagemDesconto;
}

float aplicaDesconto(float valor, int porcentagemDesconto)
{
	float desconto;

	desconto = (valor * porcentagemDesconto) / 100;
	printf("desconto %f\n", desconto);
	printf("valor - desconto %f\n", valor - desconto);

	return valor - desconto;
}

int main()
{
	char marca[25], modelo[25], decisao = 's';
	int ano;
	float valor, porcentagemDesconto;

	while(decisao == 's'){

		printf("DIGITE A MARCA DO CARRO\n");
		__fpurge(stdin); //EM WINDOWS USAR fflush(sdtin);
		fgets(marca, 25, stdin);

		printf("DIGITE O MODELO DO CARRO\n");
		__fpurge(stdin); //EM WINDOWS USAR fflush(sdtin);
		fgets(modelo, 25, stdin);

		printf("DIGITE O ANO DO CARRO\n");
		scanf("%d", &ano);

		printf("DIGITE O VALOR DO CARRO\n");
		scanf("%f", &valor);

		printf("\nDESEJA APLICAR DESCONTO?\n");
		scanf(" %c", &decisao);

		if (decisao == 's'){
			porcentagemDesconto = calculaPorcentagemDesconto(ano);
			valor = aplicaDesconto(valor, porcentagemDesconto);
			printf("VALOR DO CARRO FICOU: %0.2f\n", valor);
		}
	}

	return 0;
}
