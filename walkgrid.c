#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	bool walk_grid[10][10] = { false } ;
	int i, j ;
	char path = '.' ;

	for ( j = 0 ; j < 10 ; j++ )
	{		
		printf("\t");
		for ( i = 0 ; i < 10 ; i++ )
		{	
			if (!walk_grid[j][i])
			{printf( " %c" , path);}
		}
	printf("\n");
	}

	printf("\n");

	return 0 ;
}
