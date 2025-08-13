#include <stdio.h>

int main(){
    int height, lenght, width, volume, weight;
    printf("Write the height of the box: ");
    scanf("%d", &height);
    printf("Write the lenght of the box: ");
    scanf("%d", &lenght);    
    printf("Write the width of the box: ");
    scanf("%d", &width);
    volume = height*lenght*width;
    weight = (volume+165)/166;
    printf("Dimentions:%d,%d,%d\nVolume:%d\nWeight:%d",height,lenght,width,volume,weight);
}