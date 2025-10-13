#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    int i = 0;
    printf("Enter a sentence to count the vowels:");
    while((c = getchar()) != '\n'){
        c = toupper(c);
        if(c == 'A' || c == 'E' || c == 'U' || c == 'I' || c == 'O' )
        i++; 
    }
    printf("Your sentence contains %d vowels.", i);
    
}