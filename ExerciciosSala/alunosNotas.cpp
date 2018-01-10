#include <stdio.h>
#include <conio.h>
#define n 2

typedef struct aluno{
	char nome[40];
	float nota;
}ALUNO;

ALUNO aluno[80];  /*vetor de estrturas do tipo aluno com 80 alunos*/

ALUNO melhorAluno;
ALUNO piorAluno;

void leiaDados(){
	for( int i = 0 ; i < n ; i++ ){
		printf("Digite o nome do Aluno: ");
		gets(aluno[i].nome); /*obtendo string do suario*/
		
		printf("Digite a nota: ");
		scanf("%f", &aluno[i].nota);
	}
}
float calcMediaSala(){
	
	float somaNotas = 0;
	
	for( int i = 0; i < n ; i++){
		somaNotas += aluno[i].nota ; 
	}
	
	return (somaNotas / n);
}
void encontreMaiorNota(){
	for( int i = 0; i < n ; i++){
		if( melhorAluno.nota < aluno[i].nota ){
			melhorAluno.nota = aluno[i].nota;
			melhorAluno.nome = aluno[i].nome;
		} 
	}
	
	
}

int main(){
	
	float mediaSala;
	
	
	mediaSala = calcMediaSala();
	
	
	encontreMaiorNota();
	
	
	
	
}