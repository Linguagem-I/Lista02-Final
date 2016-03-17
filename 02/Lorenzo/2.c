#include <stdio.h>
#include <stdlib.h>

void analisePoluicao(float indicePoluicao){
	if ( indicePoluicao < 0.25 ) {
	    printf("Indice de poluicao aceitavel\n");}
    else if ( (indicePoluicao >= 0.25) && (indicePoluicao < 0.4) ){
        printf("Empresas do primeiro grupo devem suspender as suas atividades\n");
  	}
  	else if ( indicePoluicao >= 0.4 && indicePoluicao <= 0.5 ){
    	printf("Empresas do primeiro e segundo grupo devem suspender as suas atividades\n");
  	}
  	else if ( indicePoluicao > 0.5 ){
    	printf("Todas as empresas devem suspender as suas atividades\n");
  	}
}

int main(int argc, char const *argv[]){
	
	float indicePoluicao;

	printf("Digite o indice de poluicao\n");
	scanf("%f", &indicePoluicao);

	analisePoluicao(indicePoluicao);

	return 0;
}