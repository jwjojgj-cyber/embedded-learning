#include <stdio.h>

int main(void){
    char ch;
    printf("Enter your number: ");
    while(getchar() != '\n'){
    ch = getchar();
    if(ch>47 && ch < 58 || ch == 45 )
        printf("ch");
    }
}