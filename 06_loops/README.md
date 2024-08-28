# Loops

Os loops ou estruturas de repetição sáo estruturas que executam um bloco de código repetidas vezes caso uma determinada condição seja atendida.

## While

O laço de repetição **While** é um loop que executa o bloco de código caso uma condição seja verdadeira e repete enquanto a mesma for verdadeira, mas o que isso quer dizer para nós?
Vamos a um exemplo para ficar mais simples a compreenção.

**Ex1:**

    //Aqui temos a nossa variavel valendo 0
    int x = 0;

    //Enquanto x for menor que 10 executaremos o bloco de código dentro das chaves
    while(x <= 10)
    {
        //Exibimos o a mensagem especificando o valor atual de x
        printf("O valor atual de x é %i\n", x);
        
        //E incrementamos mais 1 ao x a cada execução desse bloco de código
        x++;
    }

O resultado no terminal será:

    O valor atual de x é 0
    O valor atual de x é 1
    O valor atual de x é 2
    O valor atual de x é 3
    O valor atual de x é 4
    O valor atual de x é 5
    O valor atual de x é 6
    O valor atual de x é 7
    O valor atual de x é 8
    O valor atual de x é 9
    O valor atual de x é 10

Quando *X* se tornou *11* o bloco de código não foi mais executado pois o valor não é menor que *10* e nem igual ao mesmo.

Mas e se quisessemos executar um loop sem parar, o que poderiamos fazer?
***Alerta:** Com grandes loops vem grandes responsabilidades.*

**Ex2:**

    while (true)
    {
        char condition = get_char("Você deseja continuar usando o programa? [S/N]");

        if (condition == 's' || condition == 'S')
        {
            printf("Programa continua em execução.");
        }
        else if (condition == 'n' || condition == 'N')
        {
            printf("Encerrando a execução.");
            break;
        }
        else
        {
            printf("Opção inválida, responda 'S' continuar ou 'N' não continuar");
        }
    }

Aqui no exemplo acima temos um **loop** infinito, mas temos a responsabilidade de definir o seu ponto de parada em algum momento pois um loop infinito continuará executando infinitamente e consumindo recursos computacionais de forma indesejada.

## For

No loop **for** definimos 3 pontos.

1. *Condição de inicio ou variavel de inicio;*
2. *Condição de parada;*
3. *Incremento do valor.*

Mas você deve estar se perguntando o que eu quero dizer com isso, e é aí que entra nosso exemplo.

**Ex:**

    //Laço repete enquanto o i for menor que 50
    //mas quando ele se tornar igual o loop para
    for (int i = 0; i < 50; i++)
    {
        printf(i);
    }
