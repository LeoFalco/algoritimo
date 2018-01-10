/*
* Autor: Leonardo Jesus Falco
* Email: leonardo.falco@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>

int hojeDia, hojeMes, hojeAno;
int nasDia, nasMes, nasAno;

void parabens(){
	printf("Parabens pra voce nesta data querida!");
}

void lerDatas(){
	
	printf("Digite sua data de Nascimento (dd/mm/aaaa): ");
	scanf("%d/%d/%d",&nasDia, &nasMes, &nasAno );
	
	printf("Digite a data de Hoje (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &hojeDia, &hojeMes, &hojeAno );

}
int calcularIdade(int idade){
	
	if( hojeMes > nasMes)
	{
		idade = hojeAno - nasAno;
	}
	else if (hojeMes < nasMes )
	{
			idade = hojeAno - nasAno - 1;
	}
	else if (nasDia < hojeDia)
	{
		idade = hojeAno - nasAno;
	}
	else if(nasDia > hojeDia)
	{
		idade = hojeAno - nasAno - 1;		
	}
	else
	{
		parabens();
		idade = hojeAno - nasAno;
	}	
	return idade;
}

bool validaData(){
	
	bool isValida = false; //assumindo inicialmente q a data é falsa
	
	//  dia maior igual a  1, menorigual a 31 
	if(nasDia <= 31 && nasDia >= 1 &&  hojeDia <= 31 && hojeDia >= 1 ){
		isValida = true; // data falsa
	}
	//  mes maior igual a  1, menorigual a 12
	if( nasMes <= 12 && nasMes >= 1 && hojeMes <= 12 && hojeMes >= 1 ){
		isValida = true; // data falsa
	}
	
	if( nasAno < hojeAno){
		isValida = true;
	}
	printf("\nData Invalida!\n");
	return isValida;
}

int main(){
	
	int idade;
	
	do{
		lerDatas();
		
	}while (validaData() == true);
	
	idade = calcularIdade(idade);
	
	printf("Sua idade e : %d", idade);
}

