#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%49s", s.name);

        printf("Roll number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n",
                s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("Error reading file");
        return 1;
    }

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%49s %d %f",
                 s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(fp);

    return 0;
}