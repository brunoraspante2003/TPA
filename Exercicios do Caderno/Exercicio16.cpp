/*-----------------------------------------
	Função:Algoritmo para mostrar se o numero e Par ou Ímpar
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Digite o Número: \n");
	scanf("%i", &numero);
	if(numero/2){
		printf("O Número é Par: ");
	}
	else{
		printf("O Número é Ímpar: ");
	}
}
