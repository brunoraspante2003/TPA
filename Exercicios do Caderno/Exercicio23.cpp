/*-----------------------------------------
	Função: Algoritmo que leia e mostre o nome de 50 pessoas
	Autor: Bruno Raspante Rodrigues
	Data de criação: 06/11/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	int conta= 1;
	char nome[25];
	while(conta<=50){
	 printf("Escreva o nome da pessoa: \n");
	 gets(nome);
	 printf("%s \n",nome);
	 fflush(stdin);
	 conta++;
  }
}
