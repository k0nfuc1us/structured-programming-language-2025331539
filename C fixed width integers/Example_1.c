#include <stdio.h>   // Standard I/O library required for printf()
#include <stdint.h>  // Needed to access fixed-width integer types[cite: 17]

int main() {
    // Declare variables using specific, guaranteed memory sizes[cite: 17]
    int8_t a = 100;         // Defines an 8-bit integer[cite: 17]
    int16_t b = 30000;      // Defines a 16-bit integer[cite: 17]
    int32_t c = 2000000;    // Defines a 32-bit integer[cite: 17]
    int64_t d = 9000000000; // Defines a 64-bit integer[cite: 17]

    // Print the standard integer types using %d[cite: 17]
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    // Print the 64-bit integer using the %lld (long long int) format specifier[cite: 17]
    printf("%lld\n", d);    // use %lld for 64-bit[cite: 17]

    return 0; // Indicate successful execution
}