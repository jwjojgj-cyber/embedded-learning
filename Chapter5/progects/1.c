#include <stdio.h>

int main(void){

    long long d;
    long long i = 9;
    int answer = 1;

    printf("Enter a positive digit:");
    scanf("%lld", &d);

    while(d>i){
        i = i * 10 + 9;
        answer++;
    }
    printf("%d", answer);
}