#include <stdio.h>

int main(){
    int size = 0;
    printf("This program creates a magic square of a specified size.\n"
            "The size must be an odd number betrween 1 and 99.\n"
            "Enter the size of magic square: ");
        while(1){
            printf("Enter the size of magic square: ");
            if (scanf("%d", &size) != 1) {
                printf("Value is not a number\n");
                while(getchar() != '\n')
                ;
                continue;
            }
            if(size <= 0 || size > 99){
                printf("Value is out of sight\n");
                while(getchar() != '\n')
                ;
                continue;
            }
            if(size % 2 == 0){
                printf("Value is not odd\n");
                while(getchar() != '\n')
                ;
                continue;
            }
            
            break;
        }

    int fe[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            fe[i][j] = 0;
        }
    }


     int x = 0;
     int y = (size/2);

    for(int i = 1; i <= size*size; i++){

        fe[x][y] = i;

        int new_x = ((x - 1)+ size)%size;
        int new_y = (y + 1) %size;
        if(fe[new_x][new_y] == 0){
        x = new_x;
        y = new_y;
        }
        else
        x = (x + 1) % size;
    }

    for(int i = 0; i < size; i++){
        printf("\n");
        for(int j = 0; j < size; j++){
            printf("   %d", fe[i][j]);
        }
    }
}