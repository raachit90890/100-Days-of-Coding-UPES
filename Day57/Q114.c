#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, len = 0;
    int count, max = 0, repeat;

    printf("Enter a string: ");
    scanf("%99s", s);

    while(s[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
        count = 0;

        for(j = i; j < len; j++)
        {
            repeat = 0;

            for(k = i; k < j; k++)
            {
                if(s[j] == s[k])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;

            if(count > max)
                max = count;
        }
    }

    printf("Longest substring length = %d", max);

    return 0;
}