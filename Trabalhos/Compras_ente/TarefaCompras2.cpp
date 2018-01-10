/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 3

/* criando o tipo COMPRA */
typedef struct compra{
	float valor;
	char forma_pgto; // forma de pagamento
	float valor_parcela; // só é preenchido nas compras a prazo
}COMPRA; 

int main(){
	
	/* declarando funcoes */
	float somaValor (COMPRA c[], char tipo_compra); /* soma o valor do tipo espesificado */ 
													/* tipo pode ser 'v' ou 'p'          */
	
	/* recebem como argumento vetor do tipo comra de qualquer tamanho*/
	float somaValorTudo(COMPRA c[]); /* Auto explicativas */ 
	float maisCara(COMPRA c[]); 
	void leia(COMPRA c[]); 
	void mostre(COMPRA c[]); 		 
	/*fim da declaracao */	

	COMPRA vetor[n]; // cria vetor do tipo compra de tamanho n
	
	leia(vetor); /* lendo vetor do usuario*/
	system("pause"); 
	system("cls"); /* limpa tela */
	mostre(vetor); /* mostrando dados */
	
	/*mostrando dados importantes*/
	printf("\nValor da compra mais cara: %.2f",        maisCara ( vetor ));
	printf("\nValor total das compras a vista : %.2f", somaValor ( vetor , 'v'));
	printf("\nValor total das compras a prazo : %.2f", somaValor ( vetor , 'p'));
	printf("\nValor total das compras :  %.2f\n\n",    somaValorTudo ( vetor ));
	
	system("pause");
}

void leia(COMPRA c[]){
	
	/*declarando funcao*/
	char leia_vp(); // le v para a vista ou p para a prazo
	
	for(int i = 0  ; i < n ;  i++ ){
		printf("Digite o valor da compra: ");
		scanf("%f", &c[i].valor);
		
		printf("Digite a forma de pagamento ( 'v' vista / 'p' prazo ): ");
		c[i].forma_pgto = leia_vp();
		printf("\n\n");
		
		if(c[i].forma_pgto == 'p'){
			c[i].valor_parcela = c[i].valor/3.00;
		}
	}
}

char leia_vp(){ // fc /*magica*/ de leitura de teclas

	char tecla; // variavel tecla do tipor char
	do{
		tecla = getch(); // le um caractere e guarda na variavel tecla e mostra na tela
		switch(tecla){
			
			case 'v': case 'V':
				printf("v"); 
				return 'v';
			
			case 'p': case 'P':
				printf("p");
				return 'p';

			default: /* senão le a tecla novamente */
				tecla = 1; // muda a variavel telca para 1
		}
	}while (tecla); // repete enquanto tecla == 1 == true
	return 0;
}

void mostre(COMPRA c[]){ /*mostra todo o nosso vetor*/
	
		printf("   num   |   valor    | forma pgt | parcela\n");
	for (int i = 0 ; i < n; i ++ ){	
		
		printf("   %3d   |    %3.2f   |      %c    |"     , i, c[i].valor, c[i].forma_pgto);
		if(c[i].forma_pgto == 'p'){ // se valor da parcela diferente de zero
			printf("  %3.2f\n", c[i].valor_parcela );
		}else{
			printf("\n");
		}
	}
}

float somaValor(COMPRA c[], char tipo_compra){ /* retorna  a soma dos valores do tipo 
												*de compra passado como parametro */
	float soma = 0;
	for( int i = 0 ; i < n; i ++ ){
		if(c[i].forma_pgto == tipo_compra ){ 
			soma += c[i].valor;
		}
	}
	return soma;
}

float somaValorTudo(COMPRA c[]){  /*retorna a soma dos valores de todas as compras*/
	
	float soma = 0;
	for( int i = 0 ; i < n; i ++ ){
			soma += c[i].valor;
	}
	return soma;
}

float maisCara(COMPRA c[]){ // retorna a compra mais cara

	float caro = 0;
	for( int i = 0  ; i < n ; i ++ ){
		
		if( c[i].valor > caro){
			caro = c[i].valor;
		}
	}
	return caro;
}
