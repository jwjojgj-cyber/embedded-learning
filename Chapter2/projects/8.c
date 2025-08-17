#include <stdio.h>

int main (void)
{
    float loan, interest, payment, mounth_inerest;

    printf("Enter amont of loan:");
    scanf("%f",&loan);

    printf("Enter interest rate:");
    scanf("%f", &interest);

    printf("Enter monthly payment:");
    scanf("%f", &payment);

    interest = interest/1200;
    
    mounth_inerest = loan * interest;
    loan = loan - payment + mounth_inerest;
    printf("Balance after first payment:%.2f\n", loan);

    mounth_inerest = loan * interest;
    loan = loan - payment + mounth_inerest;
    printf("Balance after second payment:%.2f\n", loan);

    mounth_inerest = loan * interest;
    loan = loan - payment + mounth_inerest;
    printf("Balance after third payment:%.2f\n", loan);
    return 0;
}
