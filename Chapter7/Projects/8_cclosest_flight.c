#include <stdio.h>
#include <ctype.h>
// I was writing a program that display thge closest next flight(obviously, but the ttask was to display the closest, I've already saw the sollution, what a pity
// but anyway I'll write that program to grasp the idea even better
/*     
int main(void){
    int hour, minutes, time;
    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minutes);

    time = hour * 60 + minutes;

    if(time<=480)         printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m.");
    else if(time<=583)    printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m.");
    else if(time<=679)    printf("Closest departure time is 11:19 a.m, arriving at 1:31  p.m.");
    else if(time<=767)    printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m.");
    else if(time<=840)    printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m.");
    else if(time<=945)    printf("Closest departure time is 3:35 p.m, arriving at 5:55 p.m.");
    else if(time<=1140)    printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m.");
    else if(time<=1350)    printf("Closest departure time is 9:45 a.m, arriving at 11:58 p.m.");
}
    */



int main(void) {
    char part;
    int user_time,
        hour,
        minute,
        d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hour, &minute, &part);
    part = toupper(part);
    part = (part == 'P' ? 12 : 0);
    user_time = (part + (hour%12))*60 + minute;

    if (user_time < d1 + (d2-d1)/2)        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m.");
    else if(user_time < d2 + (d3-d2)/2)    printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m.");
    else if(user_time < d3 + (d4-d3)/2)    printf("Closest departure time is 11:19 a.m, arriving at 1:31  p.m.");
    else if(user_time < d4 + (d5-d4)/2)    printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m.");
    else if(user_time < d5 + (d6-d5)/2)    printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m.");
    else if(user_time < d6 + (d7-d6)/2)    printf("Closest departure time is 3:35 p.m, arriving at 5:55 p.m.");
    else if(user_time < d7 + (d8-d7)/2)    printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m.");
    else                                 printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m.");
}