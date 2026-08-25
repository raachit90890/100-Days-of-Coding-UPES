#include <stdio.h>

int main() {
    char a;
    printf("write any character");
    scanf("%c",&a);
    if (a>= 'A' && a<='Z')
    {printf("the char is uppercase");}
    else if( a>= 'a' && a>= 'z'){printf("the char is lowercase");}
    else if(a >='0' && a <= '9'){
        printf("the char is numerical");
    }
    else{
        printf("the char is special character");
    }

    return 0;

}
