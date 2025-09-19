#include <stdio.h>

int main(void){
    int numerator, denumerator, a, b, reminder;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denumerator);

    a = numerator;
    b = denumerator;
    
    while (a !=0){
        reminder = b % a;

        b = a;
        a = reminder;
    }
    printf("%d/%d", numerator/b, denumerator/b);
}
