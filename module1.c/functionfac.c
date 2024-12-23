#include <stdio.h>
#include <time.h>

// Recursive function to calculate factorial
long long int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

// Iterative function to calculate factorial
long long int factorialIterative(int n) {
    long long int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    
    // Input the number to calculate factorial
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    
    // Measure the time for recursive factorial calculation
    clock_t startRecursive = clock();
    long long int resultRecursive = factorialRecursive(n);
    clock_t endRecursive = clock();
    double timeRecursive = (double)(endRecursive - startRecursive) / CLOCKS_PER_SEC;

    // Measure the time for iterative factorial calculation
    clock_t startIterative = clock();
    long long int resultIterative = factorialIterative(n);
    clock_t endIterative = clock();
    double timeIterative = (double)(endIterative - startIterative) / CLOCKS_PER_SEC;
    
    // Display the results
    printf("\nFactorial (recursive) of %d: %lld\n", n, resultRecursive);
    printf("Time taken (recursive): %f seconds\n", timeRecursive);
    
    printf("Factorial (iterative) of %d: %lld\n", n, resultIterative);
    printf("Time taken (iterative): %f seconds\n", timeIterative);
    
    // Comparing efficiency
    if (timeRecursive > timeIterative) {
        printf("\nThe iterative method is more efficient.\n");
    } else {
        printf("\nThe recursive method is more efficient.\n");
    }

    return 0;
}
