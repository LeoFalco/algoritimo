#include<stdio.h>
#include<stdlib.h>

#define n 3 /* n eh o numero alunos*/

struct Aluno{
	   char nome[40];
	   float nota;
};

struct Aluno aluno[n] = {{{0}}}; /*estrutura com todos os alunos*/

void lerVetorNomeENota()
{
	for(int i = 0; i < n; i++)
	{
		printf("Digite o nome do aluno: ");
		fflush(stdin); // limpando padrao de entrada para evitar bugs com o guets
		gets(aluno[i].nome);/* lendo string do usuario */
		
		printf("Digite a nota do aluno: ");
		scanf("%f",&aluno[i].nota);
		printf("\n");
	}
}

float calcularMedia()
{
	float Soma = 0;
		for(int i = 0; i < n; i++)
		{
		   	Soma += aluno[i].nota;
		}
	return(Soma / n);
}

int acharMaiorNota()
{
	int pos = 0;
	
	for(int i = 0; i < n; i++)
	{
		if (aluno[i].nota > aluno[pos].nota)
		{
			pos = i;
		}
	}
	return pos ;	
}

int acharMenorNota()
{
	int pos = 0;
	
	for(int i = 0; i < n; i++)
	{
		if (aluno[i].nota < aluno[pos].nota)
		{
			pos = i;
		}
	}
	return pos;	
}

void mostrarAprovados()
{
	printf("\n Alunos aprovados\n");
	
	for(int i = 0; i < n; i++){
		if (aluno[i].nota >= 6){
			
			printf("%20s\t%.2f\n",aluno[i].nome ,aluno[i].nota );
		}
	}
}

int main()
{
	float Media;
	int posMelhor;
	int posPior;
	
	lerVetorNomeENota();
	Media = calcularMedia();
	posMelhor = acharMaiorNota();
	posPior = acharMenorNota();
	mostrarAprovados();

	printf("\n Aluno com maior nota: %s   %f\n", aluno[posMelhor].nome, aluno[posMelhor].nota);
	printf("\nAluno com menor nota: %s   %f\n",aluno[posPior].nome, aluno[posPior].nota);
	printf("\nMedia da Sala: %.2f \n",Media);	
}
