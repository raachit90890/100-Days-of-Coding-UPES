#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, k;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(k = 0; k < 2 * n - 1; k++)
    {
        for(i = 0; i < n; i++)
        {
            j = k - i;

            if(j >= 0 && j < n)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}