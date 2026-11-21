#include <stdio.h>

int main()
{
    int nums[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter sorted array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("First index = %d\n", first);
    printf("Last index = %d", last);

    return 0;
}