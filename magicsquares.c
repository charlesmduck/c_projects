#include <stdio.h>

int main(void)
{

	int aa, ab, ac, ad ;
	int ba, bb, bc, bd ;
	int ca, cb, cc, cd ;
	int da, db, dc, dd ;

	printf("Enter the numbers from 1 to 16 in any order: " ) ;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &aa, &ab, &ac, &ad, &ba, &bb, &bc, &bd, &ca, &cb, &cc, &cd, &da, &db, &dc, &dd) ;

	printf("\n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n", aa, ab, ac, ad, ba, bb, bc, bd, ca, cb, cc, cd, da, db, dc, dd) ; 

	int col_sum1, col_sum2, col_sum3, col_sum4 ;
	int row_sum1, row_sum2, row_sum3, row_sum4 ;
	int diag_sum1, diag_sum2 ;

	col_sum1 = aa + ba + ca + da ;
	col_sum2 = ab + bb + cb + db ;
	col_sum3 = ac + bc + cc + dc ;
	col_sum4 = ad + bd + cd + dd ;

	row_sum1 = aa + ab + ac + ad ;
        row_sum2 = ba + bb + bc + bd ;
	row_sum3 = ca + cb + cc + cd ;
	row_sum4 = da + db + dc + dd ;

	diag_sum1 = aa + bb + cc + dd ;
	diag_sum2 = ad + bc + cb + da ;

	printf("\nRow sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4) ;
	printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3, col_sum4) ;
	printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2) ;	

	return 0; 

}

