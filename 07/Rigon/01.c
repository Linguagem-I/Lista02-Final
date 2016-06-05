/*1. Desenvolva um programa em C que leia uma string como entrada. Faça uma
função que usando ponteiros inverta os caracteres desta string. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverter(char* ini){
    char temp;
    char* fim;
    fim = ini + strlen(ini)-1;

    while(fim>ini){
        temp = *fim;
        *fim = *ini;
        *ini = temp;
        fim--;
        ini++;
    }
}

int main(){
    char *string;
    string = malloc(sizeof(char) * sizeof(char));
    printf("Digite uma string para ser invertida\n");
    scanf(" %[^\n]", string);
    reverter(string);
    printf("%s\n", string);
}
