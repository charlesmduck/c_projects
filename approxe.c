#include <stdio.h>

int main(void)
{
	float e = 1.000000f ;
	float n = 1.000000f;
	int terms;
	float fact;

	for (;;)
	{
	printf("Compute e to how many terms? ");
	scanf("%d", &terms);

	if ( terms == 0 ) { break; }

// Euler series mock up ////////////////////////////
	
	for ( int j = 1 ; j <= terms ; j++ )
{	
		for ( int i = 0; i < j; i++ )
	{
		n *= j - i;
	}
	
	fact = n ;
	e += (1.000000f / fact) ;
	n = 1 ;
}

//////////////////////////////////////////////////////////	
	
	printf("e to %d terms is approximately %f.\n", terms, e);
	e = 1 ;	
	}
	return 0 ;
}
