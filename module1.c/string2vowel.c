#include <stdio.h>
#include <ctype.h>  // for the 'tolower' function to handle case insensitivity

// Function to count vowels, consonants, digits, and special characters
void countCharacters(char str[], int *vowels, int *consonants, int *digits, int *specialChars) {
    int i = 0;
    
    // Iterate through each character in the string
    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // Convert to lowercase for case insensitivity

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowels)++;
        }
        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z')) {
            (*consonants)++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        }
        // Check for special characters
        else {
            (*specialChars)++;
        }

        i++;  // Move to the next character
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;
    
    // Input a string from the user
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);  // Read the whole line, including spaces
    
    // Call the function to count vowels, consonants, digits, and special characters
    countCharacters(str, &vowels, &consonants, &digits, &specialChars);
    
    // Output the results
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    
    return 0;
}
