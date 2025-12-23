#include <stdio.h>
#include <ctype.h>

int main(void){
    int i, sum = 0, index = 0;
    char ch,
    scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                        1, 4, 4, 8, 4, 10};

    printf("Enter a word :");
    while((ch = getchar()) != '\n'){
         ch = toupper(ch);
         if(ch > 'A' && ch < 'Z'){
         index = ch - 'A';
         sum += scrabble[index];
         }
        }
        printf("Scrabble value: %d", sum);
}
   