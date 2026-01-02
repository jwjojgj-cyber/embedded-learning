#include <stdio.h>
#include <ctype.h>

int main(){
    int c = 0, i = 0, repetition = 0;
    char sentence[40] = {};

    
    printf("Enter a sentence: ");

    while((c = getchar()) != '.' && c != '!' && c != '?' && c != '\n'){
        sentence[i] = c;
        i++;
    }
    printf("Reverse of sentence: ");

    int counter = 0;
    int end = i-1;

    for(int j = i - 1; j >= 0; j--){
        while(j > 0 && sentence[j] !=' '){
            j--;
        }
        for(int k = j; k <= end;k++ ){
              printf("%c", sentence[k]);
        }
        end = j;
    }
    printf("%c", c);
}
    
    
  /*  
    for(int j = i - 1; j >= 0; j--){
        int oldcounter = counter;
        if(sentence[j] != ' '){
         counter++;
        }
        else if(j == 0){
             while(counter > 0){
            printf("%c", sentence[++j]);
            counter--;
            }
        }
        else{
            while(counter > 0){
            printf("%c", sentence[++j]);
            counter--;
            }
        }
        j -= oldcounter;
    }
}
    */