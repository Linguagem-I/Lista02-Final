#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float somaMedia();
void situacao(float soma);

int main(){
  float soma;
  soma=somaMedia();
  situacao(soma);

  return 0;
}

float somaMedia(){
  float n1,n2,n3, media;
  scanf("%f %f %f", &n1, &n2, &n3);
  media = (n1+n2+n3)/3;
  return media;
}

void situacao(float soma){
  if (soma >= 7.0){
    printf("A");
  } else  if (soma < 7.0 && soma >= 5.0 ){
    printf("E");
  } else {
    printf("R");
  }
}
