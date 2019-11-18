/*-----------------------------------------
	Função: Verificar se o númro digitado e Positivo ou Negativo
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num=0;
	printf("Digite um numero desejado :\n");
	scanf("%i", &num);
	if (num > 0){
		printf("O número %i é Positivo \n", num);
	}
	if (num < 0){
		printf("O número %i é Negativo \n", num);
	}
	if (num == 0){
		printf("O número %i é Neutro",num);
    }
}
	
