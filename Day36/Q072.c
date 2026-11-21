#include <stdio.h>

int main()
{
    int a[10][10], row, col, i, j, sum = 0;

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
        for(j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}