/*-----------------------------------------
	Fun��o: Informa a area de um Retangulo
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int area, base=0, altura=0;
	printf("Digite o numero da Base :\n");
	scanf("%i", &base);
	printf("Digite o numero da Altura :\n");
	scanf("%i", &altura);
	area = base * altura;
	printf("A �rea do Retangulo � igual a: %i", area);
}
