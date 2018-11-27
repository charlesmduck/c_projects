#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int deal_to_guys[] = {2,2,2};
	int board = 5;
	int n, rank, suit;
	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
	const char suit_code[] = {'C', 'D', 'H', 'S'};

	srand((unsigned) time(NULL));

	printf("\n --- SHUFFLE UP AND DEAL ---\n");
	
	for ( n = 0 ; n < 3 ; n++)
	{
	printf("\n PLAYER %d: ", n + 1 ); 
	while( deal_to_guys[n] > 0)
	{
		suit = rand() % NUM_SUITS; // picks a random suit //
		rank = rand () % NUM_RANKS; // picks a random rank //
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			deal_to_guys[n]--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}
	}
  	
	printf("\n\n THE BOARD: "); 
	while(board > 0)
	{
		suit = rand() % NUM_SUITS; // picks a random suit //
		rank = rand () % NUM_RANKS; // picks a random rank //
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			board--;			
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n\n");
	return 0;
}

