/*-----------------------------------------
	Função: Algoritmo para calcular o IMC de um aluno
	Autor: Bruno Raspante Rodrigues
	Data de criação: 09/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float peso=0, altura=0, soma=0;
	printf("Digite o peso de um Aluno :\n");
	scanf("%f", &peso);
	printf("Digite a altura de um Aluno :\n");
	scanf("%f", &altura);
	soma = peso / (altura * altura);
	printf("O IMC desse Aluno é igual a :%.2f", soma);
}
