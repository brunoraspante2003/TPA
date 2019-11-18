/*-----------------------------------------
	Função: Algoritmo que leia 3 numeros e clasifique-o em ordem Crescente
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, num3=0;
	
	printf("Digite o Primeiro número :\n");
	scanf("%i", &num1);
	
	printf("Digite o Segundo número :\n");
	scanf("%i", &num2);
	
	printf("Digite o Terceiro número :\n");
	scanf("%i", &num3);
	
	printf("\n\n");
	
	if (num1 < num2 and num2 < num3){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num1,num2,num3);
	}
	else if (num1 < num3 and num3 < num2){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num1,num3,num2);
	}
	else if (num2 < num1 and num1 < num3){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num2,num1,num3);
	} 
	else if (num2 < num3 and num3 < num1){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num2,num3,num1);
	}
	else if (num3 < num1 and num1 < num2){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num3,num1,num2);
	}
	else if (num3 < num2 and num2 < num1){
		printf("Os números em ordem Crescente são: %i, %i, %i\n", num3,num2,num1);
	}
}
