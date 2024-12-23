#include <stdio.h>
#include <math.h> // To use the pow() function for exponentiation

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input: Principal, Rate, and Time
    printf("Enter principal amount (P): ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (R in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter time period (t in years): ");
    scanf("%lf", &time);

    // Compound Interest formula: A = P * (1 + R/100)^t
    amount = principal * pow((1 + rate / 100), time);
    
    // Compound Interest formula: CI = A - P
    compoundInterest = amount - principal;

    // Output: Display the result
    printf("Compound Interest (CI) = %.2lf\n", compoundInterest);
    printf("Total amount (A) = %.2lf\n", amount);

    return 0;
}
