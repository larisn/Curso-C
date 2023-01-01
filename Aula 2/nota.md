# Aula 2: Inserindo dados pelo teclado em C - scanf 


### Variáveis 
É a região de memória identificável por um nome que serve para guardar dados ou recuperar dados. Ela permite que o programa vá mudando o que está salvo em memória. 


# Conceitos introdutórios

* Antes de invocar ela no código, é preciso declarar uma variável, e para isso, é preciso digitar o tipo e o nome dela antes de começar as funções. Exemplo:  
~~~c
int idade, idade2;
~~~

* Regra de nomenclatura: Não pode começar com um número, só com número ou underline, não pode ter caractere especial e não pode ter espaço. 

# Tipos de dados:  

* char -  Carrega texto, caracteres alfanuméricos, geralmente ocupa 8 bits em memória. 

* int -  Carrega caracteres inteiros, em algumas máquinas, ocupa 16, e em outras (32 bits - mais comum). 

* float - Carrega dados com casas decimais, geralmente ocupa 32 bits. (geralmente usa float ao invés de double no dia a dia). 
  
* double -  Carrega números com ponto flutuante, com precisão dupla, normalmente possuindo o dobro da capacidade de uma variável do tipo float, geralmente ocupa 64 bits. 


* Operador igual (=): O que está a direita, vai preencher o espaço de memória relacionado à variável que está a esquerda do operador. Quando usado, serve para que tenha um conteúdo conhecido dentro da variável. (mesmo declarando a variável, se não atribuir valor a ela utilizando esse operador, o que tem dentro dela pode ser qualquer coisa). 

 
 * As variáveis do tipo char(vetor), precisa dizer quantos caracteres cabem naquela variável. Exemplo:

~~~c
char nome[50] = "" 
~~~




# Constantes

Diretiva #define: Diferente das variáveis, não permite que o dado se modifique, cria um identificador para um dado de qualquer tipo. (#define <nome> <valor>).  
Quando aparecer o <nome> no código, a máquina automaticamente vai substituir pelo valor da constante. 



### Tipos de % - especificadores de formato (printf)  


* %X - Números com base hexadecimal.

* %f - Números reais com ponto flutuante. 

* %e - Números em notação científica com casas decimais.

* %c - Caracteres alfanuméricos (texto, tipo str).

* %s - Sequência de caracteres alfanuméricos.

* .<num> -  Especifica quantos dígitos serão impressos depois da vírgula.

  
### Tipos de \ - sequências de escape (printf) 
  
* \a - Toca um bipe, padrão sonoro do sistema.

* \b - Backspace.
  
* \n - Quebra de linha.
  
* \t - Tabulação vertical TAB.
 
* \r - Retorna ao início da linha.
  
* \0 - Caractere nulo, que representa o final de uma sequência de caracteres, tipo de um vetor(string).
  
* \v - Tabulação vertical.
  
  
Para imprimir uma \ ou % pro usuário ver, precisa colocar duas barras e dois %,  ex: \\ e %%, e para imprimir caracteres especiais precisa de uma barra antes, ex: \? e  \" 
Quando um caracter está cercado por aspas simples, é considerado um dado texto de um único caracter. 
  


### Tipos de % - especificadores de formato (scanf) 
  
* %d ou %i - Números inteiros. (tipo int).

* %X -  Números com base hexadecimal.
  
* %f - Números reais com ponto flutuante. (tipo float).
  
* %e - Números em notação científica com casas decimais.
  
* %c - Caracteres alfanuméricos (texto, tipo str) - caracter isolado.
  
* %s - Sequência de caracteres alfanuméricos (um conjunto).
  
* [^chars] - Lê todos os dados digitados, exceto os especificadores em "chars", serve para excluir caracteres indesejados. 
  
