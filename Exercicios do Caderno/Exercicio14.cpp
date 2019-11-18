/*-----------------------------------------
	Função: Algoritmo que dada a idade de uma pessoa Clasifique-o em uma da categorias de natação como: Infantil= 0 a 11 anos, Juvenil= 12 a 17 anos, adulto= maior de 18 
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int idade=0;
	
	printf("Informe a idade da pessoa: \n");
	scanf("%i", &idade);
	
	if (idade >= 0 and idade <= 11){
		printf("Essa pessoa com a idade %i, se encaixa na categoria Infantil \n", idade);
	}
	else if (idade > 11 and idade < 18){
		printf("Essa pessoa com a idade %i, se encaixa na categoria Juvenil \n", idade);
	}
	else if (idade > 18){
		printf("Essa pessoa com a idade %i, se encaixa na categoria Adulto \n", idade);
	}
}
	
