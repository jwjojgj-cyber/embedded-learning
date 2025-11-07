#include <stdio.h>
#include <math.h>

int main(void){
    double old_number, new_number, initial = 1, avg = 1;
    

    printf("Enter a positive number: ");
    scanf(" %lf", &old_number);
/*
    do{
        initial = avg;
        new_number = old_number/initial;
        avg = (initial + new_number)/2;
    }while(fabs((initial-avg)) > 0.00001 * avg);
    printf("Square root: %lf", avg);
 */
    while(fabs((initial-((initial + old_number/initial)/2))) > 0.00001 * initial){
        initial = ((initial + (old_number/initial))/2);
    }
    printf("Square root: %lf", (initial + (old_number/initial))/2);
   
}