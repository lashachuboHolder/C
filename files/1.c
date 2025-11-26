#include "stdio.h"

int main()
{
	FILE *fout;
	int i, j;
	
	fout = fopen("e:/a.txt", "w");
	for ( i = 1; i< 11; i++ )
	 {
 	   for ( j = 1; j< 11; j++)
 		  fprintf(fout, "%4d",i*j );
 	   fprintf(fout, "\n");
        }
	 
	fclose (fout);
}