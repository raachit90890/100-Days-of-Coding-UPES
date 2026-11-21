#include <stdio.h>

int main()
{
    char str[100];
    int i, start = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if(start == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            start = 0;
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            start = 1;
        }
    }

    printf("Sentence case = %s", str);

    return 0;
}