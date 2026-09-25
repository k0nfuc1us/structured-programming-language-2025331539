#include <stdio.h> // Standard I/O library for printf()

// Macros can take parameters, similar to a function[cite: 10]
// Define a macro named SQUARE that takes a parameter 'x' and multiplies it by itself[cite: 10]
#define SQUARE(x) ((x) * (x))

int main() {
    // Call the SQUARE macro with the value 4 and print the calculated result[cite: 10]
    printf("Square of 4: %d\n", SQUARE(4));
    
    return 0;
}