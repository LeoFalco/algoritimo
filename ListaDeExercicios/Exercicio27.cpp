/*
27 Faça um algoritmo que verifique e mostre todos os números entre 1000 e 2000
(inclusive), que quando dividido por 11 produzem resto igual a 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for ( int i = 1000 ; i <= 2000 ; i++ ){
		
		if(i % 11 == 5)
		printf("%d\n", i );
		
		
	}
}
