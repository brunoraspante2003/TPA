/*-----------------------------------------
	Função: Informa a area de um Triangulo
	Autor: Bruno Raspante Rodrigues
	Data de criação: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int area, base=0, altura=0;
	printf("Digite o valor da Base :\n");
	scanf("%i", &base);
	printf("Digite o valor da Altura :\n");
	scanf("%i", &altura);
	area = base * altura/2;
	printf("A Área do Triangulo é igual a: %i", area);
}
