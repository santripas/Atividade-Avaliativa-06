#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <ctype.h>


void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");

	
	int vendidos = 120;
	float lucro,ingresso=15,despesas = 600;

	
	printf("\t\t\t|=============================================|\n");
	printf("\t\t\t|  Vendidos  |  Preço  |  Lucros |  Despesas  |\n");
	printf("\t\t\t|=============================================|\n");
	for(ingresso; ingresso > 0; ingresso = ingresso - 3){
		lucro = (ingresso * vendidos) - despesas;
		printf("\t\t\t|%9i   |%7.2lf  | %7.2lf |%10.2lf  |\n", vendidos, ingresso, lucro,despesas);	
		vendidos = vendidos + 26;
	}
	printf("\t\t\t|=============================================|\n\n\n");
}
