#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum = 0;

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
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum Sum = %d", maxSum);

    return 0;
}