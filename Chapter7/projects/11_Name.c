#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, ch;
    printf("Enter a first and last name: ");
    scanf(" %c", &c);

    while(getchar() != ' ');
    
    do
    {
        scanf(" %c", &ch);
        printf("%c", ch);
    } while (ch != '\n');
    printf("%c", c);

}