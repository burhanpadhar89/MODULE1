#include <stdio.h>
#include <ctype.h>  // For the toupper function

int main() {
    char country[100];  // Array to store the country's name
    int i = 0;

    // Ask the user for the country name
    printf("Enter the country name: ");
    fgets(country, sizeof(country), stdin);  // Read input including spaces

    // Convert the country's name to abbreviation
    printf("The abbreviated form of the country is: ");

    // Loop through the country name and print the first letter of each word
    if (country[0] != '\0') {
        // Print the first letter of the first word
        printf("%c", toupper(country[0]));

        // Loop through the rest of the string and print the first letter of each word
        for (i = 1; country[i] != '\0'; i++) {
            // If the character is a space, the next character is the first letter of the next word
            if (country[i] == ' ' && country[i+1] != '\0') {
                printf("%c", toupper(country[i+1]));
            }
        }
    }

    printf("\n");
    return 0;
}