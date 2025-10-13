#include <stdio.h>
#include <ctype.h>

int main(void) {
    char part;
    int armHour, hour, minute;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hour, &minute, &part);
    part = toupper(part);
    part = (part == 'P' ? 12 : 0);
    armHour = (part + (hour%12));

    printf("Equivalent 24-hour time: %d:%d", armHour, minute);
}