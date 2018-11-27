#include <stdio.h>

int main(void) 
{
	float credit, debit, balance ;
	int cmd ;
	balance = 0.00f;

	printf("\n *** ACME checkbook-balancing program *** \nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	
	for (;;)
	{
	printf("Enter command: ");
	scanf("%d", &cmd);
	
	switch (cmd)
	{
	case 0: printf("Clearing account.\n");
		credit, debit, balance = 0.00f;
		break;
	case 1: printf("Enter amount of credit: ") ; 
		scanf("%f", &credit) ;
		balance += credit ;	
		break;
	case 2: printf("Enter amount of debit: ");
		scanf("%f", &debit) ;
		balance -= debit ;
		break;
	case 3: printf("Current balance: %.2f\n", balance);
		break;
	case 4: printf("Enjoy your day.\n");
		return 0;
	
	default: printf("Invalid option.\n");
		 break;
	}
	}
}
