/*-----------------------------------------
	Fun��o: Algoritmo que leia a raio, calcule o monte: o comprimento de uma esfera, a �rea e o volume 
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	const float PI=3.14;
	float raio=0, area=0, volume=0, comprimento=0;
	printf("Digite o valor do Raio :\n");
	scanf("%f", &raio);
	comprimento = 2 * PI * raio;
	area = PI * (raio * raio);
	volume = (4/3) * PI * (raio * raio * raio);
	printf("O comprimeito � igual a :%.2f\n", comprimento);
	printf("A �rea � igual a :%.2f\n", area);
	printf("O Volume � igual a :%.2f\n", volume);
}
	
