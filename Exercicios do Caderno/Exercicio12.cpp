/*-----------------------------------------
	Função: Algoritmo que mostra o maior e o menor dos números digitados pelo usuário
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0;
	printf("Digite o valor do Número 1 :\n");
	scanf("%i", &num1);
	printf("Digite o valor do Número 2:\n");
	scanf("%i", &num2);
	if (num1 > num2){
		printf("O Maior Número dos dois valores digitados é :%i, E o Menor Número é : %i", num1, num2);
	}
	if (num2 > num1){
		printf("O Maior Número dos valores digitados é :%i, E o Menor Número é :%i", num2, num1);
	}
	if (num1 == num2){
		printf("Os Números %i, %i são iguais!", num1, num2);
	}
}
