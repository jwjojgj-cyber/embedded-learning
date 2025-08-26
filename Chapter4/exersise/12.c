#include <stdio.h>

int main(void){
   int i = 5, j;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
    return 0;
}