# include <stdio.h>
#include <conio.h>

int main(){
	
	char s[10];
	const int DESPESAS = 5600;
	
	int qtdIngresso = 350;
	float precoIngresso = 48;
	float lucro;

	
	int qtdIngressoMax;
	float precoIngressoMax;
	float lucroMax = 0;
	
		printf("quatidade           preco            lucro\n");
	do{
		
		lucro = qtdIngresso * precoIngresso - DESPESAS;
		
		printf("%d                 %.2f           %.2f\n", qtdIngresso, precoIngresso, lucro); 
		
		

		
		if( lucro > lucroMax){
			
			lucroMax = lucro;
			qtdIngressoMax = qtdIngresso;
			precoIngressoMax = precoIngresso;
		}
	    
		qtdIngresso += 17;
		precoIngresso -= 2;
		
		
				
	}while( precoIngresso >= 22);
	
	printf("\n\nLucro Maximo: %.2f", lucroMax);
	printf("\nIngressos vendidos: %d", qtdIngressoMax);
	printf("\nPreco do ingresso: %.2f\n", precoIngressoMax);
	
	
	
	//c = getch();
	
	s = 'p','a','o';
	
	printf("caractere digitado: %s\n\n", s);
	
	return 0;
}