#include "stdio.h"
int main(){
    int i; char c;
    for (i = 0; i < 3; i++){
        printf("\ninput a symbol");
        c = getchar();
        printf("\nyou entered %c", c);
        
    }
}

