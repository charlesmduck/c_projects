#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int roll_dice(void) ;

int main(void)
{
	int roll ; 
	srand((unsigned) time(NULL));

	printf("%d\n", roll_dice()) ;
	return 0 ;
}

int roll_dice(void)
{
	int die1, die2 ;

	die1 = rand() % 7 ;
	die2 = rand() % 7 ;

	return (die1 + die2) ; 

}
