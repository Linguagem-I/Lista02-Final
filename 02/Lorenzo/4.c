#include <stdio.h>
#include <stdlib.h>

float calculaRendimento(float valor){
	
	int i;
	float taxa = 0.65, juros;

	for (i = 0; i < 12; ++i){
		juros = (valor * taxa) / 100;
    	valor += juros;
	}

	return valor;
}

int main(int argc, char const *argv[]){
		
	float valor, valorRendimento;

	printf("\nDigite o valor que foi depositado:\n");
	scanf("%f", &valor);

	valorRendimento = calculaRendimento(valor);

	printf("Valor final apos um ano: %.2f\n", valorRendimento);

	return 0;
}