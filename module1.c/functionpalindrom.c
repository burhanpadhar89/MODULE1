#include <stdio.h>
#include <string.h>

// Function to check if a number is a palindrome
int isPalindromeNumber(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        return 1;  // Palindrome
    } else {
        return 0;  // Not palindrome
    }
}

// Function to check if a string is a palindrome
int isPalindromeString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Check characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not palindrome
        }
        start++;
        end--;
    }

    return 1;  // Palindrome
}

int main() {
    int choice;
    printf("Enter 1 to check palindrome for a number\n");
    printf("Enter 2 to check palindrome for a string\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPalindromeNumber(num)) {
            printf("%d is a palindrome number.\n", num);
        } else {
            printf("%d is not a palindrome number.\n", num);
        }
    } else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        scanf(" %[^\n]%*c", str);  // Read the whole line, including spaces

        if (isPalindromeString(str)) {
            printf("\"%s\" is a palindrome string.\n", str);
        } else {
            printf("\"%s\" is not a palindrome string.\n", str);
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
