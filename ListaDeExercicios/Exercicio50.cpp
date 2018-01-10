#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 150

struct Espec{
	int idade;
	int nota;
};

struct Espec espec[n]; /*Vetor espec de estruturas do tipo Espec com n menbros */

int main (){
	
	for( int i = 0; i < 150; i++){ /* percorre vetor espec*/
		
		printf("Digite sua idade: ");
		scanf("%d", &espec[i].idade);
		
		if(espec[i].idade == 0 ){
			break;
		}

		
		printf("\n1 - regular\n");
		printf("2 - bom\n");
		printf("3 - otimo\n");
		printf("Digite sua nota : ");
		scanf("%d", &espec[i].nota);
		printf("\n");
		
	}
	
	/* a média das idades de acordo com a nota*/
	int somaIdade1 = 0;
	int somaIdade2 = 0;
	int somaIdade3 = 0; /* soma das idade das pessoas que respondetam otimo*/
	int cont1 = 0;
	int cont2 = 0;
	int cont3 = 0; /*quantidade de pessoas que responderam otimo*/
	
	for( int i = 0; i < 150; i++){
		
		switch(espec[i].nota){
			
			case 1:
				cont1++;
				somaIdade1 += espec[i].idade;
				break;
			
			case 2:
				cont2++;
				somaIdade2 += espec[i].idade;
				break;
			case 3:
				cont3++;
				somaIdade3 += espec[i].idade;
		}
	}
	
	int totalPessoas = cont1 + cont2 + cont3;
	
	system("cls"); /*Limpa tela*/
	printf(" Nota    | Med. Idade | Qtd. Pessoas | %% Pessoas\n");
	printf(" Regular   %2.2f           %d           %f\n",  (float)somaIdade1/ cont1,  
															cont1,
															(float)cont1 * 100/ totalPessoas);
	printf(" Bom       %2.2f           %d           %f\n",  (float)somaIdade2/ cont2,
	  	  	  	  	  	  	  	  	  	  	  	  	  	    cont2, 
	  	  	  	  	  	  	  	  	  	  	  	  	  	    (float)cont2 * 100/ totalPessoas);
	printf(" Otimo     %2.2f           %d           %f\n",  (float)somaIdade3/ cont3,  
															cont3,
															(float)cont3 * 100/ totalPessoas);
}
