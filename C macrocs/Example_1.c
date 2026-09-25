#include <stdio.h> // Standard I/O library for printf()

// Define a macro named PI that represents the value 3.14[cite: 9]
// During compilation, the preprocessor will replace every occurrence of PI with 3.14[cite: 9]
#define PI 3.14

int main() {
    // Print the value of the macro PI, formatted to two decimal places[cite: 9]
    printf("Value of PI: %.2f\n", PI);
    
    return 0;
}