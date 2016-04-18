#include <stdio.h>
#include <stdlib.h>

int main() {

  int num, somatorio, i = 0;

  for (i = 0; i < 8; i++) {
    printf("\nDIGITE UM NUMERO\n");
    scanf("%d", &num);

    if (num % 2 == 0){
      somatorio = somatorio + num;
    } else {
      somatorio = somatorio + (num * 2);
    }
  }

  printf("\nSOMATORIO = %d\n\n", somatorio);

  return 0;
}
