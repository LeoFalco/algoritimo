/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/
/*
Faça um algoritmo que receba 1500 números, calcule e mostre a soma dos números pares e a soma dos números primos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	bool isPrimo(int n); // fc retorna true se n for primo
	bool isPar(int n); // fc checa se o numero e par
	
	int num[1500]; // vetor de 1500 numeros
	unsigned long int somaPares = 0; 
	unsigned long int somaPrimos = 0;
	
	for( int i = 1 ; i <= 1500 ; i++ ){ // preenchendo as variaveis com um ciclo que percorre o vetor inteiro
		num[i] = rand(); // jogando m valor aleatorio em num[i]
		printf("%do numero :  %d\n", i, num[i]);
		
		if(isPar(num[i])) // se o num for par
			somaPares += num[i]; // adicione o valor a soma pares
			
		if( isPrimo(num[i]) ) // se o num for primo
			somaPrimos += num[i]; // adiciona seu valor a soma primos
	}
	
	/*mostrarndo resultados*/
	printf("Soma dos Pares : %d\n", somaPares);
	printf("Soma dos Primos : %d\n", somaPrimos);
	
	system("pause");
}
bool isPar(int n){
	if(n % 2 ==0) 
		return true;
	
	return false;
}
bool isPrimo(int n){ /* nao faço a minima ideio do pq mas isso funciona*/
	
	if(n<5 || n%2==0 || n%3==0){
		return (n==2||n==3);
	}

	int maxP = sqrt(n)+2;
	for(int p=5; p<maxP; p+=6){
		if(n%p==0||n%(p+2)==0){
			return false;
		}
	}
	return true;
}
