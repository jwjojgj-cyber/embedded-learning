#include <stdio.h>

int main(void){
    int lenght = 0, counter = 0;
    float avg;
    char c;
    printf("Enter a sentence: ");
    c = getchar();
    while(1){
        if(c == ' ') {
            counter ++;
            c = getchar();
            if(c == '\n') break;
            continue;
        }else lenght++;
        c = getchar();
        if(c == '\n') break;
    }
    if (counter == 0)
    printf("Average word lenght: %d", lenght);
    else 
    printf("Average word lenght: %.1f", avg = (float)lenght/(counter+1));
    }