//linear search
#include <stdio.h>

int main() {
	int arr1[]={18,82,237,7192,9192,6000};
	int target,found=-1;
	int i;
	printf("Enter the value you are searching : \n");
	scanf("%d",&target);
	int sizeofarray1=sizeof(arr1)/sizeof(arr1[0]);
	printf("size of array1 is %d \n ",sizeofarray1);
	for(i=0;i<sizeofarray1;i++){
	    if(arr1[i]==target){
	        found=i;
	        break;
	    }
	}
	    if(found==-1){
	        printf("Not found");
	    }
	    else {
	        
	        printf("%d is found on %d position",target,i);
	    }
    
    return 0;

}

