#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
#define n 5		//n = Nome Clientes
#define qd 5	//qd = Quantidade de DVDs
#define dg 5	//dg = DVD gratis
*/

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome [5] [50];
	int quantidadeDvd [100], dvdGratis [100], i;
	
	for(i = 0; i <= 5 ; i = i + 1)
	{
	printf("\n\nDigite o nome do usuário: ");
	scanf("%s",&nome[i]);
	printf("\n\nDigite a quantidade de DVD alugado: ");
	scanf("%d",&quantidadeDvd[i]);
	}
}
