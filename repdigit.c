#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false} ;
	bool digit_repeated[10] = {false} ;
	int digit;
	long n ; 
	

	printf("Enter a number: ") ;
	scanf("%ld", &n) ;
	

	while ( n > 0 )
	{
		digit = n % 10 ;
		if ( digit_seen[digit] )
			digit_repeated[digit] = true ;
		digit_seen[digit] = true;
		n /= 10;
	}

	printf("The following digits have been repeated:\n");

	for ( digit = 0 ; digit < 10 ; digit++ )
	{	
		if ( digit_repeated[digit] != 0 )
			printf("%d ", digit);
	}
	printf("\n");

return 0 ;
}
