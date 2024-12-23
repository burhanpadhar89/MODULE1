#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    
    annualSalary = monthlySalary * 12;

    
    printf("Your annual salary is: rs%.2f\n", annualSalary);

    return 0;
}