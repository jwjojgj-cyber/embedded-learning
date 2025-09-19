#include <stdio.h>

int main(void){
    int d, n;
    printf ("Enter number: ");
    scanf("%d", &n);
    for( d = 2; d * d <= n; d++){
        if (n % d == 0)
        break;
    }
    if (d*d <= n)
     printf("%d is dyvisible by %d", n, d);
    else
        printf("%d is a prime number", n);
}