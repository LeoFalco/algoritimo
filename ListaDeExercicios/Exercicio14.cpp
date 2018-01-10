// Exercicio 14	

#include <stdio.h>
#include <locale.h> //necessário para usar setlocale
#include <stdlib.h>

int main()
{
	
	setlocale(LC_ALL,"portuguese"); // alterna idioma do console isso fas funcionar corretamente a acentuação
	
	float
		num1,
		num2,
		resposta;
		
	int escolha;
		
	printf("Digite um numero: ");
	scanf("%f" , &num1);

	printf("Digite outro numero: ");
	scanf("%f" , &num2);

	do{
		printf("\n1 Média aritmética entre os dois números\n");
		printf("2 Diferença do maior pelo menor\n");
		printf("3 Multiplicação entre os números digitados\n");
		printf("4 Divisão do primeiro numero digitado pelo segundo\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d" , &escolha);

		if(escolha > 4){
			system("cls");
			printf("Opcao invalida ! \nTente Novamente\n");
		}
	}while ( escolha > 4);
	
	switch(escolha)
	{
	case 1:
		resposta = ( num1 + num2 )/ 2 ;
		break;
	
	case 2:
		if(num1 >= num2 ){
			resposta = num1-num2;
		}else{
			resposta = num2- num1;
		}
		break;
	
	case 3:
		resposta = num1*num2;
		break;
	case 4:
		resposta = num1 / num2;
		break;
	default:
		printf("Error");
		break;
	}
	
	printf("\n%f\n\n", resposta);
	system("pause");

}
