#include <stdio.h>

int main(void)
{
    int prefix, identifier, publisher, item, check;

    printf(" Enter ISBN(978-0-393-97950-3):");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier,&publisher, &item, &check );

    printf("GS1 prefix :%d\n", prefix);
    printf("Group identifier:%d\n", identifier);
    printf("Publisher code:%d\n", publisher);
    printf("Item number:%d\n", item);
    printf("Check digit:%d\n", check);
    
    return 0;
}