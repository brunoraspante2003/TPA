/*-----------------------------------------
	Fun��o: Calcular a area de um terreno retangular e o preco do metro quadrado
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float base=0, altura=0, metros=0, preco=0;
	printf("Digite o numero da Base :\n");
	scanf("%f", &base);
	printf("Digite o numero da Altura :\n");
	scanf("%f", &altura);
	printf("Digite a �rea em metros quadrados :\n");
	scanf("%f", &metros);
	preco = (base * altura)* metros;
	printf("A �rea do terreno em metros quadrados � igual a: %.2f", preco);
}
