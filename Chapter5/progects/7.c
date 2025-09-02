#include <stdio.h>

    int main(void){
    int max1, min1, max2, min2, n1, n2, n3, n4;

        printf("Enter 4 digits:");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        if(n1>n2){
            max1 = n1;
            min1 = n2;
        } else{
            max1 = n2;
            min1 = n1;
        }

        if(n3>n4){
            max2 = n3;
            min2 = n4;
        } else{
            max2 = n4;
            min2 = n3;
        }

        if(max1>max2) printf("Largest:%d\n",max1);
        else          printf("Largest:%d\n",max2);  
        
        if(min1>min2) printf("Smallest:%d\n",min2);
        else          printf("Smallest:%d\n",min1);  
    }
