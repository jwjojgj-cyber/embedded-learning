//check numbers for digital repits

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    bool repeat[10] = {false};
    long digit, n, any;
    any = 0;

    printf("enter a number: ");
    scanf("%ld", &n);
    printf("repeated digit(s): ");

    while(n>0){
        digit = n%10;
        if (digit_seen[digit]){
        repeat[digit] = true;
        any = 1;}
        else digit_seen[digit] = true;
        n /=10;
    }
    if(!any) 
    printf("none");
    else{
        for(int i = 0; i<=9; i++){
            if(repeat[i])
            printf("%d ", i);
        }
    }
   // if(n<= 0) printf("There's no repetetive numbers");
   // else printf(" %ld is a repetetive number", digit);
} 