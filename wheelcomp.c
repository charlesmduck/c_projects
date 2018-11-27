#include <stdio.h>

int main(void)
{
	int payout, splits, corners, straights, streets, dstreets, crowns;

	printf("Enter number of straights: ");
	scanf("%d", &straights);
	printf("Enter number of splits: ");
	scanf("%d", &splits);
	printf("Enter number of corners: ");
	scanf("%d", &corners);
	printf("Enter number of streets: ");
	scanf("%d", &streets);
	printf("Enter number of double streets: ");
	scanf("%d", &dstreets);
	printf("Enter number of crowns: ");
	scanf("%d", &crowns);

	payout = 35*straights + 17*splits + 8*corners + 11*streets + 5*dstreets + 6*crowns ;

	printf("Total payout: %d\n", payout);

	return 0;
}

