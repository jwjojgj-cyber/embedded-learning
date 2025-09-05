#include <stdio.h>
int main(void){
    int grade;
    printf("Enter numeric grade: ");
    scanf("%d", &grade);
    if (grade>100 || grade < 0) 
        printf("Error, invalid grade");
    else {
        grade /=10;
    
        switch(grade){
        case 1:case 2:case 3:case 4:case 5:  printf("F"); break;
        case 6:  printf("D"); break;
        case 7:  printf("C"); break;
        case 8:  printf("B"); break;
        case 9: case 10:  printf("A"); break;
        }
    }
} 