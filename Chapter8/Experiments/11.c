#include <stdio.h>

#define VERT 8
#define HORIZ 8
int main(){
    char checker_board[VERT][HORIZ] = {{}};

   /* for(int i = 0; i < VERT; i++){
        for(int j = 0; j < HORIZ; j++){
            if((i+j)%2 == 0)
            printf("B ");
            else printf("R ");
        }
        printf("\n");
    }
        */

        for(int i = 0; i < VERT; i++){
        for(int j = 0; j < HORIZ; j++){
            checker_board[i][j] = (i+j)%2 == 0 ? 'B' : 'R';
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
}