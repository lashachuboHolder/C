// 2. Collecting statistical data for a linked list:
// we write functions for counting the length of the lists and for obtaining their maximum value.

#include "stdio.h"
#include "stdlib.h" // for malloc()
#include "limits.h" // for INT_MIN and/or INT_MAX

typedef struct node
 {
      int val;
      node * next;
 } node;

int LL_count_length( node *p)
{
   int l = 0;
   while(p!=NULL) { l++; p = p->next;	}
   return l;
}

int LL_calculate_MAX( node *p)
{
   int x = INT_MIN;
   while (p!=NULL) { if (p->val >x) x = p->val; p = p->next; }
   return x;	
}

int main()
{
	node *p, *q;
	int x=1;
	p=NULL;
	int s = sizeof(node);
	
	while(1)
	 {
	    scanf(" %d", &x);    if (x<0) break;
	    q = (node *)malloc(s);
	    q->val = x;    q->next = p;    p = q;
	 }
	while(q !=0) { printf("%d > ", q->val); q = q->next; }
	printf("\n---------------\n Your LL statistics:");
	printf("\nAmount of elements: %d", LL_count_length(p) );
	printf("\nMax value is: %d", LL_calculate_MAX(p) );
	q = p;
	while(q !=0) { q = p->next;    free(p);    p = q; }
	
	return 0;
} 