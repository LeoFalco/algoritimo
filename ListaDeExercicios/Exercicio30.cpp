/* 30 Faça um algoritmo que leia cinco conjuntos de quatro valores e mostre-os na ordem lida. 
 * Em seguida, mostre-os em ordem crescente e decrescente. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// função de ordenação  
	void bubblesortc(int vetor[], int size);
	void bubblesortd(int vetor[], int size);
	
	int matriz[5][4] = {0};
	
	// 2 cilos for para capturar os dados e guardar na matriz
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			
			printf("Digite o %d valor do %d conjunto: ", j+1 , i+1 );
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Valores digitados\n" );
	for(int i = 0 ; i < 5 ; i++){
		printf("%d Conjunto : ", i+1);
		for(int j = 0 ; j < 4 ; j++){
			printf("%d, ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Valores Ordenados em Ordem Crescente\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d Conjunto : ", i+1);
		for(int j = 0 ; j < 4 ; j++){
	
			// chama a nossa função de ordenação de vetores
			bubblesortc(matriz [i], 4);
			printf("%d, " ,matriz[i][j]);
		}
		printf("\n");
	}
	printf("\nValores Ordenados em Ordem Drescente\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d Conjunto : ", i+1);
		for(int j = 0 ; j < 4 ; j++){
	
			// chama a nossa função de ordenação de vetores
			bubblesortd(matriz [i], 4);
			printf("%d, " ,matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	system("pause");
}

void bubblesortc(int vetor[], int size){ /* ordem crescente */
	int temp;
	
	for( int i = 0 ; i < size ; i++ ){
		for( int j=i+1; j < size ; j++ ){
			if( vetor[i] > vetor[j] ){
				temp = vetor[i];       /* troca de dados */ 
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

void bubblesortd(int vetor[], int size){  /* ordem decrescente */
	int temp;
	
	for( int i = 0 ; i < size ; i++ ){
		for( int j=i+1; j < size ; j++ ){
			if( vetor[i] < vetor[j] ){
				temp = vetor[i];       /* troca de dados */ 
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

