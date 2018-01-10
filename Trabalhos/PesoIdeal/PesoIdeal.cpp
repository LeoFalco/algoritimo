/* Peso_Ideal */

#include <stdio.h>
#include <conio.h>


/**
 * le um float com o scanf e retorna o valor
 */
float leiaFloat(){
	
	float numReal;
	scanf("%f",&numReal);
	return numReal;
}

char leiaMF(){
	
	int caractere;
	do{
		caractere = getch();
		switch(caractere){
			case 'M':
			case 'm':
				printf("m");
				return 'm';
			case 'F':
			case'f':
				printf("f");
				return 'f';
			default: caractere = 1;			
		}
	}while(caractere);
}

void leiaDados(float *peso, float *altura, char *sexo){
	
	printf("Digite seu Peso : ");
	*peso = leiaFloat();
	printf("Digite sua Altura : ");
	*altura = leiaFloat();
	printf("Digite seu Sexo (M/F) : ");
	*sexo = leiaMF();
}

float calculePesoIdeal(float peso, float altura, char sexo){
	
	/* formulas da OMS
	Homem: (72.2 * altura) - 58
	Mulher: (62.1 * altura) - 44.7
	*/
	
	if(sexo == 'm'){ //se sexo e masculino
		return 72.2 * altura - 58;
	}else{ // se sexo eh feminino
		return 62.1 * altura - 44.7;
	}
}

void imprimaMensagem(float peso, float ideal){
	
	printf("\n\nSeu peso: %.2f", peso);
	printf("\nSeu peso ideal: %.2f", ideal);
	
	if(peso > ideal){
		printf("\n\nVoce esta %.2fKg acima do peso ideal", peso-ideal);
	}else if(peso < ideal){
		printf("\n\nVoce esta %.2fKg abaixo do peso ideal", ideal-peso);
	}else{
		printf("\n\nVoce esta no peso ideal");
	}
}

int main(){
	
	float peso, altura, pesoIdeal;
	char sexo;
	
	leiaDados(&peso, &altura, &sexo); /*argumentos passados por referencia */
	
	pesoIdeal = calculePesoIdeal(peso, altura, sexo);
	
	imprimaMensagem(peso, pesoIdeal);
	
	getch();
}