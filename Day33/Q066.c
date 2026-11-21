#include <stdio.h>

int main()
{
    int a[100], n, num, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 0 || n >= 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements in ascending order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    pos = 0;

    while(pos < n && a[pos] < num)
    {
        pos++;
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}