#include <stdio.h>

int power( int x , int n )
{
	int i, result = 1 ;

	for ( i = 1 ; i <= n ; i++ )
		result = result * x ;

	return result; 
}
