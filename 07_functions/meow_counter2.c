#include <stdio.h>

void counter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Meow %i\n", i);
    }
}

int main(void)
{
    counter(5);
}