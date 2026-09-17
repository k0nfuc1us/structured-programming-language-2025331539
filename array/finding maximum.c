#include <stdio.h>

int main() {
    int arr1[] = {
        17,
        28,
        3655,
        51,
        619,
        373,
        6,
        10,
        392,
        100
    };
    int i, max,minimun;
    max=arr1[0];
    minimun=arr1[9];
    for (i = 0; i < 10; i++) {
        if (max < arr1[i]) {
            max = arr1[i];
        }
    }
    printf("max is %d\n", max);
    return 0;
}