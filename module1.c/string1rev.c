#include <stdio.h>

// Function to reverse the string
void reverseString(char str[]) {
    int start = 0, end = 0, temp;

    // Find the length of the string manually (without using strlen)
    while (str[end] != '\0') {
        end++;
    }
    end--;  // To point to the last character (excluding '\0')

    // Swap characters from start and end until the middle of the string
    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move the pointers
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    // Input a string from the user
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);  // Read the whole line, including spaces
    
    // Reverse the string using the function
    reverseString(str);
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
