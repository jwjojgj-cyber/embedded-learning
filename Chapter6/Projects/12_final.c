#include <stdio.h>

int main(void){
    int  deff;
    float e = 1.0f, n, edler=1;
    printf("Enter themin step:");

    scanf("%f", &n);

    for(int i = 1, deff = 1; e > n; i++){
        e = 1.0f/(deff*=i);
        edler +=e;
    }
    printf("%f",edler);
}
