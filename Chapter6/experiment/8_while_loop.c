#include <stdio.h>

int main(void){
    int i = 10;
    int s = 20;
    while( s >=1){
    printf("%d ",i++);
    i /=2;
    s -=1;
    }
}
