#include <stdio.h>

int main(void)
{
	int inum ;
	float price ;
	int m, d, y ;

	printf("Enter item number: ");
	scanf("%d", &inum);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date: ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$ %.2f\t%d/%d/%d\n", inum, price, m, d, y) ;

	return 0;

}


