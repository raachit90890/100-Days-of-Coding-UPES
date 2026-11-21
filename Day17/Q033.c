#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;
    int count = 0, temp, i, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    if(n < 0)
    {
        printf("Not an Armstrong Number");
        return 0;
    }

    do
    {
        count++;
        temp = temp / 10;
    }
    while(temp > 0);

    temp = n;

    do
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= count; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }
    while(temp > 0);

    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}