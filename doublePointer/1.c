#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Example 1: Basic double pointer concept
void example1_basic() {
    printf("=== Example 1: Basic Double Pointer ===\n");

    int value = 42;
    int *ptr = &value;        // Single pointer to value
    int **doublePtr = &ptr;   // Double pointer to ptr

    printf("Value: %d\n", value);
    printf("Value via *ptr: %d\n", *ptr);
    printf("Value via **doublePtr: %d\n", **doublePtr);

    printf("Address of value: %p\n", (void*)&value);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Address stored in doublePtr: %p\n\n", (void*)doublePtr);
}

// Example 2: Modifying pointer through double pointer
void modifyPointer(int **pp, int *newTarget) {
    *pp = newTarget;  // Change what the original pointer points to
}

void example2_modify_pointer() {
    printf("=== Example 2: Modifying Pointer via Double Pointer ===\n");

    int a = 10, b = 20;
    int *ptr = &a;

    printf("Before: *ptr = %d\n", *ptr);

    modifyPointer(&ptr, &b);

    printf("After: *ptr = %d\n\n", *ptr);
}

// Example 3: Dynamic memory allocation (common use case)
void allocateMemory(int **ptr, int size) {
    *ptr = (int*)malloc(size * sizeof(int));
}

void example3_dynamic_allocation() {
    printf("=== Example 3: Dynamic Memory Allocation ===\n");

    int *array = NULL;
    allocateMemory(&array, 5);

    if (array != NULL) {
        for (int i = 0; i < 5; i++) {
            array[i] = i * 10;
        }

        printf("Array contents: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", array[i]);
        }
        printf("\n\n");

        free(array);
    }
}

// Example 4: 2D array (array of arrays)
void example4_2d_array() {
    printf("=== Example 4: 2D Array with Double Pointer ===\n");

    int rows = 3, cols = 4;

    // Allocate array of pointers
    int **matrix = (int**)malloc(rows * sizeof(int*));

    // Allocate each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Fill matrix
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }

    // Print matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Example 5: Array of strings (char**)
void example5_string_array() {
    printf("=== Example 5: Array of Strings ===\n");

    char **names = (char**)malloc(4 * sizeof(char*));

    names[0] = strdup("Alice");
    names[1] = strdup("Bob");
    names[2] = strdup("Charlie");
    names[3] = strdup("Diana");

    printf("Names:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d: %s\n", i + 1, names[i]);
    }
    printf("\n");

    // Free memory
    for (int i = 0; i < 4; i++) {
        free(names[i]);
    }
    free(names);
}

// Example 6: Function that returns pointer via parameter
void createArray(int **arr, int size, int startValue) {
    *arr = (int*)malloc(size * sizeof(int));
    if (*arr != NULL) {
        for (int i = 0; i < size; i++) {
            (*arr)[i] = startValue + i;
        }
    }
}

void example6_return_via_parameter() {
    printf("=== Example 6: Returning Pointer via Parameter ===\n");

    int *myArray = NULL;
    createArray(&myArray, 6, 100);

    if (myArray != NULL) {
        printf("Array: ");
        for (int i = 0; i < 6; i++) {
            printf("%d ", myArray[i]);
        }
        printf("\n\n");
        free(myArray);
    }
}

// Example 7: Pointer to pointer arithmetic
void example7_pointer_arithmetic() {
    printf("=== Example 7: Pointer to Pointer Arithmetic ===\n");

    int values[] = {10, 20, 30, 40, 50};
    int *ptrs[5];

    // Create array of pointers to each value
    for (int i = 0; i < 5; i++) {
        ptrs[i] = &values[i];
    }

    int **pp = ptrs;  // Point to first pointer in array

    printf("Using double pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("**(pp + %d) = %d\n", i, **(pp + i));
    }
    printf("\n");
}

// Example 8: Swapping pointers
void swapPointers(int **p1, int **p2) {
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void example8_swap_pointers() {
    printf("=== Example 8: Swapping Pointers ===\n");

    int x = 100, y = 200;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Before swap:\n");
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    swapPointers(&ptr1, &ptr2);

    printf("After swap:\n");
    printf("*ptr1 = %d, *ptr2 = %d\n\n", *ptr1, *ptr2);
}

// Example 9: Command line arguments (main's argv is char**)
void example9_command_line_simulation() {
    printf("=== Example 9: Command Line Arguments Style ===\n");

    char *argv[] = {
        "program",
        "arg1",
        "arg2",
        "arg3",
        NULL
    };
    int argc = 4;

    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    printf("\n");
}

// Example 10: Linked list with double pointer for head modification
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insertAtHead(Node **head, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node **head) {
    Node *current = *head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

void example10_linked_list() {
    printf("=== Example 10: Linked List with Double Pointer ===\n");

    Node *head = NULL;

    insertAtHead(&head, 30);
    insertAtHead(&head, 20);
    insertAtHead(&head, 10);

    printf("List: ");
    printList(head);
    printf("\n");

    freeList(&head);
}

int main(int argc, char *argv[]) {
    printf("Q   DOUBLE POINTER EXAMPLES IN C            Q\n");
    printf("TPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPW\n\n");

    example1_basic();
    example2_modify_pointer();
    example3_dynamic_allocation();
    example4_2d_array();
    example5_string_array();
    example6_return_via_parameter();
    example7_pointer_arithmetic();
    example8_swap_pointers();
    example9_command_line_simulation();
    example10_linked_list();

    return 0;
}
