#include <stdio.h>

int main() {
    char a;
    printf("write a char to check its a vowel or not\n");
    scanf("%c",&a);
    if ((a == 'a') || (a== 'e') || (a == 'i') || (a == 'o') || (a=='u') )
    printf("the char is a vowel");
    else 
    printf("the char is consant");
    return 0;

}
