#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, temp;

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

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    if(k < 0)
    {
        printf("Invalid rotations");
        return 0;
    }

    k = k % n;

    for(i = 1; i <= k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Rotated array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}