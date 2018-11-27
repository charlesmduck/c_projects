#include <stdio.h>

int main(void)
{
	int n, o;
	int i = 1;
	int fact;

	for (;;)
	{
	printf("Take the factorial of: ");
	scanf("%d", &n);
	o = n;
	i = 1;
	
	if ( n == 0 ) { break ; }	

// Factorial function mock up ////////////////////////////
	
	while ( i < o )
	{		
		n *= o - i ;
		i++;
	}
	
	fact = n;
	printf("%d factorial is %d.\n", o, fact);
	
	}

//////////////////////////////////////////////////////////	

	return 0 ;
}
