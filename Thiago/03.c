/*  Fa�a um programa que apresente a sa�da ilustrada abaixo, perguntando ao usu�rio um
n�mero m�ximo (no exemplo abaixo, 9). Este n�mero deve ser sempre �mpar. */

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
