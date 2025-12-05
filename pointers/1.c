#include <stdio.h>
int main( )
 {
 	int i, j;
 	int *p;
 	double m;
 	double * pm;
 	
 	i = 3; m = 5.79;
 	p  = &i;
 	pm = &m;

 	printf ("\n %d %d\n", p, pm);		// printing both decimal
	printf ("\n %p %p\n", p, pm);		// printing both hexadecimal
	printf ("\n %d %g\n", *p, *pm);		// printing (indirectly) values 
}