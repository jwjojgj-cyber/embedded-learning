#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(){
    int h = 0; int v = 0;
 char map[SIZE][SIZE] = {};
    
    for(int  i = 0; i < SIZE; i++){
        for(int  j = 0; j < SIZE; j++){
             map[i][j] = '.';
        }
    }
    char letter = 'A';
    map[0][0] = letter;
    srand((unsigned) time(NULL));
    
    while(letter < 'Z'){
        letter++;
        int move = 0;
        int direction[4] = {0, 0, 0, 0};
        int dir = 0;
        int tried = 0;

        while( !move && tried < 4){
           dir =  rand() % 4;
           if(direction[dir]) continue;
            direction[dir] = 1;
            int nh = h;
            int nv = v;

            if(dir == 0) nh--;
            else if(dir == 1) nh++;
            else if(dir == 2) nv--;
            else if(dir == 3) nv++;
        
            if(nh < 0 || nh > SIZE || nv < 0 || nv > SIZE){
                tried++;
               continue;
           } 

          if(map[nh][nv] != '.'){
            tried++;
            continue;
           } 

           move = 1;
           map[nh][nv] = letter;
           h = nh;
            v = nv;
      }
    
            for(int  i = 0; i < SIZE; i++){
              printf("\n");
               for(int  j = 0; j < SIZE; j++){
                 printf("  %c", map[i][j]);
               }
             }
    }
}