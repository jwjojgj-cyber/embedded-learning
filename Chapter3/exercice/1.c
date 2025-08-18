#include <stdio.h>

int main(void)
{
    printf("%6d, %4d\n", 86, 1040); //oooo86 1040
    printf("%12.5e\n", 30.253); //ooo3.0235e+01
    printf("%.4f\n",83.162); //83.1620
    printf("%-6.2g\n", .0000009979); //9.979e-7
    return 0;
}