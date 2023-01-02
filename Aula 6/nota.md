# Conheça os comandos do & while

### Laços de Repetição: 

Comando while - É utilizado para repetir uma ou várias instruções por determinado número de vezes, até que algum momento as repetições se encerrem e o programa continue seu fluxo de onde ele parou. Sua estrutura é:
~~~c
while (>condição<) { }
~~~

Sempre vai ter uma inicialização de uma ou mais variáveis de controle. 

* Enquanto a condição for verdadeira, o bloco de comandos continua se repetindo, (geralmente é chamada de condição de parada porque quando é quebrada, as repetições param.).
* É estritamente NECESSÁRIO que antes de usar o comando a variável seja inicializada, usando o receba (=), para que antes de comparar o valor, ele seja conhecido. Exemplo: int i = 1; .
* Também é necessário que a variáveis sejam alteradas em algum momento para criar uma condição que se quebre,  para que o programa não entre em um looping infinito. 
* O comando é usado avaliando a condição e vendo se ela é verdadeira, ela sendo, o bloco é executado novamente. Exemplo:

~~~c
#include <stdio.h>


int main(){

	int i = 1;

	while(i <= 10){
		printf("%d ", i);
		i++;       
	}
	
}
~~~

* Comando do-while - Similar ao while, porém ao invés de ser testada no início do bloco de comandos, é testada no final. O do obriga o bloco de comandos a ser executado pelo menos 1 vez. Exemplo:

~~~c
#include <stdio.h>


int main(){

	int i = 1;

	do{
		printf("%d, i");
		i++;

	}while(i <= 10);
}

~~~


	

	
	
	
	
































	






 
