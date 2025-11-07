#include <stdio.h>

int main() {
    float num1, num2, result;
    char opperator;

    printf("Enter an expression: ");
    scanf(" %f", &num1);

    while (1) {
        if (scanf(" %c", &opperator) != 1)  // <-- note the space here
            break;

        if (opperator == '\n')
            break;

        scanf(" %f", &num2);

        switch (opperator) {
            case '*': result = num1 * num2; break;
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '/': result = num1 / num2; break;
            default:
                printf("Invalid operator %c\n", opperator);
                continue;
        }
        num1 = result;
    }

    printf("Value of expression: %g\n", result);
    return 0;
}
