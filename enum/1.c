#include <stdio.h>

typedef enum
 {
    RED = 5, // Initial value. If not assigned in code, then is 0
    GREEN,
    BLUE
 } Feri;

int main()
{
	Feri c;
	int i;
	
	i=RED;
	c = GREEN+20; 
	
	printf("\n %d, %d", c, i);
}