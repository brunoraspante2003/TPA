/*-----------------------------------------
	Função: Informa a média de 3 valores
	Autor: Bruno Raspante Rodrigues
	Data de criação: 25/09/2019
	Data de modificação: 25/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
	
	printf("Informe o primeiro número: \n");
	scanf("%f", & n1);
	printf("Informe o segundo número: \n");
	scanf("%f", & n2);
	printf("Informe o terceiro número: \n");
	scanf("%f", & n3);
	media = (n1 + n2 + n3) / 3;
	printf("Média: %f", media);
}
