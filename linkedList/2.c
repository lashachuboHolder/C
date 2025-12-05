#include <stdio.h>

typedef struct node
 {	struct node * next;
	int value;
  } node;
  
int A[12] = { 2, 5, -2, 4, -82, 11, 54, 3, 7, 44, 0, 3 };

int main()
{	 node * p, *q;
	int i; size_t n; // could be also: int n;
    
 	n = sizeof(node );
	p = NULL;
	for (i = 11; i>=0; i--)
	{   q = malloc(n); q->next = p; q->value = A[i]; p = q; }
	
	while (q->next != NULL) 
	{   printf ("%d -> ", q->value); q = q->next;	}
}