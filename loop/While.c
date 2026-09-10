#include <stdio.h>

int main() {
    int i=1, n;
    printf("Enter limit : \n");
    scanf("%d ", & n);

    while (i != n) {
        printf("%d \n", i);
        i++;
    }
    printf("%d",n);
    return 0;
}