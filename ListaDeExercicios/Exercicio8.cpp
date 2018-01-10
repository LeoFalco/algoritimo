#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	// Divisor * Quociente + resto = Dividendo
	
	const float salarioMin = 880.00;
	
	float salario, resultado1, resultado2 , restoDiv;
	
	printf("Digite o Salario : ");
	scanf("%f", &salario);
	
	resultado1 = salario / salarioMin; 
	printf("\nRS %.2f equivale a %.2f salarios minimos\n",salario , resultado1);
	
 
	resultado1 = floor(resultado1) ;
	
	resultado2 = salario - resultado1 * salarioMin;
	
	printf("RS %.2f equivale a %.0f salarios minimos e RS %.2f\n\n\n",salario , resultado1, resultado2);
	
	system("pause");
}
