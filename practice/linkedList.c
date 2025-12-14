// 1) Create a linked list node structure and insert 3 nodes at the
//  beginning with values 10, 20, 30. Print all values.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = NULL;
    
    Node* node1 = (Node*)malloc(sizeof(Node));
    node1->data = 30;
    node1->next = head;
    head = node1;
    
    Node* node2 = (Node*)malloc(sizeof(Node));
    node2->data = 20;
    node2->next = head;
    head = node2;
    
    Node* node3 = (Node*)malloc(sizeof(Node));
    node3->data = 10;
    node3->next = head;
    head = node3;
    
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    return 0;
}

// 2) Find the length of a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;
    
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    printf("Length: %d\n", count);
    
    return 0;
}


// 3) Delete a node from the beginning of a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = NULL;
    
    Node* temp = head;
    head = head->next;
    free(temp);
    
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    return 0;
}


// 4) Append a node at the end of a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;
    
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 2;
    newNode->next = NULL;
    
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    return 0;
}


// 5) Search for a value in a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 5;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 15;
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 25;
    head->next->next->next = NULL;
    
    int search = 15;
    Node* current = head;
    int found = 0;
    
    while (current != NULL) {
        if (current->data == search) {
            found = 1;
            break;
        }
        current = current->next;
    }
    
    if (found) {
        printf("Found\n");
    } else {
        printf("Not found\n");
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

