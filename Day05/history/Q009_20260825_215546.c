#include <stdio.h> //simple and compunt intrest Q9
#include<math.h>
int main() {
    float p,r,t;
    printf("write the principle amount,rate of intrest per year,time");
    scanf("%d%d%d",&p,&r,&t);
    printf("the simple rate of intrest is %d\n",(p*r*t)/100);
    float cp = p * pow((1+r/100),t);
    printf("the compound intrest is %f\n",cp);
    return 0;

}
