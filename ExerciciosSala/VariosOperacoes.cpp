/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/
/* fflush(stdin);*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char operador;
	int x, y ;
	
	printf("Digite um valor para x : ");
	scanf("%d",&x);
	printf("Digite um valor para y : ");
	scanf("%d",&y);

	printf("\n + Soma ");
	printf("\n - Subtracao");
	printf("\n * Multiplicacao");
	printf("\n / Divisao");
	printf("\n % Resto da Divisao");
	printf("\n\nDigite um Operador : ");
	fflush(stdin); // limpar buffer para ler caractere
	scanf("%c",&operador);
	
	
	switch(operador){
		
		/* Soma */
		case '+' : 
			printf("\nResultado = %d\n", x+y );
		break;
			
		/* subtracao */ 
		case  '-' : 
		
			printf("\nResultado = %d\n", x-y );
		break;
		
		/* Multiplicacao*/
		case '*' : 
		
			printf("\nResultado = %d\n", x*y );
		break;
		
		/* Divisao */
		case '/' :
			if (y==0)
				printf("Nao existe divisao por Zero!\n");
			printf("\nResultado = %d\n", x/y );
		break;
		
		/* resto da div*/ 
		case '%': 
			if (y==0)
				printf("Nao existe divisao por Zero!\n");
			printf("\nResultado = %.4f\n", x%y );
		break;
	
		default :
			printf("Operador invalido\n");
	}
	printf("\n");
	system("pause");
}

