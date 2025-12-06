#include <stdio.h>
#include <stdlib.h>

typedef struct chanatseri {
    struct chanatseri *next;
    int value;
} chanatseri;

int A[12] = {2, 5, -2, 4, -82, 11, 54, 3, 7, 44, 0, 3};

int main(void) {
    chanatseri *p = NULL, *q;
    int i;
    size_t n = sizeof(chanatseri);

    for (i = 11; i >= 0; i--) {
        q = malloc(n);
        if (q == NULL) { perror("malloc failed"); return(1); }
        q->next = p; q->value = A[i];  p = q;
    }

    printf("Printing: ");
    q = p;  
    while (q != NULL) { printf("%d -> ", q->value);  q = q->next;  }
    printf("NULL\n");

    // mexsierebis gantavisufleba:
    q = p;
    while (q != NULL) { chanatseri *tmp = q;  q = q->next;  free(tmp);  }

    return 0;
}