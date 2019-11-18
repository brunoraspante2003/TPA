/*-----------------------------------------
	Função: Trocar os valores de posição
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, troca=0;
	printf("Informe um Valor para o Número 1 :\n");
	scanf("%i", &num1);
	printf("Informe um Valor para o Número 2:\n");
	scanf("%i", &num2);
	troca = num1;
	num1 = num2;
	num2 = troca;
	printf("O valor do Número 1 trocado é :%i\n E o valor do Número 2 trocado é :%i\n",num1,num2);
}
