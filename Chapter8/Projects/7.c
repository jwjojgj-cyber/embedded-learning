#include <stdio.h>
#include <ctype.h>

int main(void){
    int temp [5] [5] = {0};
    for(int i = 0; i < 5; i++){
        printf("Enter row %d: ",i);
        for(int j = 0; j < 5; j++){
            temp[i][j]= getchar();
        }
    }
  printf("1");
}