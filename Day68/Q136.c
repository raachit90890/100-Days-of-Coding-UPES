#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADD:
            printf("Sum = %d", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d", a * b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}