/*-----------------------------------------
	Fun��o: Algoritmo que mostre todos os n�meros pares entre os n�meros digitados pelo usu�rio
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, resto=0;
	printf("Digite um n�mero: \n");
	scanf("%i", &num1);
	printf("Digite outro n�mero: \n");
	scanf("%i", &num2);
	while(num1 <= num2){
		resto= (num1 - (num1 / 2)* 2 );
		if(resto==0){
			printf("Os n�meros pares s�o: %i \n", num1);
		}				
			num1++;
	}
}
