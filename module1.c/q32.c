#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Display the size of the variables (in bytes)
    printf("Size of num1: %zu bytes\n", sizeof(num1));
    printf("Size of num2: %zu bytes\n", sizeof(num2));
    printf("Size of sum: %zu bytes\n", sizeof(sum));

    return 0;
}