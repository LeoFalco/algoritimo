algoritimo Teatro

	var
	
		real: preco_ingresso;
		real: preco_lucro_max;
		real: lucro;
		real: lucro_max;
		inteiro: publico;
		inteiro: publico_max;

	const
		inteiro: despesa; // despesa nao muda
	
	preco_ingresso = 48;	
	publico = 350;
	despesa = 5600; // despesa nao muda
	lucro = ( preco_ingresso * publico ) - despesa ; /* lucro inicial gerado pela formula*/
	
	
	
	escreva("Preco      |   qtd vend   |    lucro  "); // cabeçalho da tabela
	faça
		escreva(preco_ingresso, publico, lucro); // preenchendo a tabela
		
		/* atualizando variaveis */
		preco_ingresso = preco_ingresso - 2;
		publico = publico + 17;
		lucro = ( preco_ingresso * publico ) - despesa;
		
		se lucro > lucro_max /* se lucro > lucro max atualizar os valaores maximos */
			lucro_max = lucro;
			preco_lucro_max = preco_ingresso;
			publico_max = publico;
		fim_se
	enquanto preco_ingresso >= 22.00 ; //analizar  ate o preco ser R$22
	
	/*msg com as caracteristicas do lucro maximo*/
	escreva("\n\nLucro maximo : ", lucro_max);
	escreva("\nPreco lucro maximo : ",preco_lucro_max  );
	escreva("\nQuantidade de ingresso vendido no lucro maximo : ", publico_max );

fim_algoritimo

