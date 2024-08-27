#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");

    float z = (float)x / (float)y;

    printf("%i / %i = %f\n", x, y, z);
}