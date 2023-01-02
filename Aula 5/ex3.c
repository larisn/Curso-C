#include <stdio.h>


int main(){

int n1, n2, m;


printf("Digite a primeira nota:\n");
scanf("%d", &n1);

printf("Digite a segunda nota:\n");
scanf("%d", &n2);


m = (n1 + n2) / 2;

printf("Sua média é: %.1d\n", m);


	
	
	switch(m){
		case 0 ... 4:
			printf("Reprovado\n");
			break;
		case 5 ... 7:
			printf("Exame\n");
			break;
		case 8 ... 10:
			printf("Aprovado\n");
			break;
	}
}
	
	
	
	
	
	
	
	

































	





