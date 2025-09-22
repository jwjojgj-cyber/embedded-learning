// checking for even square between 1 and n
#include <stdio.h>

int main(void){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int d = 2; d * d <= n ; d += 2)
        printf("%d\n", d * d );
}