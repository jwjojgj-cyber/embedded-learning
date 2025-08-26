//convert in octa

#include <stdio.h>

int main(void){

    int n, n1, n2, n3, n4, n5, n6;

    printf("Enter a number between 0 and 32767:");
    scanf("%d", &n);

    n5 =n%8;

    n4 = n/8%8;

    n3 = n/64%8;

    n2 = n/64/8%8;

    n1 = n/64/64%8;

    printf("In octal, your number is:%d%d%d%d%d",n1, n2 ,n3 , n4, n5);

    return 0;
}