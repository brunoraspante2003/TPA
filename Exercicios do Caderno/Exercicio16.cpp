/*-----------------------------------------
	Fun��o:Algoritmo para mostrar se o numero e Par ou �mpar
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int numero=0;
	printf("Digite o N�mero: \n");
	scanf("%i", &numero);
	if(numero/2){
		printf("O N�mero � Par: ");
	}
	else{
		printf("O N�mero � �mpar: ");
	}
}
