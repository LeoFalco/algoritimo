/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <conio.h>

int main(){

	float preco_ingresso = 48;
	int publico = 350;
	const int despesa = 5600; // despesa nao muda
	float lucro = ( preco_ingresso * publico ) - despesa ; /* lucro inicial gerado pela formula*/
	
	/*variaveis que guardao os valores no lucro maximo*/
	float lucro_max;
	float preco_lucro_max;
	int publico_max;
	
	
	printf("\n   Preco      |   qtd vend   |    lucro  "); // cabecalho da tabela
	do{
		printf("\n   %.2f      |      %d     |   %5.2f  " , preco_ingresso, publico, lucro); // preenchendo a tabela
		
		/* atualizando variaveis */
		preco_ingresso -= 2;
		publico += 17;
		lucro = ( preco_ingresso * publico ) - despesa;
		
		if(lucro > lucro_max){ /* se lucro > lucro max atualizar os valaores maximos */
			lucro_max = lucro;
			preco_lucro_max = preco_ingresso;
			publico_max = publico;
		}	
	}while(preco_ingresso >= 22.00); //analizar  ate o preco ser R$22
	
	/*msg com as caracteristicas do lucro maximo*/
	printf("\n\nLucro maximo : %.2f", lucro_max);
	printf("\nPreco lucro maximo : %.2f",preco_lucro_max  );
	printf("\nQuantidade de ingresso vendido no lucro maximo : %d\n\n", publico_max );

	getch();
}

