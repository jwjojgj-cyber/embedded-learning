//check numbers for digital repits

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    long digit, n;

    printf("enter a number: ");
    scanf("%ld", &n);

    while(n>0){
        digit = n%10;
        if (digit_seen[digit])
        break;
        else digit_seen[digit] = true;
        n /=10;
    }
    if(n<= 0) printf("There's no repetetive numbers");
    else printf(" %ld is a repetetive number", digit);
}