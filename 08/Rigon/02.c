/* 2. Elabore um algoritmo que leia o código, peso e valor de “n” bois. O usuário
deve informar a quantidade de bois e esta informação deve ser guardada em uma
matriz. Em seguida, faça uma função que calcule a média dos valores de todos
os bois, visualizando ao final qual o boi mais gordo, o boi mais magro
juntamente com a média de peso e valores dos mesmos. */

#include <stdio.h>
#include <stdlib.h>

float mediaValor(float **bois, int *n);
void peso(float **bois, int *n);

int main() {
  int i, j, n;
  float media;
  printf("Insira a quantidade de bois\n");
  scanf("%d", &n);

  float **bois = (float**)malloc(n * sizeof(float *)); //Aloca um Vetor de Ponteiros

  for (i = 0; i < n; i++){ //Percorre as linhas do Vetor de Ponteiros
         bois[i] = (float*) malloc(3 * sizeof(float)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
         for (j = 0; j < 3; j++){ //Percorre o Vetor de Inteiros atual.
              bois[i][j] = 0; //Inicializa com 0.
         }
    }

  // for(i=0;i<n;i++){
  //   for(j=0;j<3;j++){
  //     printf("%.2f ", bois[i][j]);
  //   }
  //   printf("\n");
  // }

  printf("Insira os dados para %d boi(s)\n", n);

  for(i=0,j=0;i<n;i++){
      printf("Insira os dados do boi %d: Codigo, Peso e Valor\n", i+1 );
      scanf("%f %f %f", &bois[i][j], &bois[i][j+1], &bois[i][j+2]);
  }

  //   printf("      Codigo\t Peso \tValor\n");
  // for(i=0;i<n;i++){
  //   printf("Boi #%d ", i+1);
  //   for(j=0;j<3;j++){
  //     printf("\t%.2f ", bois[i][j]);
  //   }
  //   printf("\n");
  // }

  media = mediaValor(bois, &n);
  printf("Media dos valores do total de bois (%d) = R$ %.2f\n", n, media);
  peso(bois, &n);

  return 0;
}


float mediaValor(float **bois, int *n){

  int cont = *n, i, j;
  float media = 0.0;

  for(i=0,j=0;i<cont;i++){
    media+= bois[i][2];
  }
  media /= cont;

  return media;
}

void peso(float **bois, int *n){

  int cont = *n, i, j;
  float gordo = bois[0][1], magro = bois[0][1], media = 0.0;
  int igordo = 0, imagro = 0;


  for(i=0;i<cont;i++){
    if ( bois[i][1] >= gordo){
      gordo = bois[i][1];
      igordo = i;
    } else if ( bois[i][1] <= magro){
      magro = bois[i][1];
      imagro = i;
    }
    media += bois[i][1];
  }
  media /= cont;

  printf("#%d GORDO: %.2f\n", igordo+1, gordo);
  printf("#%d MAGRO: %.2f\n", imagro+1, magro);
  printf("MEDIA PESO: %.2f\n", media);
}
