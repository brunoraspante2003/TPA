/*-----------------------------------------
	Fun��o: Algoritmo que calcule o fatorial de um n�mero digitado pelo usu�rio
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=0, fatorial=1;
	printf("Insira um n�mero: \n");
	scanf("%i", &num);
	while(num>1){
		fatorial = fatorial * num;
		num = num - 1;
	}
	if(num<16){
		printf("N�mero n�o permitido!!");
	}
	else{
	printf("O fatorial do n�mero digitado �: %i", fatorial);  
  }
}
