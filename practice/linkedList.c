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