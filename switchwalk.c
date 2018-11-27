bool occupied[10][10] = { false } ;
int move = 1 ;

while ( move <= 26 )
{
	direction = rand(0) % 4 ; // Draw random number and produce 4 directions.
	step_i = direction - 1 ; // Making step in i direction -1 or 1.
	step_j = direction - 2 ; // Making step in j direction -1 or 1.

	// Tests for odd/evenness and ensures step does not exit walk grid.

		if ( ( direction + 1 ) % 2 != 0 && ( step_i + i > 0 && step_i + i < 11 ) )
			i += step_i ;
		else if ( direction % 2 != 0 && ( step_j + j > 0 && step_j < 11 ) )
			j += step_j ;
		else
			continue ;
	
	// If grid element not occupied, alpha is inserted and grid element marked occupied.
	
	if ( !occupied[j][i] ) ; 
		walk_grid[j][i] = alpha_step[ ( move + 1 ) ] ;
		occupied[j][i] = true ;
		move++ ;	
}

