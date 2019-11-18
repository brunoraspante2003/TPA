/*-----------------------------------------
	Função: Algoritmo que mostre todos os números pares entre os números digitados pelo usuário
	Autor: Bruno Raspante Rodrigues
	Data de criação: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, resto=0;
	printf("Digite um número: \n");
	scanf("%i", &num1);
	printf("Digite outro número: \n");
	scanf("%i", &num2);
	while(num1 <= num2){
		resto= (num1 - (num1 / 2)* 2 );
		if(resto==0){
			printf("Os números pares são: %i \n", num1);
		}				
			num1++;
	}
}
