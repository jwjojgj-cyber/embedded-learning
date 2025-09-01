// print a date in legal form
#include <stdio.h>

int main(void){

    int day, month, year;

    printf("Enter day/month/year:");
    scanf("%d / %d / %d", &day, &month, &year);

    printf("Dated this %d", day);
    switch (day){
        case 1 : case 21 : printf("st"); break;
        case 2 : case 22 : printf("nd"); break;
        case 3 : case 23 : printf("rd"); break;
        default : printf("th");          break;
    }

    printf("day of ");
    switch (month){
        case 1 : printf("January "); break;
        case 2 : printf("Fabruary "); break;
        case 3 : printf("March "); break;
        case 4 : printf("April "); break;
        case 5 : printf("May "); break;
        case 6 : printf("June "); break;
        case 7 : printf("July "); break;
        case 8 : printf("Agust "); break;
        case 9 : printf("September "); break;
        case 10 : printf("October "); break;
        case 11 : printf("November "); break;
        case 12 : printf("December "); break;
    }
    if (year<99)
    printf("20%.2d", year);
    else printf("%d", year);
}