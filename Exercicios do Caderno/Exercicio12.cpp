/*-----------------------------------------
	Fun��o: Algoritmo que mostra o maior e o menor dos n�meros digitados pelo usu�rio
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0;
	printf("Digite o valor do N�mero 1 :\n");
	scanf("%i", &num1);
	printf("Digite o valor do N�mero 2:\n");
	scanf("%i", &num2);
	if (num1 > num2){
		printf("O Maior N�mero dos dois valores digitados � :%i, E o Menor N�mero � : %i", num1, num2);
	}
	if (num2 > num1){
		printf("O Maior N�mero dos valores digitados � :%i, E o Menor N�mero � :%i", num2, num1);
	}
	if (num1 == num2){
		printf("Os N�meros %i, %i s�o iguais!", num1, num2);
	}
}
