#include <stdio.h>

int main(void){

    int n, n1, n2, n3;
/*
    printf("Enter a two-digits number:");
    scanf("%1d%1d",&n1,&n2);

    printf("The reversal is:%d%d",n2,n1);
*/
    printf("Enter a three-digits number:");
    scanf("%d",&n);

    n1=n/100;

    n2=(n-n1*100)/10;

    n3=n%10;

    printf("The reversal is:%d%d%d",n3,n2,n1);

    return 0;
}