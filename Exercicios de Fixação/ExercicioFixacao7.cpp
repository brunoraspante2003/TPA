/*-----------------------------------------
	Fun��o: Algoritmo que leia as dimen��es de uma c�mada, calcule e mostre a �rea e a potencia de ilumina��o que devera ser ultilizado
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float largura=0, comprimento=0, area=0, resultado=0;
	printf("Digite a largura da C�modo :\n");
	scanf("%f", &largura);
	printf("Digite o Comprimento da C�modo :\n");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	resultado = area * 18;
	printf("O resultado das Dimen��es do C�modo � igual a :%.2f", resultado);
}
