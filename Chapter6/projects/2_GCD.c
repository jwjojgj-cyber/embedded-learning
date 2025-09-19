#include <stdio.h>

int main(void){
    int m, n, reminder;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n, &m);
    while(n != 0){
   // if (n==0) printf("%d is the greatest common divisor.\n", m);
   // else {
        reminder = m % n;
        m = n;
        n = reminder;
//    }
    }
    printf("%d is the greatest common divisor.", m);
}