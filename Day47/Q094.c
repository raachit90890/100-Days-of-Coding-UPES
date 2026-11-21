#include <stdio.h>

int main()
{
    char str[100], word[100];
    int i, count = 0, max = 0;
    int start = 0, pos = 0, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' ||
           str[i] == '\0')
        {
            if(count > max)
            {
                max = count;
                pos = start;
            }

            count = 0;
            start = i + 1;
        }
        else
        {
            count++;
        }

        if(str[i] == '\0')
            break;
    }

    for(j = 0; j < max; j++)
    {
        word[j] = str[pos + j];
    }

    word[j] = '\0';

    printf("Longest word = %s\n", word);
    printf("Length = %d", max);

    return 0;
}