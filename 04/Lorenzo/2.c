#include <stdio.h>
#include <stdlib.h>



int soma(num1, num2, i){

	if (i == num2){
		return num1 + i;
	}
	
	i++;
	return soma(num1, num2, i);
}


int main(int argc, char const *argv[]){
	int num1, num2, res;

	printf("Escreva dois numeros a serem somados:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	res = soma(num1, num2, 0);

	printf("Resposta: %d\n", res);

	return 0;
}	
