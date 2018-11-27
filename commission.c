#include <stdio.h>

int main(void) {
	
	float transaction, commission;

	for(;;)
	{
	printf("Enter value of the trade: ");
	scanf("%f", &transaction);
	
	if (transaction == 0 ) {break;}
	if (transaction < 2500.00f) 
{
		commission = 30.00f + 0.017f * transaction ;
}
	else if ( (transaction > 2500.00f) && (transaction < 6250.00f) ) 
	{
		commission = 56.00f + 0.0066f * transaction ;
	}	
	else if ( (transaction > 6250.00f) && (transaction < 20000.00f ) ) 
	{
		commission = 76.00f + 0.0034f * transaction ;
	}
	else if ( (transaction > 20000.00f) && (transaction < 50000.00f) ) 
	{
		commission = 100.00f + 0.0022f * transaction ;
	}
	else if ( (transaction > 50000.00f) && (transaction < 500000.00f) ) 
	{
		commission = 155.00f + 0.0011f * transaction ;
	}
	else if ( transaction > 500000.00f ) 
	{
		commission = 255.00f + 0.0009f * transaction ;	
	}

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commission: %.2f\n", commission);
	}
	return 0;
}
