#include <stdio.h>
int main() {
	int matrix[3][1];
	int row,col;
	for(row=0;row<3;row++){
	    for(col=0;col<1;col++){
	        printf("[%d][%d] : ",row+1,col+1);
	        scanf("%d",&matrix[row][col]);
	    }
	} 
	printf("\nThe 3x1 matrix is : \n");
	for(row=0;row<3;row++){
	    for(col=0;col<1;col++){
	        printf("%d\t",matrix[row][col]);
	    }
	  printf("\n");
	}
	return 0;
}

