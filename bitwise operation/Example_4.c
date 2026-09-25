#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The & (bitwise AND) operator compares each bit and returns 1 only if both bits are 1[cite: 16]
    int a = 6;  // Binary representation: 0110[cite: 16]
    int b = 3;  // Binary representation: 0011[cite: 16]

    // Perform the bitwise AND operation:
    // 0110
    // 0011
    // ----
    // 0010 (Decimal value = 2)[cite: 16]
    int result = a & b;

    // Output the resulting value to the console[cite: 16]
    printf("Result: %d\n", result); // Outputs: 2 (0010)[cite: 16]

    return 0; // Indicate successful execution
}