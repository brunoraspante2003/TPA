/*-----------------------------------------
	Função: Algoritmo que receba a altura de duas pessoas e calcule a meida de altura entre elas
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float al1=0, al2=0, media=0;
	char p1[10], p2[10];
	printf("Digite o nome da Pessoa 1 :\n");
	scanf("%s", &p1);
	printf("Digite o nome da Pessoa 2 :\n");
	scanf("%s", &p2);
	printf("Digite a Altura da Pessoa 1 :\n");
	scanf("%f", &al1);
	printf("Digite a Altura da Pessoa 2 :\n");
	scanf("%f", &al2);
	media = (al1 + al2) / 2;
	printf("A media de Altura entre duas Pessoas é igual a :%.2f", media);
}
	
