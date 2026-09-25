#include <stdio.h>
#include <time.h>

int main() {
    // Get current time[cite: 4]
    time_t now = time(NULL);        
    
    // Convert to local time structure to access individual date and time fields[cite: 4]
    struct tm *t = localtime(&now); 

    // Add 1900 to get the actual year[cite: 4]
    printf("Year: %d\n", t->tm_year + 1900); 
    
    // Months are numbered from 0 to 11, so add 1 to match[cite: 4]
    printf("Month: %d\n", t->tm_mon + 1);    
    
    // Print the day of the month[cite: 4]
    printf("Day: %d\n", t->tm_mday);
    
    // Print the hour[cite: 4]
    printf("Hour: %d\n", t->tm_hour);

    return 0;
}