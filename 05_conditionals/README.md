# Conditionals

Condicionais são estruturas de decisão que nos permitem executar determinados blocos de código em determinadas situações, são conhecidos como **se** e **senão** onde serão testadas as condições como podemos ver abaixo.

## Condicional simples

**Ex:**

    //Condicional simples
    if (x < y)
    {
        printf("%i é menor que %i\n", x, y);
    }

Como podemos ver nessa condicional simples acima, só estamos testando o **se***(if)*, se o x for menor que o y então sera executado o campo dentro das chaves.

## Condicional composta

**Ex1:**

    //Condicional composta
    if (x < y)
    {
        printf("%i é menor que %i\n", x, y);
    }
    else
    {
        printf("%i não é menor que %i\n", x, y);
    }

Aqui como podemos ver testamos se um condição é verdadeira com o **se** *(if)*, mas caso ela não seja verdadeira então executamos o **senão** *(else)*, nesse caso se o x for maior que o y então o **else** será executado.
Mas nossas condicionais podem ser compostas por mais de uma condição que seria o **senão se** *(else if)* nessa condicional primeiro testamos o **se** *(if)*, caso não seja verdadeito testamos o **senão se** *(else if)* e se ainda assim não for verdadeiro podemos testar outros senão se, mas por fim caso não haja mais nenhuma condição a ser testada e todas forem falsas então executamos o **senão** *(else)* como podemos ver abaixo.

**Ex2:**

    //Condicional composta por multiplas condições
    if (x < y)
    {
        printf("%i é menor que %i\n", x, y);
    }
    else if (x > y)
    {
        printf("%i é maior que %i\n", x, y);
    }
    else
    {
        printf("%i é igual a %i\n", x, y)
    }
