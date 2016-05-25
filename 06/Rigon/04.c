#include <stdio.h>
#include <stdlib.h>

int main(){

  int i, j, tp[4], maior = 0, est[4], aux;
  float soma = 0, valor, ct[4][3];
  int estoque[4][3];

  printf("Insira os dados:\n");

  for(i=0;i<4;i++){
    printf("Armazem %d\n", i+1);
    for(j=0;j<3;j++){
      printf("Produto %d\n", j+1);
      scanf("%d", &estoque[i][j]);
    }
    printf("\n");
  }

  printf("Dados inseridos: \n");
  printf("               Produto #1      Produto #2      Produto #3\n");
  printf("              (R$7,00 unid)   (R$8,00 unid)   (R$3,00 unid)\n");
  for(i=0;i<4;i++){
    printf("Armazem #%d", i+1);
    for(j=0;j<3;j++){
      printf("%15d", estoque[i][j]);
    }
    printf("\n");
  }

  for(i=0,tp[i];i<4;i++){
    printf("Qtd itens Armazem #%d: ", i+1);
    for(j=0, soma = 0;j<3;j++){
      soma += estoque[i][j];
    }
    printf("%.0f\n", soma);
    tp[i] = soma;
  }

  for(i=0;i<4;i++){
    if (tp[i] > maior){
      maior = tp[i];
      aux = i;
    }
  }
  printf("\nMaior quantidade em: %d\n\n", aux+1);

  printf("Custos totais de cada produto em cada armazem:\n");

  for(i=0;i<4;i++){
    printf("Armazem %d\n", i+1 );
    for(j=0;j<3;j++){
      if ( j == 0)
        valor = 7.00;
      else if (j == 1)
            valor = 8.00;
      else if ( j == 2)
            valor = 3.0;
      ct[i][j] = estoque[i][j] * valor;
      printf("   - Produto #%d = %15.2f\n", j+1, ct[i][j]);
    }
  }

  printf("\n");
  printf("Custo total de estoque em cada Armazem\n");
  printf("               Produto #1    Produto #2    Produto #3\n");
  for(i=0;i<4;i++){
        printf("Armazem #%d", i+1);

    for(j=0;j<3;j++){
      printf("%14.2f", ct[i][j]);
    }
    printf("\n");
  }

  printf("\nCusto por armazem\n");
  for(i=0;i<4;i++){
    for(j=0, soma = 0;j<3;j++){
      soma += ct[i][j];
    }
    printf(" - #%d =  %5.2f\n", i+1, soma);
  }

  printf("\nCada produto em todos armazens\n");
  for(i=0;i<3;i++){
    for(j=0, soma =0.0;j<4;j++){
      if ( j == 0)
        valor = 7.00;
      else if (j == 1)
            valor = 8.00;
      else if ( j == 2)
            valor = 3.0;
      soma += ct[j][i];
    }
    printf(" - #%d = %.2f\n", i+1,soma);
  }

  return 0;
}
