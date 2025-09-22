#include <stdio.h>

int main(void){
    int e;
    float sum = 0, gsum = 1, mult = 1.00f;
    printf("Enter the level of aproximation:");
    scanf("%d", &e);

        for(int i = 1; i <= e; i++){
            int k = i;
        
        for(; k > 0; k--){
            mult *=k;
            //
        }
        sum =1.00f/mult;
        gsum +=sum;
        mult = 1.00f;
    }
    printf("%f",gsum);
   
}
// a better and more conciece sollution
/*
#include <stdio.h>

int main(void) {

    int i, n, denom;
    float e;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (i = 1, denom = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (denom *= i);
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}
*/


