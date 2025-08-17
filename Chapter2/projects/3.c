#include <stdio.h>
#define P 3.14
#define VOLUME_FORMULA (4.0f/3.0f) 
int main(void)
{
    int radius;
    float volume;

    printf("Enter radius of the sphere:");
    scanf("%d", &radius);
   
    volume = (4.0f/3.0f)*P*radius*radius*radius;
    printf("%f", volume);
   
    return 0;
}