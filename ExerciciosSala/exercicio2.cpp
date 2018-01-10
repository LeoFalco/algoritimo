/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tamanho = 50;
	int soma = 0;
	int vetor[tamanho]; 
	int i; // controle do laço for
	
	
	for(i = 0 ; i < tamanho ; i++ ){ // preenchendo
		printf("digite um numero : ");
		scanf("%d",&vetor[i]);
	}
	
	for( i = 0 ; i < tamanho ; i++ ){ // somando
		soma += vetor[i];
	}
	
	printf("\n\nVetor  :\n");
	for( i = 0 ; i < tamanho ; i++ ){ // mostrando
		printf("%d,  ", vetor[i]);
	}
	
	printf("\n\nSoma do vetor: %d\n\n", soma);
	

	system("pause");
}
