#include <stdio.h>

int main(void){
    long  i, sum = 0;
    printf("Enter I:");
    scanf("%ld", &i);

    while(i !=0){
        sum += i;
        scanf("%ld", &i);
    }
}