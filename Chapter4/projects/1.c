#include <stdio.h>

int main(void){

    int n1, n2, n3;
/*
    printf("Enter a two-digits number:");
    scanf("%1d%1d",&n1,&n2);

    printf("The reversal is:%d%d",n2,n1);
*/
    printf("Enter a two-digits number:");
    scanf("%d",&n1);

    n2=n1/10;

    n3=n1%10;

    prinf("The reversal is:%d%d",n2,n3);

    return 0;
}