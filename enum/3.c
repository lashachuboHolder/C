#include <stdio.h>
typedef enum
 {
    READ  = 1 << 0,  WRITE = 1 << 1,  EXEC  = 1 << 2 
} AccessLevel;

// Printing current status:
void printAccess(int access) {
    printf("Current access:\n");
    if (access & READ)  printf("- Read\n");
    if (access & WRITE) printf("- Write\n");
    if (access & EXEC)  printf("- Execute\n");
    if (access == 0)    printf("- (no rights)\n");
}


int main(void) {
    int userAccess = 0; // No rights yet.
    int choice;
    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Add READ\n");   printf("2. Add WRITE\n");  printf("3. Add EXECUTE\n");
        printf("4. Remove READ\n");  printf("5. Remove WRITE\n"); printf("6. Remove EXECUTE\n");
        printf("7. Toggle READ\n");  printf("8. Toggle WRITE\n");   printf("9. Toggle EXECUTE\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);  if (choice == 0) break;

        switch(choice) {
            case 1: userAccess |= READ; break;       // add:
            case 2: userAccess |= WRITE; break;
            case 3: userAccess |= EXEC; break;
            case 4: userAccess &= ~READ; break;      // remove
            case 5: userAccess &= ~WRITE; break;
            case 6: userAccess &= ~EXEC; break;
            case 7: userAccess ^= READ; break;       // toggle:
            case 8: userAccess ^= WRITE; break;
            case 9: userAccess ^= EXEC; break;
             default: printf("Invalid choice!\n"); continue;
        }
        printAccess(userAccess);
    }  // while
    return 0;
}