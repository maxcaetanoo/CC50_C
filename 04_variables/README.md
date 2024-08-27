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

## Casting

O processo de casting serve para forçar a alteração de um tipo para outro, podemos dar como exemplo uma divisão de dois inteiro onte teriamos um problema como podemos ver abaixo:

**Ex:**

    // Aqui estamos recebendo dois números inteiros do usuário
    int x = get_int("X: ");
    int y = get_int("Y: ");

    // E aqui estamos dividindo x por y, mas temos um problema
    float z = x / y;

lembrando que sempre executamos da direita para a esquerda da virgula e com isso temos um problema pois os números da direita são inteiros logo estaremos recebendo o resultado da divisão em inteiro e só depois atribuiremos à variavel z que é um ponto flutuante, mas nesse processo perdemos todos os valores após o ponto.
Agora você deve estar se perguntando se deveriamos mudar o **x** e o **y** para *float* para que possamos solucionar esse problema, mas na verdade a solução é mais simples, podemos apenas usar um ***cast*** para converter para float as variaveis x e y como pode ser visto abaixo:

**Ex:**

    // Aqui estamos recebendo dois números inteiros do usuário
    int x = get_int("X: ");
    int y = get_int("Y: ");

    // E aqui estamos dividindo x por y
    // mas dessa vez usamos o cast para ajustar o problema.
    float z = (float) x / (float) y;
