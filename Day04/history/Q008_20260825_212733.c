#include <stdio.h> // sum of first n natural numbers

int main() {
    int n;
    printf("write the n for the first natural numbers \n");
    scanf("%d",&n);
    printf("the sum till nth term is %d", n*(n+1)/2);
    return 0;

}
