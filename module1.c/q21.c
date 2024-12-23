#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Accept two numbers from the user
    printf("Enter first number (num1): ");
    scanf("%d", &num1);
    
    printf("Enter second number (num2): ");
    scanf("%d", &num2);

    // Swap using a third variable
    // Method 1: Using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nAfter swapping (using third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Accept two numbers again to demonstrate swapping without a third variable
    printf("\nEnter first number (num1) again: ");
    scanf("%d", &num1);
    
    printf("Enter second number (num2) again: ");
    scanf("%d", &num2);

    // Swap without using a third variable
    // Method 2: Without using a third variable (using arithmetic operations)
    num1 = num1 + num2;  // num1 becomes the sum of num1 and num2
    num2 = num1 - num2;  // num2 becomes the original value of num1
    num1 = num1 - num2;  // num1 becomes the original value of num2

    printf("\nAfter swapping (without using third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}