/*-----------------------------------------
	Fun��o: Ver se o n�mero � maior que 100. Caso seja somar com mais 150, e exibir o valor do n�mero
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int numero=0;
	printf("Digite um n�mero desejado :\n");
	scanf("%i", &numero);
	if (numero >= 100){
		numero = numero + 150;
	          printf("O valor do n�mero com a soma de 150 � igual a :%i", numero);
	}
	else {
	          printf("O n�mero %i � menor que o n�mero 100\n", numero);
	}
}
