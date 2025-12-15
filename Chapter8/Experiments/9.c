#include <stdio.h>
#define HOURS 24
#define MOUNTH 30

int main(){
    const int temperature_readings[HOURS] [MOUNTH] = {{100, 1, 1, 1, 1, 1, 0},
                                 {1000, 1, 1, 0, 0, 0, 0},
                                 {1000, 1, 0, 1, 1, 0, 1}, 
                                 {1100, 1, 1, 1, 0, 0, 1}, 
                                 {1100, 1, 1, 0, 0, 1, 1}, 
                                 {1000, 0, 1, 1, 0, 1, 1}, 
                                 {1000, 0, 1, 1, 1, 1, 1}, 
                                 {1000, 1, 1, 0, 0, 0, 0}, 
                                 {100, 1, 1, 1, 1, 1, 1}, 
                                 {100, 1, 1, 1, 0, 1, 1},};

    int  mounth_avg = 0, i;

    for(i = 0; i < MOUNTH; i++){
        for(int j = 0; j < HOURS; j++){
            mounth_avg += temperature_readings[j] [i];
        }
    }
    mounth_avg = mounth_avg/(MOUNTH*HOURS);
    printf("%d",  mounth_avg);
}