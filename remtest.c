#include <stdio.h>

int main(void)
{
	int n, rem ;

	for (; n != 0 ;)
	{
		printf("Please enter number: ");
	       	scanf("%d", &n);

		rem = n % 10 ;

		printf("Remainder is %d.\n", rem); 
	}
}


