#include <stdio.h>
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

    int user_time,
        hour,
        minute,
        departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        arrival[] = {616, 712, 811, 900, 968, 1075, 1160, 1358};
        

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    for(int i = 0; i <= 7; i++){
        int k = i+1;
        int aprox = departure[i] + (departure[k]-departure[i])/2;
    if(user_time < aprox){
         printf("Closest departure time is %d:%02d, arrival at %d:%02d", departure[i]/60, departure[i]%60, arrival[i]/60, arrival[i]%60);
         break;
    }
    else if(i == 7 && user_time > aprox){
       printf("Closest departure time is %d:%02d, arrival at %d:%02d", departure[7]/60, departure[7]%60, arrival[7]/60, arrival[7]%60);
    }
}
}