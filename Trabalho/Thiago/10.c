#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
  char nome[100], maiornome[100], menornome[100];
  float salario=0, maiorsalario=0, menorsalario=0, media=0;
  int continua=1, i, j, flag,x=0;

  do{
    for(i=0,flag=0;flag==0 && strcmp(nome, "0") !=0;i++){
      gets(nome);
      for(j=0;j < strlen(nome) && flag == 0;j++){
        if ( ((nome[j] >= 65 && nome[j] <= 90) || (nome[j] >= 97 && nome[j] <= 122))  && nome[j+1] == '\0')
          printf("Nao aceito\n");
        if (nome[j] == ' ' && nome[j+1] == '\0')
          printf("Nao aceito\n");
        if ( (nome[j] == ' ') && ((nome[j+1] >= 65 && nome[j+1] <= 90) || (nome[j+1] >= 97 && nome[j+1] <= 122))){
            printf("Nome aceito!\0");
            flag = 1;
            break;
        }
      }
    }
    printf("Digite o salario:\n");
    scanf("%f", &salario);

    media += salario;
    x++;
    media = media / x;

    if ( maiorsalario == 0)
      maiorsalario = salario;

    if (menorsalario == 0)
      menorsalario = salario;

    if ( salario >= maiorsalario ){
      maiorsalario = salario;
      strcpy(maiornome, nome);
    }
    if ( salario <= menorsalario){
      menorsalario = salario;
      strcpy(menornome, nome);
    }
    printf("Digite 0 para encerrar o cadastro, ou qualquer outro numero para continuar calculando\n");
    scanf("%d", &continua);
  }while(continua!=0);


  for(i=0 ; maiornome[i] != ' '; i++){ // transforma o primeiro nome em maiusculas
    maiornome[i] = toupper(maiornome[i]);
  }

  for(i=0 ; menornome[i] != ' '; i++){ // transforma o primeiro nome me minusculas
    menornome[i] = tolower(menornome[i]);
  }

  printf("Maior salario da empresa eh do %s e o valor eh %f \n", maiornome, maiorsalario);
  printf("Menor salario da empresa eh do %s e o valor eh %f \n", menornome, menorsalario);
  printf("A media salarial eh de %f\n", media);





  return 0;
}
