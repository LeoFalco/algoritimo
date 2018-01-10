//Vetor a com 100 elementos
//descobrir s um numero é primo ou não
#include <stdio.h>
#include <stdlib.h>

#define TAM 100

// Módulo irá ler um vetor de números inteiros e qualquer tamanho
void lerVetor(int x[], int n)
{
	for( int i = 0 ; i < n; i++)
	{
		printf("\n Digite X[%d] = ", i);
		scanf("%d", &x[i]);
	}
}

void lerVetorArq(int x[], int n)
{
	FILE *entrada = fopen("entrada.txt", "r");
	for( int i = 0; i < n; i++)
	{
		fscanf( entrada, "%d", &x[i]);
	}
}

bool ehPrimo (int n) {
	int i=2;

	if(n==2){
		return true;
	}
		
	for( ; i<n; i++) {
		
		if (n%i ==0){
			return false;
		}
	}
	
	return true;
}


void mostrarVetor(int x[], int n)
{
	for(int i= 0; i < n; i++)
	{
		    
		   printf(" %d", x[i]);
	}
	printf("\n ------------------------------\n\n");
}
																		/* referencia a posicao livre*/
void multiplos( int resto, int origem[], int destino[], int tam, int &posLivre ){																	

	printf("oi3");
	for(int i = 0; i< tam ; i++){
		if( origem[i] % 3 == resto ){
			destino[posLivre]= origem[i];
			posLivre++;
		}
	}
}

int * getPrimos(int *v, int tam){
	
	int *p = (int* ) malloc(tam * sizeof(int))
}

/*
 a[0]= 1
*/
int main(){
	
	int a[100];// vetor que que ira ser lido (digitado pelo usuário)
	int primos[100];// vetor que iremos separar os numeros primos
	int x[100];// os multiplos de 3 , ordenados por resto (0,1 e 2)
	int posLivreM = 0; // posicao 'vazia' do vetor m
	int posLivreP = 0; // posicao 'vazia' do vetor primos
	
	int p=0;  //contadora do vetor de numeros primos
	
	lerVetorArq(a,100);// função para ler os dados digitados pelo  usuario em gravar no vetor 'a'
	
	
	for(int i = 0;i<100;i++){
		if(ehPrimo(a[i])){
			primos[p]=a[i];
			p++;	
		}
			
	}
	
	//multiplo,vetor analizado,
	//quantidade de elementos a ser analizado, 
	//novo vetor com os dados, 
	//resto a ser analizado

	multiplos(0, a, x, 100, posLivreM);
	printf("\n");
	multiplos(1, a, x, 100, posLivreM);
	printf("\n");
	multiplos(2, a, x, 100, posLivreM);
	
	printf("\nORIGINAL:");
	mostrarVetor(a,100);
	
	printf("NUMEROS PRIMOS:");
	mostrarVetor(primos,p);
	
	printf("MULTIPLOS:");
	mostrarVetor(x,TAM);	   
		
	system("pause");
	
}