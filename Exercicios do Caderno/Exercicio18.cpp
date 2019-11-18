/*-----------------------------------------
	Função:Algoritmo que lê os dias da semana
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Informe um Número de 1 á 7: \n");
	scanf("%i", &numero);
	switch(numero){
		case 1 : printf("O Dia da Semana é: Domingo!!");
		break;
		case 2 : printf("O Dia da Semana é: Segunda-Feira!!");
		break;
		case 3 : printf("O Dia da Semana é: Terça-Feira!!");
		break;
		case 4 : printf("O Dia da Semana é: Quarta-Feira!!");
		break;
		case 5 : printf("O Dia da Semana é: Quinta-Feira!!");
		break;
		case 6 : printf("O Dia da Semana é: Sexta-Feira!!");
		break;
		case 7 : printf("O Dia da Semana é: Sabado!!");
		break;
		default : printf("Digite outro valor Por Favor '-' ");
		break;
	}
}
