// 1. Creating a linked list and writing values into it. At the end, the list is deleted from memory.

#include "stdio.h"
#include "stdlib.h" // for malloc()

typedef struct node{
 	int val;
 	node * next;
 } node;


int main(){
	node *p, *q;
	int x=1;
	p=NULL;
	int s = sizeof(node);
	
	while(1)
	 { 	scanf(" %d", &x);  if (x<0)  break;
	 	q = (node *)malloc(s);
	 	q->val = x; q->next = p; p = q;
	 }
	while(q !=0) { printf("%d > ", q->val); q = q->next; } // just printing the list
	q = p;
	while(q !=0) { q = p->next; free(p); p = q; } // freeing the memory

	return 0;
} 