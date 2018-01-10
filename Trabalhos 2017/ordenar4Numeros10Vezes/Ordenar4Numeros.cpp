#include <stdio.h>
#define n 24 // n sera substituido por 24
int main(){
	int a,b,c,d;
	for(int i =0 ; i < n; i++ ){ // repete n vezes
		// lendo 4  Inteiros

		scanf("%d %d %d %d", &a , &b, &c, &d);
  		printf("%d %d %d %d", a , b, c, d);
  		printf(" >> ");
		  	
		if(a<=b && a<=c && a<=d){
			printf("%d ",a);
			
			if(b<=c && b<=d){
				printf("%d ",b);
				
				if(c<=d){
					printf("%d %d  X1\n", c, d);
				}else{
					printf("%d %d  X2\n", d, c);
				}
			}else if(c<=d){
				printf("%d ",c);
				
				if(b<=d){
					printf("%d %d  X3\n", b, d);
				}else{
					printf("%d %d  X4\n", d, b);
				}
			}else{
				printf("%d ", d);
				
				if(b<=c){
					printf("%d %d  X5\n", b, c);
				}else{
					printf("%d %d  X6\n", c, b);
				}
			}
		}else if(b<=c && b<=d){
			printf("%d ",b);
			
			if(a<=c && a<=d){
				printf("%d ",a);
				
				if(c<=d){
					printf("%d %d  X7\n", c, d);
				}else{
					printf("%d %d  X8\n", d, c); 
				}
			}else if(c<=d){
				printf("%d ",c);
				
				if(a<=d){ 
					printf("%d %d  X9\n", a, d);
				}else{
					printf("%d %d  X10\n", d, a);
				}
			}else{
				printf("%d ",d);
				
				if(a<=c){ 
					printf("%d %d  X11\n", a, c);
				}else{
					printf("%d %d  X12\n", c, a);
				}
			}
		}else if(c<=d){
			printf("%d ",c);
			
			if(a<=b && a<=d){
				printf("%d ",a);
				
				if(b<=d){
					printf("%d %d  X13\n", b, d);
				}else{
					printf("%d %d  X14\n", d, b);
				}
			}else if(b<=d){
				printf("%d ",b);
				
				if(a<=d){ 
					printf("%d %d  X15\n", a, d);
				}else{
					printf("%d %d  X16\n", d, a);
				}
			}else{
				printf("%d ",d);
				
				if(a<=b){ 
					printf("%d %d  X17\n", a, b);
				}else{
					printf("%d %d  X18\n", b, a);
				}
			}
		}else{
			printf("%d ",d);
			
			if(a<=b && a<=c){
				printf("%d ",a);
				
				if(b<=c){
					printf("%d %d  X19\n", b, c);
				}else{ 
					printf("%d %d  X20\n", c, b);
				}
			}else if(b<=c){
				printf("%d ",b);
				
				if(a<=c){ 
					printf("%d %d  X21\n", a, c);
				}else{
					printf("%d %d  X22\n", c, a);
				}
			}else{
				printf("%d ",c);
				
				if(a<=b){ 
					printf("%d %d  X23\n", a, b);
				}else{
					printf("%d %d  X24\n", b, a);
				}
			}
		}
	}
	return 0;
}