#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define ROW 10
#define COL 10


int main (void)
{
	bool occupied[ROW][COL] ;
	int walk_grid[ROW][COL] ;
	const char alpha_step[] = { '.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' } ;
	int i, j, step_i, step_j, direction ;
	int move = 1 ;

	srand ((unsigned) time(NULL));	
	
	for (j = 0; j < ROW; j++)
 		for (i = 0; i < COL; i++)
    			walk_grid[j][i] = 0;

	for (j=0; j < ROW; j++)
		for (i = 0; i < COL; i++)
			occupied[j][i] = false;


	i = 0;
	j = 0;
	walk_grid[j][i] = 1 ;
	occupied[j][i] = true;

	while ( move < 26 )
	{	
		direction = rand() % 4 ; // Draw random number and produce 4 directions.
		step_i = direction - 1 ; // Making step in i direction -1 or 1.
		step_j = direction - 2 ; // Making step in j direction -1 or 1.

		switch (direction)
		{
			case 0:	if ( !occupied[j][i] && (step_i + i) >= 0 ) {
					i += step_i ;
					occupied[j][i] = true ;
					walk_grid[j][i] = move + 1 ;
					move++; }
				if ( occupied[j][i+1] && occupied[j+1][i] && 
					occupied[j][i-1] && occupied[j-1][i] )
					move = 27 ; 
					break; 
			case 1: if ( !occupied[j][i] && (step_j + j) >= 0 ) {
					j += step_j ;
					occupied[j][i] = true ;
					walk_grid[j][i] = move + 1 ;
					move++; }
				if ( occupied[j][i+1] && occupied[j+1][i] && 
					occupied[j][i-1] && occupied[j-1][i] )
					move = 27 ;
			       		break;	
			case 2: if ( !occupied[j][i] && (step_i + i) < COL ) {
					i += step_i ;
					occupied[j][i] = true ;
					walk_grid[j][i] = move + 1 ;
					move++; }
				if ( occupied[j][i+1] && occupied[j+1][i] && 
					occupied[j][i-1] && occupied[j-1][i] )
					move = 27 ; 
					break; 
			case 3: if ( !occupied[j][i] && (step_j + j) < ROW ) {
					j += step_j ;
					occupied[j][i] = true ;
					walk_grid[j][i] = move + 1 ;
					move++; }
				if ( occupied[j][i+1] && occupied[j+1][i] && 
					occupied[j][i-1] && occupied[j-1][i] )
					move = 27 ; 
					break;
		}
	
	}	

	for ( j = 0 ; j < COL ; j++ )
	{		
		printf("\t");
			for ( i = 0 ; i < ROW ; i++ )
			{	
				printf( "%c " , alpha_step[walk_grid[j][i]]); 
			}
		printf("\n");
	}	

	return 0 ; 

}
