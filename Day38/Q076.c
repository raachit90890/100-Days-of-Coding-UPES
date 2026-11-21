#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, flag = 0;

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

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not a Symmetric Matrix");
    }

    return 0;
}