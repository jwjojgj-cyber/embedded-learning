#include <stdio.h>
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
int main(void)
{
    int num1, num2, num3, num4, num5,num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;

    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&num1, &num2, &num3, &num4, &num5,&num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",num1, num2, num3, num4, num5,num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);

    int row_sums, column_sums, diagonal_sums;

    printf("Row sums:\t%d\t%d\t%d\t%d\n",num1+num2+num3+num4,num5+num6+num7+num8,num9+num10+num11+num12,num13+num14+num15+num16);
    printf("Colume sums:\t%d\t%d\t%d\t%d\n",num1+num5+num9+num13,num2+num6+num10+num14,num3+num7+num11+num15,num4+num8+num12+num16);
    printf("Colume sums:%d\t%d\n",num1+num6+num11+num16,num4+num7+num10+num13);

    return 0;
}