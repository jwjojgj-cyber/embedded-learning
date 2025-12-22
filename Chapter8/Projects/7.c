#include <stdio.h>

int main(void){
    int temp [5] [5] = {0};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        printf("Enter row %d: ",i+1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &temp[i][j]);
        }
    }

    printf("%-15s","Row totals: ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           sum += temp[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

     printf("%-15s","\nColumn totals: ");
     for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           sum += temp[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
}