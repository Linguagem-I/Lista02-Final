/* 3. Elabore um algoritmo que multiplique duas Matrizes M e N fornecidas pelo
usuário. O programa deve:
- ler as matrizes M e N
- calcular a multiplicação e armazenar na matriz Mult
- imprimir o resultado */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j, k, nlm, ncm, nln, ncn;
  printf("Insira o numero de linhas e colunas para a matriz M\n");
  scanf("%d %d", &nlm, &ncm);
  printf("Matriz M %d x %d\n", nlm, ncm);
  int M[nlm][ncn];

  printf("Insira o numero de linhas e colunas para a matriz N\n");
  scanf("%d %d", &nln, &ncn);
  printf("Matriz N %d x %d\n", nln, ncn);
  int N[nln][ncm];
  int Mult[nlm][ncn];

  if (ncm != nln){
    printf("Nao eh possivel a mutliplicacao das matrizes com os tamanhos informados\n");
    exit(0);
  } else {
    // se for possivel multiplicar, inicializa com 0 a matriz Mult
    for(i=0;i<nlm;i++)
      for(j=0;j<ncn;j++)
        Mult[i][j] = 0;
  }

  for(i=0;i<nlm;i++)
    for(j=0;j<ncm;j++){
      printf("Insira o valor da posicao %d x %d para a matriz M \n", i, j);
      scanf("%d", &M[i][j]);
    }

  printf("Matriz M:\n");
  for(i=0;i<nlm;i++){
    for(j=0;j<ncm;j++)
      printf("%3d", M[i][j]);
    printf("\n");
  }

  for(i=0;i<nln;i++)
    for(j=0;j<ncn;j++){
      printf("Insira o valor da posicao %d x %d para a matriz N\n", i, j);
      scanf("%d", &N[i][j]);
    }

  printf("Matriz N:\n");
  for(i=0;i<nln;i++){
    for(j=0;j<ncn;j++)
      printf("%3d", N[i][j]);
    printf("\n");
  }

  for (i=0;i<nlm; i++)
    for (j=0; j<nlm; j++)
      for (k=0; k<ncn; k++)
        Mult[i][j] += M[i][k] * N[k][j];

  for(i=0;i<nlm;i++){
    for(j=0;j<ncn;j++)
      printf("%5d", Mult[i][j]);
    printf("\n");
    }

  return 0;
}
