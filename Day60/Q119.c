#include <stdio.h>

int main()
{
    int a[100], count[100] = {0};
    int n, i, num, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        num = a[i];

        if(num < 0 || num >= 100)
        {
            printf("Element out of range");
            return 0;
        }

        count[num]++;

        if(count[num] == 2)
        {
            repeated = num;
            break;
        }
    }

    printf("Repeated element = %d", repeated);

    return 0;
}