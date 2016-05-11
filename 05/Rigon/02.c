/* 2. Monte um programa onde o usuário entra com o valor das diversas notas
alcançadas por uma turma de alunos. O programa inicia perguntando o tamanho
da turma e parte para a entrada de dados. A seguir, o programa deve ser capaz de
exibir um histograma na tela, além de outras informações, conforme é mostrado
à seguir. Cada estrela é a quantidade de alunos em cada faixa de notas*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int tamturma, i,l;
  float media = 0.0, total = 0.0, maior, menor, j = 0.0, k = 3.0;

  printf("Tamanho da turma?\n");
  scanf("%d", &tamturma);
  float notas[tamturma];

  for(i=0;i<tamturma;i++){
    scanf("%f", &notas[i]);
    if ( i == 0){
      maior = notas[i];
      menor = notas[i];
    }
    if ( notas[i] > maior)
      maior = notas[i];

    if ( notas[i] < menor )
      menor = notas[i];
    total+= notas[i];
  }

  media = total / tamturma;

  printf("Resultado da avaliacao da TURMA A\n");
  printf("%15s %.1f\n", "Menor nota:", menor);
  printf("%15s %.1f\n", "Maior nota:", maior);
  printf("Media da turma: %.1f\n\n\n", media);

  printf("Histograma das notas:\n");
  
  for(i=0;i<10 && k <=10.0;i++){
 	
  	printf("%.1f ~ %.1f :", j, k);
  	
	for(l=0;l<tamturma;l++){
		if ( notas[l] <= k && notas[l] > j)
  			printf("*");
	  }
  	printf("\n");
  
   	if ( i == 0 )
  		j+= 3.1;
	else
	   j+=1;
	   
   	k+=1;
  }
  
  return 0;
}
