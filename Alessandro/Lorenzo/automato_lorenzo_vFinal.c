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
			
			if (fita[i] == alfabeto[coluna]){
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
			return 0;
		}
	}
}

int main(){
	
	int palavra;
	
	int i, f = 1;

	for(i=0; f == 1; i++){
		scanf("%c", &fita[i]);

		if (fita[i] == '\n'){
			f = 0;
			fita[i] = B;
		}		
	}

	tamanhoPalavra = i;

	palavra = verificaFita();
	
	if (palavra == 1){
		printf("A palavra pertence ao alfabeto\n");
	} else {
		printf("A palavra não pertence ao alfabeto\n");	
	}
	
	return 0;
}

