 /*-----------------------------------------
	Fun��o: Programa que leia o ano do nascimento dela e mostre na idade
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int dtn=0, idade=0, ano=0, idadeD=0;
	printf("Digite o ano de Nascimento de uma pessoa :\n");
	scanf("%i", &dtn);
	printf("Digite o ano atual que voc� est� :\n");
	scanf("%i", &ano);
	idade = ano - dtn;
	idadeD = idade * 365;
	printf("Sua idade em anos � igual a :%i anos e %i", idade, idadeD);
}
