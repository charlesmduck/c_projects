#include <stdio.h>

int main(void)
{

	int m, n, rem;
	
	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	while ( n != 0 ) 
	{
		rem = m%n;
		m = n;
		n = rem;
	}

	printf("%d is the greatest common denominator.\n", m);
	return 0 ;
}
