#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0 ||
       a + b <= c || b + c <= a || a + c <= b)
    {
        printf("Invalid Triangle");
    }
    else if(a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}