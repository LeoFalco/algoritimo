/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#define n 3 // n e o tamanho dos vetores

struct Cliente
{
	char nome[40];
	int qtdLocada;
	int qtdGratis;
};

struct Cliente gCliente[n] = {{{0}}};

int main(){
	
	/*Decharando variaveis*/

	/*Declarando funções*/
	void leiaDados();	
	void calculeGratis();
	void mostreTabela();
	
	/*fase de calculos*/
	leiaDados();	
	calculeGratis();
	
	/*mostrando resultados*/
	mostreTabela();
	
	system("pause");
}

void leiaDados(){
	
	printf("Informe os dados\n");
	for(  int i = 0 ; i < n  ; i++ ){
		
		printf("Nome do cliente : ");
		fflush(stdin);
		gets(gCliente[i].nome);	/*obtendo uma strig do usuario*/
		printf("Quantidade de dvds locados: ");
		scanf("%d", &gCliente[i].qtdLocada);	
		printf("\n");	
	}
}

void calculeGratis(){
	
	for(int i = 0 ; i < n ; i++ ){
		
		gCliente[i].qtdGratis = gCliente[i].qtdLocada/10;
	}
}

void mostreTabela(){

	printf("\nNome do Cliente  |  Qtd Locada  |  Qtd gratis \n"); // cabeçalho
	
	for( int i = 0 ; i < n ; i++ ){  /*prenchendo tabela*/
		printf("%15s  %10.d  %10.d  \n", gCliente[i].nome, gCliente[i].qtdLocada,  gCliente[i].qtdLocada); 
	}
	printf("\n");
}