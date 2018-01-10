#include <stdio.h>
#include <conio.h>

int vetorA[10];
int vetorB[5];
int vetorPar[10]; // preenchido com os dados de A
int vetorImpar[5]; // preenchido com os dados de B

int tamA = 10;
int tamB = 5;
int tamPar = 0;
int tamImpar = 0;
 
void lerVetor(int vetor[], int tam){
 	
	for( int i =  0  ;i < tam  ; i ++ ){
		printf("Digite o elemento [%d] : ", i );
		scanf("%d", &vetor[i]);
	}
}
void mostrarVetor(int vetor[], int tam){
	
 	for( int i =  0  ;i < tam  ; i ++ ){
		printf("%d, " );
	}
 	printf("\n");
}
 
void criarVetorPar(int tam){
 	
	for( int i =  0  ;i < tamPar  ; i ++ ){
 		if(vetorA[i]%2 == 0){
 			vetorPar[tam]= vetorA[i];
			tamPar++; 			
		 }
	}
}

void criarVetorImpar(int tam){
 	
	for( int i =  0  ;i < tam  ; i ++ ){
 		if(vetorA[i]%2 == 1){
 			vetorImpar[tam]= vetorB[i];
			tamImpar++; 			
		 }
	}
}
 
 
 int main(){
 	
	printf("Digite os valores de A\n");
	lerVetor(vetorA, 10);
	
	printf("\nDigite os valores de B\n");
	lerVetor(vetorB, 5);
	
	criarVetorPar(10);
	criarVetorImpar(5);
	
	printf("\nValores Pares de A\n");
	mostrarVetor(vetorPar, tamPar);
	
	printf("\nValores Impares de B\n");
	mostrarVetor(vetorImpar, tamImpar); 	 
}
