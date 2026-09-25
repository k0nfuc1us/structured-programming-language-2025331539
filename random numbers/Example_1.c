#include <stdio.h>   // Standard input/output library for printf()
#include <stdlib.h>  // Standard library containing utility functions, including rand()[cite: 5]

int main() {
    // Generate a random integer using rand() and assign it to 'r'[cite: 5]
    int r = rand();

    // Print the generated random number followed by a newline[cite: 5]
    printf("%d\n", r);

    return 0;
}