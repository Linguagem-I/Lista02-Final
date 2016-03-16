/*
1. Escrever um algoritmo que lê a hora de início e hora de término de um jogo, ambas
subdivididas em dois valores distintos: horas e minutos. Calcular e escrever a duração
do jogo, também em horas e minutos, considerando que o tempo máximo de duração de
um jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
*/

#include <stdio.h>
#include <stdlib.h>

int hi, mi, hf, mf, hd, md;

int calculaDuracao(int hi, int mi, int hf, int mf){

  if ( (hi < 24 && hf < 24) && (mi < 60 && mf < 60) ) {
    if ((hi == hf) && (mi >= mf)){
      if ( hi >= hf) {
        hd = (hf - hi) + 24;
      }
      else {
        hd = (hf - hi);
      }
    }
    if ( hi > hf ){
       hd = (hf-hi) + 24;
    }
    else {
      hd = hf - hi;
    }

    if ( mi > mf ){
      md = (mf - mi) + 60;
      hd = (hd - 1);
    }
    else {
      md = mf - mi;
    }

    printf("Duracao do jogo: %d hora(s), %d minuto(s)\n", hd, md);
  }
  else {
    printf("Horario invalido!!\n");
  }
}

int horaInicial(){
  printf("Insira a hora inicial:\n");
  scanf("%d", &hi);
  return hi;
}

int minutoInicial(){
  printf("Insira o minuto inicial:\n");
  scanf("%d", &mi);
  return mi;
}

int horaFinal(){
  printf("Insira a hora final:\n");
  scanf("%d", &hf);
  return hf;
}

int minutoFinal(){
  printf("Insira o minuto final:\n");
  scanf("%d", &mf);
  return mf;
}

int main(){
  // horarioJogo();
  hi = horaInicial();
  mi = minutoInicial();
  hf = horaFinal();
  mf = minutoFinal();

  calculaDuracao(hi, mi, hf, mf);

}
