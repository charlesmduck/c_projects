#include <stdio.h>

int main(void)
{
	int sum, n = 0 ;
	int i;

	while ( n < 10 )
	{
		scanf("%d", &i);
		if ( i == 0 )
			continue;
		sum += i;
		n++;
	}

	printf("%d", sum);

	return 0 ;
}
