//determi9ne the lenght of the message
#include <stdio.h>

int main(void){
int i = 0;

printf("Enter a message: ");

while (getchar() != '\n')  i++;

 printf("Your message contains %d character", i);
}