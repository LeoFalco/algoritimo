// Autor: Leonardo Jesus Falco
// Email: leonardo.falco@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct data {
	int dia;
	int mes;
	int ano;
}DATA;

DATA hoje = {0};
DATA nas  = {0};
DATA res  = {0};
	
int main(){
	system("title Cusriosidade Idade"); // altera o titulo do console
	
	/* Declarando as funcoes*/
	int contadorBi(/*DATA nas , DATA hoje*/);
	int dias_no_mes(int mes);
	int contB;
	
	/*consulta data do sistema a creditos de www.rogercom.com */ 
	struct tm *DataAtual;	//estrutura para armazenar data e hora.
	time_t Segundos;
    time(&Segundos);	//obtém a hora em segundos.
    DataAtual = localtime(&Segundos);	//converte horas em segundos.
    hoje.dia = (DataAtual->tm_mday);	//retorna os dias de 1 a 31.
    hoje.mes = (DataAtual->tm_mon+1);	//retorna os meses de 0 a 11.
    hoje.ano = (DataAtual->tm_year+1900);	//retorna o ano atual.

	/*usuário entra com sua data de nascimento*/ 
	printf("*Fotmato dd/mm/aaaa \n");
	printf("Digite a data do seu Nascimento : "); 
	scanf("%d/%d/%d", &nas.dia, &nas.mes, &nas.ano);
	
	/*contado os anos bissentos*/
	//contB = contadorBi(DATA hoje ,DATA nas);
	
	/* calculos primeira parte*/
	res.ano = hoje.ano - nas.ano;
	
	if(hoje.mes > nas.mes){
		res.mes = hoje.mes - nas.mes;
	}
	else{/*empresta 1 ano*/
		res.ano--;
		res.mes = hoje.mes - nas.mes + 12 ;
	}
	
	if(hoje.dia > nas.dia){
		
		
		printf("Voce ja fes niver esse ano!!\n");
		res.dia = hoje.dia - nas.dia;
	}
	else{ /* empresta 1 mes*/
		res.mes--;
		res.dia = hoje.dia - nas.dia + dias_no_mes(hoje.mes);
	}
	
	/* calculos Segunda parte*/
	int iddMes, iddDia, iddSem ;

	/* calculando idade em meses*/
	iddMes = res.ano*12 + res.mes;
	
	/* calculando idade em dias*/
	int mTemp = nas.mes; 	/* cria copia para nao alterar a estrutura original */
	int cont = 0;			/* cont ira guardar o resultado */
	
	// Converte res.mes para dias // eu sei q não tem variavel res.mes aqui // mas confia pq da certo
	for( /*vasio*/ ; mTemp < hoje.mes  ;  mTemp++ ) 	
		cont += dias_no_mes(mTemp) ; 
	
	
	iddDia= (res.ano * 365) +	//anos para dias
			cont  +				//meses para dias
			res.dia +  			//dia do aniversario do mes atual até hoje
			contadorBi();		//contador de bisestos
	
	/*calculando idade em semanas*/
	iddSem = iddDia/7;
	
	/*Saida de dados */
	printf("Data de Hoje                    : %.2d/%.2d/%.4d\n\n", hoje.dia, hoje.mes, hoje.ano);
	
	printf("Ate hoje voce ja viveu :\n");
	printf("%2.d Anos\n" , res.ano);
	printf("%2.d Meses\n", res.mes);
	printf("%2.d Dias\n\n", res.dia);
	
	printf("\nIdade em Meses    : %4.d\n", iddMes);
	printf("Idade em dias     : %4.d\n", iddDia );
	printf("Idade em Semanas  : %4.d\n", iddSem);
	
	system("pause");
}
int dias_no_mes(int mes){
	switch (mes){
		case  2 : return 28;	/* fev  tem 28 dias*/
		case  4 :
		case  6 :
		case  9 :
		case 11 : return 30;	/* abr, jun, set, nov, tem 30 dias */
		default : return 31;	/* todos os outros tem 31 dias*/
	}
}

int contadorBi(){	// contador de ano bisexto
	int anoTemp = nas.ano;	/* cria copia para nao alterar a estrutura original */
	int cont = 0 ;  // contB criado fora do laco for para poder ser usado como return
	for(     ; anoTemp < hoje.ano ; anoTemp++ )
		if ( anoTemp % 4 == 0)
			cont++;
		
	return cont;
}