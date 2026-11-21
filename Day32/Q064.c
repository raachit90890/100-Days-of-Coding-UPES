#include <stdio.h>

int main()
{
    int n, rem, i, max = 0, digit = 0;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        rem = n % 10;

        if(rem < 0)
            rem = -rem;

        count[rem]++;
        n = n / 10;
    }
    while(n != 0);

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }

    printf("Most frequent digit = %d\n", digit);
    printf("Frequency = %d", max);

    return 0;
}