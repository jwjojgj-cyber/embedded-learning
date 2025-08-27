//Calculate a broker's commission
#include <stdio.h>

int main(void){
float commission, value;

printf("Enter value of trade: ");
scanf("%f", &value);

if(value < 2500)
    commission = 30.00f + 0.017f * value;
else if (value < 6250)
       commission = 56.00f + 0.0066f * value;
else if (value < 20000)
    commission = 76.00f + 0.0034f * value;
else if (value < 50000)
    commission = 100.00f + 0.0022f * value;
else if (value < 500000)
    commission = 155.00f + 0.0011f * value;
else 
    commission = 255.00f + 0.0009f * value;

if (commission < 39)
    commission = 39.00f;

printf("Commision: $%.2f", commission);
}