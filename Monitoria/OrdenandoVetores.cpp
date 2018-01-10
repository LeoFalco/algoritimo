#include <stdio.h>
#include <stdlib.h>

#define l 2
#define c 4


int main(){
	
	int matriz [l][c];
	int *pVetor;
	
	// lendo os dados do usuário
	for(int i = 0; i < l; i++){ // percorre as linhas
		for(int j = 0; j < c  ; j++){ // percorre as colunas
		
			printf("Digite o valor de V%d[%d] :", i+1, j);
			scanf("%d", & matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	// mostrando os dados originais
	printf("Vetores Originais: \n");
	for(int i = 0; i < l; i++){ // percorre as linhas
		printf("V%d = {", i+1);
		for(int j = 0; j < c  ; j++){ // percorre as colunas
			printf(" %d,", matriz[i][j]);
		}
		printf("}\n");
	}

	
	
	for(int i = 0; i < l; i++){ // percorrendo as linhas
		
		pVetor= &matriz[i][0]; // pVetor aponta para uma linha da matriz
			
		for (int fim = c-1; fim>0; fim--) {
			
			int maior = 0;
			for(int i=1; i<=fim ;i++)
				if (pVetor[i]>pVetor[maior])
				maior =i;
		
			int temp=pVetor[fim];
			pVetor[fim]=pVetor[maior];
			pVetor[maior]=temp;
		}
	}
	
	
	//mostrando os dados ordenados
	printf("\n\nVetores Ordenados: \n");
	for(int i = 0; i < l; i++){ // percorre as linhas
		printf("V%d = {", i+1);
		for(int j = 0; j < c  ; j++){ // percorre as colunas
			printf(" %d,", matriz[i][j]);
		}
		printf("}\n");
	}
	
	system ("pause");
	
	return 0; // terminou com sucesso
}