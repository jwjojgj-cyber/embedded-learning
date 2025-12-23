#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    char sudo[20] = {};
    int lengh = 0;
    printf("Enter your number: ");



    for(lengh = 0;(sudo[lengh] = toupper((unsigned char)getchar())) != '\n'; lengh++){
        if(sudo[lengh] == ' ') lengh--;
    }

    printf("In numeric form: ");

    for(int i = 0; i <= lengh; i++){
        if(sudo[i]>47 && sudo[i] < 58 || sudo[i] == 45 )
        printf("%c", sudo[i]);
    else if(sudo[i]>64 && sudo[i] < 91 )
        switch(sudo[i]){
            case 'A': case 'B': case 'C':
                 printf("2"); 
                 break;
            case 'D': case 'E': case 'F':
                 printf("3"); 
                 break;
            case 'G': case 'H': case 'I':
                  printf("4"); 
                  break;
            case 'J': case 'K': case 'L':
                 printf("5"); 
                 break;
            case 'M': case 'N': case 'O':
                 printf("6"); 
                 break;
            case 'P': case 'R': case 'S':
                  printf("7"); 
                  break;
            case 'T': case 'U': case 'V':
                 printf("8"); 
                 break;
            case 'W': case 'X': case 'Y':
                 printf("9"); 
                 break;

    }
}
}