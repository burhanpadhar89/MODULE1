#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n); // Power of each digit raised to 'n'
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
