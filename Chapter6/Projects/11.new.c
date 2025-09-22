#include <stdio.h>

int main(void){
    int n, deff;
    float e = 1.0f;
    printf("Enter the level of aproximation:");
    scanf("%d", &n);

    for(int i = 1, deff = 1; i <= n; i++){
        e += 1.0f/(deff*=i);
    }
    printf("%f",e);
}
