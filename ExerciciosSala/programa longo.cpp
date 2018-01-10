#include <stdio.h>
#include <conio.h>

int lerInt(){
	
	int numInteiro;
	printf("\nDigite um Numero Inteiro: ");
	scanf("%d", &numInteiro );
	return numInteiro;
}

float calcularSomatório( int n){
	
	float somatorio = 0.0;
	for ( int i = 0 ; i <= n  ; i ++){
		//somatorio += ( i + 1 )/ ( i*i );
		somatorio += ( ++i )/ ( i*i );
	}
	return somatorio;
}

void tabuadaDoN( int n){ // imprime uma tabuada na tela
	
	for( int i = 0 ; i <= 10 ; i++ ){
		tabuada = n * i  ;
		printf( "\n%d * %d = %d" , n, i, tabuada);
	}
	
}
void tabuadaDo1ao10(){ // imprime 10 tabuadas na tela
	
	for( int i = 1 ; i <= 10 ; i++ ){
		
		printf( "\n\ntabuada do %d" ,i);
		tabuadaDoN(i);
	}
}
int somarXY(int x, int y){
	
	return(x+y);
}

int main(){
	
	char opcao;
	
	do{
		printf( "\nMENU");
		printf( "\n 1 - Somar Dois Inteiros");
		printf( "\n 2 - Calcular Tabuada");
		printf( "\n 3 - Tabuada do 1 ao 10");
		printf( "\n 4 - Calcular Somatorio");
		printf( "\n 5 - Sair");
		printf( "\n Escolha uma opcao: ");
		opcao = getche();
		
		switch(){
			
			case '1':
				
			case '2':
					
			case '3':
						
			case '4':
				
			case '5':
								
			default: 
			
			
		}
		
		
		
		
		
	}while();
	
 	
}
