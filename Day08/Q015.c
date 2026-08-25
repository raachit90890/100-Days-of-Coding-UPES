#include <stdio.h>

int main() {
    char a;
    printf("write any character\n");
    scanf("%c",&a);
    if (a>= 'A' && a<='Z')
    {printf("the char is uppercase\n");}
    else if( a>= 'a' && a>= 'z'){printf("the char is lowercase\n");}
    else if(a >='0' && a <= '9'){
        printf("the char is numerical\n");
    }
    else{
        printf("the char is special character\n");
    }

    return 0;

}
