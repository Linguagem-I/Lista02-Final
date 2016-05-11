#include <stdio.h>
#include <stdlib.h>

int hamburguer, cheeseburger, milkShake, cocaCola;

void leQuantidade()
{
  printf("\nDIGITE A QUANTIDADE DE HAMBURGUER\n");
  scanf("%d", &hamburguer);

  printf("\nDIGITE A QUANTIDADE DE CHEESEBURGER\n");
  scanf("%d", &cheeseburger);

  printf("\nDIGITE A QUANTIDADE DE MILKSHAKE\n");
  scanf("%d", &milkShake);

  printf("\nDIGITE A QUANTIDADE DE COCA-COLA\n");
  scanf("%d", &cocaCola);
}

float calculaPreco()
{
  return (hamburguer * 8.20) + (cheeseburger * 12.50) + (milkShake * 5.20) + (cocaCola * 4.00);
}

int main()
{
  float conta;
  leQuantidade();
  conta = calculaPreco();

  printf("TOTAL = R$%0.2f\n", conta);
}
