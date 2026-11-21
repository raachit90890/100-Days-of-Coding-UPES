#include <stdio.h>

int main()
{
    int n, first, last, temp, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = last * power + (n % power - last) + first;

    printf("Number after swapping = %d", result);

    return 0;
}