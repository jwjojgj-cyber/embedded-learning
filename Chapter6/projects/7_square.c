//Prints a table of squares using a while statement
#include <stdio.h>

int main(void){
    int n, i, odd = 3, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of enteries on the table: ");
    scanf("%d", &n);

    for( i = 1, square = 1 ;i<=n;i++, odd+=2){

        printf("%d\t%d\n",i, square);
        square+=odd;
    }
    return 0;
}