#include <stdio.h>

int main(void){
    int temp [5] [5] = {0};
    int total = 0, min = 0, max = 0, j = 0,  i = 0;
    for( i = 0; i < 5; i++){
        printf("Student %d: ",i+1);
        for( j = 0; j < 5; j++){
            scanf("%d", &temp[i][j]);
        }
    }
     for(int i = 0; i < 5; i++){
        printf("\nStudent %d: ",i+1);
        min =  temp[i][0];
        max =  temp[i][0];

        for(int j = 0; j < 5; j++){
           total += temp[i][j];
           if(temp[i][j] > max)
                max = temp[i][j];
            if(temp[i][j] < min)
                min = temp[i][j];
        }
        printf("Total score: %d ", total);
        printf("Average score: %f ", (float) total/5);
        printf("Min: %d ", min);
        printf("Max: %d ", max);
        total = 0;
}

     for(int i = 0; i < 5; i++){
        printf("\nQuiz %d: ",i+1);
        min =  temp[0][i];
        max =  temp[0][i];

        for(int j = 0; j < 5; j++){
           total += temp[j][i];
           if(temp[j][i] > max)
                max = temp[j][i];
            if(temp[j][i] < min)
                min = temp[j][i];
        }
        printf("Average score: %f ",(float) total/5);
        printf("Min: %d ", min);
        printf("Max: %d ", max);
        total = 0;
}
}