/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 1000 /*no maximo mildados coletados*/

/*construindo estruturas usadas*/
struct Casa{
	int num;
	int canal;
	int teleEspec;
};

struct Canal{
	int numero;
	int espec;
	float pctg_publico;
};

/*variaveis gloabais*/
struct Casa gCasa[n]= {{0}}; /*vetor do tipo casa de tamnho n totalmente vazio */
struct Canal gCanal[4] = {{0}}; /*vetor do tipo canal de tamanho 4 totalmente vazio */

int main(){
	
	/*decharando fçs*/
	void leiaDados(); /* fc para entrada dos dados do usuario */
	
	/*fçs de saida de dados*/
	void mostreDadosColetados();
	void mostreAudCanais();
	void mostreCasaMaisPovoada(int pos);
	void mostreCanalMaisPopular(int pos);
	void mostreTotalEspectadores(int total);
	
	/*fçs para processamento*/
	int encontreCasaMaisPovoada();
	int encontreCanalMaisPopular();
	int totalEspectadores();
	void pctgAudiencia(int publico_total); /*preenche a pctg_aud do vetor de estruturas de tipo canal*/
	
	/*declarando variaveis*/
	int totalEspec;	
	int posCasaPovoada;
	int posCanalPopular;
	
	leiaDados(); /*lendo dados do usuario */
	
	/*fase de processamento*/
	gCanal[0].numero = 4; /*atribuindo devidos numeros aos canais*/
	gCanal[1].numero = 5;
	gCanal[2].numero = 7;
	gCanal[3].numero = 12;
	
	posCasaPovoada = encontreCasaMaisPovoada(); /*encontra a casa mais povoada */
	posCanalPopular = encontreCanalMaisPopular(); /* encontra o canal maispopular */
	totalEspec = totalEspectadores(); /*encontra o toral de espectadores*/
	pctgAudiencia(totalEspec);	/*econtra pctg de audiencia*/
	
	/* saida de dados */
	system("cls"); // limpa tela
	mostreDadosColetados(); /*mostrnado dados coletados */
	mostreCasaMaisPovoada(posCasaPovoada);
	mostreAudCanais();
	mostreCanalMaisPopular(posCanalPopular);
	mostreTotalEspectadores(totalEspec);

	getch();
}
void leiaDados(){
	
	/*declarando fçs*/
	bool leiaSN(); 
	bool validaCanal(int canal); 

	int casa_num = 1; /*guarda o num da casa*/
	bool stayInLoop = true; //tb usado como controle do laco do-while
	int i = 0; /* i tambem esta ligado ao numero da casa */
	
	do{
		printf("A televisao de sua casa esta ligada (s/n) : ");
		if (leiaSN()){
			do{	
				printf("\nEm que canal sua tv esta sintonizada ? ( 4, 5, 7, 12 ) : ");
				scanf("%d", &gCasa[i].canal); // le o canal e guarda na estrutura
				if(gCasa[i].canal == 0){ // caso canal == 0 pare o ciclo imediatamente
					stayInLoop = false;
				}
			}while(validaCanal(gCasa[i].canal) == false );
				
			if(stayInLoop){ 
				printf("Quantas pessoas estao assistindo ? : ");
				scanf("%d", &gCasa[i].teleEspec); /* le a quantidade de telespec e guarda na estrutura*/
				gCasa[i].num = i; /*atribuindo o numero a gCasa */
			}
		}else{
			i--; /* para sobrescrever os dados caso a tv esteja deligada */
			printf("\n\n"); /*frescura */
		}
		++casa_num; /* marca q na proxima vez estaremos em outra casa */
		++i;
		
		printf("\n\n"); /*frescura */
	}while( i <= n && stayInLoop );/* de 1 ate 1000 enquanto stayInLoop estiver verdadeiro */
}

void mostreDadosColetados(){
	
	printf("| Dados Coletados                 |\n");/*so um cabecalho bonito para a tabela*/
	printf("| Num Casa | Canal | Espectadores |\n");
	for(int i = 0 ; i < n ; i++){	/* percorre todo o vetor e mostra os dados na tela*/
		if(gCasa[i].num != 0){ /*quando num == 0 significa q esta parte do vetor esta vazia*/
			printf("     %d        %d           %d\n", gCasa[i].num, gCasa[i].canal, gCasa[i].teleEspec);
		}
	}
}

