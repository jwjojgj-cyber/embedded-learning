#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    int repeat[10] = {0, 0, 0, 0, 0, 0, 0, 0};
    long digit, n, any;
    any = 0;

    printf("enter a number: ");
    scanf("%ld", &n);
    

    while(n>0){
        digit = n%10;
        repeat[digit] += 1;
        n /=10;
    }
    printf("Digit:\t\t0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:\t");
    
    for(int i = 0; i<=9; i++){
            printf("%d  ", repeat[i]);
        }
    
} 