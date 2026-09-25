#include <stdio.h>   // Standard I/O library for printf()[cite: 8]
#include <stdlib.h>  // Standard library for rand() and srand()[cite: 8]
#include <time.h>    // Time library to seed the random number generator[cite: 8]

int main() {
    // Seed the random number generator with current system time so values differ each run[cite: 8]
    srand(time(NULL));

    // Simulate rolling the first dice: rand() % 6 gives 0-5, +1 shifts the range to 1-6[cite: 8]
    int dice1 = (rand() % 6) + 1;

    // Simulate rolling the second dice: range 1 to 6[cite: 8]
    int dice2 = (rand() % 6) + 1;

    // Print the results of both dice rolls and calculate their sum[cite: 8]
    printf("You rolled %d and %d (total = %d)\n", dice1, dice2, dice1 + dice2);

    return 0; // Indicate successful execution[cite: 8]
}