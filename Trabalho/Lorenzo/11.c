#include <stdio.h>

int pot(int m, int n)
{
	if (n == 1) {
		return m;
	}

	return m * pot(m, n - 1);
}

int pot2(int m, int n){
  int i, total;
  for(i = 0, total = 1; n > 0; i++, n--){
    total =  total * m;
  }
  return total;
}

int main()
{
  int m, n, i;

	for (i = 0; i < 5; i++) {
		printf("UTILIZANDO FUNCAO RECURSIVA\n");
		scanf(" %d", &m);
	  scanf(" %d", &n);
		printf("%d", pot(m,n));
	}

	for (i = 0; i < 5; i++) {
		printf("UTILIZANDO FOR\n");
		scanf(" %d", &m);
	  scanf(" %d", &n);
		printf("%d", pot2(m,n));
	}
	
  return 0;
}
