#include <stdio.h>

int main(void){
    double  i, sum = 0;
    printf("Enter I:");
    scanf("%lf", &i);

    while(i !=0){
        sum += i;
        scanf("%lf", &i);
    }
    printf("Sum is %f", sum);
}