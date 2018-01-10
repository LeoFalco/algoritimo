/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/
/*
faca um algoritmo que receba a 
idade, 
o peso, 
a altura, 
a cor dos olhos (A - Azul, P - Preto, V - Verde e C - Castanho)
e a cor dos cabelos (P - Preto, C - Castanho, L - Louro e R -Ruivo) de 20 pessoas e que calcule e mostre:

 a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
 a media das idades das pessoas com altura inferior a 1,50;
 a percentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
 a quantidade de pessoas ruivas e que nao possuem olhos azuis.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

struct caracteristicas{
	int idade;
	float peso;
	float altura;
	char olho;
	char cabelo;
};
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int quantidadePessoa;
	
	printf("digite o numero de pessoas para cadastrar: ");
	scanf("%d", &quantidadePessoa);
	
	struct caracteristicas pessoa[quantidadePessoa];
	
	printf("digite os dados de %d pessoas :\n\n", quantidadePessoa);

	for( int i = 0; i < qtdPessoa; i++){
		fflush(stdin); // limpao padrao de entrada (nao sei o pq mas desbuga mt coisa ) 
		
		printf("digite os dados da %dª pessoa : \n", i+1);
		
		printf("Idade : "); 		
		scanf("%d", &pessoa[i].idade);
		
		printf("Peso : "); 			
		scanf("%f", &pessoa[i].peso);
		
		printf("Altura : "); 		
		scanf("%f", &pessoa[i].altura);
		
		printf("Cor Olhos (A Azul, P Preto, V Verde, C Castanho) : "); 		
		pessoa[i].olho = getch();
		printf("%c",pessoa[i].olho);
		
		printf("\nCor Cabelos (P Preto, C Castanho, L Louro, R Ruivo) : ");	
		pessoa[i].cabelo = getch();
		printf("%c",pessoa[i].cabelo);
		
		printf("\n\n");
	}
	
	//a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
	int cont = 0 ;
	for( int i = 0; i < qtdPessoa; i++){
	
		if(pessoa[i].idade > 50 && pessoa[i].peso < 60 ){
			cont++;
		}
	}
	printf("quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos :  %d\n\n", cont);
	
	// a media das idades das pessoas com altura inferior a 1,50;
	float somaIdades = 0;
	float qtdBaixos = 0;
	int qtdOlhoAzul = 0;
	int qtdRuivoNAzul = 0;
	
	for( int i = 0; i < qtdPessoa; i++){
		if( pessoa[i].altura < 1.50 ){
			somaIdades += pessoa[i].idade;
			qtdBaixos++;
		}
		if( pessoa[i].olho == 'a' || pessoa[i].olho == 'A' ){
			qtdOlhoAzul++;
		}
		if( (pessoa[i].cabelo == 'r' || pessoa[i].cabelo == 'R') && !( pessoa[i].olho == 'a' || pessoa[i].olho == 'A' )){
			qtdRuivoNAzul++;
		}
	}
	printf("Média das idades das pessoas com altura inferior a 1,50 :  %2.2f\n\n", somaIdades/qtdBaixos );
	printf("Percentagem de pessoas com olhos azuis :  %2.2f%%\n\n", ((float)qtdOlhoAzul/(float)qtdPessoa)*100 );
	printf( "Quantidade de pessoas ruivas e que nao possuem olhos azuis :  %d\n\n", qtdRuivoNAzul  );
	
	system ("pause");
}

