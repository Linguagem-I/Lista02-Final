#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int x, posMaior, posMenor;

  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &x);

  float vet[x], maior, menor, diferenca = 0.0;

  printf("\nInisra os valores do vetor:\n");
  scanf("%f", &vet[0]);

  maior = vet[0];
  menor = vet[0];
  posMaior = 0;
  posMenor = 0;

  for (int i = 1; i < x; i++) {
    scanf("%f", &vet[i]);

    if (vet[i] > maior){
      maior = vet[i];
      diferenca = maior - menor;
      posMaior = i;
    } else if (vet[i] < menor){
      menor = vet[i];
      diferenca = maior - menor;
      posMenor = i;
    }
  }

  printf("\nPosicao do maior elemento = %d\n", posMaior);
  printf("\nPosicao do menor elemento = %d\n", posMenor);
  printf("\nDiferenca entre os valores = %.2f\n", diferenca);

  return 0;
}
