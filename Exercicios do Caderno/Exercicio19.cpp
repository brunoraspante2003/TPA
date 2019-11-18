/*-----------------------------------------
	Função: Algoritmo que apresenta o nome e o lanche conforme o número da opção desejada pelo o úsuario
	Autor: Bruno Raspante Rodrigues
	Data de criação: 23/10/2019
-------------------------------------------*/

#include <locale.h>
#include <iostream>
int main(){
	setlocale(LC_ALL, ""); 
	int pedido=0;
	printf(" _____________________________________\n");
	printf("| Produto           | Preço           |\n");
	printf("|-------------------------------------|\n");
	printf("| 1- X-Salada       | R$ 7,50         |\n");
	printf("|-------------------------------------|\n");
	printf("| 2- X-Tudo         | R$ 15,00        |\n");
	printf("|-------------------------------------|\n");
	printf("| 3- X-Frango        | R$ 13,00       |\n");
	printf("|-------------------------------------|\n");
	printf("| 4- X-Frango Salada | R$ 13,50       |\n");
	printf("|-------------------------------------|\n");
	printf("| 5- Coca-Cola 2L    | R$ 7,00        |\n");
	printf("|-------------------------------------|\n");
	printf("| 6- Fanta 2L        | R$ 5,00        |\n");
	printf("|-------------------------------------|\n");
	printf("| 7- Sprite 2L       | R$ 5,00        |\n");
	printf("|-------------------------------------|\n");
	printf("| 8- Kuat 2L         | R$ 5,00        |\n");
	printf("|_____________________________________|\n");
	scanf("%i", &pedido);
	switch (pedido){
		case 1 : printf(" Ok seu pedido será: X-Salada, R$7,50.  ");
		break;
		case 2 : printf(" Ok seu pedido será: X-tudo, R$15,00. ");
		break;
		case 3 : printf(" Ok seu pedido será: X-Frango, R$13,00. ");
		break;
		case 4 : printf(" Ok seu pedido será: X-Frango Salada, R$13,50. ");
		break;
		case 5 : printf(" Ok seu pedido será: Coca-Cola 2L, R$7,00. ");
		break;
		case 6 : printf(" Ok seu pedido será: Fanta 2L, R$5,00. ");
		break;
		case 7 : printf(" Ok seu pedido será: Sprite 2L, R$5,00. ");
		break;
		case 8 : printf(" Ok seu pedido será: Kuat 2L, R$5,00. ");
		break;
		default : printf("Número do pedido não registrado no cardapio '_' ");
		break;
	}
}

