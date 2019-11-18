/*-----------------------------------------
	Função: Informa 4 notas de um aluno e mostre a sua media
	Autor: Bruno Raspante Rodrigues
	Data de criação: 02/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	float num1=0, num2=0, num3=0, num4=0, media=0;
	printf("Digite a primeira nota do aluno :\n");
	scanf("%f", & num1);
	printf("Digite a segunda nota do aluno :\n");
	scanf("%f", & num2);
	printf("Digite a terceira nota do aluno :\n");
	scanf("%f", & num3);
	printf("Digite a quarta nota do aluno :\n");
	scanf("%f", & num4);
	media = (num1 + num2 + num3 + num4) / 4;
	printf("A Média do aluno é igual a : %.2f", media);
}
