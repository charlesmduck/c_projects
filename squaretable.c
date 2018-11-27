#include <stdio.h>

int main(void)
{
	int n, i, s ;
       	i = 1;

	printf("This program prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);

	while ( i <= n )
		{	
			s = i*i ;
			printf("\t%10d\t%10d\n", i, s);
			i++;
		}
	return 0 ;
}




