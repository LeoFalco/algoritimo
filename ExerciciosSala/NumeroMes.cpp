/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(){


	int num;
	int opcao; // controla o do wile
	do{
	printf("Digite um numero Correspondete ao mes : ");
	scanf("%d",&num);
	
	switch(num){
		
		case 1 :
			printf("\nMes %d : Janeiro\n", num);
			break;
		case 2 :
			printf("\nMes %d : Fevereiro\n", num);
			break;
		case 3 :
			printf("\nMes %d : Marco\n", num);
			break;
		case 4 :
			printf("\nMes %d : Abril\n", num);
			break;
		case 5 :
			printf("\nMes %d : Maio\n", num);
			break;
		case 6 :
			printf("\nMes %d : Junho\n", num);
			break;
		case 7 :
			printf("\nMes %d : Julho\n", num);
			break;
		case 8 :
			printf("\nMes %d : Agostoo\n", num);
			break;
		case 9 :
			printf("\nMes %d : Setembro\n", num);
			break;
		case 10 :
			printf("\nMes %d : Outubro\n", num);
			break;
		case 11 :
			printf("\nMes %d : Novembro\n", num);
			break;
		case 12 :
			printf("\nMes %d : Dezembro\n", num);
			break;
		default :
			printf("\n%d Nao corresponde a um Mes!", num);
	
	}
		printf("\nDigite 1 para continuar ou qualquer tecla para sair : ");
		scanf("%d",&opcao);
	}while(opcao==1);
}

