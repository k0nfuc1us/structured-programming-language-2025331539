#include <stdio.h>   // Include standard I/O library for printf()[cite: 6]
#include <stdlib.h>  // Include standard library for rand() and srand()[cite: 6]
#include <time.h>    // Include time library to access system time()[cite: 6]

int main() {
    // Seed the random number generator using the current time 
    // This ensures a different sequence of random numbers on each program run[cite: 6]
    srand(time(NULL));

    // Generate and print three random integers[cite: 6]
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0; // Indicate successful execution[cite: 6]
}