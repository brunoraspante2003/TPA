/*-----------------------------------------
	Função: Programa que receba um valor em Celsius e converta para Fahrenheit
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float celsius=0, fahrenheit=0;
	printf("Digite uma temperatura em C° :\n");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 1.8) + 32;
	printf("A temperatura convertida para fahrenheit é igual a :%.1f", fahrenheit);
}
