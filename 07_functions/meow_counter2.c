#include <stdio.h>

void counter(int n);

int main(void)
{
    counter(5);
}

void counter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Meow %i\n", i);
    }
}