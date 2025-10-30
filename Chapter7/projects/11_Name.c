#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, firstInitial;
    printf("Enter a first and last name: ");
    scanf(" %c", &c);
    firstInitial = c;

    while(getchar() != ' ');
    while((c=getchar()) == ' ');
    do
    {
        putchar(c);
        c = getchar();
    } while (c != '\n');
    printf(", %c", firstInitial);

}
/*
#include <stdio.h>

int main(void) {
    char c, first_initial;

    printf("Enter a first and last name: ");

    // Skip initial spaces
    while ((c = getchar()) == ' ');

    first_initial = c; // Save first letter

    // Skip rest of first name
    while ((c = getchar()) != ' ' && c != '\n');

    // Skip spaces before last name
    while ((c = getchar()) == ' ');

    // Print last name
    do {
        putchar(c);
        c = getchar();
    } while (c != ' ' && c != '\n');

    // Print result
    printf(", %c.\n", first_initial);

    return 0;
}
    */
