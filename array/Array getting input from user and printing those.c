#include <stdio.h>

int main() {
	int array1[10];
	int i;
	for(i=0;i<10;i++){
	    printf("elements %d : \n", i+1);
	    scanf("%d",&array1[i]);
	}
	for(i=0;i<10;i++){
	    printf("elements are %d : %d\n",i+1,array1[i]);
	}
    return 0;
}

