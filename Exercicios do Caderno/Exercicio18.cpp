/*-----------------------------------------
	Fun��o:Algoritmo que l� os dias da semana
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Informe um N�mero de 1 � 7: \n");
	scanf("%i", &numero);
	switch(numero){
		case 1 : printf("O Dia da Semana �: Domingo!!");
		break;
		case 2 : printf("O Dia da Semana �: Segunda-Feira!!");
		break;
		case 3 : printf("O Dia da Semana �: Ter�a-Feira!!");
		break;
		case 4 : printf("O Dia da Semana �: Quarta-Feira!!");
		break;
		case 5 : printf("O Dia da Semana �: Quinta-Feira!!");
		break;
		case 6 : printf("O Dia da Semana �: Sexta-Feira!!");
		break;
		case 7 : printf("O Dia da Semana �: Sabado!!");
		break;
		default : printf("Digite outro valor Por Favor '-' ");
		break;
	}
}
