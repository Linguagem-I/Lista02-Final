#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int horaInicio, horaFim, minutoInicio, minutoFim, horaFinal, minutoFinal, hora, minuto;

bool verificaValores(){
	
	if ((horaInicio > 23 || horaFim > 23) || (minutoInicio > 59 || minutoFim > 59)){
		return false;
	}

	return true;
}

void calculaDuracaoJogo(){

	if (horaInicio > horaFim){
		hora = 24 - (horaInicio - horaFim);
	}
	else {
		hora = horaFim - horaInicio;
	}

	if (minutoInicio > minutoFim){
		if (horaInicio != horaFim){
			hora = hora - 1;
		} else {
			hora = 23;
		}

		minuto = 60 - (minutoInicio - minutoFim);
	} else{
		minuto = minutoFim - minutoInicio;
	}

	if (hora == 0 && minuto == 0){
		hora = 24;
	}

}

int main(){
	
	int verificacao;

	scanf("%d", &horaInicio);
	scanf("%d", &minutoInicio);
	scanf("%d", &horaFim);
	scanf("%d", &minutoFim);

	verificacao = verificaValores();

	if (verificacao == true){
		
		calculaDuracaoJogo(horaInicio, horaFim, minutoInicio, minutoFim);

		printf("A Duracao do Jogo foi de %d horas e %d minutos\n", hora, minuto);
	} else {
		printf("Os horarios informados estão incorretos\n");
	}

	
	return 0;
}