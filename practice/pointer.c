// 1) Swap two integers using pointers

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

// 2) Create an array of pointers to integers and print values

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", *arr[i]);
    }
    
    return 0;
}

// 3) Use double pointers to modify a pointer variable

#include <stdio.h>

int main() {
    int x = 100;
    int* ptr = &x;
    int** dptr = &ptr;
    
    **dptr = 200;
    
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("**dptr = %d\n", **dptr);
    
    return 0;
}

// 4) Find the maximum value in an array using pointers

#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    int size = 5;
    int* ptr = arr;
    int max = *ptr;
    
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
    printf("Max: %d\n", max);
    
    return 0;
}

// 5) Reverse an array using pointers

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int* start = arr;
    int* end = arr + size - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

// 6) Create a linked list from an array and print it

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

int A[8] = {3, 7, 1, 9, 4, 2, 8, 5};

int main() {
    Node* p = NULL;
    Node* q;
    size_t n = sizeof(Node);
    
    for (int i = 7; i >= 0; i--) {
        q = malloc(n);
        q->next = p;
        q->value = A[i];
        p = q;
    }
    
    while (q != NULL) {
        printf("%d -> ", q->value);
        q = q->next;
    }
    printf("NULL\n");
    
    return 0;
}

// 7) Find the maximum value in a linked list

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p = NULL;
    Node* q;
    int arr[] = {5, 12, 3, 9, 15, 7};
    
    for (int i = 5; i >= 0; i--) {
        q = malloc(sizeof(Node));
        q->val = arr[i];
        q->next = p;
        p = q;
    }
    
    int max = INT_MIN;
    q = p;
    while (q != NULL) {
        if (q->val > max) {
            max = q->val;
        }
        q = q->next;
    }
    
    printf("Max: %d\n", max);
    
    return 0;
}

// 8) Concatenate two linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p1 = NULL;
    Node* p2 = NULL;
    Node* q;
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    for (int i = 2; i >= 0; i--) {
        q = malloc(sizeof(Node));
        q->val = arr1[i];
        q->next = p1;
        p1 = q;
    }
    
    for (int i = 2; i >= 0; i--) {
        q = malloc(sizeof(Node));
        q->val = arr2[i];
        q->next = p2;
        p2 = q;
    }
    
    if (p1 != NULL) {
        q = p1;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p2;
    }
    
    q = p1;
    while (q != NULL) {
        printf("%d -> ", q->val);
        q = q->next;
    }
    printf("NULL\n");
    
    return 0;
}

// 9) Remove all odd values from a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p = NULL;
    Node* q;
    Node* tmp;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    for (int i = 7; i >= 0; i--) {
        q = malloc(sizeof(Node));
        q->val = arr[i];
        q->next = p;
        p = q;
    }
    
    while (p != NULL && p->val % 2 == 1) {
        tmp = p;
        p = p->next;
        free(tmp);
    }
    
    if (p != NULL) {
        q = p;
        while (q != NULL) {
            if (q->next == NULL) break;
            while (q->next != NULL && q->next->val % 2 == 1) {
                tmp = q->next;
                q->next = tmp->next;
                free(tmp);
            }
            q = q->next;
        }
    }
    
    q = p;
    while (q != NULL) {
        printf("%d ", q->val);
        q = q->next;
    }
    
    return 0;
}

// 10) Count the number of elements in a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p = NULL;
    Node* q;
    int arr[] = {10, 20, 30, 40, 50};
    
    for (int i = 4; i >= 0; i--) {
        q = malloc(sizeof(Node));
        q->val = arr[i];
        q->next = p;
        p = q;
    }
    
    int count = 0;
    q = p;
    while (q != NULL) {
        count++;
        q = q->next;
    }
    
    printf("Length: %d\n", count);
    
    return 0;
}

// 11) Free all memory in a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p = NULL;
    Node* q;
    
    for (int i = 3; i > 0; i--) {
        q = malloc(sizeof(Node));
        q->val = i * 10;
        q->next = p;
        p = q;
    }
    
    q = p;
    while (q != NULL) {
        printf("%d ", q->val);
        q = q->next;
    }
    printf("\n");
    
    q = p;
    while (q != NULL) {
        Node* tmp = q;
        q = q->next;
        free(tmp);
    }
    
    printf("Memory freed\n");
    
    return 0;
}

// 12) Insert node at the beginning with user input

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node* p = NULL;
    Node* q;
    int x;
    
    printf("Enter numbers (negative to stop):\n");
    while (1) {
        scanf("%d", &x);
        if (x < 0) break;
        q = malloc(sizeof(Node));
        q->val = x;
        q->next = p;
        p = q;
    }
    
    q = p;
    while (q != NULL) {
        printf("%d > ", q->val);
        q = q->next;
    }
    
    return 0;
}

// Print addresses and values using pointers

#include <stdio.h>

int main() {
    int i = 7;
    double m = 3.14;
    int* p = &i;
    double* pm = &m;
    
    printf("%p %p\n", p, pm);
    printf("%d %g\n", *p, *pm);
    
    return 0;
}

// increment pointers

#include <stdio.h>

int main() {
    int i = 5;
    double m = 2.5;
    int* p = &i;
    double* pm = &m;
    
    printf("Before: %p %p\n", p, pm);
    p++;
    pm++;
    printf("After: %p %p\n", p, pm);
    
    return 0;
}

