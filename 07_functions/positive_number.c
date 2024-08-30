#include <stdio.h>
#include <cs50.h>

int get_positive_integer(void);

int main(void)
{
    int number = get_positive_integer();

    printf("This number is positive and integer: %i\n", number);
}

int get_positive_integer(void)
{
    int num;

    do
    {
        num = get_int("Enter positive integer number: ");
    } while (num < 1);

    return num;
}