/*-----------------------------------------
	Fun��o: Informa a area de um Circulo
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int area, PI=3.14, raio=0;
	printf("Digite o valor do Raio :\n");
	scanf("%i", &raio);
	area = PI * raio * raio;
	printf("A �rea do Circulo � igual a: %i", area);
}
