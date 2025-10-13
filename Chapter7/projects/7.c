/* Adds two fractions */

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operation;

    printf("Enter first fraction + second fraction: ");
    scanf(" %d /%d %c  %d /%d", &num1, &denom1, &operation, &num2, &denom2);

    switch(operation){
        case '-':{
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        }
        case '+':{
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        }
        case '*':{
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        }
        case '/':{
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
        }
        default : {
        printf("Operator %c does not supported", operation);
        return 1;
        }
    }
    int gcd =  result_num;
    int tnum = result_denom;
    while(tnum != 0){
        int i = gcd%tnum;
        gcd = tnum;
        tnum = i;
    }
    result_num /=gcd;
    result_denom/=gcd;

    if(result_num < result_denom )
        printf("The result is %d/%d\n", result_num, result_denom);
    else if(result_num > result_denom)
         printf("The result is %d %d/%d\n",result_num/result_denom, result_num%result_denom, result_denom);
      else 
         printf("1");
    return 0;
}