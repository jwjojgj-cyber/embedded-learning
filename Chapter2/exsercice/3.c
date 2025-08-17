#include <stdio.h>

int main(){
    int height = 15 , lenght = 8 , width = 10 , volume, weight;

    volume = height*lenght*width;
    
    printf("Dimentions:%d,%d,%d\nVolume:%d\nWeight:%d" , height , lenght , width , volume , ( volume + 165 ) / 166 ) ;
}