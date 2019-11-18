/*-----------------------------------------
	Função:Algoritmo para apresentar o nome do mês do ano 
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Insira um número de 1 à 12: \n");
	scanf("%i", &numero);
	switch(numero){
		case 1 : printf("Seu mês é: Janeiro, e esse mês tem 31 dias");
		break;
		case 2 : printf("Seu mês é: Fevereiro, e esse mês tem 28 dias");
		break;
		case 3 : printf("Seu mês é: Março, e esse mês tem 31 dias");
		break;
		case 4 : printf("Seu mês é: Abril, e esse mês tem 30 dias");
		break;
		case 5 : printf("Seu mês é: Maio, e esse mês tem 31 dias");
		break;
		case 6 : printf("Seu mês é: Junho, e esse mês tem 30 dias");
		break;
		case 7 : printf("Seu mês é: Julho, e esse mês tem 31 dias");
		break;
		case 8 : printf("Seu mês é: Agosto, e esse mês tem 31 dias");
		break;
		case 9 : printf("Seu mês é: Setembro, e esse mês tem 30 dias");
		break;
		case 10 : printf("Seu mês é: Outubro, e esse mês tem 31 dias");
		break;
		case 11 : printf("Seu mês é: Novembro, e esse mês tem 30 dias");
		break;
		case 12 : printf("Seu mês é: Dezembro, e esse mês tem 31 dias");
		break;
		default : printf("Esse Número não está registrado no nosso calendario '_'  ");
		break;
	}
}
