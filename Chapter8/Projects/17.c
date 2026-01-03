#include <stdio.h>

int main(){
    int size = 0;
    printf("This program creates a magic square of a specified size.\n
        THe size must be an odd number betrween 1 and 99.\n
        Enter the size of magic square: ");
        while(1){
            scanf("%d" &size)
            if(size < 0 || size > 99){
                printf("Value is out of sight");
                while(getchar() != '\n')
                ;
                continue;
            }
            if(size % 2 == 1){
                printf("Value is not odd");
                while(getchar() != '\n')
                ;
                continue;
            }
        }
    int square;
}