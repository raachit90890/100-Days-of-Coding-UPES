#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student *p;

    p = (struct Student *)malloc(sizeof(struct Student));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &p->roll);

    printf("Enter name: ");
    scanf("%49s", p->name);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    printf("\nStudent Details:\n");
    printf("Roll = %d\n", p->roll);
    printf("Name = %s\n", p->name);
    printf("Marks = %.2f\n", p->marks);

    free(p);

    return 0;
}