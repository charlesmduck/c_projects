#include <stdio.h>

int main(void)
{
	int n, i;
	
	printf("Enter number to count down from: ");
	scanf("%d", &n);

	for (i = n ; i > 0; --i)
		printf("T minus %d and counting\n", i);
	
	return 0;
}
