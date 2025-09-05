//count the tax

#include <stdio.h>

int main (void){
    float income, tax;
    

    printf("Enter the taxable income: ");
    scanf("%f", &income);

    if(income<750)
        tax = income * 0.01;
    else if (income < 2250)
        tax = 7.50f + ( 0.02 * (income - 750));
    else if (income < 3750)
        tax = 37.50f + ( 0.03 * (income - 2250));
    else if (income < 5250)
        tax = 82.50f + ( 0.04 * (income - 3750));
    else if (income < 7000)
        tax = 142.50f + ( 0.05 * (income - 5250));
    else 
        tax = 230.00f + ( 0.06 * (income - 7000));
    
    printf("Tax needed to be payed:%.2f", tax);
}