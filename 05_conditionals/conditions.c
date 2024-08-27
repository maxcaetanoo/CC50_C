#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter value for X: ");
    int y = get_int("Enter value for Y: ");

    if (x < y)
    {
        printf("%i is less that %i.\n", x, y);
    }
    else if (x > y)
    {
        printf("%i is greater that %i.\n", x, y);
    }
    else
    {
        printf("%i and %i are equals.\n", x, y);
    }
}