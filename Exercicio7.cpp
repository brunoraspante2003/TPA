/*-----------------------------------------
	Fun��o: Calcular o salario de um funcionario em percentual de aumento e mostra o novo salario
	Autor: Bruno Raspante Rodrigues
	Data de cria��o: 02/10/2019
-------------------------------------------*/

#include <locale>
#include <iostream>
int main(){
	setlocale(LC_ALL, "");
	float salario=0, aumento=0, novoSalario=0;
	printf("Digite o valor do Salario :\n");
	scanf("%f", &salario);
	printf("Digite o valor do Aumento do Salario :\n");
	scanf("%f", &aumento);
	novoSalario = salario + aumento;
	printf("O valor do novo salario � igual a : %.2f", novoSalario);
}
