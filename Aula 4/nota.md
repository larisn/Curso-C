# Aula 4: Domine o comando IF em C

### Estruturas de decisão


#### Condição simples: 

 
if - Se a condição é verdadeira, o bloco é executado, senão é ignorado. Sua estrutura em C é: 
~~~c
if (>condição<) {  }
~~~

Tem chaves porque define um novo bloco de comandos. Exemplo:
~~~c
#include <stdio.h>
# define texto "Entrada e saída de dados"

int main(){

    float m;

printf("Insira a nota: \n");
scanf("%f", &m);

    if (m>= 7.0){

        printf("Aprovado!\n");


}

}    

~~~

#### Condição Composta:

* Se a condição do if for verdadeira, o bloco de comandos do if vai ser executado e o bloco de comandos do else vai ser ignorado. 
* Se a condição do if for falsa, o bloco de comandos do if vai ser ignorado e o bloco de comandos do else vai ser executado. 
Exemplo:
~~~c
#include <stdio.h>
# define texto "Entrada e saída de dados"

int main(){

    float m;

printf("Insira a nota: \n");
scanf("%f", &m);

    if (m>= 7.0){

        printf("Aprovado(a)!\n");

    } else {
        printf("Reprovado(a)!\n");
    }

}    
~~~

### Operadores relacionais:

> - Maior
>= - Maior ou igual
< - Menor
<= - Menor ou igual
== - Igual
!= - Diferente

### Operadores lógicos:

* Conjunção(e): && - É verdade quando tudo for verdade.
* Disjunção(ou): | | - É verdade se ao menos 1 for verdade.
* Inversão(negação): ! - É verdade quando operando é falso.
Exemplo:
~~~c
#include <stdio.h>
# define texto "Entrada e saída de dados"

int main(){

    float m;

printf("Insira a nota: \n");
scanf("%f", &m);

    if (m>= 4.0 && m <7.0){

        printf("Tem direito a exame!\n");

}

}    
~~~


