/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/
/*
Faça um algoritmo que receba o nome de 80 clientes e armazene-os em um vetor.
Em um segundo vetor armazene a quantidade de DVD´s locados em 2009 por cada um dos 80 clientes. 
Sabe-se que para cada dez locações o cliente tem direito a uma locação grátis.
Faça um algoritmo que mostre o nome de todos os clientes com a quantidade de locações grátis a que ele tem direito.
*/

#include <stdio.h>
#include <stdlib.h>
#define n 2

typedef struct ficha{	
	
	char primeiroNome[20];
	int qtd_locada;
	int qtd_gratis;
	
}FICHA;

int main(){
	
	FICHA cliente[n]; /* criando vetor para armazenar os dados*/
	
	/*Declarando funções*/
	void leia(FICHA f[n] );	
	void calculeGratis(FICHA f[n]);
	void mostreTabela( FICHA f[n]);
	
	
	leia(cliente);	
	calculeGratis(cliente);
	mostreTabela(cliente);
	
	system("pause");
}

void leia(FICHA f[n]){
	
	printf("Informe os dados\n\n");
	for(  int i = 0 ; i < n  ; i++ ){
		
		printf("Primeiro nome do cliente : ");
		fflush(stdin);
		scanf("%s",&f[i].primeiroNome);
		printf("Quantidade de dvds locados: ");
		scanf("%d", &f[i].qtd_locada);		
		printf("\n");
	}
}

void calculeGratis(FICHA f[n] ){
	
	for(int i = 0 ; i < n ; i++ ){
		
		f[i].qtd_gratis = f[i].qtd_locada/10;
	}
}

void mostreTabela (FICHA f[n] ){
	
	//printf("\nNome do Cliente      |    Qtd Locada    |   Qtd locacao gratis \n"); // cabeçalho
	
	for( int i = 0 ; i < n ; i++ ){
		
		printf("Nome : %s\n" , f[n].primeiroNome);
		printf("Quantidade locada : %d\n", f[n].qtd_locada);
		printf("Quantidade gratis : %d\n\n", f[n].qtd_gratis);
		
		//printf("     %s                     %d                       %d     \n", , f[n].qtd_locada,  f[n].qtd_gratis);
		
	}
	printf("\n");
}
