/*-----------------------------------------
	Fun��o: Algoritmo que calcule e mostre o quadrado de um n�meor informado pelo usu�rio e fecha quando ele digita 0
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=1, quadrado=0;
	while(num!=0){
		printf("Digite um n�mero: \n");
		scanf("%i", &num);
		quadrado = num * num;
		printf("O quadrado desse n�mero � :%i\n", quadrado);
	}
	printf("Error !!!!!");
}
