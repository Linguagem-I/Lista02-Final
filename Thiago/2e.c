#include <stdio.h>
#include <stdlib.h>

int main(){
  char tv;
  int conv = 0, ct = 0, cb = 0, cr = 0;
  float pt, pb, pr;

  do {
    printf("(T)into\n");
    printf("(B)ranco\n");
    printf("(R)ose\n");
    printf("(F)im\n");
    printf("Entre com a Opcao\n");
    scanf(" %c", &tv);

    if ( tv != 'F' ) {
      conv++;
      switch ( tv ) {
        case 'T': ct++; break;
        case 'B': cb++; break;
        case 'R': cr++; break;
        default: conv--;
      }
    }
  } while( tv != 'F' );

  if ( conv > 0) {
    pt = (ct*100) / conv;
    pb = (cb*100) / conv;
    pr = (cr*100) / conv;
    printf("Porcentagem de Tintos = %.2f\n", pt);
    printf("Porcentagem de Brancos = %.2f\n", pb);
    printf("Porcentagem de Roses = %.2f\n", pr);
  }
  else {
    printf("Nenhum tipo foi fornecido\n");
  }
}
