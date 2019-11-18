/*-----------------------------------------
	Função: Algoritmo que calcule e mostre o quadrado de um númeor informado pelo usuário e fecha quando ele digita 0
	Autor: Bruno Raspante Rodrigues
	Data de criação: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=1, quadrado=0;
	while(num!=0){
		printf("Digite um número: \n");
		scanf("%i", &num);
		quadrado = num * num;
		printf("O quadrado desse número é :%i\n", quadrado);
	}
	printf("Error !!!!!");
}
