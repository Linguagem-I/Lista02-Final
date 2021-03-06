#include <stdio.h>
//IDENTIFICADORES COMPLEMENTARES AO AF
#define estados 7
#define simbolos 6
#define B ' '
#define V -1
#define F -2
#define TAM_FITA 4

//AUTOMATO FINITO
int alfabeto[] = {B, 'i', 'n', 't', 'f', 'o'};
int programa[estados][simbolos] = {
	{F,1,F,F,F,5}, //0
	{F,F,2,F,4,F}, //1
	{F,F,F,3,F,F}, //2
	{V,F,F,F,F,F}, //3
	{V,F,F,F,F,F}, //4
	{F,F,6,F,F,F}, //5
	{V,F,F,F,F,F} //6
};

char fita[TAM_FITA];
int tamanhoPalavra;

int verificaFita(){
	int i, coluna, linha, status;
	linha = 0;
	for (i=0; i < tamanhoPalavra; i++){
		status = 0;
		for (coluna=0; coluna < simbolos && status == 0; coluna++){
			if ( (fita[i] == alfabeto[coluna])) { 
				if (programa[linha][coluna]	> 0){
					linha = programa[linha][coluna];
					status = 1;						
				} else {
					if (programa[linha][coluna] == F){
						return 0;
					} else{
						return 1;
					}
				}
			} 
		}
		if (status == 0){
			return 2;
		}
	}
}

int lePalavra_verificaTamanho(){

	int i = 0, status = 1;
	while(status == 1){
		scanf("%c", &fita[i]);

		if (fita[i] == '\n'){
			status = 0;
			fita[i] = B;
		}
		i++;
		
		if (i > 4){
		return 0;
		}
	}

	tamanhoPalavra = i;
	return 1;
}

int main(){
	int palavra;
	palavra = lePalavra_verificaTamanho();
	
	if ( palavra == 0){
		printf("nao pertence, excede numero de caracteres do programa\n");
		return 0;

	} else palavra = verificaFita();	
		switch ( palavra ){
			case 0: printf("nao pertence\n"); break;
			case 1: printf("pertence \n"); break;
			case 2: printf("nao pertence, pois existem simbolos que nao pertecem ao alfabeto \n"); break;
		}
	return 0;
}
