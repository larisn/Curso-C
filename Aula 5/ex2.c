#include <stdio.h>


int main(){

int valor;

printf("Insira um valor de 1 a 15:\n");
scanf("%d", &valor);

	switch(valor){
		case 1:
			printf("Alimento não perecível \n");
			break;
		case 2 ... 4:
			printf("Alimento perecível \n");
			break;
		case 5 ... 6:
			printf("Vestuário \n");
			break;
		case 7:
			printf("Higiene Pessoal \n");
			break;
		case 8 ... 15:
			printf("Limpeza e Utensílios Domésticos \n");
			break;
		default:
			printf("Código inválido \n");
			break;
	}
	
	
}
































	





