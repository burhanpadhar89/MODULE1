#include <stdio.h>
#include <ctype.h> // For the toupper() function

void convertToAbbreviation(char schoolName[]) {
    int i = 0;

    // Traverse the string
    while (schoolName[i] != '\0') {
        // Skip leading spaces (if any)
        while (schoolName[i] == ' ') {
            i++;
        }
        
        // Print the first letter of each word in uppercase
        if (schoolName[i] != '\0') {
            printf("%c", toupper(schoolName[i])); // toupper converts to uppercase
        }
        
        // Skip the rest of the letters of the current word
        while (schoolName[i] != ' ' && schoolName[i] != '\0') {
            i++;
        }
    }
    printf("\n");
}

int main() {
    char schoolName[100];

    // Input the school name
    printf("Enter the school name: ");
    fgets(schoolName, sizeof(schoolName), stdin); // Read input including spaces

    // Convert to abbreviated form
    printf("Abbreviated form: ");
    convertToAbbreviation(schoolName);

    return 0;
}