// martix hexadecimais

/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("color 0a");
	
	/* errado  for( int i = rand()%16;  ; ){  */ 
	for( int i ; ; ){  // certo 
	
		i = rand()%16; // certo
		
		switch(i){
			
			case 0:
				printf(" %d", 0);
				break;
			case 10:
				printf(" A");
				break;
			case 11:
				printf(" B");
				break;
			case 12:
				printf(" C");
				break;
			case 13:
				printf(" D");
				break;
			case 14:
				printf(" E");
				break;
			case 15:
				printf(" F");
				break;
			default :
				printf("%2.d", i);
				break;			
		}
	}
}

