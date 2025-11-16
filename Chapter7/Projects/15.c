/*#include <stdio.h>

int main(void){
    int n;
    long double  result = 1;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    //if(n>7){
    for(int i=1; i<=n; i++){
        result *= (long double)i;
    }
    printf("Factorial of %d: %.0lf\n", n, result);
}*/
#include <stdio.h>

int main(void) {

    int i, n;
    long double fact = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = n; i > 1; i--)
        fact *= i;

    printf("Factorial of %d: %Lf\n", n, fact);

    return 0;
}