/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

Algoritimo pesquisa_TV
	
	var
		inteiro:  casa_num[1000];
		inteiro: casa_canal[1000];
		inteiro: casa_teleEspec[1000];
		inteiro: canal_numero[4];
		inteiro: canal_espec[4];
		real: canal_pctg[4];

		/*declarando variaveis*/
		inteiro: total_espec;   /* necesario inicialiar como zero*/
		inteiro: povoada_espec; /* necesario inicialiar como zero*/
		inteiro: povoada_num ;
		inteiro: povoada_canal;
		inteiro: popular_espec; /* necesario inicialiar como zero*/
		inteiro: popular_num ;
		logico: opcao
		logico: stayInLoop;
		inteiro: casa_numero; /*guarda o num da casa*/
		inteiro: i;
	
	total_espec <- 0;
	povoada_espec <- 0;
	popular_espec <- 0;
	stayInLoop <- verdadeiro;
	casa_num <- 1;
	i <- 0;
	
	canal_numero[0] <- 4; /*atribuindo devidos numeros aos canais*/
	canal_numero[1] <- 5;
	canal_numero[2] <- 7;
	canal_numero[3] <- 12;
	
	
	 /*lendo dados do usuario */
	faca
	leia(opcao);
		 se opcao entao
			leia(casa_canal[i]); // le o canal e guarda na estrutura
			se casa_canal[i] <- 0 entao // caso canal <-<- 0 pare o ciclo imediatamente
				stayInLoop <- falso;
			fim_se
			se stayInLoop entao
				leia(casa_teleEspec[i]); /* le a quantidade de telespec e guarda na estrutura*/
				casa_num[i] <- casa_numero; /*atribuindo o numero a casa */
			fim_se
			
		senao
			i <- i - 1 ; /* para sobrescrever os dados caso a tv esteja deligada */
		fim_se
		casa_numero <- casa_numero + 1 ; /* marca q na proxima vez estaremos em outra casa */
		i <- i + 1;
	enquanto casa_numero <= n E stayInLoop;	
	
	para i <- 0 ate n passo 1 faca /*percorrendo vetor */
		se  casa_teleEspec[i] > povoada_espec entao /* se teleEspec > povoada_espec entao     */
			povoada_espec <- casa_teleEspec[i];  /* atualize os dados da casa mais povoada */
			povoada_num <- casa_num[i];
			povoada_canal <- casa_canal[i];
		fim_se
	fim_para
	
	para i <- 0 ate n passo 1 faca /*percorrendo vetor */
		total_espec <- tottal_espec + casa_teleEspec[i]; /* somando todos os teleEspec na variavel total_espec */
	fim_para

	para i <- 0 ate n passo 1 faca /*percorrendo vetor */
		escolha casa_canal[i]  /*distribui os telEspec para os canais */
			caso 4:
				canal_espec[0] <- canal_espec[0] + casa_teleEspec[i] ;
			caso 5:
				canal_espec[1] <- canal_espec[0] + casa_teleEspec[i] ;
			caso 7:
				canal_espec[2] <- canal_espec[0] + casa_teleEspec[i] ;
			caso 12:
				canal_espec[3] <- canal_espec[0] + casa_teleEspec[i] ;
		fim_escolha
	fim_para
	
	para i <- 0 ate 3 passo 1 faca

		se canal_espec[i] > popular_espec entao /*se canal_espec[i] > popular_espec entao  */
			popular_espec <- canal_espec[i]; /* atualize os dados do canal mais popular */
			popular_num <- canal_numero[i];
		fim_se
	fim_para
	
	para i <- 0 ate 3 passo 1 faca /*percorre o vetor de canais */
		/*formula da porcentagem*/
		canal_pctg[i] <- (canal_espec[i] / publico_total)*100;
	fim_para

	escreva( povoada_num, povoada_canal, povoada_espec);
	para i <- 0 ate 3 passo 1 faca
		escreva(canal_numero[i], canal_pctg[i]);
	fim_para
	escreva(popular_num, popular_espec);
	escreva( total_espec);	

fim_algoritimo
