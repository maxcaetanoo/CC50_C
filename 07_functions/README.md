# Functions

**Functions** ou funções são, como o nome já sugere funcionalidades que podem ser executadas repetidas vezes e de diversos locais da aplicação.
Temos os seguintes tipos de funções:

* *Funções com parâmetros;*
* *Funções sem parâmetros;*
* *Funções com retorno;*
* *Funções sem retorno.*

E podem existir variações um dos dois primeiros juntamente com um dos dois ultimos.

**Ex1:**

    // Essa é nossa função sem parâmetros e sem retorno
    void helloWorld(void)
    {
        printf("Hello, World!\n");
    }

    int main(void)
    {
        // Aqui efetuamos a chamada da função
        helloWorld();
    }

**Ex2:**

    //Essa é uma função com parâmetros para execução e sem retorno
    void counter(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("%i\n", i);
        }
    }

    int main(void)
    {
        //Aqui efetuamos a execução passando o valor que será passado como parâmetro
        counter(5);
    }

Nosso código executará uma conta de 0 até 5 graças ao nosso laço for que será executado dentro da função.
