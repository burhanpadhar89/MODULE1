#include <stdio.h>

float calculatePremium(float salary) {
    float premium;

    // Determine the premium based on the salary range
    if (salary <= 30000) {
        premium = salary * 0.05;  // 5% of salary for salary <= 30000
    } else if (salary <= 60000) {
        premium = salary * 0.08;  // 8% of salary for salary between 30001 and 60000
    } else {
        premium = salary * 0.12;  // 12% of salary for salary > 60000
    }

    return premium;
}

int main() {
    float salary, premium;

    // Input the salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    
    premium = calculatePremium(salary);

    
    printf("Your insurance premium is: RS%.2f\n", premium);

    return 0;
}