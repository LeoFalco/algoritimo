/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#define n 1 // n e o tamanho dos vetores

int main(){
	
	/*Decharando variaveis*/
	char primeiroNome[n][20];
	int qtd_locada[n];
	int qtd_gratis[n];

	/*Declarando funções*/
	void leia( char Nome[][20], int qtd_l[]);	
	void calculeGratis( int qtd_l[], int qtd_g[] );
	void mostreTabela( char Nome[][20], int qtd_l[], int qtd_g[] );
	
	/*fase de calculos*/
	leia( primeiroNome, qtd_locada);	
	calculeGratis( qtd_locada, qtd_gratis);
	
	/*mostrando resultados*/
	mostreTabela( primeiroNome, qtd_locada, qtd_gratis);
	
	system("pause");
}

void leia( char Nome[][20], int qtd_l[]){
	
	printf("Informe os dados\n");
	for(  int i = 0 ; i < n  ; i++ ){
		
		printf("Primeiro nome do cliente : ");
		fflush(stdin);
		scanf("%s", &Nome[i]);	
		printf("Quantidade de dvds locados: ");
		scanf("%d", &qtd_l[i]);	
		printf("\n");	
	}
}

void calculeGratis( int qtd_l[], int qtd_g[] ){
	
	for(int i = 0 ; i < n ; i++ ){
		
		qtd_g[i] = qtd_l[i]/10;
	}
}

void mostreTabela( char Nome[][20], int qtd_l[], int qtd_g[] ){

	printf("\nNome do Cliente  |  Qtd Locada  |  Qtd gratis \n"); // cabeçalho
	
	for( int i = 0 ; i < n ; i++ ){  /*prenchendo tabela*/
		printf("%15s  %10.d  %10.d  \n", Nome[i], qtd_l[i],  qtd_g[i]); 
	}
	printf("\n");
}
