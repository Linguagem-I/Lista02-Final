#include <stdio.h>
#include <stdlib.h>

int multiplicacao(num1, num2){
	printf("ENTROU NA FUNCAO\n");

	if (num2 == 1){
		printf("ENTROU NO IF\n");
		return num1;
	} else {
		printf("num2 = %d\n", num2);
		num2--;
		return num1 + multiplicacao(num1, num2);
	}
}


int main(int argc, char const *argv[]){
	int num1, num2, res;

	printf("Escreva dois numeros a serem multíplicados\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	res = multiplicacao(num1, num2);

	printf("Resposta: %d\n", res);

	return 0;
}