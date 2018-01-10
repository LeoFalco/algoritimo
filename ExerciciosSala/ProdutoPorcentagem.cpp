#include <stdio.h>

int main(){
	
	int codDepartamento;
	float precoProduto;
	
	printf("Digite o codigo do departamento: ");
	scanf("%d", &codDepartamento);
	
	printf("Digite o preco do produto: ");
	scanf("%f", &precoProduto);
	
	if(codDepartamento == 1){
		precoProduto *= 1.05;
	}else{
		precoProduto = precoProduto + ( precoProduto * 0.074);
	}
		
	printf("Preco do produto com aumento : %.2f \n", precoProduto);
		
	return 0;
}