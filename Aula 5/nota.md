# Conheça o comando SWITCH-CASE

### Estrutura de decisão múltipla

Serve para ver se uma única variável é igual a um valor, comparação apenas de igualdade. 
Quando o usuário digita um valor no teclado, alguma mensagem específica aparece para ele, se ele digitar outro valor, outra mensagem vai aparecer. 

* Se essa variável for igual a pelo menos 1 dos valores que estão sendo comparados, é executado apenas um bloco de comandos e todos os outros são ignorados. 
* Se nenhuma dessas variáveis forem iguais, o default executa o bloco de comandos padrão.  
* Para cada case< v1 >: , é necessário terminar o bloco de comandos com break; .Exemplo:
~~~c
#include <stdio.h>
#define texto "Entrada e saída de dados"


int main(){

int d;

printf("Insira um valor de 1 a 7:\n");
scanf("%d", &d);

	switch(d){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-feira.\n");
			break;
		case 3:
			printf("Terça-feira.\n");
			break;
		case 4:
			printf("Quarta-feira.\n");
			break;
		case 5:
			printf("Quinta-feira.\n");
			break;
		case 6:
			printf("Sexta-feira.\n");
			break;
        case 7: 
            printf("Sábado.\n");
            break;
        default:
            printf("Valor inválido.\n");
            break;
	}
	
}
~~~

































	





