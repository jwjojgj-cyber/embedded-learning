#include <stdio.h>
#include <ctype.h>

int main(void){
    char message[100] = {0};
    int i = 0;
    char ch;
    printf("Enter a message: ");
    while(( ch = getchar()) != '\n' && i < 100){
        message[i] = toupper(ch);
        i++;
    }
    printf("In B1FF-speak: ");
    for(int j = 0; j < i; j++){
        switch(message[j]){
            case 'A': message[j]= '4'; break;
            case 'B':  message[j]= '8'; break;
            case 'E':  message[j]= '3'; break;
            case 'I':  message[j]= '1'; break;
            case 'O':  message[j]= '0'; break;
            case 'S':  message[j]= '5'; break;
            default: break;
        }
    }
    for(int j = 0; j < i; j++){
        printf("%c",message[j]);
    }
    printf("!!!!!!!!!!");
}