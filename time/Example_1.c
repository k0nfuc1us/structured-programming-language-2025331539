#include <stdio.h>  // Required for standard input/output functions like printf
#include <time.h>   // Required for time-related functions and data types

int main() {
    // Declare a variable named 'currentTime' of type 'time_t' to store the time value
    time_t currentTime; 

    // Retrieve the current time using the time() function
    // Passing NULL tells the function to return the current time, which is then assigned to our variable
    currentTime = time(NULL); 

    // The ctime() function takes a pointer to a time_t variable and returns a formatted string (e.g., "Mon Jun 24 10:15:00 2025\n")
    // We print this string using printf
    printf("The current time is: %s", ctime(&currentTime));

    return 0; // Indicate that the program executed successfully
}