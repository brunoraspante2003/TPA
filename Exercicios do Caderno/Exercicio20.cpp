/*-----------------------------------------
	Fun��o:Algoritmo para apresentar o nome do m�s do ano 
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Insira um n�mero de 1 � 12: \n");
	scanf("%i", &numero);
	switch(numero){
		case 1 : printf("Seu m�s �: Janeiro, e esse m�s tem 31 dias");
		break;
		case 2 : printf("Seu m�s �: Fevereiro, e esse m�s tem 28 dias");
		break;
		case 3 : printf("Seu m�s �: Mar�o, e esse m�s tem 31 dias");
		break;
		case 4 : printf("Seu m�s �: Abril, e esse m�s tem 30 dias");
		break;
		case 5 : printf("Seu m�s �: Maio, e esse m�s tem 31 dias");
		break;
		case 6 : printf("Seu m�s �: Junho, e esse m�s tem 30 dias");
		break;
		case 7 : printf("Seu m�s �: Julho, e esse m�s tem 31 dias");
		break;
		case 8 : printf("Seu m�s �: Agosto, e esse m�s tem 31 dias");
		break;
		case 9 : printf("Seu m�s �: Setembro, e esse m�s tem 30 dias");
		break;
		case 10 : printf("Seu m�s �: Outubro, e esse m�s tem 31 dias");
		break;
		case 11 : printf("Seu m�s �: Novembro, e esse m�s tem 30 dias");
		break;
		case 12 : printf("Seu m�s �: Dezembro, e esse m�s tem 31 dias");
		break;
		default : printf("Esse N�mero n�o est� registrado no nosso calendario '_'  ");
		break;
	}
}
