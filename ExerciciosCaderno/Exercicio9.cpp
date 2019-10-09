/*-----------------------------------------
	Função: Algoritmo que mostra o quociente e o resto da divisão de um numero por outro
	Autor: Bruno Raspante Rodrigues
	Data de criação: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int divisor=0, dividendo=0, quociente=0, resto=0;
	printf("Informe um Número :\n");
	scanf("%i", &dividendo);
        printf("Informe o número que será dividido por :\n");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto = dividendo - (divisor * quociente);
	printf("O Quociente é igual a : %i", resto);
}
