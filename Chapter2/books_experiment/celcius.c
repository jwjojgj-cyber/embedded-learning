#include <stdio.h>

#define FREEZING_POINT  32.0f

#define SCALE_FACTOR  (5.0F/9.0F)

int main(void)
{
    
    float celsium, farenhait;
    printf("Enter Farenhait temperature:");
    scanf("%f", &farenhait);
    celsium = (farenhait-FREEZING_POINT)* SCALE_FACTOR;
    printf("Converted temperature in CELCIUM is = %.1f",celsium);
    return 0;
}