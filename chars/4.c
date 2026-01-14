#include "stdio.h"

int main(){
int c; 
int spaces = 0; int letters = 0;
while((c = getchar()) != '\n'){
    if (c == ' ') spaces ++;
    if (c == 'a') letters++;
}
while(getchar() != '\n');

printf("\nSpaces: %d\nLetter 'a': %d\n", spaces, letters);
return 0;
}