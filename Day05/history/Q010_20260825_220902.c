#include <stdio.h>

int main() {
    float seconds,hours,minutes;
    printf("write the input in seconds");
    scanf("%f",&seconds);
    minutes=hours/minutes;
    hours=minutes/60;
    seconds=(minutes/100)*100;
    printf("the time is %d:%d:%d",hours,minutes,seconds);
    return 0;
}
