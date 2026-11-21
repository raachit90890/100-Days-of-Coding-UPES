#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joining;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%49s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &e.joining.day,
          &e.joining.month,
          &e.joining.year);

    printf("\nEmployee Details:\n");

    printf("ID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %.2f\n", e.salary);

    printf("Joining Date = %02d/%02d/%04d",
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}