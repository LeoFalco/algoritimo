Algoritimo DVDs
	
	var 
		Nome : vetor[80] de string;
		qtd_locada : vetor[80] de inteiro;
		qtd_gratis : vetor[80] de inteiro;
	
	para i <- 0 até n passo 1 faça
		leia (Nome[i]);	
		leia (qtd_l[i]);
	fim_para
	
	para i <- 0 até n passo 1 faça
		qtd_g[i] = qtd_l[i]/10;
	fim_para
	
	escreva("Nome do Cliente  |  Qtd Locada  |  Qtd gratis ");
	para i <- 0 até n passo 1 faça
		escreva( Nome[i], qtd_l[i],  qtd_g[i]); 
	fim_para
		  		
fim_algoritimo