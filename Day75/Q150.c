#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s;
    struct Student *p;

    p = &s;

    printf("Enter roll number: ");
    scanf("%d", &p->roll);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    p->marks = p->marks + 10;

    printf("\nUpdated Student Details:\n");
    printf("Roll = %d\n", p->roll);
    printf("Marks = %.2f", p->marks);

    return 0;
}