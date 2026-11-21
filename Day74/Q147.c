#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    FILE *fp;

    fp = fopen("employee.dat", "wb");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%49s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    fp = fopen("employee.dat", "rb");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    if(fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("\nEmployee Details:\n");
        printf("ID = %d\n", e.id);
        printf("Name = %s\n", e.name);
        printf("Salary = %.2f\n", e.salary);
    }

    fclose(fp);

    return 0;
}