#include <stdio.h>

int main() {
    int p, q, r;
    printf("Enter the value of 3 : ");
    scanf("%d %d %d", & p, & q, & r);

    if (p > q && p > r) {
        printf("\n%d is biggest", p);
    }
    else {
        if (q > r) {
            printf("\n%d is biggest", q);
        }
        else {
            printf("\n%d is biggest", r);
        }
    }
    return 0;
}