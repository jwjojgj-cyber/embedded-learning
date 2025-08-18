#include <stdio.h>

int main(void)
{
    int day, mounth, year;

    printf("Enter a date(day/mounth/year):");
    scanf("%d/%d/%d", &day, &mounth, &year);

    printf("You entered a day:%.4d%.2d%.2d",year, mounth, day);

    return 0;
}