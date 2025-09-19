#include <stdio.h>

int main(void){

    int n1, a=0, reminder;

    printf("Enter a whatever-digits number:");
    scanf("%d",&n1);
    do {
        reminder = n1 % 10;
        a = a*10 + reminder;

    } while (n1 != 0);

    printf("The reversal is:%d",a);

    return 0;
}