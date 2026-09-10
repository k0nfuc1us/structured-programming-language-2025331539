#include <stdio.h>

int main() {
    int i=1,n;
    printf("Limit : \n");
    scanf("%d",&n);
    
    do{
        printf("%d\n\t",i);
        i--;
    }while(i>=n);
}

