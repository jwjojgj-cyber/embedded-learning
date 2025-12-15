#include <stdio.h>
#define POSITION 8
#define RANK 8
int main(){
   char chess_board[POSITION][RANK] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {' ','.',' ','.',' ','.',' ','.'},
        {'.',' ','.',' ','.',' ','.',' '},
        {' ','.',' ','.',' ','.',' ','.'},
        {'.',' ','.',' ','.',' ','.',' '},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };

for(int i = 0; i < POSITION; i++){
    for(int j =0;  j < RANK; j++){
        printf("%c ", chess_board [i] [j]);
    }
    printf("\n");
}
}