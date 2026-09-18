#include <stdio.h>

int main() {
    int mat1[10][10],mat2[10][10],result[10][20];
    int r1,r2,c1,c2,row,col,k,sum=0;
    print:
    printf("Enter row & colomum limit for matrix 1 : \n");
    scanf("%d %d ",&r1,&c1);
    printf("Enter row & colomum likit for matrix 2 : \n");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("Invalid  try again ");
        goto print;
    }
    printf("matrix 1 : \n");
    for(row=0;row<r1;row++){
        for(col=0;col<c1;col++){
            printf("(%d,%d = )",row+1,col+1);
            scanf("%d",&mat1[row][col]);
        }
        printf("\n");
    }
    printf("Matrix 2 : \n");
    for(row=0;row<r2;row++){
        for(col=0;col<c2;col++){
            printf("(%d,%d) = ",row+1,col+1);
            scanf("%d",&mat2[row][col]);
        }
        printf("\n");
    }
    // printing both matrixs
    printf("First matrix : \n");
    for(row=0;row<r1;row++){
        for(col=0;col<c1;col++){
            printf("(%d,%d) : ",row+1,col+1);
            printf("\n %d \t",mat1[row][col]);
        }
        printf("\n");
    }
    printf("Second matrix : \n");
    for(row=0;row<r2;row++){
        for(col=0;col<c2;col++){
            printf("(%d,%d) : ",row+1,col+1);
            printf("\n %d \t ",mat2[row][col]);
        }
    }
    //sum
    for(row=0;row<r2;row++){
        for(col=0;col<c1;col++){
            for(k=0;)
            sum=sum+(mat1*mat2);
        }
        result[row][col] = sum;
    }
    // printing sum;
    for(row=0;row<r1;row++){
        for(col=0;col<c2;col++){
            for(k=0;k<c1;k++){
               result[row][col]+= mat1[row][k]*mat2[k][col];
            }
        }
    }
    
// printing matrix 
    printf("\n matrix multipication is \n");
    for(row=0;row<r1;row++){
        for(col=0;col<c2;col++){
            printf("(%d,%d) : ", row+1,col+1);
            printf("%d\t",result[row][col]);
        }
        printf("\n");
    }

return 0;
}

