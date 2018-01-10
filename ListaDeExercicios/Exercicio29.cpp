// algoritimo mostrar numeros primos 
/* Faça um algoritmo que calcule e mostre o produto dos números primos entre 92 e 1478. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	bool isPrimo(int n);

	for( int i = 92 ; i <= 1478 ; i++ )
		if(isPrimo(i))
			printf(" %d \n", i);
	
}

// verifica se um numero é primo
bool isPrimo(int n){ 

	if(n<5 || n%2==0 || n%3==0)
		return (n==2||n==3);

	int maxP = sqrt(n)+2;
	
	for(int p=5; p<maxP; p+=6)
		if(n%p==0||n%(p+2)==0)
			return false;

	return true;
}
