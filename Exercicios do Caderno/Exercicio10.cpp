/*-----------------------------------------
	Fun��o: Trocar os valores de posi��o
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, troca=0;
	printf("Informe um Valor para o N�mero 1 :\n");
	scanf("%i", &num1);
	printf("Informe um Valor para o N�mero 2:\n");
	scanf("%i", &num2);
	troca = num1;
	num1 = num2;
	num2 = troca;
	printf("O valor do N�mero 1 trocado � :%i\n E o valor do N�mero 2 trocado � :%i\n",num1,num2);
}
