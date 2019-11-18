/*-----------------------------------------
	Função:Algoritmo para ler o nome de um aluno e sua media final. O resultado desse algoritmo deve ser uma mensagem informando se o aluno foi aprofavo ou não, criterio de aprovação nota > 7
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	char nome[50];
	int media=0, resultado=0;
	printf("Digite o nome do aluno: \n");
	gets(nome);
	printf("Digite a média do aluno: \n");
	scanf("%i", &media);
	if(media>=7){
		printf("O aluno foi Aprovado !! \n");
	}
	else{
		printf("O aluno foi reprovado ;-; \n");
	}
}