void mostreCasaMaisPovoada(int posPovoada){
	
	/*montando tabelas para mostras a saida de dados */
	printf("\n| Casa mais povoada               |\n");
	printf(  "| Num Casa | Canal | Espectadores |\n");
	printf(  "    %d          %d         %d\n"  ,   gCasa[posPovoada].num, 
													gCasa[posPovoada].canal, 
													gCasa[posPovoada].teleEspec);
}

void mostreAudCanais(){
	
	printf("\n| Publico dos canais |\n");
	printf(  "| Canal | %% Publico  |\n");
	for( int i = 0 ; i < 4  ; i++){
		printf("  %5d   %10.2f\n",gCanal[i].numero, gCanal[i].pctg_publico);
	}
}

void mostreCanalMaisPopular(int posPopular){
	
	printf("\n| Canal mais pupular   |\n");
	printf(  "| Canal | Espectadores |\n");
	printf("%5.d %10.d\n", gCanal[posPopular].numero, gCanal[posPopular].espec);
}

void mostreTotalEspectadores(int total){
	
	printf("\nTotal de Espectadores: %d\n", total);
}

int totalEspectadores(){
	
	int total = 0;
	for( int i = 0 ; i < n ; i++){ /* percorrendo o vetor */
		total += gCasa[i].teleEspec; /* somando todos os teleEspec na variavel total */
	}
	return total;
}
int encontreCasaMaisPovoada(){
	
	int posicao = 0;
	for( int i = 0 ; i < n  ; i++){ /*percorrendo vetor */
		if( gCasa[i].teleEspec > gCasa[posicao].teleEspec){ /* se teleEspec > maisPovoada.teleEspec entao     */
			posicao = i;  /* atualize a posição da casa mais povoada */
		}
	}
	return posicao;
}
int encontreCanalMaisPopular(){
	
	int posicao;
	
	for( int i = 0 ; i < n  ; i++){ /*percorrendo vetor casa */
		switch(gCasa[i].canal){  /*distribui os telEspec para os canais */
			case 4:
				gCanal[0].espec += gCasa[i].teleEspec ;
			break;
			case 5:
				gCanal[1].espec += gCasa[i].teleEspec ;
			break;
			case 7:
				gCanal[2].espec += gCasa[i].teleEspec ;
			break;
			case 12:
				gCanal[3].espec += gCasa[i].teleEspec ;
		}
	}
	
	for( int i = 0 ; i < 4  ; i++){ /* percorrendo vetor de canais*/
		if(gCanal[i].espec > gCanal[posicao].espec){ /*se gCanal[i].espec > popular_espec entao  */
			posicao = i; /* atualize a posicao do canal mais popular */
		}
	}
	return posicao;
}
void pctgAudiencia(int publico_total){
	
	for( int i = 0 ; i < 4  ; i++){ /*percorre o vetor de canais */
		/*formula da porcentagem*/
		gCanal[i].pctg_publico = (float)(gCanal[i].espec / (float)publico_total)*100;
	}
}

/* ideal para ser usada dentro de um  if*/
bool leiaSN(){ /*retorna true caso usuario digite s caso digite n retorna falso*/
	char var; 
	do{
		var = getch();  // le um caractere e guarda na variavel canal
		switch(var){
			
			case 's': case 'S':
				printf("Sim");
				return true;  
			
			case 'n': case 'N':
				printf("Nao");
				return false; 
			
			default: var = 1;
		}
	}while(var); // repete enquanto var = true = 1
	return 0 ;
}

bool validaCanal(int canal){ /*retorna true caso canal seja 0 ou 4 ou 5 ou 7 ou 12 */
	
	if(canal == 0 || canal == 4 || canal == 5 || canal== 7 || canal== 12){ 
		return true;
	}else{
		printf("\nCanal Invalido!");
		return false;
	}
}