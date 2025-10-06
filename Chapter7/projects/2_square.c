//Prints a table of squares using a while statement
#include <stdio.h>

int main(void){
    int n, case1;
    for(;;){
    printf("This program prints a table of squares.\n");
    printf("Enter number of enteries on the table: ");
    scanf("%d", &n);
    printf("(1 = short; 2 = int; 3 = long; 4 = longlong): ");
    scanf("%d", &case1);
    getchar();
    switch (case1)
    {
    case 1:
        for(short i = 1;i<=n;i++){
             printf("%hd\t%hd\n",i,(short)(i * i));
             if( i % 24 == 0){
                printf("Press Enter to continue...");
                while(getchar() != '\n');
                }
             }
        break;
    case 2:
        for(int i = 1;i<=n;i++){
             printf("%d\t%d\n",i,i * i);
             if( i % 24 == 0){
                printf("Press Enter to continue...");
                while(getchar() != '\n');
                }
        }
        break;
    case 3:
        for(long i = 1;i<=n;i++){
             printf("%ld\t%ld\n",i,i * i);
             if( i % 24 == 0){
                printf("Press Enter to continue...");
                while(getchar() != '\n');
                }
        }
        break;    
    case 4:
        for(long long i = 1;i<=n;i++){
             printf("%lld\t%lld\n",i,i * i);
             if( i % 24 == 0){
                printf("Press Enter to continue...");
                while(getchar() != '\n');
                }
        }
        break;    
    default:
        return 0;
    }
    }
}
        