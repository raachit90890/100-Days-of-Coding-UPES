#include <stdio.h> //simple and compunt intrest Q9
#include<math.h>
int main() {
    int p,r,t;
    printf("write the principle amount,rate of intrest per year,time");
    scanf("%d%d%d",&p,&r,&t);
    printf("the simple rate of intrest is %d\n",(p*r*t)/100);
    printf("the compound intrest is %f\n", p* pow( (1+r/n) , t,n));
    return 0;

}
