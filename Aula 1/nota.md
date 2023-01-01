# Aula 1: Inserindo dados pelo teclado em C

* A biblioteca mais importante, permite que coloquemos instruções que faz com que o programa se comunique com o usuário, imprimindo as mensagens na tela e permitindo a interação com o usuário. Sua estrutura é:  #include <stdio.h> 

* Toda linha precisa terminar com ponto e vírgula. 

* Debugar significa executar o código passo a passo para que consiga identificar o que está acontecendo em tempo de execução no programa. Quando não entender porque o programa não ta funcionando como queria, num projeto mais longo, por exemplo. 

## Funções

* main( ) - Tudo que estiver dentro da função main vai ser executado pelo programa. Sua estrutura é:  int main( )  { 
} 
* printf( ) - Para ''printar'' a mensagem no sistema, é necessário que a mensagem esteja entre aspas e parênteses. 
* scanf( ) -  Interage com o usuário, serve para ler dados do teclado e faz com que a máquina guarde em memória o valor inserido pelo usuário. Precisa de um printf( ) antes do scanf( ). 
* system("pause"); - Aguarda o usuário interagir (apertar alguma tecla) antes de encerrar o programa. É necessário incluir a biblioteca #include <stdlib.h>). 
 
* O que vem depois da vírgula depois do %, é a palavra que vai ser substituida dentro da função. (tipo .format). 

 

* No scanf, precisa colocar o especificador de formato do dado, e tudo que vier depois da vírgula, para ser lido pelo scanf, precisa colocar o & e o nome do dado. Exemplo: 

~~~c
scanf("%d", &idade);
~~~
 

* Se caso for ler mais de uma variável no mesmo scanf, colocar o especificador de formato respectivo, um seguido do outro, e depois da vírgula o nome do dado, o primeiro nome é do primeiro especificador e assim por diante. Exemplo: 

~~~c
ex: scanf("%d, %d", &idade, &idade2)               
~~~

* Exemplo de um programa simples utilizando algumas das funções aprendidas:

~~~c
#include <stdio.h>

int main(){
    
    int idade = 0;
    int ano = 1950;
    float peso = 0.0;
    
    printf("Digite uma idade e o ano:\n");
    scanf("%d %d", &idade, &ano);

    printf("Digite um peso:\n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Ano informado: %d.\n", ano);
    printf("Peso informado: %f.\n", peso);
}
~~~
    
