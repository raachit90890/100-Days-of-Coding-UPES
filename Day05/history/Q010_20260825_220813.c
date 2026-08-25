#include <stdio.h>

int main() {
    int seconds,hours,minutes;
    printf("write the input in seconds");
    scanf("%d",&seconds);
    minutes=hours/minutes;
    hours=minutes/60;
    seconds=(minutes/100);
    printf("the time is %d:%d:%d",hours,minutes,seconds);
    return 0;
}
