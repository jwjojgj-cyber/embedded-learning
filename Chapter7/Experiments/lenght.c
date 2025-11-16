//determi9ne the lenght of the message
#include <stdio.h>

int main(void){
char h;
int i = 0;

printf("Enter a message: ");
h = getchar();
while (h != '\n'){
 i++;
 h = getchar();
 }
 printf("Your message contains %d character", i);
}