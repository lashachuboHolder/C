#include <iostream>

int main( )
 {
 	int i, j;
 	int *p;
 	double m;
 	double * pm;
 	
 	i = 3; m = 5.79;
 	p  = &i;		
 	pm = &m;
 	
 	printf ("\n %d %d\n", p, pm);		
	printf ("\n %p %p\n", p, pm);		
	printf ("\n %d %g\n", *p, *pm);	 
printf ("\n-------------\n");
	p++; pm++;			// increasing values
 	printf ("\n %d %d\n", p, pm);		// printing it
	printf ("\n %p %p\n", p, pm);		// attention! Increasing depends on referenced data type!
printf ("\n-------------\n");
	p = &j;				// new assigning
	*p = -7;				// here - dereferencing
	printf ("\n %d \n", *p);
	printf ("\n %d \n", j);
printf ("\n-------------\n");

int A[6] = { 3, 5, 7, 9, 15, 20};		// pointer and an array!

p = A;
  for (i = 0; i<6;i++)  printf ("%d ", *(p++));  // not  *(++p) //
	
	return 0;
}