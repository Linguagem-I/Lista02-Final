#include "stdlib.h"
#include "stdio.h"

void lerNotas();
float calculaMedia();
void situacao(float media);

int main(){
  float n1, n2, n3;
  float media;
  lerNotas(&n1, &n2, &n3); // envia o endereço da variável para a função
  media = calculaMedia(&n1, &n2, &n3);
  situacao(media);
  return 0;
}

void lerNotas(float *n1, float *n2, float *n3){
  printf("Insira as 03 notas do aluno\n");
  scanf("%f %f %f", n1, n2, n3); // grava direto no endereço, através do ponteiro que é criado no inicio da funcao
}

float calculaMedia(float *n1, float *n2, float *n3){
  float media;
  media = (*n1 + *n2 + *n3) / 3;
  return media;
}

void situacao(float media){
  if (media >= 7.0){
    printf("%.2f A\n", media);
  } else  if ( media < 7.0 && media >= 5.0 ){
    printf("%.2f E\n", media);
  } else {
    printf("%.2f R\n", media);
  }
}
