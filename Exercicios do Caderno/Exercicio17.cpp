/*-----------------------------------------
	Função: Exemplo de caso escolha
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int numero=0;
	printf("Informe um Número: \n");
	scanf("%i", &numero);
	switch(numero){
	case 1: printf("Um");
	break;
	case 2: printf("Dois");
	break;
	default : printf("Outro valor ");
	break;
    }
  }

