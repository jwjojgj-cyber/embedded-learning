#include <stdio.h>

int main(void){

int i = 7, j=0;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);

    return 0;
    }