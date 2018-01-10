algoritimo Compras
	
	var
		real: valor[80];
		caractere: forma_pgto[80];
		real valor_parcela[80];
		real : caro;
		real: somav;
		real : somap;
		real: somaTudo;	
		
		caro = 0;
		somav = 0;
		somap = 0;
		
		
	para i <- 0 até n passo 1 	
	
		leia(valor[i]);	
		leia( forma_pgto[i] );
		
		se forma_pgto[i] = 'p' então
			valor_parcela[i] = valor[i]/3.00;
		fim_se
	fim_para

	para i <- 0 até n passo 1	
		escreva("compra numero :",i );
		escreva("Valor : ",valor[i] );
		escreva("Forma de pagamento :",forma_pgto[i]);
		
		se forma_pgto[i] = 'p' então
			escreva("Valor da parcela : ", valor_parcela[i] );
		fim_se
	fim_para
	
	para i <- 0 até n passo 1
		
		se  valor[i] > caro então
			caro = c[i].valor;
		fim_se
	fim_para

	para i <- 0 até n passo 1
		se forma_pgto[i] = 'v' então 
			somav = somav + valor[i];
		senão
			somap = somap + valor[i];
		fim_se
	fim_para
	
	somaTudo = somav + somap;
	
	escreva("Valor da compra mais cara: ",        cara);
	escreva("Valor total das compras a vista : ", somav);
	escreva("Valor total das compras a prazo : ", somap);
	escreva("Valor total das compras : ",    somaTudo);
	
fim_algoritimo