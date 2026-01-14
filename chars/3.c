#include "stdio.h"

int main(){
int c;
printf("only the first world will be read ")
while((c = getchar()) != '\n'){
    putchar(c);
}
while(getchar() != '\n');

printf("\ninput cleared");
return 0;
}