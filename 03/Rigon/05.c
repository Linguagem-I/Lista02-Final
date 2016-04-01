/* Faça um programa que solicite ao usuário uma string de até 200 caracteres.
Depois o programa deve ler uma string pequena (ex: nomes, frutas, etc...) e
verificar se ela se encontra no vetor de caracteres. Se encontrar indicar a posição
inicial. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main (){
    
    char frase[201], *palavra, *point, null;
    palavra = &null;

    printf("Digite uma frase até 200 Caracteres\n");
    
    fgets(frase, 201, stdin);
    
    printf("Digite uma palavra\n");
    
    scanf(" %[^\n]s", palavra);

    size_t tamBusca = strlen(palavra) - 1; // determina o tamanho máximo da palavra para a busca
    char busca[tamBusca]; // cria um char com o tamanho correto
    
    strcpy(busca, palavra); 
    
    point = strstr(frase, busca); // procura "busca" dentro de frase e retorna um ponteiro
    
    if (point != NULL){
        int posicao = point - frase;
        printf("A palavra se encontra na frase na seguinte posição: %d\n", posicao);
    } else {
        printf("A palavra nao se encontra na frase\n");
    }
    
    return 0;
} 