#include <stdio.h>

int main() {
    int asciiValue;
    
    // Ask the user to enter an ASCII value
    printf("Enter an ASCII value: ");
    scanf("%d", &asciiValue);

    // Convert the ASCII value to the corresponding character
    printf("The character for ASCII value %d is: %c\n", asciiValue, (char)asciiValue);

    return 0;
}