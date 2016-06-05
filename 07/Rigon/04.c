/*
4. Dado o seguinte trecho de programa, qual o valor das expressões abaixo:

int i=3, j=5;
int *p, *q;
p= &i;
q= &j;
a) p==&i
b) *p ‐ *q
c) **&p
d) 3* ‐ *p / (*p) + 7
 */
#include <stdio.h>

int main(){
  int i = 3, j = 5;
  int *p, *q;
  p = &i;
  q = &j;
  printf("%d\n", p==&i); // mostra 1, pq a verificacao eh verdadeira p = i
  printf("%d\n", *p - *q); // subtracao entre os valores das variaveis que os ponteiros apontam = i - j
  printf("%d\n", **&p); // valor da variavel i, que está sendo apontada pelo ponteiro de p
  printf("%d\n", (3* - *p) / (*p +7)); // erro sintatico?!
  return 0;
}
