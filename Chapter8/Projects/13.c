#include <stdio.h>
#include <ctype.h>

int main(void){
    int c;
    char firstInitial,
    second[20] = {};
    int i = 0;
    printf("Enter a first and last name: ");
    scanf(" %c", &c);
    firstInitial = c;

    while(getchar() != ' ');
    while((c=getchar()) == ' ');

     for (i = 0;c != '\n' && c < 19;i++){
        second[i] = c;
        c = getchar();
     }

     printf("You entered a name: ");
     
    for( int j = 0; j < i; j++){
        printf("%c", second[j]);
    }

    printf(", %c", firstInitial);
}