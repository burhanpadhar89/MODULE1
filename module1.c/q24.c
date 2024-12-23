#include <stdio.h>

int main() {
    char name[5][50];   // Array to store the names of 5 employees
    float salary[5];     // Array to store the salaries of 5 employees
    float totalSalary = 0, averageSalary;
    int i;

    // Input employee names and salaries
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", name[i]);  // Accept the employee name
        
        printf("Enter salary of %s: ", name[i]);
        scanf("%f", &salary[i]);  // Accept the employee salary
        
        totalSalary += salary[i];  // Add salary to total salary
    }

    // Calculate the average salary
    averageSalary = totalSalary / 5;

    // Output the total salary and average salary
    printf("\nTotal Salary of all employees: %.2f\n", totalSalary);
    printf("Average Salary of all employees: %.2f\n", averageSalary);

    return 0;
}