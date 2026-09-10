#include <stdio.h>

int main() {
    int pay;
    printf("Enter bill : \n");
    scanf("%d ", & pay);

    (pay < 100) ? printf("Why no money?") : printf("Thanks");
    return 0;
}