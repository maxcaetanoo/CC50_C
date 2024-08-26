# Variaveis em linguagem C

Em C os tipos de variáveis são:

* bool
* char
* double
* float
* int *(32 bits)*
* long *(64 bits)*
* string

Esses tipos garantem que além de salvarmos os valores em uma variavel possamos garantir que aquele valor será de um tipo específico.

## lib CS50

Dentro dessa biblioteca temos funções que nos auxiliam a receber variaveis de tipos específicos usando as funções abaixo:

* **get_char:** Recebe um caracter(uma letra ou simbolo).
* **get_double:** Recebe um valor com ponto flutuante(ex: 10.5).
* **get_float:** Recebe um valor com ponto flutuante maior que o double.
* **get_int:** Recebe um valor inteiro ente -2.147.483.648 e 2.147.483.647.
* **get_long:** Recebe um valor inteiro entre -9.223.372.036.854.775.808 e 9.223.372.036.854.775.807.
* **get_string:** Recebe um valor textual, conjunto de caracteres.

## Concatenadores de Strings para printf

Para adcionarmos tipos de variaveis diferentes em um print precisamos especificar seus concatenadores de tipo que são um *sinal de porcentagem* acompanhado de *uma letra*, veja mais nos exemplos abaixo:

* **%c** Adcionar um char a um printf.
* **%f** Adciona um float a um printf.
* **%i** Adciona um int a um printf.
* **%li** Adciona um long a um printf.
* **%s** Adciona uma string a um printf.
