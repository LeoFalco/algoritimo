#include <stdio.h>

int main(){
	
	float valores[6] = {0};
	
	int positivo = 0;
	
	float media = 0;
	
	for(int i = 0; i < 6; i++){
		
		scanf("%f", & valores[i]);
		
		if( valores[i] > 0){
			positivo++;
			media += valores[i];
		}
	}
	
	media /= (float)positivo;
	
	printf("%d valores positivos\n", positivo );
	printf("%.1f\n", media);
	
	return 0;
}