//sums a series of numbers
#include <stdio.h>

int main(void){
    int sum = 0, i;

    printf("THis program shows the sum of integers\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d", &i);
    while(i != 0){
        sum +=i;
        scanf("%d", &i);   
    }
    printf("Sum is %d", sum);
}