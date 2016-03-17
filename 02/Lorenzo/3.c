#include <stdio.h>
#include <stdlib.h>

int notasCem, notasCinquenta, notasDez, notasCinco, notasUm;

void calculaMenorNumeroNotas(int reais){

	int aux;

	notasCem = reais / 100;
	aux = reais % 100;

	notasCinquenta = aux / 50;
	aux = reais % 50;

	notasDez = aux / 10;
	aux = reais % 10;

	notasCinco = aux / 5;
	
	notasUm = reais % 5;
} 

int main(int argc, char const *argv[]){
	
	int reais;
	
	printf("Digite um valor em Reais\n");
	scanf("%d", &reais);

	calculaMenorNumeroNotas(reais);

	printf("\nNOTAS DE CEM: %d\n", notasCem);
	printf("\nNOTAS DE CINQUENTA: %d\n", notasCinquenta);
	printf("\nNOTAS DE DEZ: %d\n", notasDez);
	printf("\nNOTAS DE CINCO: %d\n", notasCinco);
	printf("\nNOTAS DE UM: %d\n", notasUm);

	return 0;
}