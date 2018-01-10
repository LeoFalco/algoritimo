/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>

class Candidato
{
	private:
	char *nome;
	int numero;
	int qtdVotos;
	
	public:
	// construtor
	Candidato(char n[20], int num){
		nome = (char*) malloc( 15 *sizeof(char));
		nome = n;
		numero = num;
		qtdVotos = 0;
	}
	
	public:
	void votar(){
		qtdVotos++;
	}
	
	char getNome(){
		return *nome;
	}
	
	int getNumero(){
		return numero;
	}
	
	int getqtdVotos(){
		return qtdVotos;
	}
	
	void setNome(char n[20]){
		nome = n;
	}
	
	void setNumero(int n){
		numero = n;
	}
	
};
// variaveis globais
int votoZe = 0;
int votoJoao = 0;
int votoMaria = 0;
int votoJoana = 0;
int votoNulo = 0;
int votoBranco = 0;

int main(){

	setlocale(LC_ALL,"portuguese");

	
	Candidato c() = new Candidato();
	
	
	int opcao; // opcao digitda pelo usuario
	do{
		printf("Escolha seu candidato\n");
		printf("1 – Zé Povim\n");
		printf("2 – João Povão\n");
		printf("3 – Maria do Povo\n");
		printf("4 – Joana da Roça\n");
		printf("5 – Voto nulo\n");
		printf("6 – Voto Branco\n");
		printf("0 – Finalizar votacao\n");
		printf("Opcao: ");
		
		scanf("%d", &opcao);
		
		printf("\nVoto Contabilizado!\n");
		switch(opcao){
			case 1:
				votoZe++;
				break;
			case 2:
				votoJoao++;
				break;
			case 3:
				votoMaria++;
				break;
			case 4:
				votoJoana++;
				break;
			case 5:
				votoNulo++;
				break;
			case 6:
				votoBranco++;
		}
		
	}while(opcao != 0);
}// fim main

