/*-----------------------------------------
	Fun��o: Calcular o valor de uma presta��o em atraso
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 02/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float prestacao=0, valor=0, taxa=0, tempo=0;
	printf("Insia o valor da Presta��o :\n");
	scanf("%f", &prestacao);
	printf("Insira o Valor :\n");
	scanf("%f", &valor);
	printf("Insira o valor da Taxa :\n");
	scanf("%f", &taxa);
	printf("Insira o n�mero em dias em atraso :\n");
	scanf("%f", &tempo);
	prestacao = valor + (valor*(taxa/100)*tempo);
	printf("O Valor final da presta��o em atraso � igual a: %f", prestacao);
}
