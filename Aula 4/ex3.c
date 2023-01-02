#include <stdio.h>


int main(){


int idade;

printf("Digite sua idade aqui:\n");
scanf("%d", &idade);


	if (idade >= 16){
		printf("Você poderá votar esse ano!\n");
	}	
	
	else {
		printf("Você ainda não pode votar.\n");
		
	}
  
}
