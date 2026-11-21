#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student topper(struct Student s[])
{
    int i, max = 0;

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[5], top;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    top = topper(s);

    printf("\nTop Student:\n");
    printf("Name = %s\n", top.name);
    printf("Roll = %d\n", top.roll);
    printf("Marks = %.2f\n", top.marks);

    return 0;
}