/*-----------------------------------------
	Fun��o:Algoritmo para ler o nome de um aluno e sua media final. O resultado desse algoritmo deve ser uma mensagem informando se o aluno foi aprofavo ou n�o, criterio de aprova��o nota > 7
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	char nome[50];
	int media=0, resultado=0;
	printf("Digite o nome do aluno: \n");
	gets(nome);
	printf("Digite a m�dia do aluno: \n");
	scanf("%i", &media);
	if(media>=7){
		printf("O aluno foi Aprovado !! \n");
	}
	else{
		printf("O aluno foi reprovado ;-; \n");
	}
}
