/*-----------------------------------------
	Fun��o: Informa se o n�mero sobra resto ou n�o
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 25/09/2019
	Data de modifica��o: 25/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, quoc = 0, resto = 0;
	
	printf("Insira o primeiro n�mero: \n");
	scanf("%i", & num1);
	printf("Insira o segundo n�mero: \n");
	scanf("%i", & num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O resto �: %i ", resto);
	system("pause");
}
