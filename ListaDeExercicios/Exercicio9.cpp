/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tm *DataAtual; //estrutura para armazenar data e hora.
time_t Segundos;

const int qt_dias_mes[13] = {// Contante global que guarda a quantidade de dias de cada mes   
	
	0 , //posicao 0 do vetor armazena 0 para evitar confusões com os numeros que representam os meses
	31, // Jan  1
	28, // Fev 2
	31, // Mar 3
	30, // Abr 4
	31, // Mai 5
	30, // Jun 6
	31, // Jul 7
	31, // Ago 8
	30, // Set 9
	31, // Out 10
	30, // Nov 11
	31  // Dez 12
};





int hojeDia(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_mday); //retorna os dias de 1 a 31.
}

int hojeMes(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_mon+1); //retorna os meses de 0 a 11.
}

int hojeAno(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_year+1900); //retorna o ano atual.
}


	/* variaveis globais */ 
	int diaAux;
	int nasDia, nasMes, nasAno ;
	int resDia, resMes, resAno, resSem;
	
	
	int HojeDia = hojeDia();
	int HojeMes = hojeMes();
	int HojeAno = hojeAno();
		

int main(){
	int contadorBi();
	bool verificaAni ();
	
	
	printf("*Fotmato dd/mm/aaaa\nDigite a data do seu Nascimento : "); 
	scanf("%d/%d/%d", &nasDia, &nasMes, &nasAno); 
	
	
	
	/**/
	if( verificaAni()){
		
		resAno = HojeAno - nasAno;
		resMes = resAno*12 + ( HojeMes - nasMes);
		
		for ( int i = nasMes ; i < HojeMes ; i++ ) //diaAux armazena a quantidade de dias desde o mesNas ate o mesHoje
			diaAux =+ qt_dias_mes[i];    
		
		resDia = resAno*365 + diaAux + (HojeDia - nasDia) + contadorBi(); 
		
		if (HojeMes == 2 && HojeAno%4 == 0) // corrigir o contador relacionado com o 29 de fevereirodos anos bisestos
			--resDia;
		
		resSem = resDia / 7 ;
	}
	else{
		
		resAno = HojeAno - nasAno - 1;
		resMes = resAno * 12 /**/  + 12 - (nasMes - HojeMes ); //continuar daqui
		
		for (int i = hojeMes() ; i <= 12 ; i++ ) //diaAux armazena a quantidade de dias desde o mesNas ate o mesHoje
			diaAux =+ qt_dias_mes[i];
		
		for (int i = 1 ; i <= nasMes ; i++ ) //diaAux armazena a quantidade de dias desde o mesNas ate o mesHoje
			diaAux =+ qt_dias_mes[i];
			
		resDia = resAno*365 + diaAux + (nasDia - HojeDia) + contadorBi() ; 
		if (hojeMes() == 2 && hojeAno()%4 == 0) // corrigir o contador relacionado com o 29 de fevereirodos anos bisestos
			--resDia;
		resSem = resDia / 7 ;
	}
	// fim da fase de calculos
	
	//saida de Dados
	

	printf("Data de Hoje                    : %.2d/%.2d/%.4d\n\n", HojeDia, HojeMes, HojeAno); 
	
	printf("Idade em Anos     : %4.d\n", resAno);
	printf("idade em Meses    : %4.d\n", resMes);
	printf("idade em Semanas  : %4.d\n", resSem);
	printf("idade em dias     : %4.d\n\n", resDia);
	
	system("pause");
}



int contadorBi(){ // contador de ano bisexto

	int auxAno = nasAno;
	int contB ;  // contB criado fora do laco for para poder ser usado como return
	for(contB = 0 ; auxAno <= HojeAno ; ++auxAno )
		if ( auxAno % 4 == 0)
			contB++;
			
	return contB;
}

bool verificaAni (){  //verifica se aniversário ocorreu
	
	if(nasMes < HojeMes)
		return true;
		
	else if(nasDia < HojeDia)
		return true;
	
	else
		return false;
}
