#include <stdio.h>

int main(void){

    int n1,n7,n8,n9,n5,n6,n2,n3,n4,n10,n11,n12;
    printf("Enter the UPC code:");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    printf("Check digit is: %d", (9-((((3*(n2+n4+n6+n8+n10+n12))+(n1+n3+n5+n7+n9+n11))-1)%10)));

    return 0;

}