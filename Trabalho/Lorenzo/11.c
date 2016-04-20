#include <stdio.h>

int pot(int m, int n)
{
	if (n == 1) {
		return m;
	}
	
	return m * pot(m, n - 1);
}

int main()
{

  int m, n;
  
  scanf(" %d", &m);
  scanf(" %d", &n);
  
  printf("%d", pot(m,n));

  return 0;
}
