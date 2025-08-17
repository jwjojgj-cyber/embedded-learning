#include <stdio.h>

int main(void)
{
    float x;
    float answer;

    printf("Set the value for x:");
    scanf("%f", &x);

    //answer = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    answer = ((((3*x+2)x-5)x-1)x+7)x-6;
    printf("%f", answer);

    return 0;
}