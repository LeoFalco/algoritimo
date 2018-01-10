#include <stdio.h>
#include <conio.h>

float leiaValorCarro(){
	
	float valor;
	
	printf(" Digite o Valor do Carro : ");
	scanf("%f", &valor);
	
	return valor; 
}

void mostreTabela(float precoCarro){
	
	float precoCarroTemp = precoCarro; /* guardando em uma variavel temporaria para nao alterar original */
	float precoParcelaTemp;
	float juros  = 0.03 ;
	int qtdParcelas;
	
	printf("\n Simulacao dos Valores das parcelas\n\n"); /*cabecalho da tabela*/
	printf(" Preco final | Parcelas | Valor Parcela\n");
	
	//monstrando linha do valor a vista
	precoCarroTemp *= 0.8;     //desconto de 20%
	printf(" %6.2f |  1 | %f \n", precoCarroTemp, precoCarroTemp);
	
	
	/*montando outras linhas da tabela*/
	for( qtdParcelas = 6; qtdParcelas <= 60;  qtdParcelas += 6, juros += 0.03  ){ /*variando de 6 a 60 de 6 em 6 */
		
		precoCarroTemp = precoCarro;  //restaurando o preço original
		precoCarroTemp = precoCarro + precoCarro * juros ; //adidionando os juros
		precoParcelaTemp = precoCarroTemp / qtdParcelas ;
		
		printf(" %6.2f | %2d | %f \n",  precoCarroTemp , qtdParcelas, precoParcelaTemp);
	}
	printf("\n\n");
}

int main(){
	
	mostreTabela(leiaValorCarro());
	
	getch();
}