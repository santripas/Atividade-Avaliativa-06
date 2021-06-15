#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");

	int valor, num = 2000;
	
	
	printf("Informe um valor entre 1 e 2000: \n");
	scanf("%i", &valor);
	
	if(valor> num){
	limpaTela();
	printf("\n\nO valor informado tem que ser entre 1 e 2000!!\n");
	printf("O limite de cálculo foi excedido : %i\n",valor);
	}else{
		printf("\n\nValores entre %i e %i:\n", valor,num);
		valor++;
		
		for(valor; valor<num; valor++)
			if(valor % 2 == 0) printf("-> %i\n", valor);
	}
}
