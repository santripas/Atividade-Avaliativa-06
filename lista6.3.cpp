#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <ctype.h>


void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");


    int maior=0,menor= 0;
	int i,altura[10],homens= 0,mulheres = 0;
	float somaMulheres =0,mediaMulheres =0;
	char sexo[10];
	
	printf("\t\t\t\t\t|===============================|\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t| Bem Vindo a Pesquisa de Dados |\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|===============================|\n");
	printf("\n\n\n");
	
	for(i= 1; i <= 10; i++){
		printf("Informe a altura da %dª pessoa em centímetros:", i);
		scanf("%d", &altura[i]);
		fflush(stdin);
		
		if(i == 1)
			menor = altura[i];
			
		if(menor > altura[i])
			menor = altura[i];

		if(maior < altura[i])
			maior = altura[i];
			
		printf("\nInforme o sexo da %dª pessoa  (F)Feminino ou (M)Masculino : ", i);
		scanf("%c", &sexo[i]);
		fflush(stdin);
		limpaTela();
		sexo[i]=toupper(sexo[i]);

			
		if(sexo[i] == 'F'){
			mulheres++;
			somaMulheres = somaMulheres + altura[i];
		}
			else if(sexo[i] == 'M')
				homens++;
									
	}
	
	mediaMulheres = somaMulheres / mulheres;
	
	printf("\t\t\t\t\t|==============================|\n");
	printf("\t\t\t\t\t|Resultado da Pesquisa de Dados|\n");
	printf("\t\t\t\t\t|==============================|\n");
	printf("\n\n\n"); 
	
	printf("A menor altura é: %d\n", menor);
	printf("A maior altura é: %d\n", maior);	
	printf("A média de altura das mulheres é: %.2f\n", mediaMulheres);
	printf("Número total de homens que participaram da pesquisa: %d\n", homens);
	
	
	return 0;
}
