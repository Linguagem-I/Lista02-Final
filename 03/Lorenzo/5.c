#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main (){
    
    char frase[200], *palavra, *point, lixo;
    *palavra = lixo;

    
    printf("Digite uma frase até 200 Caracteres\n");
    
    __fpurge(stdin); //fflush para windows
    fgets(frase, 201, stdin);
    
    printf("Digite uma palavra\n");
    
    scanf(" %[^\n]s", palavra);
    size_t tamBusca = strlen(palavra) - 1;
    char busca[tamBusca];
    
    strcpy(busca, palavra);
    
    point = strstr(frase, busca);
    
    if (point != NULL){
        int posicao = point - frase;
        printf("A palavra se encontra na frase na seguinte posição: %d\n", posicao);
    } else {
        printf("A palavra nao se encontra na frase\n");
    }
    
    return 0;
} 