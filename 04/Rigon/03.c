/*
3. Escreva um programa para impressão de um número natural em base
binária. Lembre-se da técnica de divisões sucessivas.*/

#include <stdio.h>
#include <stdlib.h>

int convert(dec){
    if (dec == 0) {
        return 0;
    }

	return (dec % 2 + 10 * convert(dec / 2));
}

int main(){

    int num, binario;
    scanf("%d", &num);
    binario = convert(num);
    printf("%d\n\n", binario);
    return 0;
}
