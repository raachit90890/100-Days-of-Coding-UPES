#include <stdio.h>

int main() {
    int a =10,b=20;
    printf("before swapping a,b is %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a,b are %d %d\n",a,b);
    return 0;

}
