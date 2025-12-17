#include "stdio.h"

int swap (int x, int y)
 {
 	int tmp;
	tmp = x; x = y; y=tmp;
 }

int main()
{
	int a=5, b=12;
	printf("\n a = %d, b=%d", a, b);
	swap (a, b);
	printf("\n a = %d, b=%d", a, b);
}

#include "stdio.h"

void swap(int *x, int *y)
 {
 	int tmp;
	tmp = *x; *x = *y; *y=tmp;
 }

int main()
{
	int a=5, b=12;
	
	printf("\n a = %d, b=%d", a, b);
	swap (&a, &b);
	printf("\n a = %d, b=%d", a, b);	
}