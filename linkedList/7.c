// 4. Modifying the list structure: removing the odd elements from the list

#include "stdio.h"
#include "stdlib.h" // for malloc()

typedef struct node
 {   int val;  node * next;   } node;

node * LL_odd_erase(node *a1)
{
    node *q, *tmp;

    if (a1 == NULL) return NULL;
   while (( a1 != NULL ) && (a1->val % 2 == 1))  // del odds from the beginning
    {    tmp = a1;  a1 = a1->next;  free(tmp);   }
    
    if (a1 == NULL) return NULL;  // if all elements were odd
    q = a1;  // Now we are "standing" on the node with even value

    while (q != NULL)
    {
        if (q->next == NULL)  return a1;
        while (q->next != NULL && (q->next->val % 2 == 1))
              {  tmp = q->next;   q->next = tmp->next;   free(tmp);  }
        q = q->next;
    }
     return a1;
}

int main(){
    node *p = NULL, *q;
    int x;
    int s = sizeof(node);
	
    printf("\n inserting values to list:\n");
    while(1)
     {
 	scanf(" %d", &x); if (x<0) break;
 	q = (node *)malloc(s);
 	q->val = x; q->next = p; p = q;
     }
    printf ("\nYour initial list is: ");	 
    while(q !=0) { printf("%d > ", q->val); q = q->next; } // just printing the list

    p = LL_odd_erase(p);
    printf ("\nYour cleaned list is: ");	 
    q = p;
    while(q !=0) { printf("%d > ", q->val); q = q->next; } // printing cleaned list

    q = p;
    while(q !=0) { q = p->next; free(p); p = q; } // freeing the memory
	
    return 0;
} 