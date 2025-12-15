#include <stdio.h>
#define N 10

    
int main(void){
    int a[N], i;
    #define N_SIZE (sizeof(a)/sizeof(a[0]))

    printf("Enter %d numbers: ", N);
    for(i=0; i<N_SIZE; i++){
        scanf("%d", &a[i]);
    }
        printf("Reverse: ");

    for(i=N_SIZE-1; i>=0; i--){
        printf("%d ", a[i]);
    }
}