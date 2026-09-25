#include <stdio.h>   // Includes the standard I/O library needed for the printf() function[cite: 14]
#include "calc.h"    // Includes the custom header file to access the add() and subtract() functions[cite: 14]

int main() {
    // Calls the add() function with arguments 5 and 5, then prints the integer result[cite: 14]
    printf("5 + 5 = %d\n", add(5, 5));
    
    // Calls the subtract() function with arguments 6 and 4, then prints the integer result[cite: 14]
    printf("6 - 4 = %d\n", subtract(6, 4));
    
    return 0; // Exits the program successfully[cite: 14]
}