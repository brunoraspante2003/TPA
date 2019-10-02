/*-----------------------------------------
	Função: Calcular o valor de uma prestação em atraso
	Autor: Bruno Raspante Rodrigues
	Data de criação: 02/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float prestacao=0, valor=0, taxa=0, tempo=0;
	printf("Insia o valor da Prestação :\n");
	scanf("%f", &prestacao);
	printf("Insira o Valor :\n");
	scanf("%f", &valor);
	printf("Insira o valor da Taxa :\n");
	scanf("%f", &taxa);
	printf("Insira o número em dias em atraso :\n");
	scanf("%f", &tempo);
	prestacao = valor + (valor*(taxa/100)*tempo);
	printf("O Valor final da prestação em atraso é igual a: %f", prestacao);
}
