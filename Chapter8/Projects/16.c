#include <stdio.h>
#include <ctype.h>

int main(){
    printf("Enter first word: ");

    int index,
    letters[26] = {};
    
    char c;

    while( (c = getchar()) != '\n'){
        if(isalpha(c)){
            c = tolower(c);
            index = c - 'a';
            letters[index] += 1;
        }
    }

    printf("Enter second word: ");

    while( (c = getchar()) != '\n'){
        if(isalpha(c)){
            c = tolower(c);
            index = c - 'a';
            letters[index] -= 1;
        }
    }

    int zero = 1;

    for(int i = 0; i < 26; i++){
        if(letters[i] != 0){
         zero = 0; 
         break;
        }
    }
    if(zero)
        printf("The word are anagrams");
    else
        printf("The words are not anagrams");

}
