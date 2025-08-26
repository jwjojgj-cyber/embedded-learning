
// compound Assighment(side efect) difference
 
#include <stdio.h>

int main(void) {
    int a[3] = {5, 50, 100};
    int i = 0;

    a[i++] += 5;   // compound assignment
    printf("a[0]=%d, a[1]=%d, i=%d\n", a[0], a[1], i);

    i = 0;         // reset i
    a[i++] = a[i++]+a[i++] + 5;   // looks "the same"
    printf("a[0]=%d, a[1]=%d, i=%d\n", a[0], a[1], i);

    return 0;
}