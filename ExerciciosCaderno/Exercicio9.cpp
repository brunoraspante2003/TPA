/*-----------------------------------------
	Fun��o: Algoritmo que mostra o quociente e o resto da divis�o de um numero por outro
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 30/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int divisor=0, dividendo=0, quociente=0, resto=0;
	printf("Informe um N�mero :\n");
	scanf("%i", &dividendo);
    printf("Informe o n�mero que ser� dividido por :\n");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto = dividendo - (divisor * quociente);
	printf("O Quociente � igual a : %i", resto);
}
