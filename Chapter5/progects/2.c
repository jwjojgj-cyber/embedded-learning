#include <stdio.h>

int hour, minutes;

int main(){
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if(hour == 0)            printf("Equivalent 12-hour time:%.2d:%.2d AM",hour +12, minutes);
    else if(hour<12)          printf("Equivalent 12-hour time:%.2d:%.2d AM",(hour), minutes);
    else if(hour==12)         printf("Equivalent 12-hour time:%.2d:%.2d PM",(hour), minutes);
    else if(hour>12)         printf("Equivalent 12-hour time:%.2d:%.2d PM",(hour-12), minutes);
}