#include <stdio.h>
long long factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main() {
    long long n,result;
    printf("Enter number for factorial : \n");
    scanf("%lld",&n);
    printf("%lld! : %lld",n,factorial(n));
    return 0;
}

