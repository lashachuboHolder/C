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




int main(int argc, char *argv[]) {
    printf("TPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPW\n");
    printf("Q   DOUBLE POINTER EXAMPLES IN C            Q\n");
    printf("TPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPW\n\n");

    example1_basic();
    example2_modify_pointer();
    example3_dynamic_allocation();
    example4_2d_array();
    example5_string_array();


    printf("All examples completed successfully!\n");

    return 0;
}
