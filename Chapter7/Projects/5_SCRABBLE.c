#include <stdio.h>
#include <ctype.h>

int main(void){
    int i, sum = 0;
    char ch;
    printf("Enter a word :");
    while((ch = getchar()) != '\n'){
         ch = toupper(ch);

         switch(ch){
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            i = 1;
            break;

            case 'D': case 'G':
            i = 2;
            break;

            case 'B': case 'C': case 'M': case 'P':
            i = 3;
            break;
            
            case 'F': case 'H': case 'V': case 'W': case 'Y': 
            i = 4;
            break;

            case 'K': 
            i = 5;
            break;

            case 'J': case 'X':
            i = 8;
            break;

            case 'Q': case 'Z':
            i = 10;
            break;
         }
         sum +=i;
        }
        printf("Scrabble value: %d", sum);
}