#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");

	int fatorial, calculo;
  
  
  	printf("Informe o número que você deseja calcular o fatorial: \n");
	scanf("%d",&fatorial);

	calculo = fatorial;
	if(fatorial == 0){
		printf("1");
	return 0;
	}else{
		while(fatorial > 1){
			calculo *= fatorial-1;
			fatorial--;
		}
	}
	limpaTela();
	printf("fatorial é = %d", calculo);
	
	
	return 0;
}
