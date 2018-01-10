#include <stdio.h>
#include <stdlib.h>
#define t 10

// M�dulo para ler vetor de qualquer tamanho
void lerVetor(int a[])
{
	int i;
	for (i = 0; i < t; i++)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &a[i]);
	}
}

int * lerVetorArq()
{
	int *v = (int *) malloc(t * sizeof(int));
	
	FILE *arq = fopen("entrada.txt","r");
	
	printf("oi3\n");
	for (int i = 0; i < t; i++)
	{
		printf("oi4\n");
		fscanf(arq,"%d", &v[i]);
	}
	
	return v;
}


// M�dulo para mostrar vetor de qualquer tamanho
void mostrarVetor(int a[], int &pos)
{
	int i;
	for (i = 0; i < pos; i++)
	{
		printf("   %d", a[i]);
	}
}

//fc para checar se um numero eh primo
bool isPrimo(int n){
	
	if(n == 1)
		return false;
		
	int teste = 2;
	
	while( teste <= n/2){
		if(n% teste ==0 ){
			return false;
		}
		teste++;
	}
	
	return true;
}

// M�dulo para verificar quais n�meros do vetor "a" s�o primos
void numerosPrimos (int a[], int p[], int &posP)
{
	int i, n;
	posP = 0;
	
	
	for (i = 0; i < t; i++)
	{

		if(isPrimo(a[i])){
			p[posP] = a[i];
			
			posP++;		
		}
	}
}

// M�dulo para achar os m�ltiplos de 3
void multiploTres (int a[], int x[], int &posX)
{
	int i;
	posX = 0;
	for (i = 0; i < t; i++)
	{
		if (a[i] % 3 == 0)
		{
			x[posX] = a[i];
			posX++;
		}
	}
	for (i = 0; i < t; i++)
	{
		if (a[i] % 3 == 1)
		{
			x[posX] = a[i];
			posX++;
		}
	}
	for (i = 0; i < t; i++)
	{
		if (a[i] % 3 == 2)
		{
			x[posX] = a[i];
			posX++;
		}
	}
}


main()
{
	int *a, p[t], x[t];
	int posX;
	int posP;
	int posA = t;

	//lerVetor(a);
	printf("oi2\n");
	a = lerVetorArq();
	printf("oi1\n");
	printf("\nA = ");
	mostrarVetor(a, posA); 
	
	numerosPrimos(a, p, posP);
	printf("\nPrimos = ");
	mostrarVetor(p, posP);
	
	printf("\nA = ");	
	mostrarVetor(a, posA);
	
	printf("\nX = ");	
	multiploTres(a, x, posX);
	mostrarVetor(x, posX);
}
