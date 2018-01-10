//Vetor a com 100 elementos
//descobrir s um numero � primo ou n�o
#include <stdio.h>
#include <stdlib.h>

#define TAM 5


// M�dulo ir� ler um vetor de n�meros inteiros e qualquer tamanho
void lerVetor(int x[], int n)
{
	int i=0;
	for( i; i < n; i++)
	{
		printf("\n Digite X[%d] = ", i);
		scanf("%d", &x[i]);
	}
}

int ehPrimo (int n) {
	int i=2;
	for(i; i<n; i++) {
		if(n==2)
			return 1;
		if (n%i!=0)
			continue;
		else
		return 0;
	}
	return 1;
}
void mostrarVetor(int x[], int n)
{
	int i = 0;
	for(i; i < n; i++)
	{

		   printf(" %d", x[i]);
	}
	printf("\n ------------------------------\n\n");
}

int multiplos(int m, int vetor[], int n,int novoVetor[], int resto, int c ){

	int i=0;
	for(i;i<n;i++){
		if((vetor[i] % m )==resto){
			novoVetor[c]=vetor[i];
			c++;
		}
	}
	return c;
}

/*
 a[0]= 1

*/
main(){

	int a[100];// vetor que que ira ser lido (digitado pelo usuario)
	int primos[100];// vetor que iremos separar os numeros primos
	int x[100];// os multiplos de 3 , ordenados por resto (0,1 e 2)
	int i=0;
	int elemZero,elemUm,elemDois;

	int p=0;  //contadora do vetor de numeros primos

	lerVetor(a,TAM);// fun��o para ler os dados digitados pelo  usuario em gravar no vetor 'a'

	for(i;i<100;i++){

		if(ehPrimo(a[i])){
			primos[p]=a[i];
			p++;
		}

	}

	//multiplo,vetor analizado,
	//quantidade de elementos a ser analizado,
	//novo vetor com os dados,
	//resto a ser analizado

	elemZero = multiplos(3, a, 100,x, 0,0);
	elemUm = multiplos(3, a, 100,x, 1,elemZero);
	elemDois = multiplos(3, a, 100,x, 2,elemUm);

	printf("\nORIGINAL:");
	mostrarVetor(a,TAM);

	printf("NUMEROS PRIMOS:");
	mostrarVetor(primos,p);

	printf("MULTIPLOS:");
	mostrarVetor(x,elemDois);

	system("pause");

}
