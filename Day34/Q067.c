#include <stdio.h>

int main()
{
    int a[100], n, i, pos, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 0 || n >= 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}