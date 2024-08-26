#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("What's your first name? ");
    scanf("%s", &name);

    printf("Hello, %s", name);
}