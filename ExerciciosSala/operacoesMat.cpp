#include <stdio.h>

main(){
	
	// declaracao de variaveis
	float a , b , c ,resultado;
	
	
	// atribuicao de variaveis
	a= 9;
	b= 17;
	c= -6;
	
	
	//soma  a + b
	resultado = a + b;
	printf("Soma A B  = %.1f\n" ,resultado);
	
	// b*c multiplicacao
	resultado = b*c;
	printf("multiplica B C =  %.1f\n",resultado);

	//c-a subtracao
	resultado = c-a;
	printf("Subtrai C A =  %.1f\n", c ,a ,resultado);
	
	//soma divide a+c/b
	resultado = a + c / b;
	printf("Soma Divide A C B = %.1f\n",resultado);
	
	
}
