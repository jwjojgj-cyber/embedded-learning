#include <stdio.h>

int main(void){
    int e, ii = 0, mult = 1;
    float sum = 0, gsum = 1;
    printf("Enter the level of aproximation:");
    scanf("%d", &e);

        for(int i = 1; i <= e; i++){
            int k = i;
        
        for(; k > 0; k--){
            mult *=k;
        }
        sum =1.00f/mult;
        gsum +=sum;
    }
    printf("%f", gsum);
}
