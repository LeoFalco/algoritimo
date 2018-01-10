/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

/*variaveis usadas por todas as fc declaradas como globais */
struct Data nas = {0};
struct Data hoje = {0};

int calculaIdade(void){
	
	int iddAno = hoje.ano - nas.ano; /*assumindo inicialmente que a pessoa ja fes aniversario*/
	
	if(hoje.mes < nas.mes && hoje.dia < nas.dia){
		iddAno-- ; /*ainda nao fes aniversário este ano*/
		
	}else if(hoje.mes == nas.mes && hoje.dia == nas.dia){ /*dia do aniversario*/
		printf("parabens para voce!\n");
	}
	
	return iddAno;
}
int diasNoMes(int mes){
	switch (mes){
		case  2 :
			if( nas.ano % 4 == 0 ){
				return 29;
			}else{
		 	 	 return 28;	/* fev  tem 28 dias*/
			}
		case  4 :
		case  6 :
		case  9 :
		case 11 : return 30;	/* abr, jun, set, nov, tem 30 dias */
		default : return 31;	/* todos os outros tem 31 dias*/
	}
}
bool dataEInvalida(){
	
	if(( hoje.ano >= nas.ano)&&(nas.mes <=12 && nas.mes >= 1)&&( nas.dia <= diasNoMes(nas.mes))){ 
		return false;
	}else{
		printf("\ndata Invalida!!\n");
		return true;
	}
}

void leiaDataNas(void){
	
	printf("*Fotmato dd/mm/aaaa \n");
	do{
		/*usuário entra com sua data de nascimento*/ 
		printf("Digite a data do seu Nascimento : "); 
	   	scanf("%d/%d/%d", &nas.dia, &nas.mes, &nas.ano);
	}while (dataEInvalida()); /*verifica a validade da data*/
}
void consultaDataHoje(void){
	
	/*consulta data do sistema a creditos de www.rogercom.com */ 
	struct tm *DataAtual;	//estrutura para armazenar data e hora.
	time_t Segundos;
    time(&Segundos);	//obtém a hora em segundos.
    DataAtual = localtime(&Segundos);	//converte horas em segundos.
    hoje.dia = (DataAtual->tm_mday);	//retorna os dias de 1 a 31.
    hoje.mes = (DataAtual->tm_mon+1);	//retorna os meses de 1 a 12.
    hoje.ano = (DataAtual->tm_year+1900);	//retorna o ano atual.	
}

int main(){

	int idade ;
	
	consultaDataHoje(); /* consulta a data do sistema */
	leiaDataNas(); /*le a data de nascimento do usuario*/
	
	idade = calculaIdade(); /* retorna a idade resultante */
	
	printf("Voce tem %d anos\n\n", idade); /* saida de dados*/
	system("pause");
}