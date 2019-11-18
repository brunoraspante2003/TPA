/*-----------------------------------------
	Função: Ver se o número é maior que 100. Caso seja somar com mais 150, e exibir o valor do número
	Autor: Bruno Raspante Rodrigues
	Data de criação: 16/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int numero=0;
	printf("Digite um número desejado :\n");
	scanf("%i", &numero);
	if (numero >= 100){
		numero = numero + 150;
	          printf("O valor do número com a soma de 150 é igual a :%i", numero);
	}
	else {
	          printf("O número %i é menor que o número 100\n", numero);
	}
}
