#include <stdio.h>

int main(void) {
    int n, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            goto gone;  // jump to label if divisor found
        }
    }

gone:   // label
    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is a prime number\n", n);
    }

    return 0;
}
