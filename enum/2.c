#include <stdio.h>
typedef enum {
    READ   = 1 << 0,  // 1
    WRITE = 1 << 1,  // 2
    EXEC    = 1 << 2   // 4
} AccessLevel;

void printAccess(int access) {
    if (access & READ)   printf("- Read access\n");
    if (access & WRITE) printf("- Write access\n");
    if (access & EXEC)    printf("- Execute access\n");
}

int main( ) {
    int userAccess = READ | EXEC; // inicial state: only read and execute

    printf("Initial access:\n");
    printAccess(userAccess);

    userAccess ^= WRITE;    printf("\nAfter toggling WRITE:\n");  printAccess(userAccess);
    userAccess ^= EXEC;       printf("\nAfter toggling EXEC:\n");     printAccess(userAccess);
    userAccess ^= READ;      printf("\nAfter toggling READ:\n");     printAccess(userAccess);

    return 0;
}