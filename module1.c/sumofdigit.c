#include <stdio.h>

int main() {
    int number, sum = 0, reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int originalNumber = number; // Store the original number for later use

    while (number != 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;          // Add the digit to the sum
        number /= 10;          
    }

    // Reverse the digits using a while loop
    number = originalNumber;  // Reset the number to the original value
    while (number != 0) {
        digit = number % 10;        // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        number /= 10;               // Remove the last digit from the number
    }

    // Display the results
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
