#include <stdio.h>
#include <math.h>

int main (){
	
	int a = 0,
		b = 1,
		auxiliar,
		i, // controle do laco for
		n; // posicao
	
	printf("digite o numero da posicao desejada: ");
	scanf("%i", &n);
	
	
	for  ( i = 0 ; i < n ; ++i ){
		
		
		auxiliar = a + b ;
		a = b;
		b = auxiliar;
		
	printf("%i\n", auxiliar);
	
	}
	
}
