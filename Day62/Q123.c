#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, hasText = 0, lastNewline = 0;

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;
        hasText = 1;

        if(ch == '\n')
        {
            lines++;
            lastNewline = 1;
        }
        else
        {
            lastNewline = 0;
        }

        if(ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    if(hasText == 1 && lastNewline == 0)
    {
        lines++;
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d", lines);

    return 0;
}