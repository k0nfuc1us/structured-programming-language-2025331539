#include <stdio.h> // Required for printf()

int main() {
    // The auto keyword is used for local variables[cite: 15]
    // Because it is the default behavior for variables declared inside functions, it is rarely used explicitly[cite: 15]
    auto int x = 50;  // Same as just: int x = 50;[cite: 15]
    
    // Print the value of the local variable[cite: 15]
    printf("%d\n", x);
    
    return 0;
}