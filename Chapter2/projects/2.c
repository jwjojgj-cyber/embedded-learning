#include <stdio.h>
#define P 3.14
#define VOLUME_FORMULA (4.0f/3.0f) 
int main(void)
{
    int radius = 10;
    float volume;
   
    volume = VOLUME_FORMULA*P*radius*radius*radius;
    printf("%f", volume);
   
    return 0;
}