/*-----------------------------------------
	Função: Informa 3 valores e apresentar como resultado final o quadrado da soma dos numeros
	Autor: Bruno Raspante Rodrigues
	Data de criação: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int soma, quadrado, num1=0, num2=0, num3=0;
	printf("Digite o valor do primeiro numero :\n");
	scanf("%i", &num1);
	printf("Digite o valor do segundo numero :\n");
	scanf("%i", &num2);
	printf("Digite o valor do terceiro numero :\n");
	scanf("%i", &num3);
	soma = num1 + num2 + num3;
	quadrado = soma * soma;
	printf("O Quadrado da soma dos 3 numero é igual a: %i", quadrado);
}
