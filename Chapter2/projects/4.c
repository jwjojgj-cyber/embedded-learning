#include <stdio.h>;

int main(void)
{
    float your_money;

    printf("Enter an amount:");
    scanf("%f", &your_money);

    printf("With tax added %.2f", your_money * 1.05 );
    return 0;
}