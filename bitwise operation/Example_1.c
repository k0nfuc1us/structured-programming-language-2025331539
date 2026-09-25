#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The & (bitwise AND) operator compares each bit and returns 1 only if both bits are 1[cite: 18]
    int a = 6;  // Binary: 0110[cite: 18]
    int b = 3;  // Binary: 0011[cite: 18]

    // Perform the bitwise AND operation:
    // 0110
    // 0011
    // ----
    // 0010 (Decimal value = 2)[cite: 18]
    int result = a & b;

    // Output the resulting value[cite: 18]
    printf("Result: %d\n", result); // Outputs: 2 (0010)[cite: 18]

    return 0; // Signal successful execution
}