#include <stdio.h> // Standard I/O library for printf()

int main() {
    // The 'auto' keyword is used to explicitly declare local variables[cite: 16]
    // Since 'auto' is the default storage class for variables declared inside functions, it is rarely used in practice[cite: 16]
    auto int x = 50;  // This is functionally identical to writing just: int x = 50;[cite: 16]
    
    // Print the integer value to the console[cite: 16]
    printf("%d\n", x);
    
    return 0; // Indicate the program ran successfully[cite: 16]
}