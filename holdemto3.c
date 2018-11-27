#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int rank, suit;
	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
	const char suit_code[] = {'C', 'D', 'H', 'S'};

	srand((unsigned) time(NULL));

	printf("\n --- SHUFFLE UP AND DEAL ---\n");

	int player1 = 2;
	int player2 = 2;
	int player3 = 2;
	int board = 5;

	printf("\n PLAYER ONE: "); 
	while(player1 > 0)
	{
		suit = rand() % NUM_SUITS; // picks a random suit //
		rank = rand () % NUM_RANKS; // picks a random rank //
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			player1--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}

	printf("\n PLAYER TWO: "); 
	while(player2 > 0)
	{
		suit = rand() % NUM_SUITS; // picks a random suit //
		rank = rand () % NUM_RANKS; // picks a random rank //
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			player2--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}

	}
	
	printf("\n PLAYER THREE: "); 
	while(player3 > 0)
	{
		suit = rand() % NUM_SUITS; // picks a random suit //
		rank = rand () % NUM_RANKS; // picks a random rank //
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			player3--;			
			printf(" %c%c", rank_code[rank], suit_code[suit]);
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

