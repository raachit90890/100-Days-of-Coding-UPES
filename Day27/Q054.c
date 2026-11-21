#include <stdio.h>

int main()
{
    int i, j;

    printf("*\n");

    for(i = 2; i <= 8; i = i + 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 6; i >= 2; i = i - 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("*\n");

    return 0;
}