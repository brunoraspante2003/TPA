/*-----------------------------------------
	Fun��o: Verificar se o n�mro digitado e Positivo ou Negativo
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=0;
	printf("Digite um numero desejado :\n");
	scanf("%i", &num);
	if (num > 0){
		printf("O n�mero %i � Positivo \n", num);
	}
	if (num < 0){
		printf("O n�mero %i � Negativo \n", num);
	}
	if (num == 0){
		printf("O n�mero %i � Neutro",num);
    }
}
	
