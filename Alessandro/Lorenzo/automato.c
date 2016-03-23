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
//int uc, sl, em;

int verificaFita(){
	int i, j, coluna, linha, status;

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
	}

	if (i > 4){
		return 0;
	}

	tamanhoPalavra = i;

	return 1;
}

int main(int argc, char const *argv[])
{
	
	int palavra;

	palavra = lePalavra_verificaTamanho();

	if (palavra == 0){
		printf("A PALAVRA NAO PERTENCE A LINGUAGEM POIS E EXCEDE O NUMERO DE ESTADOS DO PROGRAMA\n");
	} else {
		palavra = verificaFita();

		if (palavra == 0){
			printf("A PALAVRA NAO PERTENCE A LINGUAGEM\n");
		} else if (palavra == 1){
			printf("A PALAVRA PERTENCE A LINGUAGEM\n");
		} else {
			printf("A PALAVRA NAO PERTENCE A LINGUAGEM POIS POSSUI SIMBOLOS QUE NAO PERTECEM AO ALFABETO\n");
		}
	}

	return 0;
}
