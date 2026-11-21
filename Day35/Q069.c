#include <stdio.h>

int main()
{
    int a[100], n, i, max, second, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < max)
        {
            if(found == 0 || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    if(found == 1)
        printf("Second largest = %d", second);
    else
        printf("No second largest element");

    return 0;
}