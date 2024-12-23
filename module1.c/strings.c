#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100], str2[100];
    char result[200]; 

    // Get input from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); 
    str1[strcspn(str1, "\n")] = '\0';  

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 
    str2[strcspn(str2, "\n")] = '\0';

    strcpy(result, str1); 
    strcat(result, str2);

    printf("\nConcatenated string: %s\n", result);

    printf("Length of concatenated string: %lu\n", strlen(result));

    return 0;
}
