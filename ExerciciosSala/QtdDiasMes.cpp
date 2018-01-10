/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

	int num;
	
	printf("Digite um numero Correspondete ao mes : ");
	scanf("%d",&num);
	
	switch(num){
		
		case 1 :	
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("\nMes %d tem 31 Dias\n", num);
		break;
		
		case 4 :
		case 6 :
		case 9 :
		case 11 :	
			printf("\nMes %d tem 30 Dias\n", num);
		break;
		
		
		case 2 :
			printf("\nMes %d tem 28 Dias\n", num);
		break;
		
		default :
			printf("\n%d Nao corresponde a um Mes!", num);
	}
}

