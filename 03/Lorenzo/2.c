#include <stdio.h>
#include <stdlib.h>

char maiuscula(char c){

	c = c - 32;

	return c;
}

int main(int argc, char const *argv[]){
	
	char letra;

	printf("\n\nCONVERSOR PARA MAIUSCULAS, DIGITE UMA LETRA:\n");
	scanf("%c", &letra);

	if (letra > 64 && letra < 91){
		
		printf("%c\n", letra);

	} else if (letra > 96 && letra < 123){

		char conversao = maiuscula(letra);

		printf("%c\n", conversao);

	} else {
		printf("VOCE NAO DIGITOU UMA LETRA\n");
	}
	
	

	return 0;
}