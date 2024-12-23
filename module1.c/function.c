#include <stdio.h>

// Function declaration
long factorial(int n);

int main() {
    int num;
    long result;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Function call to calculate the factorial
    result = factorial(num);

    // Display the result
    printf("The factorial of %d is %ld.\n", num, result);

    return 0;
}

// Function definition
long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}