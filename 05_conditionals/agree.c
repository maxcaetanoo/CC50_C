#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char option = get_char("Do you agree this therms? [y/n] ");

    if (option == 'y')
    {
        printf("Agreed.\n");
    }
    else if (option == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid option %c.\n", option);
    }
}