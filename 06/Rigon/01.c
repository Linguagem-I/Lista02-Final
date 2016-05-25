#include <stdio.h>

int main(){
  int i, j, somalinha[4], dp = 0;
  int matriz[4][4] = { {1, 0, 2, -1}, {4, 3, 2, 1}, {1, -2, 3, 4}, {8, 5, 1, 3}};

  for(i=0;i<4;i++){
    for(j=0;j<4;j++)
      printf("%3d ",  matriz[i][j]);
    printf("\n");
  }

  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    somalinha[i] += matriz[i][j];

  for(i=0;i<4;i++)
    printf("Soma linha: %d = %d\n", i, somalinha[i]);

  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      if(i == j)
        dp+= matriz[i][j];

  printf("Soma diagonal principal: %d\n", dp);
  return 0;
}
