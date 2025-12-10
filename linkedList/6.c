// 3. Concatenating linked lists: creating one list from two.

#include "stdio.h"
#include "stdlib.h" // for malloc()

typedef struct node
 {
 	int val;
 	node * next;
 } node;

node * LL_join( node *a1, node *a2)
{
	if (a1 == NULL) return a2;
	node *q = a1;
	while(q->next!=NULL) q = q->next;
	q->next = a2;
	return a1;
}

int main()
{
	node *p1, *p2, *q;
	int x=1;
	p1=NULL; p2 = NULL;
	int s = sizeof(node);
	
    printf("\n inserting values to first list:\n");
        while(1)
        {
            scanf(" %d", &x); if (x<0) break;
            q = (node *)malloc(s);
            q->val = x; q->next = p1; p1 = q;
        }
        printf ("\nYour first list is: ");	 
        while(q !=0) { printf("%d > ", q->val); q = q->next; } // just printing the list

        printf("\n inserting values to second list:\n");
        while(1)
        {
            scanf(" %d", &x); if (x<0) break;
            q = (node *)malloc(s);
            q->val = x; q->next = p2; p2 = q;
        }
        printf ("\nYour second list is: ");	 
        q = p2;
        while(q !=0) { printf("%d > ", q->val); q = q->next; } // just printing the list

        // joining two lists (adding p2 list to the end of p1 list):
        p1 = LL_join(p1, p2);
        q = p1;
        printf("\n Your joned list is: ");
        while(q !=0) { printf("%d > ", q->val); q = q->next; } // just printing the new list
        q = p1;
        while(q !=0) { q = p1->next; free(p1); p1 = q; } // freeing the memory
        
	return 0;
} 