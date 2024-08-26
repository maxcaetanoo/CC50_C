#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numberOne = get_int("Enter the first number for addition: ");
    int numberTwo = get_int("Enter the second number for addition: ");

    int sumNumbers = numberOne + numberTwo;

    printf("The sum of numbers %i and %i is equal to %i\n", numberOne, numberTwo, sumNumbers);
}