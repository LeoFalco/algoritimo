#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
nao definir tipo de retorno para o main gera este warning
warning: ISO C++ forbids declaration of 'main' with no type

por isso eh recomendado fazer: int main(){ ... codigo
*/
int main(){  
	
	setlocale (LC_ALL, "Portuguese");
	int a,b,c,d,contador;
	
	// pequena modificaçao fazendo o ciclo executar 30 vezes 
	// para que possamos testar mais possibilidades de uma vez
	for (contador = 1; contador <= 30 /*<< mudança aq*/; contador = contador + 1)
	{
		// mudei a entrada pra facilitar os testes(fiz a entrada por arquivo de texto separado)
		//printf("\n\nDigite quatro números inteiros: \n")
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%d %d %d %d  >>  ", a, b, c, d);
		
		
		/*a partir daq fiz algumas modificacoes na logica
		 
		 1. subistitui todos os < por <=  isso solucionou alguns erros em casos de valores repetidos
		 2. tinham algumas "pontas soltas" no codigo permitindo de em alguns casos os valores era validados
		    e passavamos dentro de alguns ifs a mais causando os bugs na saida a adição de alguns "else"
		    solucionou este tipo de erro
		*/
		
		//ajeitei as chaves para facilitar a leitura do codigo
		if (a<=b && a<=c && a<=d){
			printf("%d ",a);
				
			if (b<=c && b<=d){
				
				printf("%d ",b);
				if (c<=d){
					printf("%d %d  oi1\n",c,d); 
				}
				else{
					printf("%d %d  oi2\n",d,c);
				}
			}
			else // adicionei este cara 
			if (c<=b && c<=d){
				
				printf ("%d ",c);
				if (b<=d){
					printf("%d %d  oi3\n",b,d);
				}
				else{
					printf("%d %d  oi4\n",d,b);
				}
			}
			else // e este
			if (d<=b && d<=c)
			{
				printf ("%d ",d);
				if (b<=c)
				{
					printf("%d %d  oi5\n",b,c);
				}
				else{
					printf("%d %d  oi6\n",c,b);
				}
			}
		}
		else // e este
		if (b<=a && b<=c && b<=d){
			printf("%d ",b);
			
			if (a<=c && a<=d){
				
				printf("%d ",a);
				if (c<=d){
					printf("%d %d  oi7\n",c,d);
					
				}
				else{
					printf("%d %d  oi8\n",d,c);
				}
			}
			else // e este
			if (c<=a && c<=d){
				printf ("%d ",c);
					if (a<=d){
						printf("%d %d  oi9\n",a,d);
					}
					else{
						printf("%d %d  oi10\n",d,a);
					}
			}
			else // e este
			if (d<=a && d<=c){
				printf ("%d ",d);
				if (a<=c){
					printf("%d %d  oi11\n",a,c);
					
				}
				else{
					printf("%d %d  oi12\n",c,a);
				}
			}
		}
		else // e este
		if (c<=a && c<=b && c<=d){
			
			printf("%d ",c);
			if (a<=b && a<=d){
				
				printf("%d ",a);
				if (b<=d){
					printf("%d %d  oi13\n",b,d);
				}
				else{
					printf("%d %d  oi14\n",d,b);
				}
			}
			else // e este
			if (b<=a && b<=d){
				printf ("%d ",b);
				if (a<=d){
					printf("%d %d  oi15\n",a,d);
				}
				else{
					printf("%d %d  oi16\n",d,a);
				}
			}
			else // e este
			if (d<=a && d<=b){
				printf ("%d ",d);
				
				if (a<=b){
					printf("%d %d  oi17\n",a,b);
				}
				else{
					printf("%d %d  oi18\n",b,a);
				}
			}
		}
		else //  e este
		if (d<=a && d<=b && d<=c){
			printf("%d ",d);
			if (a<=b && a<=c){
			
				printf("%d ",a);
				if (b<=c){
					printf("%d %d  oi19\n",b,c);
				}
				else{
					printf("%d %d  oi20\n",c,b);
				}
			}
			else // e este
			if (b<=a && b<=c){
				
				printf ("%d ",b);
				if (a<=c){
					
					printf("%d %d  oi21\n",a,c);
				}
				else{
					printf("%d %d  oi22\n",c,a);
				}
			}
			else // e este
			if (c<=a && c<=b){
				
				printf ("%d ",c);
				if (a<=b){
					printf("%d %d  oi23\n",a,b);
				}
				else{
					printf("%d %d  oi24\n",b,a);
				}
			}
		}
	} // fim for
}

		


