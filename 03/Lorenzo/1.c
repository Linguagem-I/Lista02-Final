#include <stdio.h>
#include <stdlib.h>

void verificaLetra(char letra);


void verificaLetra(char letra){

	if ((letra > 64 && letra < 91) || (letra > 96 && letra < 123)){
		printf("PARABENS VOCE DIGITOU UMA LETRA\n");	
	} else {
		printf("VOCE NAO DIGITOU UMA LETRA\n");
	}
}

int main(int argc, char const *argv[]){
	
	char letra;

	printf("DIGITE UMA LETRA:\n");
	scanf("%c", &letra);

	verificaLetra(letra);

	return 0;
}