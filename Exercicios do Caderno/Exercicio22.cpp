/*-----------------------------------------
	Fun��o:Algoritmo que receba dois valores reais e apartir  de um n�mero de op��o permita ao �suario a fazer a opera��o correspondente, conforme a tabela  
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int num1=0, num2=0, operacao=0, opcao=0;
	printf("Digite um n�mero: \n");
	scanf("%i", &num1);
	printf("Digite outro n�mero: \n");
	scanf("%i", &num2);
	printf(" ____________________________ \n");
	printf("| Opera��es de calculo       |\n");
	printf("|----------------------------|\n");
	printf("| 1- Adi��o                  |\n");
	printf("|----------------------------|\n");
	printf("| 2- Subtra��o               |\n");
	printf("|----------------------------|\n");
	printf("| 3- Multiplica��o           |\n");
	printf("|----------------------------|\n");
	printf("| 4- Divis�o                 |\n");
	printf("|____________________________|\n");
	printf("Digite a opera��o desejada: \n");
	scanf("%i", &opcao);
	switch(opcao){
		case 1 :
		    operacao = num1 + num2;
		       printf("Os dois valores somados �: %i", operacao);
		break;
		case 2 : 
		    operacao = num1 - num2;
		       printf("Os dois valores subitraidos �: %i", operacao);
		break;
		case 3 : 
		    operacao = num1 / num2;
		       printf("Os dois valores multiplicados �: %i", operacao);
		break;
		case 4 : 
		    operacao = num1 * num2;
		       printf("Os dois valores divididos �: %i", operacao);
		break;
	}
}
