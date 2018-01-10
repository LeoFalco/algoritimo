// algoritimo mostrar numeros primos 
/* Faça um algoritmo que calcule e mostre o produto dos números primos entre 92 e 1478. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int 
		num;
		
	float
		resultado;
	
	do{
		printf("Digite um numero positivo e inteiro : ");
		scanf("%d", &num);
		
		if(num < 0)
		printf("\nERRO ! \n%d nao e positivo e inteiro\n\n" , num);
	}while(num < 0 );
	
	for( int i = num ; i > 0  ; i--  )
		resultado =+ 1/(float)i ;
	
	printf("resultado : %f\n", resultado);
	
	system("pause");
}

