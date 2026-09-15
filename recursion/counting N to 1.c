#include <stdio.h>
void countdown(int n){
    if(n<=0){
        return;
    }
    printf("%d\n",n);
    countdown(n-1);
}

int main() { int n;
	printf("Enter limit : \n");
	scanf("%d",&n);
	printf("Printf from %d to 1\n",n);
	countdown(n);
	return 0;
    
}

