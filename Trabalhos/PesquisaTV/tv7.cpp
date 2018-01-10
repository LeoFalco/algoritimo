/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 1000

#define _c4 0
#define _c5 1
#define _c7 2
#define _c12 3

typedef struct casa{
	int num;
	int canal;
	int teleEspec;
}CASA;

typedef struct canal{
	int numero;
	int espec;
	float pctg_publico;
}CANAL;

int main(){

	CASA casa[n] = {{0}};
	CANAL canal[4]= {{0}};
	
	/*decharando fçs*/
	void leiaDados(CASA casa[]);
	void mostreDados(CASA casa[]);   /*sem criatividade para dar nomes diferentes aas variaves*/
	void casaMaisPovoada(CASA casa[], int *povoada_num, int *povoada_canal, int *povoada_espec);
	void canalMaisPopular(CASA casa[], CANAL canal[], int *popular_num, int *popular_espec);
	void totalEspectadores(CASA casa[], int *total_espec);
	void pctgAudiencia(CANAL canal[], int publico_total);
	
	/*declarando variaveis*/
	int total_espec = 0;   /* necesario inicialiar como zero*/
	int povoada_espec = 0; /* necesario inicialiar como zero*/
	int povoada_num ;
	int povoada_canal;
	int popular_espec = 0; /* necesario inicialiar como zero*/
	int popular_num ;
	
	canal[_c4].numero = 4; /*atribuindo devidos numeros aos canais*/
	canal[_c5].numero = 5;
	canal[_c7].numero = 7;
	canal[_c12].numero = 12;
	
	leiaDados(casa); /*lendo dados do usuario */
	system("cls"); // limpa tela
	mostreDados(casa); /*mostrnado dados coletados */
	casaMaisPovoada(casa, &povoada_num, &povoada_canal, &povoada_espec); /*encontra a casa mais povoada */
	totalEspectadores(casa, &total_espec); /*encontra o toral de espectadores*/
	canalMaisPopular(casa, canal, &popular_num, &popular_espec); /* encontra o canal maispopular */
	pctgAudiencia(canal, total_espec);	/*econtra pctg de audiencia*/

	/*montando tabelas para mostras a saida de dados */
	printf("\n| Casa mais povoada               |\n");
	printf(  "| Num Casa | Canal | Espectadores |\n");
	printf(  "    %d          %d         %d\n"  , povoada_num, povoada_canal, povoada_espec);
	
	printf("\n| Publico dos canais |\n");
	printf(  "| Canal | %% Publico  |\n");
	for( int i = 0 ; i < 4  ; i++){
		printf("  %5d   %10.2f\n",canal[i].numero, canal[i].pctg_publico);
	}
	
	printf("\n| Canal mais pupular   |\n");
	printf(  "| Canal | Espectadores |\n");
	printf("%5.d %10.d\n", popular_num, popular_espec);
	
	printf("\nTotal de Espectadores: %d\n", total_espec);	
	getch();
}
void leiaDados(CASA casa[]){
	
	bool leiaSN(); /*declarando leiaSN()*/
	
	bool stayInLoop = true; //tb usado como controle do for
	int casa_num = 1; /*guarda o num da casa*/
	int i = 0;
	
	do{
	//for( int i = 0 ; i < n && stayInLoop  ; i++){
		printf("A televisao de sua casa esta ligada (s/n) : ");
		if (leiaSN()){
			printf("\nEm que canal sua tv esta sintonizada ? ( 4, 5, 7, 12 ) : ");
			scanf("%d", &casa[i].canal); // le o canal e guarda na estrutura
			if(casa[i].canal == 0){ // caso canal == 0 pare o ciclo imediatamente
				stayInLoop = false;
			}
			if(stayInLoop){ 
				printf("Quantas pessoas estao assistindo ? : ");
				scanf("%d", &casa[i].teleEspec); /* le a quantidade de telespec e guarda na estrutura*/
				casa[i].num = casa_num; /*atribuindo o numero a casa */
			}
			printf("\n\n"); /*frescura */
		}else{
			i--; /* para sobrescrever os dados caso a tv esteja deligada */
			printf("\n\n"); /*frescura */
		}
		++casa_num; /* marca q na proxima vez estaremos em outra casa */
		++i;
	}while( casa_num <= n && stayInLoop );
}
void mostreDados(CASA casa[]){
	
	printf("| Dados Coletados                 |\n");
	printf("| Num Casa | Canal | Espectadores |\n");
	for(int i = 0 ; i < n ; i++){	/* percorre todo o vetor e mostra os dados na tela*/
		if(casa[i].num != 0){ /*quando num == 0 significa q esta parte do vetor esta vazia*/
			printf("     %d        %d           %d\n", casa[i].num, casa[i].canal, casa[i].teleEspec);
		}
	}
}
void totalEspectadores(CASA casa[], int *total_espec){
	
	for( int i = 0 ; i < n ; i++){ /* percorrendo o vetor */
		*total_espec += casa[i].teleEspec; /* somando todos os teleEspec na variavel total_espec */
	}
}                                 /*       Cuidado ponteiros huehue                        */
void casaMaisPovoada(CASA casa[], int *povoada_num, int *povoada_canal, int *povoada_espec){
	
	for( int i = 0 ; i < n  ; i++){ /*percorrendo vetor */
		if( casa[i].teleEspec > *povoada_espec){ /* se teleEspec > povoada_espec entao     */
			*povoada_espec = casa[i].teleEspec;  /* atualize os dados da casa mais povoada */
			*povoada_num = casa[i].num;
			*povoada_canal = casa[i].canal;
		}
	}
}
void canalMaisPopular(CASA casa[], CANAL canal[], int *popular_num, int *popular_espec){
	
	for( int i = 0 ; i < n  ; i++){ /*percorrendo vetor casa */
		switch(casa[i].canal){  /*distribui os telEspec para os canais */
			case 4:
				canal[0].espec += casa[i].teleEspec ;
			break;
			case 5:
				canal[1].espec += casa[i].teleEspec ;
			break;
			case 7:
				canal[2].espec += casa[i].teleEspec ;
			break;
			case 12:
				canal[3].espec += casa[i].teleEspec ;
		}
	}
	
	for( int i = 0 ; i < 4  ; i++){ /* percorrendo vetor de canais*/
		if(canal[i].espec > *popular_espec){ /*se canal[i].espec > popular_espec entao  */
			*popular_espec = canal[i].espec; /* atualize os dados do canal mais popular */
			*popular_num = canal[i].numero;
		}
	}
}
void pctgAudiencia(CANAL canal[], int publico_total){
	
	for( int i = 0 ; i < 4  ; i++){ /*percorre o vetor de canais */
		/*formula da porcentagem*/
		canal[i].pctg_publico = (float)(canal[i].espec / (float)publico_total)*100;
	}
}
bool leiaSN(){ /* ideal para ser usada dentro de um  if*/
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
	}while(var); // repete enquanto tecla = true
	return 0 ;
}