// exercicio 2 slide 33 aula 4
// algoritmo que receba nome de 10 alunos e armazene em um vetor.
// Calcule e mostre:
//média da sala, nome do aluno com maior nota e do menor, reprovados
#include<stdio.h>

int main()
{
	int tam = 3; // tamanho do vetor 3 para facilitar os testes
	int i; // contador dos for
	int soma = 0; // soma de totas as notas
	char nome[tam][20]; // matriz para armazenar os nomes
	float nota[tam]; // vetor para armazenar as notas
	float media; // armazena a media da sala
	
	int iMaiorNota = 0; // posicao da maior nota inicialmente a primeira do vetor
	int iMenorNota = 0; // posicao da menor nota inicialmente a ultima do vetor
	
	// ciclo para fazer a entrada de dados
	for(i = 0; i < tam; i++)
	{
		printf("Digite o nome do aluno:	");
		scanf("%s",&*nome[i]);
		printf("Digite a nota:	");
		scanf("%f",&nota[i]);
	} // fim da entrada de dados
	
	
	
	//  este cilo acha a posicao em que esta a manior nota
	for(i = 0; i < tam; i++)
	{
		
		// se a nota na pos tual eh maior que a nota na pos da maior
		if( nota[i] >= nota[iMaiorNota])
		{
			iMaiorNota = i; // entao a pos atual passa a ser a pos da maior nota
		}	
	}
		
	// ciclo para encontrar a posicao da menor nota
	for(i = 0; i < tam; i++)
	{
		// se a nota na pos tual eh menor que a nota na pos da menor
		if(nota[i] <= nota[iMenorNota])
		{
			iMenorNota = i; // entao a nota atual eh a menor
		}
	}
	
	
	// nao mudei nada aqui
	for(i = 0; i < tam; i++)
	{
		if ( nota[i] < 6)
		{
			printf("\n%s	reprovado\n",nome[i]);
		}
		else
		{
			printf("\n%s	aprovado\n", nome[i]);
		}
	}
	
	// nem aqui
	for( i = 0; i < tam; i++ )
	{
		soma = soma + nota[i];
	}
	
	media = soma / tam;

	// mostrando os dados na posicao da maior nota
	printf("\nMaior nota: %s = %f\n", nome[iMaiorNota],nota[iMaiorNota]);
	
	//mostrando os dados da posicao da menor nota
	printf("\nMenor nota: %s = %f\n",nome[iMenorNota],nota[iMenorNota]);
	
	//mostrando a media da sala
	printf("\n\nMedia da sala: %f", media);
}
