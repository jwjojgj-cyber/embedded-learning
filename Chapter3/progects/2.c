#include <stdio.h>
int main(void)
{
    int item,day, mounth, year;
    float price;

    printf("Enter item number:");
    scanf("%d", &item);

    printf("Enter item price:");
    scanf("%f", &price);

    printf("Enter a date(day/mounth/year):");
    scanf("%d/%d/%d", &day, &mounth, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.2f\t%.2d/%.2d/%.4d",item,price,day,mounth,year);

    return 0;
}