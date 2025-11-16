#include <stdio.h>
#include <stdbool.h>

int main(){
    bool weekend[7] = {[0]= true, [6] = true};

    for(int i = 0; i <= 6; i++){
        printf("%d ", weekend[i]);
    }
}