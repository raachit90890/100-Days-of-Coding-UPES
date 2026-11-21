#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int row, col, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if(row < 1 || row > 10 || col < 1 || col > 10)
    {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < row; i++)
    {
        sum[i] = 0;

        for(j = 0; j < col; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < row; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}