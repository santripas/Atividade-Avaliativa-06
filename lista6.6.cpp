#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h> 


void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");

   int quantidade=0,num;


do{

	printf("Digite o n�mero:\n");
	scanf ("%d",&num);
	limpaTela();
	if(num<0){
		printf("N�mero Inv�lido!\n");
		printf("S� podem n�meros positivos!\n\n");
	}

}while(num <0);

	
do{

	quantidade+=1;
	num = num/10;

}while(num != 0);

	printf ("\nA quantidade de algarismos do valor foram : %d \n",quantidade);

return (0);
}
