#include <stdlib.h>
#include <stdio.h>

int main(){


    char nome[10]; // string de ate 10 caracteres para armazenar o nome
    int idade; // inteiro para armazenar idade
    
    
    //quantidade de parametros do printf pode variar
    //printf com uma string como parametro somente.
    // imprimira somente a string
    printf("Digite o seu nome :");
    
    // scanf SEMPRE tem 2 parametros
    
    // o primeirro é o marcador que indica o tipo de dado que sera lido ... no caso "%s" significa string ... o marcador sempre vai entre aspas duplas
    // o segundo sempre tem o operador & seguido do identificador (nome) de uma variavel... e indica onde sera armazenada a entrada de dados
    // resumindo ... lemos uma string e guardamos em nome
    scanf("%s", &nome);
    
    
    //quantidade de parametros do printf pode variar
    //printf com uma string como parametro somente.
    // imprimira somente a string
    printf("Digite a sua idade:");
    
    
    // o primeirro é o marcador que indica o tipo de dado que sera lido ... no caso "%d" significa um inteiro ... o marcador sempre vai entre aspas duplas
    // o segundo sempre tem o operador & seguido do identificador (nome) de uma variavel... e indica onde sera armazenada a entrada de dados
    // resumindo ... lemos um inteiro e guardamos em idade
    scanf("%d", &idade);
    
    
    //quantidade de parametros do printf pode variar
    //printf com uma string e 2 variaveis como parametro
    // dentro do primeiro parametro temos marcadores de tipo ... (2 no caso  %s e %d)...
    // eles serao substituidos pelos valores armazenados nas variaveis (respeitando o tipo e a ordem)
    // na pratica %s é substituido pelo valor que esta em nome ... %d e substituido pelo valor que esta em idade
    // depois a string completa ( primeiro parametro) é impressa na tela
    printf("\nOla %s voce tem %d anos\n", nome, idade);
        

    system("pause");
	return 0;
}

