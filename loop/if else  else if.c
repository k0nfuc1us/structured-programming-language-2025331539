#include <stdio.h>

int main() {
    int result;
    printf("Enter your makrs : \n");
    scanf("%d", & result);

    if (result < 0 && result > 100) {
        printf("Invalid Try again");
    }
    else if (result >= 0 && result <= 50) {
        printf("F");
    }
    else if (result >= 51 && result <= 70) {
        printf("C");
    }
    else if (result >= 71 && result <= 80) {
        printf("B");
    }
    else if (result >= 81 && result <= 93) {
        printf("A");
    }
    else(result >= 94 && result <= 100);
    {
        printf("A+");
    }
    return 0;
}