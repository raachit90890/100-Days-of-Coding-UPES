#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1, s2;
    int i, flag = 0;

    printf("Enter first student details:\n");
    scanf("%d %49s %f", &s1.roll, s1.name, &s1.marks);

    printf("Enter second student details:\n");
    scanf("%d %49s %f", &s2.roll, s2.name, &s2.marks);

    if(s1.roll != s2.roll || s1.marks != s2.marks)
    {
        flag = 1;
    }

    for(i = 0; s1.name[i] != '\0' || s2.name[i] != '\0'; i++)
    {
        if(s1.name[i] != s2.name[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Structures are identical");
    }
    else
    {
        printf("Structures are not identical");
    }

    return 0;
}