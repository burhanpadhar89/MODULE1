#include <stdio.h>

int main() {
    float monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    // Input the monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate the insurance premium (10% of monthly salary)
    insurancePremium = 0.10 * monthlySalary;

    // Calculate the loan installment (10% of monthly salary)
    loanInstallment = 0.10 * monthlySalary;

    // Calculate the remaining salary after deductions
    remainingSalary = monthlySalary - insurancePremium - loanInstallment;

    // Output the deductions and remaining salary
    printf("Insurance premium (10%%): %.2f\n", insurancePremium);
    printf("Loan installment (10%%): %.2f\n", loanInstallment);
    printf("Remaining salary after deductions: %.2f\n", remainingSalary);

    return 0;
}