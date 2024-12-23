#include <stdio.h>
#include <time.h>

// Recursive function to calculate the Fibonacci number
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

// Iterative function to calculate the Fibonacci number
int fibonacciIterative(int n) {
    int a = 0, b = 1, nextTerm;
    
    if (n == 0) return a;
    if (n == 1) return b;
    
    for (int i = 2; i <= n; i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    
    return b;
}

// Recursive function to generate Fibonacci sequence up to N terms
void generateFibonacciSequence(int n) {
    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");
}

int main() {
    int N;
    
    // Input the number of terms for Fibonacci sequence
    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &N);

    // Generate Fibonacci sequence using recursion
    generateFibonacciSequence(N);
    
    // Input Nth term to calculate the Fibonacci number using both methods
    printf("\nEnter the term to calculate the Fibonacci number: ");
    scanf("%d", &N);
    
    // Measure the time for recursive approach
    clock_t startRecursive = clock();
    int resultRecursive = fibonacciRecursive(N);
    clock_t endRecursive = clock();
    double timeRecursive = (double)(endRecursive - startRecursive) / CLOCKS_PER_SEC;
    
    // Measure the time for iterative approach
    clock_t startIterative = clock();
    int resultIterative = fibonacciIterative(N);
    clock_t endIterative = clock();
    double timeIterative = (double)(endIterative - startIterative) / CLOCKS_PER_SEC;
    
    // Display results
    printf("\nFibonacci number (recursive) for term %d: %d\n", N, resultRecursive);
    printf("Time taken (recursive): %f seconds\n", timeRecursive);
    
    printf("Fibonacci number (iterative) for term %d: %d\n", N, resultIterative);
    printf("Time taken (iterative): %f seconds\n", timeIterative);
    
    // Comparing efficiency
    if (timeRecursive > timeIterative) {
        printf("\nThe iterative method is more efficient.\n");
    } else {
        printf("\nThe recursive method is more efficient.\n");
    }

    return 0;
}
