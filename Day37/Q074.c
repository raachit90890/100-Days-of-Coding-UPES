#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
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
        for(j = 0; j < col; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    return 0;
}