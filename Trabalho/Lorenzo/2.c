#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, i, quociente, resto;
	
	for (i=0; i<5; i++){
		printf("DIGITE O NUM X:\n");
		scanf("%d", &x);
		printf("DIGITE O NUM Y:\n");
		scanf("%d", &y);
		quociente = x / y;
		resto = x % y;
		printf("O RESTO DA DIVISAO DE X POR Y = %d:\n", quociente);
		printf("O QUOCIENTE DE X POR Y = %d:\n\n", quociente);
	}
	
	return 0;
}
