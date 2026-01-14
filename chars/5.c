#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(void){
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);

    char arr[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arr[i] = 'a' + rand() % 26;
    }

    printf("random letters; ");
    for(int i = 0; i < n; i++){
        putchar(arr[i]);
        putchar(' ');
    }
    printf("\n");
    return 0;
}