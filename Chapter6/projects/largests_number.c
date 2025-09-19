#include <stdio.h>

int main(void){
    printf("This program finds the largest number. Write 0 to elemunate the progtam\n");
    int i = 1;
    float l;
    float ll = 0;
    for(;;){
        printf("Enter a number:");
        scanf("%f", &l);
        if (l == 0) break;
        if (l>ll) ll = l;
    } 
    printf("The largest number is %f", ll);
}