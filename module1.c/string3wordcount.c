#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words and find the longest word
void countWordsAndFindLongest(char str[], int *wordCount, char longestWord[]) {
    int i = 0, maxLength = 0, currentLength = 0;
    int wordStart = 0;
    *wordCount = 0;

    // Traverse the string to count words and find the longest word
    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            i++;
        }
        
        // Start of a new word
        wordStart = i;
        
        // Traverse the word
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0') {
            i++;
            currentLength++;
        }

        // If we found a word, increase the word count
        if (currentLength > 0) {
            (*wordCount)++;
            
            // Check if this word is the longest
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strncpy(longestWord, &str[wordStart], currentLength);
                longestWord[currentLength] = '\0';  // Null-terminate the longest word
            }
        }
        
        currentLength = 0; // Reset for the next word
    }
}

int main() {
    char str[200], longestWord[200];
    int wordCount;

    // Input a sentence from the user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read the whole line, including spaces
    
    // Call the function to count words and find the longest word
    countWordsAndFindLongest(str, &wordCount, longestWord);
    
    // Output the results
    printf("\nNumber of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);
    
    return 0;
}
