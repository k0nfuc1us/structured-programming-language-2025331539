#include <stdio.h> // Required for printf()

int main() {
    // The register keyword suggests that the variable should be stored in a CPU register for faster access[cite: 17]
    // Note: This keyword is mostly obsolete because modern compilers automatically choose the best variables to keep in registers[cite: 17]
    // Also, you cannot take the address of a register variable using the '&' operator[cite: 17]
    register int counter = 0;

    // Print the value of the counter[cite: 17]
    printf("Counter: %d\n", counter);

    return 0;
}