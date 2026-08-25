#include <stdio.h>

int main() {
    int c;
    int a = 10;
    int b =20;
    printf("before the swapping a = %d and b = %d\n", a,b);
    c=a;
    a=b;
    c=b;
    printf("after swapping a = %d and b = %d\n",a ,b);
    return 0;

}
