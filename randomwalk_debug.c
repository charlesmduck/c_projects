#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
	bool occupied[10][10] = { false } ;
	int walk_grid[10][10] = { 0 } ;
	const char alpha_step[27] = { '.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',						'V', 'W', 'X', 'Y', 'Z' } ;
	int i, j, step_i, step_j, direction ;
	int move = 1 ;

	srand ((unsigned) time(NULL));	
	
	for  ( move = 1; move < 27; move++ )
		{	
		direction = rand() % 4 ; // Draw random number and produce 4 directions.
		step_i = direction - 1 ; // Making step in i direction -1 or 1.
		step_j = direction - 2 ; // Making step in j direction -1 or 1.

			// Tests for odd/evenness and ensures step does not exit walk grid.

			if ( ( direction + 1 ) % 2 != 0 && ( (step_i + i) > 0 && step_i + i < 11 ) )
				i += step_i ;
			else if ( direction % 2 != 0 && ( (step_j + j) > 0 && step_j < 11 ) )
				j += step_j ;
			else
				continue ;
	
			// If grid element not occupied, alpha is inserted and grid element marked occupied.
	
			if ( !occupied[j][i] ) 
			{	
				walk_grid[j][i] = alpha_step[ ( move + 1 ) ] ;
				occupied[j][i] = true ;
				move++ ;	
			}
		
		}
	
	printf("%c", alpha_step[walk_grid[j][i]] ) ; 	
		
	return 0 ;
}
