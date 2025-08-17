#include <stdio.h>

int main(void)
{
    int money, twenty, ten, five, two, one;

    printf("Enter a dollar amount:");
    scanf("%d", &money);

    twenty = money/20;
    money = money-20*twenty;
    printf("20$:%d\n", twenty);

    ten = money/10;
    money = money-10*ten;
    printf("10$:%d\n", ten);

    five = money/5;
    money = money-5*five;
    printf("5$:%d\n", five);

    two = money/2;
    money = money-2*two;
    printf("2$:%d\n", two);

    one = money/1;
    money = money-1*one;
    printf("1$:%d\n", one);

    printf("money:%d", money);
}