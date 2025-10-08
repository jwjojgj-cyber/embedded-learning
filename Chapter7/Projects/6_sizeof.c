#include <stdio.h>

int main(void){
    printf("Short is %zu \n Int is %zu \n long is %zu \n float is %zu \n double is %zu \n long double is %zu ", sizeof(short), sizeof(int), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));
}