/*
-----------------------------------------------------------------------
 MAC-110 -  Numero Primo  -- Três solucoes para o mesmo problema
=======================================================================

 * arquivo: primo1.c
 * --------------------
 * Este programa verifica se um dado numero inteiro positivo  n 
 * é primo 
 */


#include <stdio.h>

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = 1 se o numero dado 'e primo */
	/*  EhPrimo = 0 se o numero dado nao 'e primo       */
   

    d = 2;
    EhPrimo = 1;		/* Ate' prova em contrario, supomos que n seja  primo */

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	EhPrimo = 0;

    while (EhPrimo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    EhPrimo = 0;
	d = d + 1;
    }

    if (EhPrimo == 1)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}


/* 
 * arquivo: primo2.c
 * --------------------
 * Este programa verifica se um dado numero inteiro positivo  n 
 * é primo 
 */


#include <stdio.h>
#define TRUE  1                   /* NOVIDADE!!! */
#define FALSE 0                   /* NOVIDADE!!! */

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo,			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = 1 se o numero dado 'e primo */
	/*  EhPrimo = 0 se o numero dado nao 'e primo        */
     resto;
    d = 2;
    EhPrimo = TRUE;		/* Ate' prova em contrario, supomos que n seja  primo */

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	EhPrimo = FALSE;

    while (EhPrimo == TRUE && d <= n / 2) {
	resto = n % d;
	if (resto == 0)
	    EhPrimo = 0;
	d = d + 1;
    }

    if (EhPrimo == TRUE)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}
/*
----------------------------------------------------------------

Veja abaixo:  comparacao com TRUE foi simplificada: fica subentendida!
              Apenas os ímpares sao testados: 1, 3, 5...como possiveis
              candidatos a divisor


 * arquivo: primo3.c
 * --------------------
 * Este programa verifica se um dado numero inteiro positivo  n 
 * é primo 
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = TRUE se o numero dado 'e primo */
	/*  EhPrimo = FALSE se o numero dado nao 'e primo        */
   

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);


    if (n <= 1 || (n != 2 && n % 2 == 0))
	EhPrimo = FALSE;	/* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
	EhPrimo = TRUE;		/* o numero e' primo ate que se prove o contrario */


    d = 3;
    while (EhPrimo  && d <= n / 2) {
	if (n % d == 0)
	    EhPrimo = 0;
	d = d + 2;		/* testamos so' os  impares: 3, 5, 7... */
    }

    if (EhPrimo)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}

