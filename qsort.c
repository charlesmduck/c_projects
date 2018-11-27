////////////////////////////////////////////
//					  //
//	    Quicksort Prototype	          //
//					  //
//	     David Alan Rogers            //
//                                        //
//                                        //
////////////////////////////////////////////

#include <stdio.h>

#define N 10

// Sorting functions
void quicksort(int a[], int low, int high) ;
int split(int a[], int low, int high) ;

int main(void)
{
	// Note array size explicitly given in main function.
	int a[N], i;

	// Scanning each element into array.
	printf("Enter %d numbers to be sorted: ", N);
	for (i = 0 ; i < N ; i++)
		scanf("%d", &a[i]);

	// Pointing low and high to beginning and ending array elements.
	quicksort(a, 0, N - 1);

	// Note that quicksort algorithm intends to strictly sort the array, not create another.
	printf("In sorted order: ");
	for (i = 0; i < N; i++)
	       printf("%d ", a[i]);
	printf("\n");	

	return 0;
}

// ALWAYS include type declaration in arguments of new function.
void quicksort (int a[], int low, int high)
{
	// middle is a local variable to quicksort, ergo not defined globally in main.
	int middle;
	
	if (low >= high) return; 	 // If true, array is already in order.
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);

}

int split (int a[], int low, int high)
{
	int part_element = a[low] ;

	for (;;)
	{
		while (low < high && part_element <= a[high])	
			high--;
		if (low >= high) break;
		a[low++] = a[high];

		while (low < high && a[low] <= part_element)
			low++;
		if (low >= high) break;
		a[high--] = a[low];
	}	
	a[high] = part_element;
	return high;

}
