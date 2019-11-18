/*-----------------------------------------
	Função: Algoritmo que calcule o fatorial de um número digitado pelo usuário
	Autor: Bruno Raspante Rodrigues
	Data de criação: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=0, fatorial=1;
	printf("Insira um número: \n");
	scanf("%i", &num);
	while(num>1){
		fatorial = fatorial * num;
		num = num - 1;
	}
	if(num<16){
		printf("Número não permitido!!");
	}
	else{
	printf("O fatorial do número digitado é: %i", fatorial);  
  }
}
