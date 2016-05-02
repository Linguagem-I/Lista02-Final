#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void analise(int a, int b, int c);


int main(){
int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  analise(a,b,c);

  return 0;
}

void analise(int a, int b, int c){
  if ((a == b ) && (b==c) && (a==c)){
    printf("Triangulo equilatero");
  }
  else if ((a == b) || (b==c) || (a==c)){
    printf("Trianguilo isosceles");
  }
  else{
    printf("Triangulo escaleno");
  }
}
