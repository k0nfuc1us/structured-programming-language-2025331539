/*
 ============================================================================
 Project Name : Organisation Management System
 Course       : Structured Programming Language (SPL) Assignment
 Description  : A C program using nested structures and arrays to manage 
                organization details, employee records, and interactive queries.
 ============================================================================
*/

#include <stdio.h>
#include <string.h>

// Structure to store individual employee details
struct Employee {
    char id[10];
    char name[50];
    int age;
    float salary;
    char blood_group[4];
};

// Structure to store organization details along with an array of employees
struct Organisation {
    char org_name[100];
    char location[100];
    int total_employees;
    struct Employee emp[100]; // Assuming maximum capacity of 100 employees
};

int main() {
    struct Organisation org;
    int choice;

    // --- Step 1: Input Organisation Details ---
    printf("==================================================\n");
    printf("        ORGANISATION MANAGEMENT SYSTEM            \n");
    printf("==================================================\n");
    
    printf("Enter Organisation Name: ");
    scanf(" %[^\n]", org.org_name); // Read string with spaces
    
    printf("Enter Organisation Location: ");
    scanf(" %[^\n]", org.location);
    
    printf("Enter Number of Employees (max 100): ");
    scanf("%d", &org.total_employees);

    // --- Step 2: Input Employee Details ---
    printf("\n--------------------------------------------------\n");
    printf("           ENTER EMPLOYEE INFORMATION             \n");
    printf("--------------------------------------------------\n");
    
    for (int i = 0; i < org.total_employees; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        
        printf("  ID          : ");
        scanf("%s", org.emp[i].id);
        
        printf("  Name        : ");
        scanf(" %[^\n]", org.emp[i].name); // Supports full names with spaces
        
        printf("  Age         : ");
        scanf("%d", &org.emp[i].age);
        
        printf("  Salary      : ");
        scanf("%f", &org.emp[i].salary);
        
        printf("  Blood Group : ");
        scanf("%s", org.emp[i].blood_group);
    }

    // --- Step 3: Interactive Query & Menu System ---
    while (1) {
        printf("\n==================================================\n");
        printf("                 MENU & QUERIES                   \n");
        printf("==================================================\n");
        printf("1. Display Organisation Overview\n");
        printf("2. Display All Employee Records (Tabular)\n");
        printf("3. Search Employee by Name or ID\n");
        printf("4. Filter Employees by Salary Threshold\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Display general organization profile
                printf("\n--- Organisation Overview ---\n");
                printf("Name     : %s\n", org.org_name);
                printf("Location : %s\n", org.location);
                printf("Staff    : %d active employees\n", org.total_employees);
                break;
            }
            case 2: {
                // Display all employee details neatly in a table format
                printf("\n--- All Employee Records ---\n");
                printf("%-10s | %-20s | %-5s | %-10s | %-5s\n", "ID", "Name", "Age", "Salary", "Blood");
                printf("------------------------------------------------------------------\n");
                for (int i = 0; i < org.total_employees; i++) {
                    printf("%-10s | %-20s | %-5d | $%-9.2f | %-5s\n", 
                           org.emp[i].id, org.emp[i].name, org.emp[i].age, 
                           org.emp[i].salary, org.emp[i].blood_group);
                }
                break;
            }
            case 3: {
                // Search functionality by Name or ID
                char query[50];
                int found = 0;
                printf("\nEnter Name or ID to search: ");
                scanf(" %[^\n]", query);

                for (int i = 0; i < org.total_employees; i++) {
                    if (strcmp(org.emp[i].name, query) == 0 || strcmp(org.emp[i].id, query) == 0) {
                        printf("\n[Match Found!]\n");
                        printf("  ID          : %s\n", org.emp[i].id);
                        printf("  Name        : %s\n", org.emp[i].name);
                        printf("  Age         : %d\n", org.emp[i].age);
                        printf("  Salary      : %.2f\n", org.emp[i].salary);
                        printf("  Blood Group : %s\n", org.emp[i].blood_group);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nNo employee found matching '%s'.\n", query);
                }
                break;
            }
            case 4: {
                // Custom query: Filter employees above a salary threshold
                float threshold;
                int found = 0;
                printf("\nEnter minimum salary threshold: ");
                scanf("%f", &threshold);

                printf("\n--- Employees earning >= %.2f ---\n", threshold);
                for (int i = 0; i < org.total_employees; i++) {
                    if (org.emp[i].salary >= threshold) {
                        printf("ID: %s | Name: %s | Salary: %.2f\n", 
                               org.emp[i].id, org.emp[i].name, org.emp[i].salary);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No employees found above this salary threshold.\n");
                }
                break;
            }
            case 5:
                printf("\nExiting Organisation Management System. Good luck with the assignment!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please choose between 1 and 5.\n");
        }
    }

    return 0;
}