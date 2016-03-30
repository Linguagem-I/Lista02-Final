#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	
	char letra;

	printf("DIGITE UMA LETRA:\n");
	scanf("%c", &letra);

	if ((letra > 64 && letra < 91) || (letra > 96 && letra < 123)){
		printf("PARABENS VOCE DIGITOU UMA LETRA\n");	
		return 0;
	}

	printf("VOCE NAO DIGITOU UMA LETRA\n");

	return 0;
}