#include <stdio.h>
#include <ctype.h>

#define SIZE 80

int main(){
    char message[SIZE] = {};
    int i = 0;
    printf("Enter message to be encrypted: ");

    for( i = 0; i < SIZE; i++ ){
        message[i] = getchar();
        if(message[i] == '\n') break;
    }

    int shift; 

    printf("Enter shift amount (1-25):  ");
    scanf("%d", &shift);

    printf("Encrypted message: ");

    for(int k = 0; k < i; k++){
        if(message[k] >= 'a' && message[k] <= 'z'){
           message[k] = ((message[k] - 'a')+shift)%26 + 'a';
           printf("%c", message[k]);
        }
        else if(message[k] >= 'A' && message[k] <= 'Z'){
         message[k] = ((message[k] - 'A')+shift)%26 + 'A';
          printf("%c", message[k]);
        }
        else{
            printf("%c", message[k]);
        }
    }



    

    printf("%d", i);
}