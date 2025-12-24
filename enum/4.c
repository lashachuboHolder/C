#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i, count = 0;
    srand(time(NULL)); 

    for ( i = 0; i < 100; i++)
     {
        int num = rand() % 201; 
        if ((num & (1 << 2)) && !(num & (1 << 3))) count++;
     }

    printf("Count of numbers with 3rd bit = 1 and 4th bit = 0: %d\n", count);

    return 0;
}