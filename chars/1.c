#include "stdio.h"
int main(){
    printf("input a character:\n");
    int c = gerchar();
    printf("\n%c inputted!\n", c);
    putchar(c);
    return 0;
}