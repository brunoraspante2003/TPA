/*-----------------------------------------
	Função: Programa que receba 4 notas, 4 pesos e exiba a média ponderada destes valores
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int n1=0, n2=0, n3=0, n4=0, p1=0, p2=0, p3=0, p4=0, media=0;
	printf("Digite o valor da Nota 1 :\n");
	scanf("%i", &n1);
	printf("Digite o valor da Nota 2 :\n");
	scanf("%i", &n2);
	printf("Digite o valor da Nota 3 :\n");
	scanf("%i", &n3);
	printf("Digite o valor da Nota 4 :\n");
	scanf("%i", &n4);
	printf("Digite o valor do Peso 1 :\n");
	scanf("%i", &p1);
	printf("Digite o valor do Peso 2 :\n");
	scanf("%i", &p2);
	printf("Digite o valor do Peso 3 :\n");
	scanf("%i", &p3);
	printf("Digite o valor do Peso 4 :\n");
	scanf("%i", &p4);
	media = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4)/(p1 + p2 + p3 + p4);
	printf("A Média ponderada é igual a :%i", media);
}
	
