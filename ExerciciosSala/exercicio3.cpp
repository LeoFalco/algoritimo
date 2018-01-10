/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(){


	int tamanho = 3;
	float soma [tamanho];
	float a[tamanho]; 
	float b[tamanho];
	int i; // controle do laço for
	
	
	for(i = 0 ; i < tamanho ; i++ ){ // preenchendo a
		printf("A[%f] = ", i);
		scanf("%f",&a[i]);
	}
	printf("\n");
	for(i = 0 ; i < tamanho ; i++ ){ // preenchendo b
		printf("B[%f] = ",i);
		scanf("%f",&b[i]);
	}
	
	for( i = 0 ; i < tamanho ; i++ ){ // somando
		soma[i] = a[i] + b[i];
	}
	
	
	printf("\n\nA: ");
	for( i = 0 ; i < tamanho ; i++ ){ // mostrando a
		printf("%f,  ", a[i]);
	}
	
	printf("\n\nB: ");
	for( i = 0 ; i < tamanho ; i++ ){ // mostrando b
		printf("%f,  ", b[i]);
	}
	printf("\n\nSoma: ");
	for( i = 0 ; i < tamanho ; i++ ){ // mostrando soma
		printf("%f,  ", soma[i]);
	}
}

