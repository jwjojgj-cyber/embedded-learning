#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

 int main() {
    const int SIZE = 10;
    const int LETTERS = 26;
    char arr[SIZE] [SIZE];
    int move  = 0, i = 0, j = 0, k = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            arr[i][j] = '.';
        }
    }

    // Seed the random number generator
    srand((unsigned int)time(NULL));
    \
    for( k = 0; k < LETTERS; ) {
    
            if(arr[i - 1][j] != '.' || arr[i + 1][j] != '.' || arr[i][j - 1] != '.' || arr[i][j + 1] != '.') {
                break;
            }
            move = rand() % 4;
            if (move == 0) {
                if 
                i-1;
                arr[i - 1][j] = 'A' + k;
            }
            if (move == 1) {
                i+1;
                arr[i + 1][j] = 'A' + k;
            }
            if (move == 2) {
                j-1;
                arr[i][j - 1] = 'A' + k;
            }
            if (move == 3) {
                j+1;
                arr[i][j + 1] = 'A' + k;
            }
        }
    for (i = 0; i < SIZE; i++) {
        printf("\n");
        for (j = 0; j < SIZE; j++) {
            printf(" %c ", arr[i][j]);
        }
 }
}

