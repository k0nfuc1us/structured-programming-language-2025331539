#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The << (bitwise left shift) operator shifts bits to the left and fills in 0s on the right[cite: 15]
    // This operation is mathematically equivalent to multiplying the number by powers of 2[cite: 15]
    int a = 3;  // Binary representation: 00000011[cite: 15]

    // Shift the bits of 'a' left by 2 positions:
    // 00000011 becomes 00001100 (Decimal value = 12)[cite: 15]
    int result = a << 2;

    // Output the resulting value to the console[cite: 15]
    // The calculation here is equivalent to: 3 * (2^2) = 12[cite: 15]
    printf("Result: %d\n", result); 

    return 0; // Indicate successful execution
}