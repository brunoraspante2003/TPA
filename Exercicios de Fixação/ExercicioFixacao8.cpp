/*-----------------------------------------
	Função: Algoritmo que receba um determinado valor em horas, minutos e segundos e exiba o valor em segundos
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int horas=0, minutos=0, segundos=0, hps=0, meps=0, resultado=0;
	printf("Digite a quantidade em Horas :\n");
	scanf("%i", &horas);
	printf("Digite a quantidade em Minutos :\n");
	scanf("%i", &minutos);
	printf("Digite a a quantidade em Segundos :\n");
	scanf("%i", &segundos);
	hps = horas * 3600;
	meps = minutos * 60;
	resultado = segundos + meps + hps;
	printf("O resultado é igual a :%i", resultado);
}
	
