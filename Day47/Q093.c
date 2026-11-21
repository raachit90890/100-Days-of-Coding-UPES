#include <stdio.h>

int main()
{
    char a[100], b[100];
    int count[26] = {0};
    int i, flag = 0;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] < 'a' || a[i] > 'z')
        {
            printf("Enter lowercase letters only");
            return 0;
        }

        count[a[i] - 'a']++;
    }

    for(i = 0; b[i] != '\0'; i++)
    {
        if(b[i] < 'a' || b[i] > 'z')
        {
            printf("Enter lowercase letters only");
            return 0;
        }

        count[b[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}