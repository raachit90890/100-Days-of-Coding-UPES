#include <stdio.h>

int main() {
    int a;
    printf("write a three digit number");
    scanf("%d",&a);
    int b = a/100;
    int c = (a/10)%10;
    int d = a%10;
    if (b>c && b>d)
    printf(" largest number is b");
    else if (c>b && c>d)
    printf("largest number is c");
    else (d>c && d>b);
    printf("largest number is d");
    return 0;
}
