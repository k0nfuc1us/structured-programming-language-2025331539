#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The | (bitwise OR) operator sets a bit to 1 if either bit is 1[cite: 19]
    int a = 6;  // Binary: 0110[cite: 19]
    int b = 3;  // Binary: 0011[cite: 19]

    // Perform the bitwise OR operation:
    // 0110
    // 0011
    // ----
    // 0111 (Decimal value = 7)[cite: 19]
    int result = a | b;

    // Output the resulting value[cite: 19]
    printf("Result: %d\n", result); // Outputs: 7 (0111)[cite: 19]

    return 0; // Signal successful execution
}