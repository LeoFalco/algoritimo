#include <stdio.h>

int main(){
	
	int calcFatorial (int n);
	int num;
	
	do{
		printf("digite um numero inteiro e positivo : ");
		scanf("%d", &num);
		
		if(num < 0)
			printf("ERRO %d nao e inteiro e positivo", num);
	}while(num < 0);

	printf("Fatorial de %d e %d", num , calcFatorial(num));
}
int calcFatorial (int n){
	
	int resultado = 1;
	
		for( ; n > 0; n-- ){
			resultado *= n;
		}

	return resultado;
}
