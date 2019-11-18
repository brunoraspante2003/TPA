/*-----------------------------------------
	Função:Algoritmo que receba dois valores reais e apartir  de um número de opção permita ao úsuario a fazer a operação correspondente, conforme a tabela  
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int num1=0, num2=0, operacao=0, opcao=0;
	printf("Digite um número: \n");
	scanf("%i", &num1);
	printf("Digite outro número: \n");
	scanf("%i", &num2);
	printf(" ____________________________ \n");
	printf("| Operações de calculo       |\n");
	printf("|----------------------------|\n");
	printf("| 1- Adição                  |\n");
	printf("|----------------------------|\n");
	printf("| 2- Subtração               |\n");
	printf("|----------------------------|\n");
	printf("| 3- Multiplicação           |\n");
	printf("|----------------------------|\n");
	printf("| 4- Divisão                 |\n");
	printf("|____________________________|\n");
	printf("Digite a operação desejada: \n");
	scanf("%i", &opcao);
	switch(opcao){
		case 1 :
		    operacao = num1 + num2;
		       printf("Os dois valores somados é: %i", operacao);
		break;
		case 2 : 
		    operacao = num1 - num2;
		       printf("Os dois valores subitraidos é: %i", operacao);
		break;
		case 3 : 
		    operacao = num1 / num2;
		       printf("Os dois valores multiplicados é: %i", operacao);
		break;
		case 4 : 
		    operacao = num1 * num2;
		       printf("Os dois valores divididos é: %i", operacao);
		break;
	}
}
