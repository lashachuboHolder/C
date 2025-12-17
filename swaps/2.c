#include <stdio.h>

void array_min_max(int A[], int n, int * min, int * max)
 {
 	if(n==0) return;
 	int mn = A[n-1], mx = A[n-1]; 
 	while (n--) { if (mx < A[n]) mx = A[n]; if (mn>A[n]) mn = A[n]; }
	*min = mn, *max = mx;
 }

int main()
{
	int A[] = { 7, -28, 208, 14, 64, 59, 30, -49, 107, 40 };
	int min, max;
	array_min_max(A, sizeof(A)/sizeof(A[0]), &min, &max);
	printf("\n min = %d, max = %d", min, max);
}