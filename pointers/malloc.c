#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    // Memory allocation. p now points to the allocated block (i.e., it stores its address). 
        p = malloc(sizeof(int)); // (int *)malloc()

    *p = 3;  // dereferencing. So we access the stored value.
		
    printf("\n %p %d", (void*)p, *p);

    free(p);  // ceaning up!

        p = malloc(sizeof(int));
    *p = 8;
    printf("\n %p %d", (void*)p, *p);
    free(p);  // cleaning up again!

    return 0;
}