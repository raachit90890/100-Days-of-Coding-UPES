#include <stdio.h>

int main()
{
    int nums[100], n, i, j, count;
    int majority = -1;

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
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("Majority Element = %d", majority);

    return 0;
}