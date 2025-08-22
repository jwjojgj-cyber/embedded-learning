#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter your phone number [(xxx) xxx-xxxx]:");
    scanf("(%d)%d-%d", &num1, &num2, &num3);

    printf("You entered %d.%d.%d", num1, num2, num3);

    return 0;
}