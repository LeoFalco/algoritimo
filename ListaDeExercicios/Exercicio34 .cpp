/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/
/* terminado */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //to setlocale() works

#define crianca 0 /* de 0 a 15 anos*/
#define jovem 1 /* de 16 a 30 anos*/
#define adulto 2 /* de 31 a 45 anos*/
#define meiaIdade 3 /* de 46 a 60 anos*/
#define idoso 4 /* maior de 60 anos */

int main(){
	
	setlocale(LC_ALL,"Portuguese"); // change console linguage to portuguese it do acentuation works

	int qtPessoa;
	float faixa[5] = {0}; /* inicia as faixas hetárias zeradas*/
	float idades[qtPessoa] = {0}; /*vetor que armazenara as idades*/ 
	float pfaixa[5] = {0}; /* vetor que armazena a quantidade de pessoas en determinada faixa*/
	
	printf("Digite o numero de pessoas que as idades serão analisadas : ");
	scanf("%d", &qtPessoa);
	printf("Digite a idade de %d pessoas (separadas por enter): \n", qtPessoa);
	
	for( int i = 0; i < qtPessoa ; i++ ){ /* enquanto houver idades a ser analisadas*/
		scanf("%f", &idades[i]); /* le a idade */
		
		/* distribui um contador em uma das  fixas */
		if (idades[i] > 61){	  	/* Acima de 61 anos */
			faixa[idoso] ++ ; // um ao contador da faixa 4
		}else if( idades[i] > 45 ){	/* De 46 a 60 anos  */
			faixa[meiaIdade]++ ; // um ao contador da faixa 3
		}else if( idades[i] > 30){	/* De 31 a 45 anos  */
			faixa[adulto]++ ;
		}else if( idades[i] > 15){	/* De 16 a 30 anos  */
			faixa[jovem]++ ;
		}else{					 	/* até 15 anos      */
			faixa[crianca]++ ; 
		}
	}// fim for
	printf("\n\n");
	for( int i = 0 ; i <  5  ; i++ ){ /*Montra os resultados armazenados  nos contadores*/
		printf("Faixa %d : %3.2f %%\n", i+1 , ( faixa[i] / qtPessoa)*100 );/* convertendo para porcentagem */
	}
}


