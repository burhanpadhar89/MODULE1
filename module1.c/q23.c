#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Check if either number is 0 to avoid division by zero
    if (a == 0 || b == 0) {
        printf("Cannot swap because one of the numbers is zero.\n");
    } else {
        // Swap the numbers using multiplication and division
        a = a * b;  // Step 1: Multiply a and b and store in a
        b = a / b;  // Step 2: Divide the new a by b to get the original a
        a = a / b;  // Step 3: Divide the new a by the new b to get the original b

        // Output the swapped values
        printf("After swapping:\n");
        printf("First number (a): %d\n", a);
        printf("Second number (b): %d\n", b);
    }

    return 0;
}