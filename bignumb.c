#include <stdio.h>

int main(void)
{
	
	float num;
	float pnum = 0;
	float bnum;
	printf("\n\n*** This program finds the biggest number. ***\n\n") ;

	for (;;)
	{
	
	printf("Enter a number: ") ;
	scanf("%f", &num);
	
	if (num > pnum) 
	{ 
		bnum = num;
		pnum = num;
	}
	if (num == 0) { break; } 
	
	}
	
	printf("The biggest number is %.3f.\n", bnum);

	return 0;
}
