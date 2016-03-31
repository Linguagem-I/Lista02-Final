#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main (){
    char *a;
    int i, status, h;
    size_t j;
    
    printf ( "Digite a sequência para verificar se ele é um palíndromo \n");
 
	scanf(" %[^\n]s", a);

   	j = strlen(a);
   	h = j - 1;

    for(i=0, status=1; i<(j/2) && status == 1; i++, h--){
    	if (a[i] != a[h]){
    		status = 0;
    	}
    }
 
    if (status == 1) {
       printf ( "EH PALINDROMO. \n");
    } else {
       printf ( "NAO EH PALINDROMO \n");
    }
 
    return 0;
} 