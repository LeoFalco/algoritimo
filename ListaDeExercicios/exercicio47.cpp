/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
		
	int num ;
	int fatorial(int n);
	
	printf("Digite um numero inteiro positivo : ");
	scanf("%d", &num);

	printf("Fatorial de %d é : %d\n\n", num ,fatorial(num));

	system("pause");
}
int fatorial(int n){
	
	if(n == 1 || n == 0){ // se n for 1 pare com o fatorial
		return 1;
	}
	return n * fatorial(n-1);
}
