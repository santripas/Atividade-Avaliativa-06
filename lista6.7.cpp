#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h> 


void limpaTela(){
	system("cls");
}

void mensagemInicio(){
	printf("\t\t\t\t\t|===============================|\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|           Bem Vindo           |\n");
	printf("\t\t\t\t\t|              a                |\n");
	printf("\t\t\t\t\t|  Eleição de melhor jogador    |\n");
	printf("\t\t\t\t\t|         de Futebol            |\n");
	printf("\t\t\t\t\t|      de todos os tempos       |\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|===============================|\n");
	printf("\n\n\n");
}


int main(){
setlocale(LC_ALL,"portuguese");

      int opcao,pele=0,maradona=0,branco=0,nulo=0;
      char confirmar,votacao;      
    
    
    mensagemInicio();
    
    do{
	
	printf("\t\t\t\t\t|===============================|\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|          CANDIDATOS           |\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|===============================|\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|        (25)- PELÉ             |\n");
	printf("\t\t\t\t\t|        (33)- MARADONA         |\n");
	printf("\t\t\t\t\t|        (0)- VOTO EM BRANCO    |\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t|===============================|\n");
	printf("\n\n\n");
	scanf("%i",&opcao);
	
	switch(opcao){
		
	case 25: 
    	printf ("\nVocê votou em Pelé:");
    	pele ++;
		printf("Confirmar voto?(S)sim e (N)não \n");
		scanf("%s", &confirmar);
		if(confirmar != 's' && confirmar != 'n'){
		printf("Resposta invalida.");
        }
	break;
	
	case 33:
		printf ("\nVocê votou em Maradona:\n");
    	maradona++;
    	printf("Confirmar voto?(S)sim e (N)não \n ");
		scanf("%s", &confirmar);
		if(confirmar != 's' && confirmar != 'n'){
		printf("Resposta invalida.");
        }
	break;	
	
	case 0: 
		printf ("\nVocê votou em branco:\n");
    	scanf ("%d",&branco);
    	branco++;
    	printf("Confirmar voto (S)sim e (N)não \n");
		scanf("%s", &confirmar);
		if(confirmar != 's' && confirmar != 'n'){
		printf("Resposta invalida.\n");
        }
	break;
	
	default:
		printf ("\nVocê votou Nulo:\n");
    	nulo++;
    	printf("Confirmar o voto? (S)sim e (N)não\n");
		scanf("%s", &confirmar);
		if(confirmar != 's' && confirmar != 'n'){
		printf("Resposta invalida.");
        }
	}
   	   
	    printf("Deseja continuar votando?\n");
	    scanf("%c",&votacao);
	    fflush(stdin);
	   votacao=toupper(votacao);
	}while(votacao == 'F');
	
	
	    limpaTela();
		printf ("\nO Candidato Pelé teve %d votos\n",pele);
		printf ("\nO Candidato Maradona teve %d votos\n",maradona);
		printf ("\nVotos em Branco : %d \n",branco);
		printf ("\nVotos Nulo: %d \n",nulo);
		
	return 0;
}
