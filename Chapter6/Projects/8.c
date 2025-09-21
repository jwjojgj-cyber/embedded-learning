#include <stdio.h>

int main(void){

    int day, dOfWeek, i, ii;

    printf("Enter number of days in month: ");
    scanf("%d", &day);

    printf("Enter starting day of the week (1-Sun), (7-Sat): ");
    scanf("%d", &dOfWeek);

    for(ii=1;ii < dOfWeek; ii++) printf("    ");

    for(i = 1; i <= day; i++){
        printf("%4d", i);

        if(dOfWeek == 7){
           printf("\n");
           dOfWeek = 0;
        } 

        dOfWeek++;
    }
}