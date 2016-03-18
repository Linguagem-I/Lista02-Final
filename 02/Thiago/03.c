/*  Faça um programa que apresente a saída ilustrada abaixo, perguntando ao usuário um
número máximo (no exemplo abaixo, 9). Este número deve ser sempre ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	float anos, ncig, preco, total;
	preco=4;
	
	scanf ("%f", &anos);
	scanf ("%f", &ncig);
	total=(anos*360)*(ncig)*(preco/20);
	printf ("%f", total);
	
	return 0;
}
