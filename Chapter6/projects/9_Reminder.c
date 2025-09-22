#include <stdio.h>

int main (void)
{
    float loan, interest, payment, mounth_inerest, numOfPayment;

    printf("Enter amont of loan:");
    scanf("%f",&loan);

    printf("Enter interest rate:");
    scanf("%f", &interest);

    printf("Enter monthly payment:");
    scanf("%f", &payment);

    printf("Enter the number of payment:");
    scanf("%f", &numOfPayment);

    interest = interest/1200;

    for(int i = 1; i<=numOfPayment; i++){
         mounth_inerest = loan * interest;
         loan = loan - payment + mounth_inerest;

         printf("Balance after %d payment:%.2f\n",i, loan);
   
    if(i<numOfPayment){
        printf("Enter monthly payment:");
        scanf("%f", &payment);
    }
    }

    return 0;
}
