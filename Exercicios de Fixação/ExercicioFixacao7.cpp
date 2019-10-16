/*-----------------------------------------
	Função: Algoritmo que leia as dimenções de uma câmada, calcule e mostre a área e a potencia de iluminação que devera ser ultilizado
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float largura=0, comprimento=0, area=0, resultado=0;
	printf("Digite a largura da Cômodo :\n");
	scanf("%f", &largura);
	printf("Digite o Comprimento da Cômodo :\n");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	resultado = area * 18;
	printf("O resultado das Dimenções do Cômodo é igual a :%.2f", resultado);
}
