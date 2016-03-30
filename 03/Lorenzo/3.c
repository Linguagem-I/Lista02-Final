#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char c, *frase, *i;

	int posicaoCaracString, loop = 1;

	scanf("%c", &c);

	__fpurge(stdin);	
	scanf("%[^\n]s", frase);

	while (loop == 1){
		i = strchr(frase, c);
		
		if (i != NULL){
			posicaoCaracString = i - frase;	
			frase[posicaoCaracString] = '*';
		} else {
			loop = 0;
		}
		
	}

	printf("%s\n", frase);

	return 0;
}