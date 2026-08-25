#include <stdio.h>

int main() {
    int c;
    int a = 10;
    int b =20;
    printf("before the swapping a = %d and b = %d\n", a,b);
    c=b;
    a=b;
    c=a;
    printf("after swapping a = %d and b = %d\n",a ,b);
    return 0;

}
